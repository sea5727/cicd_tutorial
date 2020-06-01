FROM docker.io/centos:7.4.1708

USER root

RUN rpm --import /etc/pki/rpm-gpg/RPM*

RUN yum install -y deltarpm
RUN yum clean metadata

RUN yum clean all \
 && yum repolist \
 && yum -y update \
 && sed -i "s/en_US/all/" /etc/yum.conf  \
 && yum -y reinstall glibc-common

RUN yum group install -y "Development Tools"

RUN  yum -y install tar unzip vi vim telnet net-tools curl openssl \
 && yum -y install apr apr-util apr-devel apr-util-devel \
 && yum -y install elinks locate python-setuptools \
 && yum clean all

ENV LANG=ko_KR.utf8 TZ=Asia/Seoul

CMD ["/bin/bash"]
