#include <bits/stdc++.h>
#include <iostream>
#include <string>
using namespace std;


int main() {
	int N = 4;
	map<int, int> mp;
	
	int a[N][N] = {
        {1, 2, 2, 3},
        {1, 3, 2, 4},
        {1, 4, 3, 2},
		{2, 2, 3, 1}
    };
 
	for(int i = 0; i < N; i++){
		for(int j = 0; j < N; j++){
		// kiêm tra xem 1 phân tu có xuat hien o nhung hàng phía truoc i ko
			if(mp[a[i][j]] == i){ 
				mp[a[i][j]]=i+1;
			}
		}
	}
	
	bool ok = false;
	
	for(auto it : mp){
		if(it.second == N){
			ok = true;
			cout << it.first << " ";
		}
	}
	
	if(ok == false) cout << "Not found" << endl;	
    return 0;
}