#include <iostream>
#include <math.h>

using namespace std;
int dem[1000001];

int main(){
	int n = 9;
	int a[] = {1,2,5,3,1,2,1,1,5};
	long long dp[n];
	for(int i = 0; i < n; i++){
		if(i == 0) dp[i] = a[i];
		else dp[i] = dp[i-1] + a[i];
	}
	
	for(int i = 0; i < n; i++){
		cout << dp[i] << " ";
	}
	return 0;
}
