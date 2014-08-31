#include <iostream>
using namespace std;

int main(){
	int T, N, k, a, b;
	cin >> T;
	while (T--){
		cin >> N;
		cin >> a;
		int d = 0;
		for (int i = 2; i <= N; i++){
			cin >> b;
			if (b-a > d){
				d = b-a;
				k = i-1;
			}
			a = b;
		}
		cout << k << endl;
	}
	return 0;
}

