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
		for (int i = 0; ; i++){
			cin >> pwd[i];
			if (pwd[i] == '\n'){
				mark_End = i;
				break;
			}
		}
		for (int i = 0; i < mark_End; i++){
			int *index = (int *)find(refer, refer+26, pwd[i]) -K;
			if (*index < 0){
				index += 26;
				ans[i] = (char)*index;
				cout << ans[i];
			}else {
				ans[i] = (char)*index;
				cout << ans[i];
			 }
		}
		cout << endl;
	}
	return 0;
}