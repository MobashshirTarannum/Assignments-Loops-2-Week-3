//Q5->WAP to print the sum of all the even digits of a given number.
#include <iostream>
using namespace std;
int main( ){
    int n;
    int sum=0;
    cout<<"enter no : ";
    cin>>n;
    while(n!=0){
    int x=n%10;
    n/=10;
    }
    cout<<"sum of even digit is : "<<sum;
}