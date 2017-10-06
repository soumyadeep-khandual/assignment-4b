#include <iostream>
using namespace std;
int series(int a,int b);
int main(){
    int a,b;
    cout<<"Enter the lower limit : ";
    cin>>a;
    cout<<"Enter the upper limit : ";
    cin>>b;
    cout<<"All natural numbers between "<<a<<" and "<<b<<" are \n";
    series(a,b);
    return 0;
} int series(int a,int b)
{
    if(a > b)
    return 0;

    cout<<" " <<a<< " " ;
    series(a + 1, b);
}




