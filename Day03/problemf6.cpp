//Write a function to print fibonacci series
#include<iostream>
using namespace std;

int fiboSeries(int n){
    int first=0, second=1, next;
    cout<<"The fibonacci series upto "<<n<<" terms:"<<endl;
    for(int i=0;i<n;i++){
        if(i<=1)
        next=i;
        else{
            next=first+second;
            first=second;
            second=next;
        }
        cout<<next<<" ";
    }

}

int main(){
    int n;
    cout<<"Enter the number of terms:";
    cin>>n;
    fiboSeries(n);
    return 0;
}