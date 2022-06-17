#include<iostream>
using namespace std;

void revarr(int arr[],int start,int end){
    while(start<end){
        int temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
    }
}

void printarr(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[]={2,4,2,1,5,7,8,5,9,0,55};
    int n=sizeof(arr)/sizeof(arr[0]);
    printarr(arr,n);
    revarr(arr,0,n-1);
    cout<<"Reversed array is-->"<<endl;
    printarr(arr,n);
}