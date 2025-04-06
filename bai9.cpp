#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cout << "Nhap so phan tu N: ";
    cin >> n;

    vector<int> A(n);
    cout << "Nhap " << n << " phan tu: ";
    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }

    vector<pair<int, int>> dem;

    for (int i = 0; i < n; i++) {
        bool da_dem = false;

        for (int j = 0; j < dem.size(); j++) {
            if (dem[j].first == A[i]) {
                da_dem = true;
                break;
            }
        }

        if (!da_dem) {
            int count = 0;
            for (int j = 0; j < n; j++) {
                if (A[j] == A[i]) count++;
            }
            dem.push_back(make_pair(A[i], count));
        }
    }

    cout << "So lan xuat hien cua cac phan tu:\n";
    for (int i = 0; i < dem.size(); i++) {
        cout << dem[i].first << " xuat hien " << dem[i].second << " lan\n";
    }

    return 0;
}
