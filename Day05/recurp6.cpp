//Recursive way of calculating the sum of first N Natural Numbers
//Function Way
#include<bits/stdc++.h>
using namespace std;

int func(int n){

    //Base Condtion 
    if(n==0){
        return 0;
    }

    //Problem broken down into 2 parts and then combined
    return n + func(n-1);
}

int main(){
    int n =3;
    cout<<func(n)<<endl;
    return 0;
}