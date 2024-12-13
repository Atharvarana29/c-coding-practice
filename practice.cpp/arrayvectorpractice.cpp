// #include <iostream>
// #include <vector>
// using namespace std;

// int main()
// // firstly you are creating a vector and taking input elements from the user 
// {   
//     vector<int> v(7);
//     for ( int i = 0;i<6;i++)
//     {   cout<<"Enter the elements of the vector : ";
//         cin >>v[i];
//     }
//     // then you are taking input elements from the user for which you want to run the function 

//     cout << "Enter the element x : ";
//     int x;
//     cin>>x ;
     
//     // then you are making your function and occurance and integrating your  x to it 
//     int occurance = -1;
//     for ( int i = 0;i<v.size() ; i++)
//     if(v[i]==x)
//     {occurance =i;}

//     cout<<occurance<<endl;



// }


// second method
// here we start traversing the vector from the last so that the first time when my x comes i get my occurance 

#include <iostream>
#include <vector>
using namespace std;

int main()
// firstly you are creating a vector and taking input elements from the user 
{    vector<int> v(7);
    for ( int i = 0;i<6;i++)
    {   cout<<"Enter the elements of the vector : ";
        cin >>v[i];
    }
   
   cout << "Enter the element x : ";
    int x;
    cin>>x ;

   int occurance = -1; 
for (int i = v.size()-1;i>=0;i++)
 {  
    if (v[i]==x)
    {occurance =i;
    }
 }
 cout <<occurance<<endl ;
}
