#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector <int> v (6);
    {for (int i = 0; i<(6);i++)
    {cout<<"Enter the values of the element: ";
    cin>>v[i];}}

    cout<<"Enter x : ";
    int x;
    cin>>x;
    

    int occurance;
    for (int i=0;i<v.size();i++)
    if (v[i]==x)
    {occurance=i;}
    cout<<"occurance is "<<occurance<<endl;
    
    

}