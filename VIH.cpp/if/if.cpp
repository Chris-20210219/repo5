#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
    int voh= 10;
    int vol=-10;
    float r,I;
    float i1=0.5;

    r=voh/i1;

    cout<<"高阻态的状态下输出管脚的最小阻抗="<<r<<endl;


    cout<<" 请输入I的值=";

    cin>>I;
    if(vol<(I*r)<voh)
    {
        cout<<"输出管脚处于高阻状态满足IOZ条件"<<endl;
    }
    else if((I*r)<voh)
    {
        cout<<"输出状态为逻辑1时满足voh条件";
    }
    else if((I*r)>vol)
    {
        cout<<"输出状态为逻辑0时满足vol条件"<< endl;
    }
    
    
    else
    {
        cout<<"IC存在缺陷，fail";
    }
 


    system("pause");

    return 0;

    



}