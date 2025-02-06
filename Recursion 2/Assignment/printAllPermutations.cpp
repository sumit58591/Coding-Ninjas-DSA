#include <bits/stdc++.h>
using namespace std;

void printPermutations_helper(string input, string output) {
    if(input[0] == '\0') {
        cout << output << endl;
        return;
    }

    int n = input.size();
    for(int i = 0; i < n; i++) {
        string nextInput = input.substr(0, i) + input.substr(i + 1);
        printPermutations_helper(nextInput, output + input[i]);
    }

    return;
}

void printPermutations(string input){
    string output = "";
    printPermutations_helper(input, output);
    return;
}

int main() {
    string input;
    cin >> input;
    printPermutations(input);
    return 0;
}