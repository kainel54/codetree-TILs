#include <iostream>
using namespace std;

int main() {
    double temp;
    cout<<fixed;
    cout.precision(1);
    cin>> temp;
    cout<<temp*30.48f;
    return 0;
}