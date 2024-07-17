#include <iostream>
using namespace std;

int main() {
    int y, m, d;
    cin >> m;
    cin.ignore();
    cin >> d;
    cin.ignore();
    cin >> y;

    cout << y << "." << m << "." << d;
}