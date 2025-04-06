#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N;
    cout << "Nhap so diem N: ";
    cin >> N;

    vector<pair<pair<int, int>, int>> diem(N);

    cout << "Nhap toa do cac diem (x y z): ";
    for (int i = 0; i < N; i++) {
        int x, y, z;
        cin >> x >> y >> z;
        diem[i] = make_pair(make_pair(x, y), z);
    }

    int tong_x = 0, tong_y = 0, tong_z = 0;

    for (int i = 0; i < N; i++) {
        tong_x += diem[i].first.first;
        tong_y += diem[i].first.second;
        tong_z += diem[i].second;
    }

    cout << "Tong hoanh do (x): " << tong_x << endl;
    cout << "Tong tung do  (y): " << tong_y << endl;
    cout << "Tong cao do   (z): " << tong_z << endl;

    return 0;
}
