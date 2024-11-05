//Check Armstrong number or not
#include<iostream>
using namespace std;

int checkArmstr(int n){
    int cube=0;
    int dupN = n;
    while(n>0){
        int lg = n % 10;
        n /= 10;
        cube += lg*lg*lg;
        //quad += lg*lg*lg*lg;   //4 digit Armstrong number
    }
    if(cube==dupN){
        cout<<"It is an Armstrong number";
    }else{
        cout<<"It is not an Armstrong number";
    }
}
int main(){
    int n;
    cout<<"Enter the number:";
    cin>>n;
    checkArmstr(n);
    return 0;
}