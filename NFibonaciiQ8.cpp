//Q8->Print first ‘n’ fibonacci numbers.
#include<iostream>
using namespace std;
int main(){
    int n;
    int a=1;
    int b=1;
    int sum=0;
    cout<<"enter the number of terms :  ";
    cin>>n;
     for(int i=1; i<=n; i++){
        if(i==1 || i==2) cout<<1<<" ";
        else{
        sum=a+b;
        a=b;
        b=sum;
        cout<<sum<<" ";
        }
    }
    return 0;
}