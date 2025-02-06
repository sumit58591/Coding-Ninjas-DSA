#include <bits/stdc++.h>
using namespace std;

int returnPermutations(string input, string output[]){
    if(input[0] == '\0') {
        output[0] = "";
        return 1;
    }

    int k = 0;
    int n = input.size();
    for(int i = 0; i < n; i++) {
        string nextInput = input.substr(0, i) + input.substr(i + 1);
        string smallOutput[1000];
        int outputSize = returnPermutations(nextInput, smallOutput);
        for(int j = 0; j < outputSize; j++) {
            output[k++] = input[i] + smallOutput[j];
        }
    }

    return k;
}

int main() {
    string input;
    cin >> input;
    string output[1000];
    int outputSize = returnPermutations(input, output);
    for(int i = 0; i < outputSize; i++) cout << output[i] << endl;
    return 0;
}