#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int a,b,c;
    cout<<"Enter the number of hours the employee worked: "<<endl;
    cin>>a;
    cout<<"Enter employee's hourly pay: "<<endl;
    cin>>b;
    c = a * b;
    cout<<"The employees gross pay is "<<c<<endl;

    getch ();
    return 0;
}