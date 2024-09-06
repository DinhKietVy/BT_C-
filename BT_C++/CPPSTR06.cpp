#include <iostream>
#include <string>

using namespace std;

string changeSixToFive(string s) {
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '6') {
            s[i] = '5';
        }
    }
    return s;
}

string changeFiveToSix(string s) {
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '5') {
            s[i] = '6';
        }
    }
    return s;
}

int main() {
    // Nhập hai số nguyên dương X1 và X2
    string X1, X2;
    int test;
    cout << "nhap so luong test: ";
    cin >> test;
    for(int i=0;i<test;i++) {
        cin >> X1;
        cin >> X2;
        int minSum = stoi(changeSixToFive(X1)) + stoi(changeSixToFive(X2));
        int maxSum = stoi(changeFiveToSix(X1)) + stoi(changeFiveToSix(X2));
        cout  << minSum << endl;
        cout  << maxSum << endl;
    }
}