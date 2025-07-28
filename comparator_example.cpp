#include <bits/stdc++.h>
#include <math.h>
#include <vector>

//sắp xếp theo tần suất xuất hiện giảm dần, nếu frequency == thì săp xếp theo giá trị tăng dần

using namespace std;

map<int, int> mp;

bool cmp(pair<int,int> a, pair<int,int> b){
	if(a.second == b.second) return a.first < b.first;
	else return a.second > b.second;																																																												
}

int main(){
	
	int a[] = {1,2,2,3,1,1,2,4,5,2,3,5};
	int n = 12;
	vector<pair<int,int>> v;
	
	for(int i = 0; i < n; i++){
		mp[a[i]]++;
	}
		
	for(auto x : mp){
		v.push_back({x.first, x.second});
	}
	sort(v.begin(), v.end(), cmp);
	
	for(auto it : v) {
		for(int j = 0; j < it.second; j++){
			cout << it.first << " ";
		}
	}
	
	return 0;
}
