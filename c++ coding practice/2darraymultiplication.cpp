#include <iostream>
using namespace std;

int main ()
{   int value=0;

    int r1 ,c1;
    cin>>r1>>c1;

    int A[r1][c1];
    for (int i=0;i<r1;i++)
    {
        for (int j =0;j<c1;j++)
        {
            cin >>A[i][j];
        }
    }

    int r2 , c2;
    cin>>r2>>c2;
    int B[r2][c2];
    for (int i=0;i<r2;i++)
    {
        for (int j=0;j<c2;j++) //this loop is for columns
        {
            cin >>B[i][j];
        }
    }

    // now we need to check if our answer matrix exist
    //  so it exists if only c1 = r2

    if (c1!=r2)
    {cout <<"Matrix multiplication not possible "<<endl;}

    // now suppose if our matrix multiplication is possible then
    int C[r1][c2];
    {
        for (int i = 0; i<r1;i++)
        {
            for(int j =0;j<c2;j++)
            
            for (int k=0;k<r2;k++)
            {
               C[i][j]  = A[i][k]*B[k][j];
            }
        }
    }
    for (int i=0;i<r1;i++)
    {
        for (int j=0;j<c2;j++)
        {
         cout <<C[i][j]<< " ";   
        }
        cout<<endl;
    }



}