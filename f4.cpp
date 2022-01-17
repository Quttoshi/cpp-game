
#include<iostream>
#include<fstream>
#include<stdlib.h>

using namespace std;

int main()
{

        char file[20], ch, choice;
        fstream fps, fpt;
        cout<<"Enter file name to encrypt: "<<endl;
        cin>>file;

        fps.open(file);

        if(!fps)
        {
                cout<<"Error in opening file!"<<endl;
                
                exit(1);
        }

        fpt.open("file.txt");
        if(!fpt)
        {
                cout<<"Error in creating file.txt file!"<<endl;
                fps.close();
                
                exit(2);
        }
        while(fps.eof()==0)
        {
                fps>>ch;
                ch=ch+100;
                fpt<<ch;
        }

        fps.close();
        fpt.close();
        fps.open(file);
        if(!fps)
        {
                cout<<"Error in opening source file!";
                

                exit(3);
        }
        fpt.open("file.txt");
        if(!fpt)
        {
                cout<<"Error in opening temp.txt file!"<<endl;
                fps.close();
                

                exit(4);
        }
        while(fpt.eof()==0)
        {
                fpt>>ch;
                fps<<ch;
        }
        cout<<"File "<<file<<" encrypted successfully!"<<endl;
        
        fps.close();
        fpt.close();

        return 0;
}