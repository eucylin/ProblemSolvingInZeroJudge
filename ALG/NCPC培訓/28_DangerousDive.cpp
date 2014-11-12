#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main(){
	int N, R;
	while(cin >> N >> R){
		if (N == R){
			string trash;
			cin.get();
			getline(cin, trash);
			cout << '*' << endl;
			continue;
		}
		vector<int> rtr(R);
		for(int i = 0; i < R; i++){
			cin >> rtr[i];
		}
		sort(rtr.begin(), rtr.end());
		vector<int> dead;
		for(int i = 1; i <= N; i++){
			if (rtr[i - 1] != i){
				rtr.insert(rtr.begin() + i - 1, i);
				dead.push_back(i);
			}
		}
		sort(dead.begin(), dead.end());
		for(int i = 0; i < dead.size(); i++){
			cout << dead[i] << " ";
		}
		cout << endl;
	}
	return 0;
}