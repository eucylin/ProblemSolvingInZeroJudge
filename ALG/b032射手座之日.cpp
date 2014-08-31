#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cstdlib>
using namespace std;

int main(){
	int N;
	while (cin >> N){
		if (N == 0){
			break;
		}
		vector<int> A(3, 0);
		vector<int> B(3, 0);
		for (auto &p : A){cin >> p;}
		for (auto &p : B){cin >> p;}
		for (auto p : A){A.push_back(N - p);}
		for (auto p : B){B.push_back(N - p);}
		for (auto p : A){cout << p << endl;}
		if (is_permutation (A.begin(), A.end(), B.begin())){
			cout << "Yes" <<endl;
		}else {cout << "No" << endl;}
	}
	return 0;
}
