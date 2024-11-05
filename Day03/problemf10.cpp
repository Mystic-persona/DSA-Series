//Check Palindrome or not
#include<iostream>
using namespace std;

int checkPalindrome(int n){
    int revN = 0;
    int dupN = n;
      while (n>0)
      {
        int lg = n % 10;
        n /= 10;
        revN = (revN * 10 ) + lg;
      }
    
    if(revN == dupN){
        cout<<"It is a palindrome number";
    }
    else {
        cout<<"It is not a Palindrome number";
    } 
}  

int main(){
  int n;
  cout<<"Enter the number:";
  cin>>n;
  checkPalindrome(n);
  return 0;
}