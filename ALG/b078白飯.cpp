#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
	int n,sum, count;
	while(cin >> n){
		count = 0;
		sum = 0;
		if (n == 0){
			break;
		}
		vector <int> s(n);
		for (int i = 0; i < n; i++){
			cin >> s[i];
			sum += s[i];
		}
		double avg;
		avg = (double)sum / n;
		for (int j = 0; j < n; j++){
			if (s[j] < avg){
				count ++;
			}
		}
		cout << count << endl;
		continue;
	}
	return 0;
}
