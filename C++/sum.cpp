#include<iostream>
using namespace std;

int sumfirst(int num){
    // int sum=(n*(n+1))/2;
    // return sum;
    int sum=0;
    for(int i=1;i<=num;i++){
        sum=sum+i;
    }
    return sum;
}

int main(){
    int n;
    cin>>n;
    cout<<sumfirst(n);
}