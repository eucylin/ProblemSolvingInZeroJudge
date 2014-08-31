#include <iostream>
using namespace std;

int main(){
	int K, a, b, c;
	cin >> K;
	while (K--){
		cin >> a >> b >> c;
		if (a != b && b != c && a != c){
			cout << "YES" << endl;
		}
		else{
			cout << "NO" << endl;
		} 

		
	}
	return 0;
}