#pragma once
//c++��׼��
#include<thread>
#include<iostream>
//linuxϵͳ��
#include<netinet/in.h>//�������������ת�����������Ǵ��,pc����С��
#include<bits/socket.h>//socket�ṹ�壻ͨ��
#include<sys/un.h>//socket�ṹ�壻ר��
#include<arpa/inet.h>//ip��ַת���ĺ���
/*
sockaddr_in  ip_v4�ṹ��
sockaddr_in6 ip_v6�ṹ��
inet_addr() //���ַ���ip�������ip		ʧ��ʱ���أ�INADDR_NONE
inet_aton() //������ͬ����˼,������ͬ   ʧ��ʱ���أ�0���ɹ�����1
inet_ntoa() //����ͬ�ϣ����������һ���ڲ���̬�������洢������������������룬mysql���ص�ָ�����Ҳ�������ġ�
*/

