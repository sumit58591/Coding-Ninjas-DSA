#include <bits/stdc++.h>
using namespace std;

bool checksequence(char large[] , char* small) {
    if(small[0] == '\0') return true;
    if(large[0] == '\0') return false;
    if(large[0] == small[0]) return checksequence(large + 1, small + 1);   
    else return checksequence(large + 1, small);
}

int main() {
    char large[10000];
	char small[10000];
	cin>>large;
	cin>>small;
    bool output = checksequence(large, small);
    if(output) cout << "true" << endl;
    else cout << "false" << endl;
    return 0;
}