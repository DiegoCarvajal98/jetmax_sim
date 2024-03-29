FROM osrf/ros:melodic-desktop-full

# Add vscode user with same UID and GID as your host system
# (copied from https://code.visualstudio.com/remote/advancedcontainers/add-nonroot-user#_creating-a-nonroot-user)
ARG USERNAME=vscode
ARG USER_UID=1000
ARG USER_GID=$USER_UID
RUN groupadd --gid $USER_GID $USERNAME \
    && useradd -s /bin/bash --uid $USER_UID --gid $USER_GID -m $USERNAME \
    && apt-get update \
    && apt-get install -y sudo \
    && echo $USERNAME ALL=\(root\) NOPASSWD:ALL > /etc/sudoers.d/$USERNAME \
    && chmod 0440 /etc/sudoers.d/$USERNAME
    
RUN apt-get update \
    && apt-get install -y nano \
    && rm -rf /var/lib/apt/lists/*

RUN apt-get update \
    && apt-get install -y python-rosdep \
    && rm -rf /var/lib/apt/lists/*

RUN apt-get update \
    && apt-get install -y \
    bash-completion \
    python3-argcomplete \
    && rm -rf /var/lib/apt/lists/*

RUN apt-get update \
    && apt-get install -y \
    ros-melodic-effort-controllers \
    python \
    python-pip \
    && rm -rf /var/lib/apt/lists/*

RUN apt-get update \
    && apt-get install -y \
    python-yaml \
    && rm -rf /var/lib/apt/lists/*

# Switch from root to user
USER $USERNAME

# Add user to video group to allow access to webcam
RUN sudo usermod --append --groups video $USERNAME

# Update all packages
RUN sudo apt update && sudo apt upgrade -y

# Install Git
RUN sudo apt install -y git

# Rosdep update
RUN rosdep update

# Source the ROS setup file
RUN echo "source /opt/ros/${ROS_DISTRO}/setup.bash" >> ~/.bashrc
