#include <iostream>  // Standard library for input-output
using namespace std;

// Function declaration: 
int add(int a, int b); // 'add' function takes two integers as input and returns their sum

// Function definition:
int add(int a, int b) {
    return a + b;  // This line adds the two parameters and returns the result
}

//Function with no parameters
void welcomeMessage() {
    cout << "Welcome to the DSA Series!" <<endl; 
     // Function task: Print a message
}


// Main function: This is where the program starts executing.
int main() {
    int num1 = 5, num2 = 10; // Declaring and initializing two integers

    // Function call:
    int sum = add(num1, num2); 

    // Output: The result of the addition is displayed
    cout << "The sum of " << num1 << " and " << num2 << " is: " << sum << endl;

    welcomeMessage();  // Calling the function 'welcomeMessage' to display the greeting

    return 0;  // Returning 0 indicates that the program executed successfully

    //End of the program
}

