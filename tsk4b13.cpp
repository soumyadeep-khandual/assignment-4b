#include <iostream>
#define MAX_SIZE 100
using namespace std;

int parray(int arr[],int st,int l);
int main(){
    int arr[MAX_SIZE];
    int n,i;
    cout<<"Enter size of the array : ";
    cin>>n;
    cout<<"Enter elements in the array : ";
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Elements in the array : ";
    parray(arr,0,n);
}
int parray(int arr[],int st,int l){
    if(st>=l)
        return 0;
    cout<< " " <<arr[st]<< " ";
    parray(arr,st+1,l);
}





