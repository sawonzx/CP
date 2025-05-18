#include<bits/stdc++.h>

using namespace std;

int main(){

	int t;
	cin >> t;
	while(t--){

	int n; cin >> n;

	long long max = -1e9+1;

	int arr[n];
	for(int i = 0; i<n; i++){
		cin >> arr[i];
		if (arr[i] > max) max = arr[i];
	}
	int ct_mx = 0;

	for(int i = 0; i<n; i++){		
		if (arr[i] == max) ct_mx++;
	}

	if(ct_mx == n) cout <<"-1"<<endl;

	else {
		cout << n- ct_mx <<" " << ct_mx<<endl;
		for(int i = 0; i<n; i++){		
		if (arr[i] != max) cout <<arr[i]<<" ";
		}	
		cout << endl;

		for(int i = 0; i<n; i++){		
		if (arr[i] == max) cout <<arr[i]<<" ";
		}	
		cout << endl;
	}

	}
}
	
