#include <iostream>
#define MAX_SIZE 100
using namespace std;
int maximum(int arr[],int ind,int l);
int minimum(int arr[],int ind,int l);
int main(){
    int arr[MAX_SIZE],n,max,min;
    int i;
    cout<<"Enter size of the array : ";
    cin>>n;
    cout<<"Enter "<<n<<" elements in array : ";
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    max=maximum(arr,0,n);
    min=minimum(arr,0,n);
    cout<<"Maximum element in array is "<<max;
    cout<<"\nMinimum element in array is "<<min;
    return 0;
}
int maximum(int arr[],int ind,int l){
    int max;
    if(ind>=l-2){
        if(arr[ind]>arr[ind+1])
            return arr[ind];
        else
            return arr[ind+1];
    }
    max=maximum(arr,ind+1,l);
    if(arr[ind]>max)
        return arr[ind];
    else
        return max;
}
int minimum(int arr[],int ind,int l){
    int min;
    if(ind>=l-2){
        if(arr[ind]<arr[ind+1])
            return arr[ind];
        else
            return arr[ind+1];
    }
    min=minimum(arr,ind+1,l);
    if(arr[ind]<min)
        return arr[ind];
    else
        return min;
}




