#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, min = 101;
    cin >> n;
    vector<int> varr;
    for (int i = 0; i < n; i++) {
        int temp;
        cin >> temp;
        varr.push_back(temp);
    }

    for (int i = 0; i < n-1; i++) {
        int diff;
        diff = varr[i + 1] - varr[i];
        if (diff < min)
        {
            min = diff;
        }

    }
    cout << min;
    return 0;
}