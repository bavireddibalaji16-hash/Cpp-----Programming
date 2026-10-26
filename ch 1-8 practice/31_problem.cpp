#include <iostream>
#include<string>
#include<cstring>
using namespace std;

int main() {
    char str[100];
    cin.getline(str, 100);

    int vowels = 0, consonants = 0;
    int digits = 0, spaces = 0;

    for (int i = 0; i<strlen(str); i++) {

        if (str[i] == ' ') {
            spaces++;
        }
        else if (str[i] >= '0' && str[i] <= '9') {
            digits++;
        }
        else if (str[i] == 'a' || str[i] == 'e' ||
                 str[i] == 'i' || str[i] == 'o' ||
                 str[i] == 'u' ||
                 str[i] == 'A' || str[i] == 'E' ||
                 str[i] == 'I' || str[i] == 'O' ||
                 str[i] == 'U') {
            vowels++;
        }
        else {
            consonants++;
        }
    }

    cout << "Vowels = " << vowels << endl;
    cout << "Consonants = " << consonants << endl;
    cout << "Digits = " << digits << endl;
    cout << "Spaces = " << spaces << endl;

    return 0;
}