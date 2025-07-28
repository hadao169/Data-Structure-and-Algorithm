#include <iostream>
#include <algorithm>
using namespace std;

using ll = long long;

ll n, m, a[500][500];

// cho ma tran A(NxM). tim duong di tu o [1,1] toi o [N,M] sao cho tong cac so tren duong di la lon nhat co the,
// biet rang o moi buoc di chi co the di tu o hien tai xuong o phai duoi hoac di dang phai
// 1 2 2
// 3 10 2
// 5 7 2
// chuyen thanh: 1->2->10->7->2 = 23
//1 3 5
//4 14 16
//9 21 23

int main() {
    cin >> n >> m;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            cin >> a[i][j];
        }
    }

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (i == 1) a[i][j] += a[i][j - 1]; 
            else if (j == 1) a[i][j] += a[i - 1][j]; 
            else a[i][j] += max(a[i - 1][j], a[i][j - 1]);
        }
    }

    cout << a[n][m] << endl;
    return 0;
}
