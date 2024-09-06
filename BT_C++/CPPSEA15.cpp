#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

vector<int> check(vector<int> a,int k, int x) {
    vector<int> ans;
    int dem = 0;
    while(dem < k) {
        int min;
        int temp;
        min = 1000;
        temp = 0;
        for(int i=0;i<a.size();i++) {
            if(abs(a[i]-x)<min && count(ans.begin(), ans.end(), a[i])==0) {
                min = abs(a[i]-x);
                temp = a[i];
            }
        }
        if(temp!=0)
        ans.push_back(temp);

        dem++;
    }
    return ans;
}

int main(){
    vector<int> q,ans;
    int n,temp,k,x,test;
    cout << "nhap so luong test: ";
    cin >> test;
    for(int j=1;j<test;j++) {
        cout << "nhap so luong phan tu: ";
    cin >> n;
    for(int i=0;i<n;i++) {
        cin >> temp;
        q.push_back(temp);
    }
    cout << "nhap k: ";
    cin >> k;
    cout << "nhap x: ";
    cin >> x;
    ans = check(q,k,x);
    for(int i=0;i<ans.size();i++) {
        cout << ans[i] << " ";
    }
    }
    cout << "nhap so luong phan tu: ";
    cin >> n;
    for(int i=0;i<n;i++) {
        cin >> temp;
        q.push_back(temp);
    }
    cout << "nhap k: ";
    cin >> k;
    cout << "nhap x: ";
    cin >> x;
    ans = check(q,k,x);
    for(int i=0;i<ans.size();i++) {
        cout << ans[i] << " ";
    }
}