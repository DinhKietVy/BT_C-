#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int stringToInt(const string& s) {
    return stoi(s);
}

string Nhan(const string& X, const string& Y) {
    int numX = stringToInt(X);
    int numY = stringToInt(Y);
    int sum = numX * numY;
    return to_string(sum);
}

int main() {
    string X,Y;
    int test;
    cout << "nhap so luong test: ";
    cin >> test;
    for(int i=0;i<test;i++) {
        cin >> X >> Y;
       string ans = Nhan(X, Y);
        cout << ans << endl;
    }
}