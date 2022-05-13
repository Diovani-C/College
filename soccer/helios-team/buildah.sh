##!/usr/bin/env bash

# Get the base image from Docker Hub
container=$(buildah from "alpine")

# Install dependencies
buildah run "$container" -- apk --update-cache add --upgrade build-base automake autoconf libtool boost-dev git

# Download librcsc
buildah run "$container" -- git clone https://github.com/helios-base/librcsc.git /librcsc

# Change working dorectory
buildah config --workingdir "/librcsc" $container

# Build and install librcsc
buildah run "$container" -- ./bootstrap
buildah run "$container" -- ./configure --disable-unit-test
buildah run "$container" -- make
buildah run "$container" -- make install

# Download helios-base
buildah run "$container" -- git clone https://github.com/helios-base/helios-base.git /helios-base

# Change working directory
buildah config --workingdir "/helios-base" $container

# Build the helios base team
buildah run "$container" -- ./bootstrap
buildah run "$container" -- ./configure
buildah run "$container" -- make

# Set the command to run the server
buildah config --cmd ./src/start.sh "$container"

# Expose the default server port
buildah config --port 6000-7000/udp "$container"

# Commit the container to an image
buildah commit $container "patobots/helios-team:1.0"

# Removes the container
buildah unmount $container
buildah rm $container
