#include <iostream>
#include <string>
using namespace std;

int main() {
    string str1, str2;
    int num1, num2;
    cin >> str1 >> str2;
    for (int i = 0; i < str1.size(); i++) {
        if ((int)str1[i] > 96) {
            str1.erase(i,1);
            i -= 1;
        }
    }
    num1 = stoi(str1);

    for (int i = 0; i < str2.size(); i++) {
        if (str2[i] > 96) {
            str2.erase(i,1);
            i -= 1;
        }
    }
    num2 = stoi(str2);

    cout << num1 + num2;
}