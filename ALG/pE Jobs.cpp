#include <iostream>
#include <vector>
#include <cstdlib>
#include <algorithm>
using namespace std;

struct data {
	int time;
	int psb;
	vector< vector<int> > cfg;
};

int main(){
	int C;
	cin >> C;
	while (C--){
		int jobN, Acost, Bcost, Ccost;
		cin >> jobN >> Acost >> Bcost >> Ccost;
		vector<data> job(jobN);
		for (int i = 0; i < jobN; i++){
			cin >> job[i].time >> job[i].psb;
			for (int j = 0; j < job[i].psb; j++){ 
				vector<int> tmp(3);
				cin >> tmp[0] >> tmp[1] >> tmp[2];
				job[i].cfg.push_back(tmp);
			}
			for(int j = 0; j < job[i].psb; j++){
				for(int k = 0; k < 3; k++){
					cout << job[i].cfg[j][k];
				}
			}
		}
	}
	system("pause");
	return 0;
}