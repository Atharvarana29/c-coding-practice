#include <iostream>
#include <vector>
using namespace std;




int main()
{
    int n , m;
    int arr [n][m];
    int i , j;
    
        cout<<"Enter the number of rows and columns : "<<endl;
    cin>>n>>m;

    for (int i = 0;i<n;i++)
    {
        for (int j=0;j<m;j++)
        {
            cin>>arr[i][j];
        }

         for (int i = 0;i<n;i++)
    {
        for (int j=0;j<m;j++)
        {
            cin>>arr[i][j];
        }
    }
    cout <<arr[i][j]<<" ";
    }cout<<endl;

   
   
}