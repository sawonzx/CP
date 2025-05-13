#include<bits/stdc++.h>
using namespace std;

int main(){

	int t;
	cin >> t;
	while(t--){

		int n,x;
		cin >> n >> x;

		int arr[n];
		for(int i = 0; i<n; i++){
			cin >> arr[i];
		}

		int dif1 = arr[0];		

		for(int i = 0; i<n-1; i++){
			int x =abs(arr[i]-arr[i+1]);
			if(x > dif1) dif1 = x;
		}
    
		int dif2 = abs(arr[n-1] - x) * 2;

		if(dif1 > dif2) cout << dif1 << endl;
		else cout << dif2 << endl;
    
	}	
}
