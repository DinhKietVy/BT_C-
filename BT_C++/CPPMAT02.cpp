#include<iostream>
#include<vector>

using namespace std;

int check(int a[50][50], int n) {
    int max=0;
    int total = 0;
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            if(max<a[i][j])
            max = a[i][j];
        }
    }
    for(int i=1;i<=max;i++) {
        int count =0;
        for(int j=0;j<n;j++) {
            for(int k=0;k<n;k++) {
                if(a[j][k]==i) {
                    count++;
                    continue;
                }
            }
        }
        if(count >= n)
            total++;
    }
    return total;
}

int main() {
    int a[50][50];
    int n,temp,test;
    cout << "nhap so lan test";
    cin >> test;
    for(int i=0;i<test;i++) {
        cout << "nhap do lon ma tran: ";
    cin >> n;
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            cin >> temp;
            a[i][j] = temp;
        }
    }
    cout << check(a,n);
    }
}