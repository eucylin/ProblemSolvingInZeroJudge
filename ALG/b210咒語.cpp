#include <iostream>
#include <vector>
using namespace std;

int factorial(int n){
  return (n == 1 || n == 0) ? 1 : factorial(n - 1) * n;
}

int main(){
	int n, m;
	while(cin >> n >> m){
		if(n == 0){break;}
		if(m == 0){cout << "0" << endl; continue;}
		//int vectorSize = factorial(n) / 2;
		vector< vector<int> > f(n, vector<int>(300000));
		int first, last;
		for(int i = 0; i < m; i++){
			cin >> first >> last;
			cin >> f[first][last];
		}
		vector<int> ans(n, 0);
		for(int i = 1; i <  n; i++){
			if (ans[i - 1] + f[i][j] > ans[i - 1]){
				i = j;
				ans[i] = ans[i - 1] + f[i][j];
			}else{
				ans[i] = ans[i - 1];
			}
		}
	}
	return 0;
}