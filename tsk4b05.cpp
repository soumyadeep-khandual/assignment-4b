#include <iostream>
using namespace std;
int sum(int a,int b);
int main(){
    int a,b;
    cout<<"Enter the lower limit : ";
    cin>>a;
    cout<<"Enter the upper limit : ";
    cin>>b;
    cout<<"The sum of the series of even/odd natural numbers = "<<sum(a,b);
    return 0;
} int sum(int a,int b){
   if (a>b)
     return 0;
   return a+sum(a+2,b);
}




