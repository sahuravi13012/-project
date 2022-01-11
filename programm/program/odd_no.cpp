#include<iostream>
using namespace std;

int main(){

    int a,b;
    cout<<"enter the value of a";
    cin>>a;

    cout<<"enter the value of b";
    cin>>b;

    for (  a; a <= b; a++)
    {
        if (a%2 !=0)
        {
           cout<< a <<endl;
        }
        
    }
    
    return 0;
}