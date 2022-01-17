#include<iostream>
#include<conio.h>
#include<fstream>
using namespace std;

int main()
{
    ifstream inputFile;
    string number;

    inputFile.open("file.txt");
    cout<<"Reading data form file "<<endl;

    inputFile>> number;
    cout<<  number<<endl;

    inputFile>> number;
    cout<<  number<<endl;
    
    inputFile>> number;
    cout<<  number<<endl;
    
    inputFile>> number;
    cout<<  number<<endl;

    inputFile>> number;
    cout<<  number<<endl;

    inputFile.close();

    getch ();
    return 0;
}