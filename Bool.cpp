#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int a,b,remainder;
    cout<<"Enter two integers: "<<endl;
    cin>>a>>b;

    if((a%b)==0){
        bool remainder = true;
        cout<<remainder;
    }
    else{
        bool remainder = false;
        cout<<remainder;
    }
    getch ();
    return 0;
}