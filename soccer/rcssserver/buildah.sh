##!/usr/bin/env bash

# Specify the version
rcss_ver='17.0.1'

# Get the base image from Docker Hub
container=$(buildah from "alpine")

# Install dependencies
buildah run "$container" -- apk --update-cache add --upgrade build-base automake autoconf libtool flex-dev bison boost-dev tar wget

# Download files
buildah run "$container" -- wget "https://github.com/rcsoccersim/rcssserver/releases/download/rcssserver-17.0.1/rcssserver-${rcss_ver}.tar.gz" 

# Extract files
buildah run "$container" -- tar fxzvp "rcssserver-${rcss_ver}.tar.gz"
buildah run "$container" -- rm -rf "rcssserver-${rcss_ver}.tar.gz"

# Change working dorectory
buildah config --workingdir "/rcssserver-${rcss_ver}" $container

# Run config file
buildah run "$container" -- ./configure

# Build the application
buildah run "$container" -- make

# Set the command to run the server
buildah config --cmd ./src/rcssserver "$container"

# Expose the default server port
# buildah config --port 6000-6100 "$container"

# Commit the container to an image
buildah commit $container "patobots/rcssserver:${rcss_ver}"

# Removes the container
buildah unmount $container
buildah rm $container
