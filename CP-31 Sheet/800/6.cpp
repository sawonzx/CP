#include<bits/stdc++.h> 
using namespace std;
 
const int N = 1e5+1;
 
int main(){
 
	int t;
	cin >> t; 
	while(t--){
 
		int n;
		cin >> n;
 
		int hsh[N] = {0};
 
		int arr[n];
		for(int i = 0; i<n; i++){
			cin >> arr[i];
			hsh[arr[i]]++;
		}
 
		int distinct_digit = 0; 
		int max_have = 0;
 
		for(int i = 0; i<N; i++){
			if(hsh[i] > 0) distinct_digit++;
			if(hsh[i] > max_have) max_have = hsh[i];
		}
 
		int max_can = ceil(float(n)/2);		
 
		if(distinct_digit < 3){
 
			if(max_have > max_can && distinct_digit != 1) cout <<"NO"<<endl;
			else cout <<"YES"<<endl;
 
		}
		else cout << "NO"<< endl;		
		
	}	
}
