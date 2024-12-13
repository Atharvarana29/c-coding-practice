#include <iostream>
using namespace std;

int main ()

{
    int array [] = {3, 1, 2, 4, 0, 6 };
    int targetsum = 5;
    int size = 6;
    int triplet = 0;

    for ( int i = 0;i <size ;i++ )
    {
        for (int j = i + 1 ; j< size ; j++)
        {
            for ( int k = j +1 ; k <size ;k++)
            {
                if ( array[i]+ array[j]+array[k]== targetsum) //abb agar ye line of code tum agar loop kae bahar likh doge toh error aa jayega bcz phir loop sae tum bahar aa jaoge and loop sae bahar aa kae karoge kya with just i j k elements as agar condition confirmation line loop kae baad mae hoga toh tab tak humara code loop sae bahar aa jayega and phir dubara loop run nahi hoga so code run hi nahi hoga and har baar default output hi milega 
        {
          triplet++;        
        }
    } 
    }

    }

    cout <<triplet<<endl;
}