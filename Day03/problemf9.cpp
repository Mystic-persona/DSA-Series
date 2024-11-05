//Reverse a number
#include<iostream>
using namespace std;

int revNumber(int n){
    int revN = 0;
    while (n>0)
    {
      int lg = n % 10;
      n /= 10;
      revN = (revN * 10 ) + lg;
    }
   return revN; 
}
int main (){
    int n;
    cout<<"Enter the number:";
    cin>>n;
    int result=revNumber(n);
    cout<<"Reverse of the number is:"<<result;
    return 0;
}