#include<iostream>
#include<vector>

using namespace std;

int main() {
    int k,n;
    cout << "nhap k: ";
    cin >> k;
    cout << "nhap n: ";
    cin >> n;
    for(int i=1;i<=n+1;i++) {
        for(int j=i+1;j<=k;j++) {
            cout << i << "" << j << endl;
        }
    }
}