#include <iostream>
using namespace std;
int main()
{
    int sp , cp;
    cout<<"Enter the sellling price: ";
    cin>>sp ;
    cout<<"Enter the cost price: ";
    cin>>cp ;
    
    if (sp>cp)
    { int profit = sp - cp;

        cout<<"Your profit is: "<<profit<<endl;
    }
else if (cp>sp)
    { int loss = cp - sp;
    
    cout<<"Your loss is: "<<loss<<endl;
    }
    
    else {
        cout<<"No profit No Loss "<<endl;

    }
}