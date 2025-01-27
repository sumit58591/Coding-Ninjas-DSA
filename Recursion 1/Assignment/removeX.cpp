#include<iostream>
#include<cstring>
using namespace std;

void removeX(char input[]) {
    if(input[0] == '\0') return;
    removeX(input + 1);
    if(input[0] == 'x') {
        int length = strlen(input);
        for(int i = 0; i <= length; i++) {
            input[i] = input[i + 1];
        }
    }
    return;
}

int main () {
    char input[1000];
    cin >> input;
    removeX(input);
    cout << input << endl;
    return 0;
}