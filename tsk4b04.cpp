#include <iostream>
using namespace std;
int sum(int n);
int main(){
    int n;
    cout<<"Enter an positive integer till which you want to find the sum :\n";
    cin>>n;
    cout<<"The sum of the numbers = "<<sum(n);
    return 0;
} int sum(int n){
   if (n!=0)
     return n+sum(n-1);
   return 0;
}




