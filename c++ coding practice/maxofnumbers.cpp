#include <iostream>
using namespace std;
int main()
{
    int n1,n2,n3;
    cout<<"Enter three numbers: ";
    cin>>n1>>n2>>n3;
    
    if (n1>n2 && n1>n3)
    
    {
        cout<<"Maximum is : "<<n1<<endl;
    }

    else if(n2>n3 && n2>n1)
    {
        cout<<"Maximum is : "<<n2<<endl;

    }
    
    else
    {
        cout<<"Maximum is :  " <<n3<<endl;
        
        }
}