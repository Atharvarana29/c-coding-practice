#include <iostream>
using namespace std;
int main()
{int n1, n2;
cout<<"Enter two numbers: ";
cin>>n1>>n2;

cout<<"Enter an operator (+ , - * , / , % ): ";
char optr;
cin>>optr;

switch (optr)
{
    case '+' :
    cout<<"Sum of the numbers is:  "<<n1+n2<<endl;
    break;
    case '-':
    cout<<"Subtraction of the two numbers is : "<<n1-n2<<endl;
     break;
     case '*':
     cout<<"Multiplication of two numbers is : "<<n1*n2<<endl;
     break;
     case '/':
     cout<<"Division of the two numbers is : "<<n1/n2<<endl;
     break;
     case '%':
     cout<<"Modulo of two numbers is: "<<n1%n2<<endl;
     break;

     default :
     cout<<"Enter a valid operator "<<endl;

}
}
