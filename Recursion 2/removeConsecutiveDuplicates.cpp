#include<iostream>
#include<cstring>
using namespace std;

void removeConsecutiveDuplicates(char *input) {
    if(input[0] == '\0') return;
    removeConsecutiveDuplicates(input + 1);
    if(input[0] == input[1]) {
        int length = strlen(input);
        for(int i = 1; i <= length; i++) input[i - 1] = input[i];
    }
    return;
}

int main () {
    char input[1000];
    cin >> input;
    removeConsecutiveDuplicates(input);
    cout << input << endl;
    return 0;
}