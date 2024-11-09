//Recursive way of calculating the factorial of first n numbers
#include<bits/stdc++.h>
using namespace std;

int factorial(int n){
   
   // Base Condition.
   if(n == 0)
   {
       return 1;
   }

   // Problem broken down into 2 parts and then combined.
   return n * factorial(n-1);
   //using for loop
   
   // int ans = 1;
   //    for (int i =1; i<=n;i++){
   //     ans = ans * i;
   //    }
   //    return ans;

}

int main(){
  
  //take the value of n to be 3.
  int n = 3;
  cout<<factorial(n)<<endl;
  return 0;

}