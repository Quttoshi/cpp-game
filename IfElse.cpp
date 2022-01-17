#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int age;
    cout<<"Enter your age: "<<endl;
    cin>>age; 
    if((age<18) && (age>0)){

        cout<<"You cannot come to the party. "<<endl;
    }
    else if(age==18){
        
        cout<<"You are a kid and you will get a kid pass to the party. "<<endl;
    }
    else if(age<1)
    {
        cout<<"You are not yet born. ";
    }
    else{

        cout<<"You can come to the party. "<<endl;
    }
    getch();
    return 0;    


}
    