#include<iostream>
#include<string>
using namespace std;

int main() {
	int n,add = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int temp;
		cin >> temp;
		add += temp;
	}
	string str = to_string(add);
	char temp = str[0];
	str.erase(str.begin());
	str.insert(str.end(),temp);
	cout << str;
}