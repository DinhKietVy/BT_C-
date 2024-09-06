#include <iostream>
#include <vector>
#include <cmath>
#include <cstring>
#include <algorithm>

using namespace std;

void check (long long n) {
    if(n%11==0) {
        cout <<"1" << endl;
    }
    else {
        cout << "0" << endl;
    }
}

int main() {
    long long test,n;
    cout << "nhap so luong test: ";
    cin >> test;
    for(int i=0;i<n;i++) {
        cout << "nhap so: ";
        cin >> n;
        check(n);
    }
}