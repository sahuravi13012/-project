#include<iostream>
using namespace std;
int main()
{
	int h;
	cout<<"Enter the height of pyramid"<<endl;
	cin>>h;
	
	for(int i=1; i<=h; i++)
	{
        for(int j=1; j<=h; j++)
        {
        	if(j<=h-i)
        	{
        		cout<<"  ";
			}
			else cout<<" #";
		}
		cout<<endl;
	}
	return 0;
}