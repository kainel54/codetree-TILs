#include <iostream>
using namespace std;

int main() {
    float temp;
    cin>> temp;
    cout.fixed;
    cout.precision(1);
    cout<<temp*30.48f;
    return 0;
}