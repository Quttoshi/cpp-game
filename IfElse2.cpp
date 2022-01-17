#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int a,b;
    cout<<"Set a pin: "<<endl;
    cin>>a;

    cout<<"Enter your pin: "<<endl;
    cin>>b;

    if (a!=b){

        cout<<"Access Denied"<<endl;
    }
    else{

        cout<<"Access Verified"<<endl;

    }
    getch ();
    return 0;
    
}