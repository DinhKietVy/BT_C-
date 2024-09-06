#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int total(int n) {
    int tong = 0;
    while (n > 0) {
        int digit = n % 10;
        tong += digit;
        n /= 10;
    }
    if(tong>=10)
    return total(tong);

    return tong;
}

int main() {
    int n,test;
    cout << "nhap so luong test: ";
    cin >> test;
    for(int i=0;i<test;i++) {
        cout << "nhap so: ";
        cin >> n;
        cout << total(n) << endl;
    }
}