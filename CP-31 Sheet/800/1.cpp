#include<bits/stdc++.h>
 
using namespace std; 
 
int main(){
 
	int t;
	cin >> t;
 
	while(t--){
 
		int n,k;
		cin >> n >> k;
 
		int arr[n];
		for(int i = 0; i<n; i++){
			cin >> arr[i];
		}
 
		// Check increasing order or not!
		bool in_asc = true;
		for (int i = 0; i<n-1; i++){
      
			if (arr[i] > arr[i + 1]){
				in_asc = false;
			}
		}
 
		if(in_asc || k>1)	cout<< "YES"<< endl;
		else cout <<"NO" << endl;
 
	}
	
}
