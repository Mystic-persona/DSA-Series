//Triangle pattern with numbers 
//vertically same and horizontally increasing 
#include<iostream>
using namespace std;

int main(){
    int n = 4;
    for (int i = 1; i <= n; i++) {
       for (int j = 1; j < i+1; j++) {
        cout<< j ;
       }
       cout<<endl;
    }
    return 0;
}

 
