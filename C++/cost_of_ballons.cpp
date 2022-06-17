#include <iostream>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--){
		int cg,cp;
		cin>>cg>>cp;
		int n;
		int maxc,minc;

		if(cg>cp){
			maxc=cg;
			minc=cp;
		}
		else {
			maxc=cp;
			minc=cg;
		}
		
		int count_i=0,count_j=0;
		int arr[n][2];
		for(int i=0;i<n;i++){
			for(int j=0;j<1;j++){
				cin>>arr[i][j];
			}
		}

		for(int i=0;i<n;i++){
			if(arr[i][0]=='1'){
					count_i++;
				}
				else if(arr[i][1]=='1'){
					count_j++;
				}
		}
			if(count_i>count_j){
				cout<<((count_i*minc)+(count_j*maxc));
			}
			else cout<<((count_i*maxc)+(count_j*minc));
	}
}