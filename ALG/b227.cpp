#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

int main() {
	int seven, family;
	int K, n, p;
	cin >> K;
	while (K--){
		cin >> n >> p;
		seven = int(ceil(0.812*n*p));
		family = int(ceil((n/2*0.6*p) + ((n+1)/2 * p)));
		if (seven > family){
			cout << ": )" << endl;
		}
		else if (seven == family){
			cout << "SAME" << endl;
		}
		else {
			cout << "8-12=-4" << endl;
		}
	}
	return 0;
}