#include <iostream>
#include <vector>
#include <cmath>
#include <cstring>
#include <algorithm>

using namespace std;

bool check_fibonaci(int n) {
    int rotate = 1;
    int a=0;
    int b=1;
    int temp;
    while (a<n || b<n)
    {
        temp=a+b;
        if(rotate==1 || rotate%2!=0) {
            a=temp;
            rotate++;
        }
        else if(rotate%2==0){
            b=temp;
            rotate++;
        }
    }
    if(n==a || n==b) {
        return true;
    }
    else {
        return false;
    }
    
}

void check(vector<int> a) {
    for(int i=0;i<a.size();i++) {
        if(check_fibonaci(a[i])) {
            cout << a[i] << " ";
        }
    }
    cout << endl;
}

int main() {
    vector<int> a;
    int n,temp,test;
    cout << "nhap so luong test: ";
    cin >> test;
    for(int j=0;j<test;j++) {
        cout << "nhap do dai: ";
        cin >> n;
        cout << "nhap day so: ";
        for(int i=0;i<n;i++) {
            cin >> temp;
            a.push_back(temp);
        }
        check(a);
    }
}