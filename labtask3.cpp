#include<iostream>
using namespace std;

int Fseries(int a)
{
if(a==0||a==1)
{
    return a;
}

else
{
    return (Fseries(a-1)+Fseries(a-2));
}

}
int main()
{
int x;
    cout<<"Enter the number of term in series : "<<endl;
    cin>>x;
for(int i=0;i<x;i++)
{

    cout<<Fseries(i)<<endl;

}

return 0;
}