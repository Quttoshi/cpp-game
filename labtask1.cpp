#include<iostream>
using namespace std;

int power(int, int);

int main()
{
    
    int a,b,p,ans=1;
    cout<<"Enter the base"<<endl;
    cin>>b;
    cout<<"Enter the power"<<endl;
    cin>>p;
    a=power(b, p);
    cout<<"The answer is "<<a<<endl;
    
    
    return 0;
}

int power(int b, int p)
{
    
    if (p != 0)
        return (b*power(b, p-1));
    else
        return 1;
    
}