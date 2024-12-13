#include <iostream>
using namespace std ;

int main ( )
{
    int array [] ={ 2,3,1,3,2,4,1};
    int size = 7;

    for ( int i = 0; i < size ; i++)
    {
        for (int j = i + 1; j<size ;j++)
        {
            if (array[i]==array[j])
            {
                array [j]=-1;
            } //this is my array manipulation line .here basically we are eliminating or striking off the numbers  

        }
        
    }
        int uniquenumber = 0; 
        for ( int i =0 ; i<size;i ++ )
        {
            if (array [i]!=-1)// if (array[i]>0)
            {
                // uniquenumber=array[i];
                cout <<array[i]<<endl;
            }

        }
}