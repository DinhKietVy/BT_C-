#include<iostream>
#include<vector>

using namespace std;

int thua_so_nguyen_to(int n) {
    int m=2;
    int total = 0;
    vector<int> ans;
    while(n!=1) {
        if(n%m==0) {
            n /= m;
            ans.push_back(m);
        }
        else {
            m++;
        }
    }
    for(int i=0;i<ans.size();i++) {
        total+=ans[i];
    }
    return total;
}

int chu_so(int n) {
    int total = 0;
    while (n > 0) {
        int digit = n % 10;
        total += digit;
        n /= 10;
    }
    return total;
}

int main() {
    int n;
    int thua_so;
    int tong_so;
    cout << "nhap so: ";
    cin >> n;
    thua_so = thua_so_nguyen_to(n);
    tong_so = chu_so(n);
    if(thua_so==tong_so)
    cout << "YES";
    else 
    cout << "NO";
}