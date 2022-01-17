#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int s1=12;
    int array1[] = {1, 5, 7, 5, 8, 9, 11, 11, 2, 5, 6, 6};
    for(int i; i<array1[s1]; i++)
    {
        s1++;
    }
    cout << "Original array: ";
    
    for (int i=0; i < s1; i++)
    { 
        cout << array1[i] <<" ";
    }
    
    cout <<"\nUnique elements of the said array: ";
    for (int i=0; i<s1; i++)
    {
        int j;
        for (j=0; j<i; j++)
        {
           if (array1[i] == array1[j])
               break;
            else
            cout << array1[i] << " ";
        }
    }
    return 0;

}