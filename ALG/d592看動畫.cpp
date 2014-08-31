#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cstdlib>
using namespace std;

int main(){
	int T, N, M;
	cin >> T;
	while (T--){
		cin >> N >> M;
		vector<int> SSD(N, 0);
		int count;
		for (int i = 0; i < N; i++){
			cin >> SSD[i];
		}
		if (N <= M){
			cout << '0' << endl;
		}else {
			// assume no empty disk
			vector<int> USB(N);
			for (int i = 0; i < M; i++){
				USB[SSD[i]] ++;
			}
			//initialize two variables
			int unsolved = N - M;
			int mark = M;
			while (unsolved > 0){
				for (int i = 0; i < M; i++){
					if (USB[mark] == 1){
						mark ++;
						unsolved --;
					}else {
						
						mark ++;
						unsolved --;
					}
				}
			}
		}

	}
	return 0;
}