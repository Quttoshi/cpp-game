#include<iostream>
#include<conio.h>
using namespace std;

void doubleArray(int [], int);
void showValues(int [], int);

int main()
{
    int array_size=7;
    int arr[array_size] = {1,2,3,4,5,6,7};

    cout<<"The arrays values are: "<<endl;
    showValues(arr, array_size);

    doubleArray(arr, array_size);

    cout<<"After calling doubleArray the values are: "<<endl;
    showValues(arr, array_size);
    
    getch ();
    return 0;
}

void doubleArray(int nums[], int array_size)
{
    for(int i=0; i<array_size; i++)
    nums[i] *= 2;
}

void showValues(int nums[], int array_size)
{
    for(int i=0; i<array_size; i++)
    {
        cout<<nums[i]<<" ";
    }
    cout<<endl;
}