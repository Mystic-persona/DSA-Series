// Calculate the sum of digits of a number

#include<iostream>
using namespace std;

// Function to calculate the sum of digits of a given number
int sumOfDigits(int num){
    int digitSum = 0;

    // Extract each digit and add it to 'sum'
    while(num > 0){
        int lastDigit = num%10;  //get the last digit      
        digitSum += lastDigit;  //add the digit to the sum
        num = num / 10;    //remove the last digit
    }
    return digitSum;    // Return the calculated sum
}

int main(){
    int num;

    // Ask the user to enter a number
    cout<<"Enter the number:";
    cin>>num;
   // Call the function to calculate the sum of digits
    int result = sumOfDigits(num);
    //Display the result
    cout<<"The sum of digits of" << num << "is:"<<result<<endl;
    return 0;
}