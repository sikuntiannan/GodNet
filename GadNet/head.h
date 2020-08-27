#pragma once
//c++标准库
#include<thread>
#include<iostream>
//linux系统库
#include<netinet/in.h>//主机序和网络序转换，网络序是大端,pc机是小端
#include<bits/socket.h>//socket结构体；通用
#include<sys/un.h>//socket结构体；专用
#include<arpa/inet.h>//ip地址转换的函数
/*
sockaddr_in  ip_v4结构体
sockaddr_in6 ip_v6结构体
inet_addr() //把字符串ip变成整形ip		失败时返回：INADDR_NONE
inet_aton() //和上相同的意思,参数不同   失败时返回：0，成功返回1
inet_ntoa() //功能同上，这个函数用一个内部静态变量来存储结果，所以他不可重入，mysql返回的指针或许也是这样的。
*/

