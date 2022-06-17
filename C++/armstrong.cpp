#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int orign=n;
    int sum=0;
    while(n>0){ 
        int lastdig=n%10;
        sum=sum+pow(lastdig,3);
        n=n/10;
    }
    if(sum==orign) cout<<"Armstrong no..."<<endl;
    else cout<<"Not an armstrong no..."<<endl;
}