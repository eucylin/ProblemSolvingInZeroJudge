#include <iostream>
#include <string>
using namespace std;

int main(){
	int N, K;
	cin >> N;
	while (N--){
		string refer = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
		string pwd;
		cin >> K;
		cin >> pwd;
		for (int i = 0; i < pwd.size(); i++){
			cout << refer[(pwd[i] - 'A' - K + 26) % 26];
		}
		cout << endl;
	}
	return 0;
}