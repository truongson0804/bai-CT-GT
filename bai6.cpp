#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

int main() {
    int n;
    cout << "Nhap so phan tu n: ";
    cin >> n;

    vector<int> V(n);
    cout << "Nhap " << n << " phan tu: ";
    for (int i = 0; i < n; i++) {
        cin >> V[i];
    }

    int min = *min_element(V.begin(), V.end());
    int max = *max_element(V.begin(), V.end());
    int tong = accumulate(V.begin(), V.end(), 0);

    cout << "Phan tu nho nhat: " << min << endl;
    cout << "Phan tu lon nhat: " << max << endl;
    cout << "Tong cac phan tu: " << tong << endl;

    return 0;
}
