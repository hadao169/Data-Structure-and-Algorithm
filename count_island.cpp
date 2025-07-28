#include <bits/stdc++.h>
#include <math.h>
#include <vector>

using namespace std;

// cac o chung canh
int dx[4] = {-1, 0, 1, 0};
int dy[4] = {0, 1, 0, -1};
int N = 5;
int M = 3;
// 8 o chung dinh
int dx2[8] = {-1, -1, -1, 0, 1, 1, 1, 0};
int dy2[8] = {-1, 0, 1, 1, 1, 0, -1, -1};

int a[5][3] = {
        {1, 0, 1},
        {0, 1, 0},
        {1, 1, 1},
        {0, 0, 1},
        {1, 0, 0}
    };
   
void loang(int i, int j){
	a[i][j] = 0;
	for(int k = 0; k < 4; k++){
		int ik = i + dx[k];
		int jk = j + dy[k]; 
		
		if(ik >= 0 && ik < N && jk >= 0 && jk < M && a[ik][jk] == 1){
			loang(ik, jk);
		}
	}
} 

int main(){
	int cnt = 0;
	for(int i = 0; i < N; i++){
		for(int j = 0; j < M; j++){
			if(a[i][j] == 1){
				++cnt;
				loang(i,j);
			}
		}	
	}
	cout << cnt;
	return 0;
}
