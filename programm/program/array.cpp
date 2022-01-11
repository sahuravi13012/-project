#include <iostream>
using namespace std;

int main()
{
    //-----array function from without user---------

  /*   int marks[4]={45,55,12,25};
    cout<<marks[0]<<endl;
    cout<<marks[1]<<endl; 
    cout<<marks[2]<<endl;
    cout<<marks[3]<<endl;
    
   // the change  of value 3  

  // marks[3]=2546;
    //cout<<marks[3]<<endl; */

    //------array function from user--------
   // int n;
   // cin >> n;

    //int array[n];
    /*  for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout << array[i]<<" ";
    }*/

    //----array function with odd and even-------
  /*  int n;
    cin >> n;

    int array[n];
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
int even=0,odd=0;
    for (int i = 0; i < n; i++)
    {
        if (array[i]%2 == 0)
        {
            cout << "even ";
        }
        else
        {
        
            cout << "odd ";
        }
        
    }*/

    //---------murge two array in third array---------
    int a[5];
    int b[5];
    int c[10]; 
    int i;
    cout<<"enter five element in first array";
    for (int i = 0; i < 5; i++)
    {
        cin>>a[i];
    } 
     cout<<"enter five element in second array";

     for (int i = 0; i < 5; i++)
    {
        cin>>b[i]; 
    }

     for ( i = 0; i <5; i++) 
    {
        c[i]=a[i];
        c[5+i]=b[i];
    }
    
    for( i = 0; i < 10; i++)
    {
      cout<<c[i];
    }
 
  //-----------murge two array in third array given the user input-------

 
    return 0;
}
