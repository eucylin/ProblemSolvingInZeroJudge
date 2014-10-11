#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
	int T;
	while(cin >> T){
		vector<int> v(T);
		vector<int>	c(T);
		for(int i = 0; i < T; i++){
			cin >> v[i];
			cin >> c[i];
		}
		vector< vector<int> > a(T + 1, vector<int> (101));
		a[0][100] = 0;
		for(int i = 0; i < T; i++){
			for(int j = 1; j <= 100; j++){
				if(j < v[i]){a[i + 1][j] = a[i][j];}
				else{
					a[i + 1][j] = max(a[i][j - v[i]] + c[i], a[i][j]);
				}	
			}
		}
		cout << a[T][100] << endl;
		//a[0] = 0
		//a[j] = max(a[j - v[i]] + c[i], a[j - v[i]])
	}
	return 0;
}
/*
	while(cin >> T){
		vector<int> v(T+1);
		vector<int>	c(T+1);
		for(int i = 1; i <= T; i++){
			cin >> v[i];
			cin >> c[i];
		}
		vector< vector<int> > a(T + 2, vector<int> (102));
		a[0][0] = 0;
		a[0][100] = 0;
		for(int i = 1; i < T; i++){
			for(int j = 0; j <= 100; j++){
				if(j < v[i]){a[i][j] = a[i-1][j];}
				else{
					a[i][j] = max(a[i-1][j - v[i]] + c[i], a[i-1][j]);
				}	
			}
		}
		cout << a[T][100] << endl;

/* 有效的一維陣列
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
	int T;
	while(cin >> T){
		vector<int> v(T);
		vector<int>	c(T);
		for(int i = 0; i < T; i++){
			cin >> v[i];
			cin >> c[i];
		}
		vector<int> a(101);
		a[0] = 0;
		for(int i = 0; i < T; i++){
			for(int j = 100; j >= v[i]; j--){
				a[j] = max(a[j], a[j - v[i]] + c[i]);
			}
		}
		cout << a[100] << endl;
		//a[0] = 0
		//a[j] = max(a[j - v[i]] + c[i], a[j - v[i]])
	}
	return 0;
}
*/