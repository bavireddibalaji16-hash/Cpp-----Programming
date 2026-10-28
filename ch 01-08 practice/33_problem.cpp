#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char str[] = "I love C++ programming";

    int start = 0;

    for (int i = 0;i<strlen(str); i++) {

        if (str[i] == ' ' || str[i] == '\0') {

            int left = start;
            int right = i - 1;

            while (left < right) {
                char temp = str[left];
                str[left] = str[right];
                str[right] = temp;


                left++;
                right--;
            }

            start = i + 1;
        }

        if (str[i] == '\0')
            break;
    }

    cout << str;

    return 0;
}