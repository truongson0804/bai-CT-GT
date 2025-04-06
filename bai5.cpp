#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n, L, R;
    cout << "Nhap so phan tu n: ";
    cin >> n;

    vector<int> V(n);
    cout << "Nhap " << n << " phan tu: ";
    for (int i = 0; i < n; i++) {
        cin >> V[i];
    }

    reverse(V.begin(), V.end());

    cout << "Vector sau khi lat nguoc toan bo: ";
    for (int i = 0; i < V.size(); i++) {
        cout << V[i] << " ";
    }
    cout << endl;

    cout << "Nhap chi so L va R: ";
    cin >> L >> R;

    if (L < 0 || R >= V.size() || L > R) {
        cout << "Chi so khong hop le!" << endl;
        return 0;
    }

    reverse(V.begin() + L, V.begin() + R + 1);

    cout << "Vector sau khi lat nguoc tu chi so L den R: ";
    for (int i = 0; i < V.size(); i++) {
        cout << V[i] << " ";
    }
    cout << endl;

    return 0;
}
