FROM ros:melodic

RUN apt-get update && apt install -y nano && rm -rf /var/lib/apt/lists/*
