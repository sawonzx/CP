#include<bits/stdc++.h>
using namespace std;

int main(){

	int t;
	cin >> t;

	while(t--){

		int n;
		cin >> n;

		string s;
		cin >> s;

		int action = n;		

		for(int i = 0 ; i < n; i++){
			if (s[i] == '#'){
				action--;			
			}
		}
		
		//check for (...)
		int sub_three = 0 ;
		for (int i = 0; i < n; i++){
      
			if(s[i] == '.') sub_three++;

			else if (s[i] == '#'){
				sub_three = 0;				
			}

			if(sub_three == 3){
				action = 2;
			} 
		}

		if(sub_three != 0) cout << action <<endl;
		else cout << action << endl;

	}	
}
