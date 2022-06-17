#include<bits/stdc++.h>
using namespace std;

int decimaltobinary(int n)
{
    int x=1;
    int ans=0;
    while(x<=n)
        x*=2;
    x/=2;

    while(x>0)
    {
        int lastdig=n/x;
        n-=lastdig*x;
        x/=2;
        ans=ans*10+lastdig;
    }
    return ans;
}

int main(){
int n;
cin>>n;
cout<<"Decimal to binary-->"<<decimaltobinary(n)<<endl;
}