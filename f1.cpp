#include<fstream>
#include<iostream>
using namespace std;

int main()
{
    fstream myfile;
    myfile.open("Text.txt");
    myfile<<"Abdullah ibn Mas'ud reported: The messanger of Allah, paece";
    myfile<<"and blessings be upon him, said,"<<endl;
    myfile<<"'Most of sins of the cildren of Adam are on their tongues'.\n"<<endl;
    myfile<<"Ibn Mas'ud said, 'O tongue! Speak goodness and be rewarded,";
    myfile<<"or remian silent and br safe, lest you become regretful.'\n"<<endl;
    myfile<<"Source: al-Mu'jam al-Kabir 10300"<<endl;
    myfile.close();

    fstream file("Text.txt");
    string x;
    
    if(!file)
    {
        cout<<"File not found";
    }
    else
    {
        while(getline(file, x))
        cout<<x<<endl;
    }
    file.close();
}


