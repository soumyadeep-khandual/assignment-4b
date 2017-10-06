#include <iostream>
using namespace std;
int64_t rev(int n);
int main(){
    int64_t n,rev_num;
    cout<<"Enter an positive integer : ";
    cin>>n;
    rev_num=rev(n);
    cout<<"The reverse of the number : "<<rev_num;
    return 0;
} int64_t sum=0,rem;
  int64_t rev(int n){
   if (n){
      rem=n%10;
      sum=sum*10+rem;
      rev(n/10);
}  else
      return sum;
}




