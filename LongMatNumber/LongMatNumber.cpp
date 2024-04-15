#include <cmath>
#include <cstring>
#include <iomanip>
#include <iostream>
#include <math.h>
#include <string>
#include <vector>

int main() {
    using namespace std;
    string num;
    bool searchForMist = true;
    bool hasDigit = false;

    cout << "Please, input a number: ";
    getline(cin, num);

    int dotCount = 0;

    for (int i = 0; i < num.length(); i++) {
        if (num[i] == '.') {
            dotCount++;
        }

        if (isdigit(num[i]) && num[i] >= '0' && num[i] <= '9') {
            hasDigit = true;
        }
        if (!isdigit(num[i]) && num[i] != '.' && num[i] != '-') {
            cout << "1";
            searchForMist = false;
            break;
        }
    }

    if (searchForMist && hasDigit && dotCount <= 1) {
        cout << "Yes!";
    }
    else {
        cout << "No!";
    }

    return 0;
}