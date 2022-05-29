#include<iostream>
using namespace std;
int main()
{
    int num1, num2, num3;
    cout<<"Enter three numbers =";
    cin>>num1>>num2>>num3;
    if(num1>num2 && num1>num3)
    {
        cout<<"largest number ="<<num1;
    }
    else if(num2>num1 && num2>num3)
    {
        cout<<"largest number ="<<num2;
    }
    else if(num3>num1 && num3>num2)
    {
        cout<<"largest number ="<<num3;
    }
    else
    {
        cout<<"nothing is largest";
    }
}