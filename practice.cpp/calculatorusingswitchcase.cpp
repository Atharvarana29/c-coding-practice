#include <iostream>
using namespace std ;

int main()
{
    int n1,n2;
    cout <<"Enter two numbers :";
    cin>>n1>>n2;

    cout <<"Enter the operator (+ ,, - , * , /): ";
    char optr;
    cin>> optr;

    switch (optr )
    {
    case '+':
        cout <<"sum of two numbers is : "<<n1+n2<<endl;
        break;
    
    case '-':
        cout <<"subtraction of two numbers is : "<<n1-n2<<endl;
        break;
        
        case '*':
        cout <<"multiplication of two numbers is : "<<n1*n2<<endl;
        break;

    case '/':
        cout <<"division of two numbers is : "<<n1/n2<<endl;
        break;

    default:
    cout<<"Enter a valid operator "<<endl;
        break;
    }
}