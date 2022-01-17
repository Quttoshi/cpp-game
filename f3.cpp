#include<fstream>
#include<iostream>
using namespace std;
int main()
{
    char f1[30], f2[30], f3[30], ch;
    fstream fpsOne, fpsTwo, fpTarget;
    cout<<"Enter the name of first file: "<<endl;
    gets(f1);
    cout<<"Enter the name of second file: "<<endl;
    gets(f2);
    fpsOne.open(f1, fstream::in);
    fpsTwo.open(f2, fstream::in);
    if((!fpsOne) || (!fpsTwo))
    {
        cout<<"Error Occurred!"<<endl;
        return 0;
    }
    else
    {
        cout<<"Enter the Name of Third File: "<<endl;
        gets(f3);
        fpTarget.open(f3, fstream::out);
        if(!fpTarget)
            cout<<"Error Occurred!"<<endl;
        else
        {
            while(fpsOne>>noskipws>>ch)
                fpTarget<<ch;
            fpTarget<<"\n";
            while(fpsTwo>>noskipws>>ch)
                fpTarget<<ch;
            cout<<"Two File Merged Successfully into Third!"<<endl;
        }
    }
    fpsOne.close();
    fpsTwo.close();
    fpTarget.close();
    cout<<endl;

    return 0;
}
