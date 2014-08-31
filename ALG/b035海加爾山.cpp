#include <iostream>
using namespace std;

int main(){
	int n, length,total;
	while(cin >> n){

		if (n == 0){
			break;
		}
		total = 0;
		while (n--){
			cin >> length;
			total += length*length;
		}
		cout << total << endl;
	}
	return 0;
}