#include<iostream>

using namespace std;

int main() {
    int n;
    cout << "nhap vao 1 so: ";
    cin >> n;
    int count =0;
    for(int i=1;i<n;i++) {
        if(n%i==0)
        count++;
    }
    if(count == 1)
    cout << "YES";
    else
    cout<< "NO";
}