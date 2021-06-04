#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
    int vih=5250000;
    int vil=0;
    int i=10;
    int I;
    int r;

    r=vih/i;

    cout <<"IIL&IIH漏电流测试：实际测量输入管脚到VDD&VSS之间阻抗"<<endl;

    cout <<"leakge test min  resistance = "<<r<<endl;

    cout <<"请输入I=";

    cin>>I;

    if ((vih/I)<r)
    {
        cout<<"device 功耗过大fail:"<<"r="<<(vih/I);
    }
    else
    {
        cout<<"device pass:"<<"r="<<(vih/I);
    }

    cout<<endl;

    system("pause");


    

 

}