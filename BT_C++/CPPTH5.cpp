#include<iostream>
#include<vector>

using namespace std;

int tong_uoc(int n) {
    int total=0;
    for(int i=1;i<=n;i++) {
        if(n%i==0) {
            total+=i;
        }
    }
    return total;
}

int main() {
    vector<int> ans;
    int n;
    int temp;
    cout << "nhap so luong so: ";
    cin >> n;
    cout << "nhap so: ";
    for(int i=0;i<n;i++) {
        cin >> temp;
        ans.push_back(tong_uoc(temp));
    }
    for(int i=0;i<ans.size();i++)
    cout << ans[i] << endl;
}