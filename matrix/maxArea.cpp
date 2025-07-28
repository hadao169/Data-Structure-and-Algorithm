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
    {0, 0, 0, 0, 0},
    {0, 1, 0, 0, 0},
    {1, 1, 1, 0, 0}
};

int loang(int i, int j){
	int res = 1;
	a[i][j] = 0; // danh dau o nay da duoc di qua
	for(int k = 0; k < 4; k++){
		int ik = i + dx[k];
		int jk = j + dy[k];
		if(ik >= 0 && ik < N && jk >= 0 && jk < M && a[ik][jk] == 1){
			res += loang(ik, jk);
		}
	}
	return res;
}

int main() {
	cout << loang(1,1) << endl;
    return 0;
}



