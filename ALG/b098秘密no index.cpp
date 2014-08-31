#include <iostream>
#include <algorithm>
using namespace std;

int main(){
	int N, K;
	cin >> N;
	while (N--){
		const char refer[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
		char pwd[1000];
		char ans[1000];
		int mark_End;
		cin >> K;
		cin.get();
		for (int i = 0; true; i++){
			cin >> pwd[i];
			if (pwd[i] == '\n'){
				mark_End = i;
				break;
			}
		}
		for (int i = 0; i < mark_End; i++){
			if (*(find(refer, refer+26, pwd[i]) -K) < 0){
				ans[i] = *((find(refer, refer+26, pwd[i]) -K) + 26);
				cout << ans[i];
			}else {
				ans[i] = *(find(refer, refer+26, pwd[i]) -K);
				cout << ans[i];
			 }
		}
		cout << endl;
	}
	return 0;
}