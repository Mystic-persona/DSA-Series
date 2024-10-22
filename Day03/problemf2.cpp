//Calculate n factorial
#include<iostream>
using namespace std;

int factorialOfN(int num){
    int fact = 1;

    for(int i = 1; i <= num; i++){
        fact *= i;
    }
    return fact;
}


int main(){
  int num;
  cout<<"Enter a number :";
  cin>>num;
  int result = factorialOfN(num);
  cout<<"Factorial of "<<num<<" is:"<<result<<endl;

  return 0;
}