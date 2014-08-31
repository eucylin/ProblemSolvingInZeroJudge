#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
	int N;
	while (cin >> N){
		if (N == 0) {
			break;
		}
		vector<int> num(N);
		int length = 0;
		for (int i = 0; i < N; i++){
			cin >> num[i];
			length += num[i];
		}
		if ( N == length){
			cout << "NO" << endl;
			continue;
		}
		vector<int> count(400, 0);
		for(int j = 0; j < N ; j++){
			int partial_Sum = 0;
			for (int i = j; i < N; i++){
				partial_Sum += num[i];
				count[partial_Sum] = 1;
			}
		}
		bool valid_Ruler = true;
		for (int i = 1; i <= length; i++){
			if (count[i] == 0){
				valid_Ruler = false;
			}
		}
		cout << (valid_Ruler ? "YES" : "NO") << endl;
	} 
	return 0;
}