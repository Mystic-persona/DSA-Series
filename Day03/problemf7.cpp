//Function to extract digits
#include<iostream>
using namespace std;

int extractDigit(int n){
    int lg;
    if(n<0){
        n = -n;
    }
    while (n>0)
    {
        int digit = n % 10;
        cout<<digit<<" ";
        n /= 10;
    }
    
}

int main(){
   int n;
   cout<<"Enter the number:";
   cin>>n;
   extractDigit(n);
   return 0;
}