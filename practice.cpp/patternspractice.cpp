#include <iostream>
using namespace std;

// int main()
// {
//     int n,m;
//     cout <<"Enter the number of rows and columns to print star"; 
//     cin>>n>>m;

//     for (int i=0;i<=n;i++ )
//     {
//         for (int j=0;j<=m;j++ )

//         {if (j>i || j < i )
//         cout <<" * ";}
//     cout<<endl;
//     }
// }

int main() 
{
  int n;
  cin>>n;
  
  for(int i=n;i>=1;i--){
      for(int j=1;j<=i;j++){
        cout<<"*";
      }
      cout<<endl;
  }
  return 0;
}