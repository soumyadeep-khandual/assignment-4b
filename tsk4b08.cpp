#include <iostream>
using namespace std;
int sum(int a);
int main(){
    int num,res;
    cout<<"Enter any positive integer : ";
    cin>>num;
    res=sum(num);
    cout<<"the sum of the digits of "<<num<<" = " <<res;
    return 0;
}
 int sum(int num){
     if (num!=0){
        return (num%10 + sum(num/10));
     } else {
        return 0;
     }
 }



