#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int percentage;
    cout<<"\nEnter your percentage: "<<endl;
    cin>>percentage;
    if((percentage<40) && (percentage>=0)){

        cout<<"Fail, better luck next time. "<<endl;
    }
    else if ((percentage<=49) && (percentage>=40)){

        cout<<"Your grade is D. "<<endl;
    }
    else if ((percentage<=59) && (percentage>=50)){

        cout<<"Your grade is C. "<<endl;
    }
    else if ((percentage<=69) && (percentage>=60)){

        cout<<"Good, your grade is B. "<<endl;
    }
    else if ((percentage<=79) && (percentage>=70)){

        cout<<"Very good, your grade is A. "<<endl;
    }
    else if ((percentage<=100) && (percentage>=80)){

        cout<<"Excellent, your grade is A-1. "<<endl;
    }
    else if(percentage<=-1){

        cout<<"Your percentage is not valid. "<<endl;
    }
    else{

        cout<<"Your percentage is not valid. "<<endl;
    }

    getch ();
    return 0;
}
