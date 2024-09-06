#include <iostream>
#include <string>
using namespace std;

int stringToInt(const string& s) {
    return stoi(s);
}

string Cong(const string& X, const string& Y) {
    int numX = stringToInt(X);
    int numY = stringToInt(Y);
    int sum = numX + numY;
    return to_string(sum);
}

int main() {
    string X,Y;
    int test;
    cout << "nhap so luong test: ";
    cin >> test;
    for(int i=0;i<test;i++) {
        cin >> X >> Y;
       string ans = Cong(X, Y);
        cout << ans << endl;
    }
}
