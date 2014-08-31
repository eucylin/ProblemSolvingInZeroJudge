#include <iostream>
#include <vector>
using namespace std;

int main(){
	int n;
	vector<int> result(1000001);
	result[1] = 1;
	result[2] = 1;
	while(cin >> n){
		if (n == 0){
			break;
		}
		for (int i = 3; i <= n; i++){
			result[i] = result[i-result[i-1]] + result[i-1-result[i-2]];
		}
		cout << result[n] << endl;
	}
	return 0;
}