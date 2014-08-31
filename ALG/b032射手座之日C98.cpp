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
		for (int i = 0; i < 3; i++)
			{cin >> A[i];}
		for (int i = 0; i < 3; i++)
			{cin >> B[i];}
		for (int i = 0; i < 3; i++)
			{A.push_back(N - A[i]);}
		for (int i = 0; i < 3; i++)
			{B.push_back(N - B[i]);}

		sort(A.begin(),A.end());
		sort(B.begin(),B.end());

		bool possible = true;		
		for (int i = 0; i < 6; i++){
			if (A[i] == B[i]){;}
			else { possible = false;break;}
		}
		cout << (possible ? "Yes" : "No") << endl;
	}
	return 0;
}
