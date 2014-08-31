#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
	int N;
	cin >> N;
	cin.ignore();
	while (N--){
		string origin;
		string newS;
		getline(cin, origin, '\n');
		getline(cin, newS, '\n');
		sort(origin.begin(), origin.end());
		sort(newS.begin(), newS.end());
		if (origin != newS){
			cout << "impossible" << endl;
		}else {
			cout << "possible" << endl;
		}
	}
	return 0;
}
