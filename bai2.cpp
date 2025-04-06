#include <iostream>
#include <vector>
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
      v.insert(v.begin() + 3, 28);    
      v.erase(v.begin()+1);

    cout << "Day so vua nhap: ";
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;

    return 0;
}
