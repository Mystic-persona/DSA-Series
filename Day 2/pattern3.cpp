//square pattern with characters
#include<iostream>
using namespace std;

int main(){
    int n = 4;
    for(int i=0; i<n; i++){ //outer loop
        char ch = 'A';
        for(int j = 0; j<n; j++){ //inner loop start =>line start
            cout<<ch;
            ch = ch + 1; //(A-->65)+1=66-->B
        }
        cout<<endl;
    }
    return 0;
}