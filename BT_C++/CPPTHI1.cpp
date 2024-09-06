#include<iostream>
#include<vector>

using namespace std;

int BCNN(int a, int b) {
    for(int i=b;i<=a*b;i++) {
        if(i%a==0 && i%b==0) {
            return i;
        }
    }
}

int UCLN(int a,int b) {
    for(int i=a;i>=1;i--) {
        if(a%i==0 && b%i==0) 
        return i;
    }
}

int main() {
    vector<int> test,ans;
    int n,temp;
    cout << "so test can nhap: ";
    cin >> n;
    for(int i=0;i<n*2;i++) {
        cin >> temp;
        test.push_back(temp);
    }
    for(int i=0;i<test.size();i+=2) {
        ans.push_back(BCNN(test[i],test[i+1]));
        ans.push_back(UCLN(test[i],test[i+1]));
    }
    for(int i=0;i<ans.size();i+=2) {
        cout << ans[i] << " " << ans[i+1] << endl;
    }
}