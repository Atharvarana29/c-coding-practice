#include <iostream>
using namespace std;

int main()
{
    int sp ;
    int cp;

    cout<<"Enter the cost price : ";
    cin>>cp;

    cout<<"Enter the selling  price : ";
    cin>>sp;

    if (cp>sp)
    {
        int loss= cp - sp;
        cout <<"Your loss is : "<<loss <<endl;
    }
    
    else if(sp>cp)
    {
        int profit= sp - cp;
        cout <<"Your profit is : "<<profit<<endl;
    
    }
    else 
    {
        cout<<"You have no profit no loss"<<endl;
    }
}