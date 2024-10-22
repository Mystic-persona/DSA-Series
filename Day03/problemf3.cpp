//Calculate nCr binomial coefficient for n and r
#include<iostream>
using namespace std;

// Function to calculate factorial of a given number 'n'
int factorialOfN(int num){
    int fact = 1;

    for(int i = 1; i <= num; i++){
        fact *= i;
    }
    return fact;    // Return the calculated factorial
}



int main(){
    int n,r;

    cout<<"Enter the value of n:";
    cin>>n;
    cout<<"Enter the value of r: ";
    cin>>r;

    int fact_n = factorialOfN(n);
    int fact_r = factorialOfN(r);
    int fact_nMr = factorialOfN(n-r);


    // Check if input is valid (r should not be greater than n)
    if (r > n) {
        cout << "Invalid input! r cannot be greater than n." << endl;
    } else {
        // Calculate and display the nCr value
       int result = {fact_n /(fact_r * fact_nMr)};
       cout<<"The value of " << n << "C" << r << " is: " << result << endl;
    }

    return 0;
}