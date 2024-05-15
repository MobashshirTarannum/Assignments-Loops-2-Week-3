//Q7->Print the factorials of first ‘n’ numbers
#include<iostream>
using namespace std;
int main(){
    int n;
    int product=1;
    cout<<"enter the number";
    cin>>n;
     for(int i=1; i<=n; i++){
        product*=i;
     cout<<"factorial of "<<i<<"->"<<product<<endl;
    }
    return 0;
}
