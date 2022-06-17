#include<iostream>
using namespace std;

bool pythagorean(int x,int y,int z){
    int a=max(x,max(y,z));
    int b,c;
    if(a==x){
        y=b;
        z=c;
    }
    else if(a==y){
        x=a;
        z=c;
    }
    else{
        b=x;
        c=y;
    }
    if(a*a==b*b+c*c){
        return true;
    }
    else {
        return false;
    }
}

int main(){
    int x,y,z;
    cin>>x>>y>>z;
    if(pythagorean(x,y,z)){
        cout<<"Pythagorean triplet..."<<endl;
    }
    else {
        cout<<"Not pythagorean..."<<endl;
    }
}