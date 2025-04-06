#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, L, R;
    cout << "Nhap so phan tu n: ";
    cin >> n;

    vector<int> v(n);

    cout << "Nhap " << n << " phan tu: ";
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    cout << "Nhap chi so L va R: ";
    cin >> L >> R;

    if (L < 0 || R >= n || L > R) {
        cout << "Chi so khong hop le!" << endl;
        return 0;
    }

    cout << "Duyet tu L den R: ";
    for (vector<int>::iterator it = v.begin() + L; it <= v.begin() + R; ++it) {
        cout << *it << " ";
    }
    cout << endl;

    cout << "Duyet tu R den L: ";
    for (vector<int>::iterator it = v.begin() + R; it >= v.begin() + L; --it) {
        cout << *it << " ";
    }
    cout << endl;

    return 0;
}
