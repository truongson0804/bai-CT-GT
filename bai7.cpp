#include <iostream>
#include <vector>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    int N;
    cout << "Nhap so diem N: ";
    cin >> N;

    vector<pair<int, int>> diem(N);
    vector<double> khoang_cach;

    cout << "Nhap toa do cac diem (x y): ";
    for (int i = 0; i < N; i++) {
        cin >> diem[i].first >> diem[i].second;
    }

    for (int i = 0; i < N; i++) {
        int x = diem[i].first;
        int y = diem[i].second;
        double d = sqrt(x * x + y * y);
        khoang_cach.push_back(d);
    }

    cout << "Khoang cach tu cac diem den goc toa do: ";
    cout << fixed << setprecision(2);
    for (int i = 0; i < khoang_cach.size(); i++) {
        cout << khoang_cach[i] << " ";
    }
    cout << endl;

    return 0;
}
