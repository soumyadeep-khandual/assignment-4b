#include <iostream>
using namespace std;
int calpow(int,int);
int main(){
      int base, power, result;
      cout<<"Enter a positive integer :";
      cin>>base;
      cout<<"\nEnter the power to be raised :";
      cin>>power;
      result=calpow(base,power);
      cout<<base<< "^" <<power<< "=" <<result;

      return 0;
}
int calpow(int base,int power){
   if(power != 0)
      return (base*calpow(base,power-1));
   else
      return 1;
}
