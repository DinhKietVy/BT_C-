#include <iostream>
#include <vector>

using namespace std;

int main () {
    vector<int> ans;
    vector<int> mu;
    int n,temp;
    int m=2;
    cout << "nhap 1 so: ";
    cin >> n;
    temp = n;
    while(temp!=1) {
        if(temp%m==0) {
            temp /= m;
            ans.push_back(m);
        }
        else {
            m++;
        }
    }
    int check=0;
    for(int i = 0;i <ans.size()-1;i++) { 
            if(ans[i]!=ans[i+1]){
                mu.push_back(check+1);
                check = 0;
            }
            else {
                check++;
            }
    }

    if(ans[ans.size()-1]!= ans[ans.size()-2])
    mu.push_back(1);
    
    int index=0;
    for(int i=0;i<mu.size();i++) {
        cout << ans[index] << " " << mu[i] << endl;
        index += mu[i];
    }
}