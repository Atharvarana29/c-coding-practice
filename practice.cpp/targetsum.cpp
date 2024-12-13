#include <iostream>
using namespace std;

int main ()

{
    int array [ ] = { 3, 4 ,6,7,1};
    int targetsum = 7;

    int size = 5;
    int pairs =0 ;

    for (int i=0;i<size;i++) //sabse phele mera i wala loop chala array mae apne range i=0 sae i<size tak. isme sabse phela element mila 3 i.e first element of array
    { //ab mera loop aage badh jayega kyoki usko already ek element within the correct range mil chuka hai 
        for (int j=i+1 ; j <size;j++)  // phir loop uss first element i=3 ko first element maan kae aage badhaga phir yaha usko ek aur for loop milega phir ye isko traverse karega taking i=3 as first element now here it will get a new first element (its second element j) and it will move  ahead in the loop to check the further conditions  
        {
            if (array[i] + array [j]== targetsum ) // abb mera loop condition check karega i + j = targetsum hai ki nahi . abhi bhi hum loop sae bahar nahi aaye hai just ye hua hai ki humara first element i and second element j select ho chuka hai and humara code mae if condtion check ho raha hai 
            { pairs++;} // abb jab condition check ho kar kae humera loop aage badhega toh depending upon condition true hota hai ya false humara aage ka code execute hoga so yaha par mera targetsum wala meet ho chuka hai iisliye  humara code aage badh jayega 
        }
    }// agar condition meet nahi hota toh humara code loop sae bahar aata and  default pairs = 0 cout hota 
    
    cout<<pairs<<endl;


}
// here we are using nested for loops 