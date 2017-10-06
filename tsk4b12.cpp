#include <iostream>
using namespace std;
int lcm(int,int);
int main(){
    int n1,n2,res;
    int p[100];
    cout<<"Enter two positive integers : \n";
    cin>>n1>>n2;
    res=lcm(n1,n2);
    cout<<"The LCM of "<<n1<<" and "<<n2<<" is "<<res;
    return 0;
}
int lcm(int n1,int n2){
    static int c=1;
    if(c%n1==0 && c%n2==0){
        return c;
    }
    c++;
    lcm(n1,n2);
    return c;
}





