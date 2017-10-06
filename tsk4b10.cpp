#include <iostream>
using namespace std;
unsigned long long fbnc(int);
int main(){
    int num;
    unsigned long long res;
    cout<<"Enter the nth number in the fibonacci series : ";
    cin>>num;
    if(num<0){
        cout<<"The number "<<num<<" is not valid for fibonacci series.";
    } else {
        res=fbnc(num);
        cout<<"The "<<num<<" number in the fibonacci series is "<<res;
    } return 0;
}
unsigned long long fbnc(int num){
    if (num==0){
        return 0;
    } else if (num==1){
        return 1;
    } else {
        return (fbnc(num-1)+fbnc(num-2));
    }
}




