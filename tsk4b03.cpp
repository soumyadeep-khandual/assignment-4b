#include <iostream>
using namespace std;
int oven(int a,int b);
int main(){
    int a,b;
    cout<<"Enter the lower limit : ";
    cin>>a;
    cout<<"\nEnter the upper limit : ";
    cin>>b;
    cout<<"The even/odd numbers between "<<a<<" and "<<b<<" are\n ";
    oven(a,b);
    return 0;
} int oven(int a,int b)
{
    if(a>b)
        return 0;
    cout<<" " <<a<< " ";
    oven(a+2,b);
}




