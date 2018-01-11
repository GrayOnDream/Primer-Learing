/*************************************************************************
	> File Name: 2.1/main.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年01月04日 星期四 18时33分15秒
 ************************************************************************/

#include<iostream>
using namespace std;

int main(int argc, char **argv)
{
    std::cout<<"C++ primer example 2.1\n";

    char num1 = 65537.11111111111111111111111111111111111111111111; 
    short num2 = 65537.11111111111111111111111111111111111111111111; 
    int num3 = 65537.11111111111111111111111111111111111111111111; 
    long num4 = 65537.11111111111111111111111111111111111111111111; 
    long long num5 = 65537.11111111111111111111111111111111111111111111; 
    float num6 = 37.11111111111111111111111111111111111111111111; 
    //float num6 = 65537.11111111111111111111111111111111111111111111; 
    //double num7 = 65537.11111111111111111111111111111111111111111111; 
    //maybe keep four is the default setting
    double num7 = 37.11111111111111111111111111111111111111111111; 
    
    std::cout<<"sizeof char : "<<sizeof(char)<<"  "<<num1<<std::endl;
    std::cout<<"sizeof short: "<<sizeof(short)<<"  "<<num2<<std::endl;
    std::cout<<"sizeof int  : "<<sizeof(int)<<"  "<<num3<<std::endl;
    std::cout<<"sizeof long : "<<sizeof(long)<<"  "<<num4<<std::endl;
    std::cout<<"sizeof long long :"<<sizeof(long long)<<"  "<<num5<<std::endl;
    std::cout<<"sizeof float:"<<sizeof(float)<<"  "<<num6<<std::endl;
    std::cout<<"sizeof double:"<<sizeof(double)<<"  "<<num7<<std::endl;

    return 0;
}
