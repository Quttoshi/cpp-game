#include<iostream>
#include<conio.h>
using namespace std;

float add(float, float);
float subtract(float, float);
float multiply(float, float);
float divide(float, float);

int main()
{
    char ch;
    float num1, num2;

    cout<<"Enter two numbers: "<<endl;
    cin>>num1>>num2;
    cout<<endl;

    cout<<"Select an option: "<<endl;
    cout<<"1) Press '+' for addition. "<<endl;
    cout<<"2) Press '-' for subtraction. "<<endl;
    cout<<"1) Press '*' for multiplication. "<<endl;
    cout<<"1) Press '/' for division. "<<endl;
    cin>>ch;
    
    if(ch == '+')
    {
        cout<<"The addition of numbers is "<<add(num1, num2)<<endl;
    }
    else if(ch == '-')
    {
        cout<<"The difference of numbers is "<<subtract(num1, num2)<<endl;
    }
    else if(ch == '*')
    {
        cout<<"The multiplication of numbers is "<<multiply(num1, num2)<<endl;
    }
     else if(ch == '/')
    {
        cout<<"The division of numbers is "<<divide(num1, num2)<<endl;
    }
    else
    {
        cout<<"Invalid input. "<<endl;
    }
    
    getch ();
    return 0;
}

float add(float num1, float num2)
{
    float result1;
   
    result1 = num1 + num2;
    return result1;
}

float subtract(float num1, float num2)
{
    float result2;
    result2 = num1 - num2;
    return result2;
}

float  multiply(float num1, float num2)
{
    float result3;
    result3 = num1 * num2;
    return result3;
}

float divide(float num1, float num2)
{
    float result4;
    result4 = num1 / num2;
    return result4;
}