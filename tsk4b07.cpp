#include <iostream>
#include <cmath>
using namespace std;
int rev(int num);
int pal(int num);

int main(){
    int num;
    cout<<"Enter any number : ";
    cin>>num;
    if (pal(num)==1){
        cout<<num<< " is a palindromic number .";
    } else {
        cout<<num<< " is not a palindromic number .";
    } return 0;
}
int pal(int num){
    if(num==rev(num)){
        return 1;
    } return 0;
}
int rev(int num){
    int digit=(int)log10(num);
    if(num==0)
        return 0;
    return ((num%10*pow(10,digit)) + rev(num/10));
}




