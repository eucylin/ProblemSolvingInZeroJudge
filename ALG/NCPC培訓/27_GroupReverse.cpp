#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main(){
	while(true){
		int G;
		cin >> G;
		if (G == 0)
			break;
		string all, ans;
		cin >> all;
		int N = all.length() / G;
		for(int j = 0; j < G; j++){
			string S;
			S.clear();
			for(int i = 0; i < N; i++){
				S += all[j * N + i];
			}
			reverse(S.begin(), S.end());
			ans += S;
		}
		cout << ans << endl;
	}
	return 0;
}