#include<iostream>
#include<vector>

using namespace std;

void check(int n) {
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
        cout << "YES";
    }
    else {
        cout << "NO";
    }
    
}

int main() {
    int test,temp;
    cout << "nhap so luong test: ";
    cin >> test;
    for(int i=0;i<test;i++) {
        cin >> temp;
        check(temp);
    }
}