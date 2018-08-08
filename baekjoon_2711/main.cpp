#include <iostream>
using namespace std;

int main(){
	char i1[81];
	int dir, t;
	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> dir >> i1;
		for (int j = dir - 1; i1[j] !='\0'; j++) i1[j] = i1[j + 1];
		cout << i1 << endl;
	}
	return 0;
}

