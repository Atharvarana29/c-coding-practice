// #include <iostream>
// #include <vector>
// using namespace std;

// int main()
// {
//     int array []= {1,2,3,4,5,6};
//     for (int  i = 1; i < 6; i++)
//     {
//         if ( array [i] > array [i-1])
//         {
//             bool sortedflag ;
//         }
//     }
    
//     // for (array i = 1; i < 6; i++)
//     // {
//     //  if (array [i]<=array[i-1])
//     //  {
//     //     bool sortedflag = false;
//     //  }
//     // }
    
    
// }

#include <iostream>
using namespace std;

int main ()
{
    int array [] ={ 1,2,1,2,1,2};
    int sumeven=0;
    int sumodd=0;

    
    // did with my own method but concept was same ; was able to think the concept
    
    for (int i = 0;i<6;i++)
    {
        if (i%2 == 0)
        {
            sumeven+= array[i];
        }
        else 
        {
            sumodd+= array[i];
        }
    }
    cout <<sumeven-sumodd<<endl;
}