#include <iostream>
#include <string>
using namespace std;
int total;
void purify(int num){
    total = 0;
	while (num >= 10){
		total += (num%10);
		num /= 10;
	}
	total += num;
}

int main(){
	int N, L;
	cin >> N;
	while (N--){
		cin >> L;
		purify(L);
		while (total >= 10){
			total =  (total%10)+(total/10);
		}
		if (total == 2){
			cout << total << ", " << "Yes" << endl;
		}
		else {
			cout << total << ", " << "No" << endl;
		}

	}
	return 0;
}
