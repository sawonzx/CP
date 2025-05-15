#include<bits/stdc++.h>

using namespace std;

bool string_check(int n, int m,string new_N, string M){
  
	for(int i = 0; i<=n - m; i++){
		if(M == new_N.substr(i, m)) return true;
	}
	return false;
}

int main(){
  
	int t;
	cin >> t;
	while(t--){
    
		int n,m;
		cin >> n >> m;

		string N,M;
		cin >> N >> M;

		int action = -1;
		int new_n = n;
		string new_N = N;

		for(int i = 0; i<=5; i++){			

			if(string_check(new_n, m, new_N, M)){
				action = i;
				break;
			}
			new_N += new_N;
			new_n = new_N.size();
		}
    
		cout << action << endl;
		}
	}
