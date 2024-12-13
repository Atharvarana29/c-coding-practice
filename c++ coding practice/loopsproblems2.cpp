#include <iostream>
using namespace std ;
int main()
{
    int n;//5896
    cin>>n;
    int digits = 0  ;
    while (n>0)
    
    {digits++;//1//2//3//4
    n=n/10;//589//58//5//5
    }
    cout<<digits<<endl;//4

}