//Find Second Smallest and Second Largest Element in an array
//Brute Force Approach
#include<bits/stdc++.h>
using namespace std;
void getElements(int arr[],int n)
{
    if(n==0 || n==1){
        cout<<-1<<" "<<-1<<endl;      // edge case when only one element is present in array
    }else{
        sort(arr,arr+n);
        int small=arr[1];
        int large=arr[n-2];
        cout<<"Second smallest is "<<small<<endl;
        cout<<"Second largest is "<<large<<endl;
    }     
    
}
int main()
{
    int arr[]={1,6,9,3,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    getElements(arr,n);
    return 0;
}