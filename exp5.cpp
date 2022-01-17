#include <iostream>
using namespace std;

int main()
{


     for (int i=0; i<=9; i++)
     {

         for (int j=0; j<=9-i; j++)
         cout << " ";

         for (int j=1,k=2*i-1; j<=2*i-1; j++,k--)
         {
             if (j <= k)
             cout << j;
             else
             cout << k;
             }
             cout << endl;

             cout << " ";
    
         }

    return 0;
}