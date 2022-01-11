# include<iostream>
using namespace std;
 
void change(int n){
    n=n*n;
    cout<< "multiplies of number is = "<<n<<endl;

}

int main (){
    int n;
    cout<<"enter the number "<<endl;
    cin>>n;
    change(n);
 
    return 0;
}