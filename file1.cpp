#include<fstream>
#include<iostream>
using namespace std;

int main()
{
    
    string x;
    fstream myfile("Text.txt");
    
    if(!myfile)
    {
        cout<<"File not found";
    }
    else
    {
        while(getline(myfile, x))
        cout<<x<<endl;
    }
    myfile.close();
}