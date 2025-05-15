#include<bits/stdc++.h>

using namespace std;

int point(int i, int j){

	if(i == 0 || j == 9 || i == 9 || j == 0){
		return 1;
	}
	else if(i == 1 || j == 8 || i == 8 || j == 1){
		return 2;
	}
	else if(i == 2 || j == 7 || i == 7 || j == 2){
		return 3;
	}
	else if(i == 3 || j == 6 || i == 6 || j == 3){
		return 4;
	}
	return 5;
}

int main(){
  
	int t;
	cin >> t;
	while(t--){

		char arr[10][10];
		int answer = 0;

		for(int i = 0; i<10; i++){
			for(int j = 0; j<10; j++){
				cin >> arr[i][j];	
			}			
		}
		
		for(int i = 0; i<10; i++){
			for(int j = 0; j<10; j++){
				if(arr[i][j] == 'X'){
					answer += point(i,j);					
				}	
			}			
		}
		cout << (answer) <<endl;
	}
}
