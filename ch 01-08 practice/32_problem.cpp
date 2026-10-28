#include<iostream>
#include<string>
#include<cstring>

// finding longest string in a string 

using namespace std;

int longest(char str[]) {
    int count = 0;
    int max = 0;

    for (int i = 0; i < strlen(str); i++) {

        if (str[i] != ' ') {
            count++;
        }
        else {
            if (count > max) {
                max = count;
            }
            count = 0;
        }
    }

    // check the last word
    if (count > max) {
        max = count;
    }

    cout << max;
    return 0;
}


