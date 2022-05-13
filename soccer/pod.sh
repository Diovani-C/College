# Create a pod to run soccer match

#Create a pod name soccer and add rcssserver to it
podman run -dt --pod new:soccer -p 6000:6000/udp localhost/patobots/rcssserver:17.0.1 


podman run -dt --pod soccer localhost/patobots/helios-team:1.0
