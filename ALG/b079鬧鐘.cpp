#include <iostream>
using namespace std;

int n;

int A(int n){
	if (n <= 2){
		return 1;
	}else {
		return A(n-A(n-1)) + A(n-1-A(n-2));
	}

}

int main(){
	while(cin >> n){
		if (n == 0){
			break;
		}
		cout << A(n) << endl;
	}
	return 0;
}