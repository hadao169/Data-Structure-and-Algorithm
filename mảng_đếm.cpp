#include <iostream>
#include <vector>
#include <math.h>

using namespace std;
int dem[1000001];

int main(){
	int n = 9;
	int a[] = {1,2,5,3,1,2,1,1,5};
	for(int i = 0; i < n; i++){
	    dem[a[i]]++;
	}
	
	// liet ke theo dung thu tu
	for(int i = 0; i < n; i++){
	    if(dem[a[i]] != 0){
	        cout << a[i] << " " << dem[a[i]] << endl;
	        dem[a[i]] = 0;
	    }
	}
	
	// liet ke tang dan
	for(int i = 0; i < 1000001; i++){
	    if(dem[i] != 0){
	        cout << i << " " << dem[i] << endl;
	    }
	}
	return 0;
}
