#include <iostream>
using namespace std;

int  main()
{
    int marks;

    cout<<"Enter the marks obtained out of hundred : "<<endl;
    cin>>marks;

     if(marks>100)
    {
        cout <<"Enter a valid mark out of hundered "<<endl;
    }
    
    else if(marks> 90)
    {
        cout <<"Excellent !!! You have achieved :  "<<"A+ "<<"grade"<<endl;
    }
    else if (80<marks)
    {
        cout<<"Very Good !! You have achieved :  "<<"B+ "<<"grade"<<endl;
    }
    else if (60<marks)
    { 
        cout<<"Average Performance !! You have achieved :  "<<"C+ "<<"grade"<<endl;
    }
    else if (40<marks)
    {
        cout<<"Poor Performance !! You have achieved :  "<<"D+ "<<"grade"<<endl;
    }
    else if (33<marks)
    {
        cout<<"Bad Performance !! You have achieved :  "<<"D "<<"grade"<<endl;
    }
    else
    {
        cout<<"You have failed."<<endl;
    }
}