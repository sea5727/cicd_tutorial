FROM ubuntu

RUN /bin/bash -c 'echo This would generally be apt-get or other system con...'
ENV myCustomEnvVar="this  is a sample." \
    otherEnvVar="This is also a sample."
