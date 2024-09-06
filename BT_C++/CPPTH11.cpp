#include <iostream>
#include <sstream>
#include <vector>
#include <cctype>

using namespace std;

string toLowerCase(string s) {
    for (int i = 0; i < s.length(); i++) {
        s[i] = tolower(s[i]);
    }
    return s;
}

vector<string> splitName(string fullName) {
    stringstream ss(fullName);
    string word;
    vector<string> nameParts;
    
    while (ss >> word) {
        nameParts.push_back(word);
    }
    
    return nameParts;
}

int main() {
    string fullName;
    cout << "nhap ten: ";
    getline(cin, fullName);
    
    vector<string> nameParts = splitName(fullName);
    
    string email = "";
    if (nameParts.size() >= 2) {
        string lastName = nameParts.back(); 
        string initials = "";  
        
        for (int i = 0; i < nameParts.size() - 1; i++) {
            initials += tolower(nameParts[i][0]);
        }
        
        email = toLowerCase(lastName) + initials + "@ptit.edu.vn";
    }
    
    cout << email << endl;
}
