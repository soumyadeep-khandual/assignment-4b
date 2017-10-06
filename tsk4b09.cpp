#include <iostream>
using namespace std;
int fac(int a);
int main(){
    int a;
    cout<<"Enter any positive integer : ";
    cin>>a;
    cout<<"Factorial of "<<a<<" = " <<fac(a);
    return 0;
} int fac(int a){
    if(a>1){
        return a*fac(a-1);
    } else
        return 1;
}




