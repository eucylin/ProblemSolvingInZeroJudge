#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
	int N, M, num;
	while (cin >> N){
		if (N == 0){
			break;
		}
		vector<int> count(41, 0);
		while(N--){
			for (cin >> M; M > 0; M--){
				cin >> num;
				count[num - 1] ++;
			}
		}
		cout << *min_element(count.begin(), count.end()) << endl;
	}
	return 0;
}
