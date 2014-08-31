#include <iostream>
#include <vector>
#include <cstdlib>
#include <numeric>
using namespace std;

int main(){
	int T;
	cin >> T;
	while(T--){
		int n;
		cin >> n;
		bool yesno = true;
		vector<int> num(n);
		for (int i = 0; i < n; i++){
			cin >> num[i];
			if (num[i] > 3 || num[i] < -3){
				yesno = false;
//				break;
			}
		}
		int sum = accumulate(num.begin(), num.end(), 0);
		if (yesno == false){
			cout << "NO" << endl;
			continue;
		}

		else if (sum <= 3 && sum >= 0)
				{cout << "YES" << endl;}
		else {cout << "NO" << endl;}
	}
	//system("pause");
	return 0;
}