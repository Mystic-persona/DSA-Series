//square pattern with characters in increasing order
#include<iostream>
using namespace std;

int main(){
    int n =4;
    char ch = 'A';

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
          cout<<ch<<" ";
          ch=ch+1;
        }
        cout<<endl;
    }
    return 0;
}