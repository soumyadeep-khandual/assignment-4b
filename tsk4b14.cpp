#include <iostream>
#define MAX_SIZE 100
using namespace std;
int sum(int arr[],int st,int l);
int main(){
    int arr[MAX_SIZE];
    int n,i,sfa;
    cout<<"Enter size of the array : ";
    cin>>n;
    cout<<"Enter elements in the array : ";
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    sfa=sum(arr,0,n);
    cout<<"Sum of array elements = "<<sfa;
    return 0;
}
int sum(int arr[],int st,int l){
    if(st>=l)
        return 0;
    return (arr[st]+sum(arr,st+1,l));
}





