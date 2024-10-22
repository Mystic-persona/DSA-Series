//Print all the factors of a Number
#include<iostream>
using namespace std;

int printFactors(int n){
    cout<<"The factors of "<<n<<" are:";
    for(int i=1; i<= n; i++){
        if(n%i == 0){
            cout<<i<<" ";
        }
    }
    cout << endl;

}

int main(){
   int num;
   cout<<"Enter the value of n:";
   cin>>num;
   
   // Validate input to ensure it's positive
    if (num <= 0) {
        cout << "Please enter a positive integer!" << endl;
    } else {
        // Call the function to print factors of the entered number
        printFactors(num);

    }


   return 0;
}