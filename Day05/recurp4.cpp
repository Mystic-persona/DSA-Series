//Print from n to 1 using recursion
#include<bits/stdc++.h>
using namespace std;

void func(int i, int n){
    //base condition
    if(i<1) return;
    cout<<i<<endl;

    //Function call to print i till i decrements to 1
    func(i-1,n);

}

int main(){

    //take the value of n to be 4
    int n = 4;
    func(n,n);
    return 0;
}