//Sum of first N natural Number
#include<bits/stdc++.h>
using namespace std;

void solve(int n){
    int sum = 0;
    for(int i=1; i<= n; i++){
        sum += i;
    }
    //int sum = N * (N + 1) / 2;
    cout<<"The sum of the first "<<n<<" number is: "<<sum<<endl;
}

int main(){
    solve(5);
    solve(6);
}

