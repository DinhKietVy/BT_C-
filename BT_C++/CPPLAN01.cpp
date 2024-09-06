#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int stringToInt(const string& s) {
    return stoi(s);
}

string Tru(const string& X, const string& Y) {
    int numX = stringToInt(X);
    int numY = stringToInt(Y);
    int sum = abs(numX - numY);
    return to_string(sum);
}

int main() {
    string X,Y;
    int test;
    cout << "nhap so luong test: ";
    cin >> test;
    for(int i=0;i<test;i++) {
        cin >> X >> Y;
       string ans = Tru(X, Y);
        cout << ans << endl;
    }
}