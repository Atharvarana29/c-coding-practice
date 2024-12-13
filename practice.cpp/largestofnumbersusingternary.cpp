#include <iostream>
using namespace std;

int main()
{
    int n1,n2;
    int max;

    cout<<"Enter two numbers :";
    cin>>n1>>n2;

    max = (n1>n2)? n1:n2;
    cout<<"largest number between : "<<n1<<"and"<<n2<<"is"<<max<<".";
}