#include<bits/stdc++.h>
using namespace std;

int main(){

	int t;
	cin >> t;

	while(t--){
		int n,k;
		cin >> n >> k;

		int arr[n];
		int hsh[101] ={0};
		for(int i = 0; i<n; i++){
			cin >> arr[i];
			hsh[arr[i]]++;
		}

		if(hsh[k] != 0) cout<<"YES"<<endl;
		else cout <<"NO"<<endl;
		
	}
	
}
