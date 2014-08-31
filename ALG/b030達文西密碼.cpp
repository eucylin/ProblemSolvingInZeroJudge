#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
	string A, B;
	while(getline(cin, A)){	
		getline(cin, B);
		sort(A.begin(),A.end());
		sort(B.begin(),B.end());
		bool same = true;
		for (int i = 0; i < A.size(); i++){
			if (A[i] == B[i]){;}
			else {same = false;}
		}
		cout << (same ? "Yes" : "No") << endl;
	}
	return 0;
}