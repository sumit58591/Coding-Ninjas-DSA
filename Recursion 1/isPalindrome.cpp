#include<bits/stdc++.h>
using namespace std;

bool isPalindrome_helper(string& str, int si, int ei) {
    if(si > ei) return true;
    if(str[si] != str[ei]) return false;
    return isPalindrome_helper(str, si + 1, ei - 1);
}

bool isPalindrome(string& str) {
    int si = 0, ei = str.length() - 1;
    bool output = isPalindrome_helper(str, si, ei);
    return output; 
}

int main () {
    string str;
    cin >> str;
    bool output = isPalindrome(str);
    if(output) cout << "Palindrome" << endl;
    else cout << "Not a Palindrome" << endl;
    return 0;
}