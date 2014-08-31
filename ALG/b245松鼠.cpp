#include <iostream>
using namespace std;

int main(){
	int T, N, k, d;
	cin >> T;
	while (T--){
		cin >> N;
		int x[N];
		int d = 0;
		cin >> x[0];
		for (int i = 1; i < N; i++){
			cin >> x[i];
			if (d < (x[i]-x[i-1])){
				d = x[i]-x[i-1];
				k = i;
			}
		}
		cout << k << endl;
	}
	return 0;
}

