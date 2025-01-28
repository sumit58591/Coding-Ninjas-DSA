#include<iostream>
using namespace std;

int subsequencesOfString(string input, string output[]) {
    if(input[0] == '\0') {
        output[0] = "";
        return 1;
    }

    int smallOutputSize = subsequencesOfString(input.substr(1), output);
    int k = smallOutputSize;
    for(int i = 0; i < smallOutputSize; i++) output[k++] = input[0] + output[i];  
    return 2 * smallOutputSize;
}

int main () {
    string input;
    cin >> input;
    string output[10000];
    int outputSize = subsequencesOfString(input, output);
    for(int i = 0; i < outputSize; i++) cout << output[i] << endl;
    return 0;
}