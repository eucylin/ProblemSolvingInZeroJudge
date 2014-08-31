#include <iostream>
#include <string>
using namespace std;

int main(){
	int N, M;
	while (true){
	cin >> N >> M;
	if (N == 0 && M == 0){
		break;
	}
	if (N%2 == 1)
		// is odd
		N = 0;
	else
		N = 1;
	if (M%2 == 1)
		M = 0;
	else
		M = 1;
	if (N == M)
		cout << "Win" << endl;
	else
		cout << "Loss" << endl;
	}
	
}