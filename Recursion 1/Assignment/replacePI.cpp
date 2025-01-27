#include<iostream>
#include<cstring>
using namespace std;

void replacePi(char input[]) {
    if(input[0] == '\0') return;
    replacePi(input + 1);
    if(input[0] == 'p' and input[1] == 'i') {
        int length = strlen(input);
        for(int i = length; i >= 2; i--) {
            input[i + 2] = input[i];
        }

        input[0] = '3', input[1] = '.', input[2] = '1', input[3] = '4';
    }

    return;
}

int main () {
    char input[1000];
    cin >> input;
    replacePi(input);
    cout << input << endl;
    return 0;
}