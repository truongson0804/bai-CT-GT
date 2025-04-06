#include <iostream>
#include <vector>
#include <algorithm> 
using namespace std;

int main() {
    vector<int> v;
    int n;

    cout << "Nhap n: ";
    cin >> n;
    
    cout << "Nhap " << n << " phan tu: ";
    for (int i = 0; i < n; i++) {
        int temp;
        cin >> temp;
        v.push_back(temp);
    }

    cout << "Day so vua nhap: ";
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;

    sort(v.begin(), v.end());
    cout << "Vector tang dan: ";
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;

    sort(v.begin(), v.end(), greater<int>());
    cout << "Vector giam dan: ";
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;

    return 0;
}
