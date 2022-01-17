#include<iostream>
using namespace std;

int factorial(int);

int main()
{
    
    int num=0,a;
    cout<<"Enter the number"<<endl;
    cin>>num;
    a=factorial(num);
    cout<<"Factorial of "<<num<<" is equal to "<<a<<endl;
    
    
    return 0;
}

int factorial(int num)
{
    
    if (num != 0)
        return num*factorial(num-1);
    else
        return 1;
    
}