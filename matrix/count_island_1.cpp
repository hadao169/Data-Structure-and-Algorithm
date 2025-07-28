#include <bits/stdc++.h>
#include <iostream>
#include <string>
using namespace std;

using ll = long long;

int dx[4] = {-1, 0, 0, 1};
int dy[4] = {0, -1, 1, 0};

int N = 3;
int M = 5;

int a[100][100] = {
    {1, 0, 1, 0, 1},
    {0, 1, 0, 1, 0},
    {1, 1, 1, 0, 0}
};

void loang(int i, int j){
	a[i][j] = 0; // danh dau o nay da duoc di qua
	for(int k = 0; k < 4; k++){
		int ik = i + dx[k];
		int jk = j + dy[k];
		if(ik >= 0 && ik < N && jk >= 0 && jk < M && a[ik][jk] == 1){
			loang(ik, jk);
		}
	}
}

int main() {

 	int cnt = 0;
	for(int i = 0; i < N; i++){
		for(int j = 0; j < M; j++){
			if(a[i][j] == 1){
				++cnt;
				loang(i, j);
			}
		}
	}
	
	cout << cnt << endl;
    return 0;
}