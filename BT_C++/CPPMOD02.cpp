#include <iostream>
#include <string>
#include <cmath>
#include <math.h>

using namespace std;

int main() {
    int a,m,test;
    cout << "nhap so luong test: ";
    cin >> test;
    for(int j=0;j<test;j++) {
        cout << "nhap so: ";
        cin >> a >> m;
        for(int i=0;i<m;i++) {
            if((a*i)%m==1)
            cout << i << endl;
        }
    }
}