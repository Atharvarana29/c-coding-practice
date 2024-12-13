#include <iostream>
using namespace std;

int main()
{
    int n1,n2,n3;
    cout <<"Enter three numbers ";
    cin>>n1>>n2>>n3;
    if(n1>n2)
    {
        if (n1>n3)
        {cout<<"max is :"<<n1<<endl;}
        else 
        {
            cout<<"max is : "<<n3<<endl;
        }
    }
}