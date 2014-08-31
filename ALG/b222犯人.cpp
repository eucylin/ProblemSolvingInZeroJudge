#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
	vector<char> ans(5);
	for (int i = 0; i < 4 ; i++){
		cin >> ans[i];
	}
	ans.push_back(-1);
	int K;
	cin >> K;
	while (K--){
		int countA =  0,countB = 0;
		vector<char> guess(4);
		for (int i = 0; i < 4; i++){
			cin >> guess[i];
		}
		for (int i = 0; i < 4; i++){
			if (guess[i] == ans[i]){
				countA ++;
				continue;
			}
			else if (*find(ans.begin(),ans.end(),guess[i]) == guess[i]){
				countB ++;
			}
		}
		cout << countA << "A" << countB << "B" << endl;
	}
	return 0;
}