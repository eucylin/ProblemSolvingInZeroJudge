#include <iostream>
#include <vector>
using namespace std;

int main(){
	int N, M;
	cin >> N;
	while (N--){
		cin >> M;
		vector<char> c(256);
		vector<int> next_num(256);
		int number;
		{
			int first_time;
			for (int i = 0; i < M; i++){
				if (i == 0){
					cin >> first_time;
					cin >> c[first_time] >> next_num[first_time];
				} else {
					cin >> number;
					cin >> c[number] >> next_num[number];
				}
			}
			number = first_time;
		}
		for (int i = 0; i < M; i++){
			cout << c[number];
			number = next_num[number];
		}
		cout << endl;
	}
	return 0;
}