#include <iostream>
using namespace std;

int main(){
	int N, P, min;
	cin >> N;
	while (N--){
		cin >> P;
		min = (P/27 +
			P%27/9 +
			P%9/3 +
			P%3/1);
		cout << min << endl;
	}
	return 0;
}