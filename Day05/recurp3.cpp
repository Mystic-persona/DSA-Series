//Print from 1 to n using recursion 
#include<bits/stdc++.h>
using namespace std;

void func(int i, int n){

    //Base Condition
    if(i>n) return;
    cout<<i<<endl;

    //Function call to print i till i increment to n
    func(i+1,n);
}

int main(){

    //take the value of n to be 7
    int n = 7;
    func(1,n);
    return 0;
}