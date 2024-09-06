#include <iostream>
#include <vector>
#include <cmath>
#include <cstring>
#include <algorithm>

using namespace std;

int main() {
    char a[50];
    vector<int> check;
    int k,missing,test;
    cout << "nhap so luong test: ";
    cin >> test;
    for(int j=0;j<test;j++) {
        cout << "nhap xau: ";
    cin >> a;
    cout << "nhap k: ";
    cin >> k;
    for(int i=0;i<strlen(a);i++) {
        if(count(check.begin(),check.end(),int(a[i]))==0) {
            check.push_back(int(a[i]));
        }
    }
    missing = 26 - check.size();
    if(missing > k) {
        cout << "0" << endl;
    }
    else {
        cout << "1" << endl;
    }
    }
}