//Q6->WAP to print the sum of a given number and its reverse.
#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    int sum=0;
    int reverse = 0;
    int lastdigit = 0;
    cout<<"enter no : ";
    cin>>n;
    int y=n;
   while(n>0){
       lastdigit=n%10;
        reverse*=10;
        reverse+=lastdigit;
        n/=10;
   }
   int s=(y+reverse);
    cout<<"sum of a given number and its reverse: "<<s;
}