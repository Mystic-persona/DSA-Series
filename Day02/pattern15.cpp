//Inverted Triangle Pattern with numbers
#include<iostream>
using namespace std;

int main(){
    int n =4;
    for(int i=1; i<=n; i++){
        //spaces
        for(int j=1; j<=i; j++){
            cout<<" ";
        }
        //numbers
        for(int j=i; j<=n; j++){    //for inverted pyramid we have to add space after i
            cout<<i;
        }
        cout<<endl;
    }
    return 0;
}