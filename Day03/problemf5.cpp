//Print all the prime numbers from 2 to N
#include<iostream>
using namespace std;

bool isPrime(int num){
    if(num<2)return false;
    for(int i =2; i*i<=num; i++){
        if(num%i==0)return false;
    }
    return true;
}
    
int main(){  
    int n;
    cout<<" N:";
    cin>>n;

    cout<<"Prime numbers from 2 to N are: "<<endl;
    for(int i = 2; i <= n; i++){
        if(isPrime(i)){
            cout<<i<<" ";
        }
    }

    cout<<endl;
    
    return 0;
}