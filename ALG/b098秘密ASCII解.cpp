#include <iostream>
using namespace std;

int main(){
	int N, K;
	cin >> N;
	while (N--){
		const char refer[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
		char pwd[1000];
		cin >> K;
		for (int i = 0; ; i++){
			cin >> pwd[i];
			cout << refer[(pwd[i] - 'A' - K + 26) % 26];
			if (cin.peek() == '\n'){
				cout << endl;
				break;
			}
		}
	}
	return 0;
}