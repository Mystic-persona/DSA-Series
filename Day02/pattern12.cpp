//Reverse Triangle pattern with characters
//vertically increasing and horizontally decreasing 
#include<iostream>
using namespace std;

int main (){
    int n = 4;
   
    for(int i =1; i<=n;i++){
        for(int j=i; j>=1; j--){
        cout<< char('A' + j -1)<<" ";
        }
        cout<<endl;
    }
    return 0;
}