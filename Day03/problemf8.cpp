//Count the digits
#include<bits/stdc++.h>
using namespace std;

long long countDigits(long long n){
    //long long count = (long long)(log10(n)+1); //logarithm method
    long long count = 0;
    while(n>0){
        int lastdigit = n % 10;
        count++;
        n /= 10;
    }
    return count;
}
int main(){
    long long n;
    cout<<"Enter the number:";
    cin>>n;
    long long result = countDigits(n);
    cout<<"The no of digits are:"<<result;
    return 0;
}