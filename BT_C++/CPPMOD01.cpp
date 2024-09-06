#include <iostream>
#include <string>
#include <cmath>
#include <math.h>

using namespace std;

int main() {
    int p,test;
    int x,y,ans;
    cout << "nhap so luong test: ";
    cin >> test;
    for(int i=0;i<test;i++) {
        cout << "nhap: ";
        cin >> x >> y >> p;
        ans = pow(x,y);
        cout << ans % p;
    }
}