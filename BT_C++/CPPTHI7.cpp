#include<iostream>
#include<vector>

using namespace std;

int dem_so_uoc(int n) {
    int count=0;
    for(int i=1;i<=n;i++) {
        if(n%i==0)
        count++;
    }
    return count;
}

int main() {
    vector<int> q,ans;
    int test,temp;
    cout << "nhap so luong test: ";
    cin >> test;
    for(int i=0;i<test*2;i++) {
        cin >> temp;
        q.push_back(temp);
    }
    for(int i=0;i<q.size();i+=2) {
        int count = 0;
        for(int j=q[i];j<=q[i+1];j++) {
            if(dem_so_uoc(j)==3)
            count++;
        }
        if(count>0)
        ans.push_back(count);
    }
    for(int i=0;i<ans.size();i++) {
        cout << ans[i] << endl;
    }
}