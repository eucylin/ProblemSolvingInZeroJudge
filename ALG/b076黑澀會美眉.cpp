#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <map>
#include <cstdlib>
using namespace std;

int main(){
	int k, n;
	cin >> k;
	while (k--){
		cin >> n;
		vector<string> A(n);
		vector<string> B(n);
		vector<int> like(n);
		int min = 0;
		string name;
		for (int i = 0; i < n ; i++){
			cin >> A[i] >> B[i] >> like[i];
			if(like[i] < min && like[i] < 0){
				min = like[i];
				name = A[i] + " " + B[i];
			}
		}
		if (min == 0){cout << "Are you kidding me?" << endl;}
		else{cout << name << endl;}
	}	
	return 0;
}