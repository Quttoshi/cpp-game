#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int x;
    cout<<"Enter a number: "<<endl;
    cin>>x;
    if (x>0){
        cout<<"The number is "<<x<<endl;
    }

    else {
        cout<<"Enter a number greater than zero. "<<endl;
    }

    getch ();
    return 0;
}   