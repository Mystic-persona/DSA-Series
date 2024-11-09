//Recursive way of calculating the sum of first N Natural Numbers
// Parameterized Way 
#include<bits/stdc++.h>
using namespace std;

void func(int i, int sum){

    //Base Condition
    if(i<1){
        cout<<sum<<endl;
        return;
    }

    //Function call to increment sum by i till i decrement to 1
    func(i-1,sum+i);
}
int main(){
    int n = 3;
    func(n,0);
    return 0;
}