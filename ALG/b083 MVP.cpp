#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cstdlib>
using namespace std;

struct player{
	string position;
	string name;
	int win;
	int lose;
	double rate;
};

bool pCmp (player a, player b){
	if (a.win != b.win){return a.win > b.win;}
	else if (a.lose != b.lose){return a.lose < b.lose;}
	else {return a.rate < b.rate;}
}

bool bCmp (player a, player b){
	if (a.win != b.win){return a.win > b.win;}
	else if (a.lose != b.lose){return a.lose > b.lose;}
	else {return a.rate > b.rate;}
}


int main(){
	int k;
	cin >> k;
	while(k--){
		int n;
		cin >> n;
		vector<player> p(n);
		vector<player> b(n);
		int countP = 0, countB = 0; 
		for (int i = 0; i < n; i++){
			char h = cin.peek();
			if (h == 'P'){
				cin >> p[i].position >> p[i].name >> p[i].win >> p[i].lose >> p[i].rate;
				countP++;
			}else{
				cin >> b[i].position >> b[i].name >> b[i].win >> b[i].lose >> b[i].rate;
				countB++;
			}
			cout << h << endl;
		}
		sort(p.begin(), p.begin() + countP, pCmp);
		sort(b.begin(), b.begin() + countB, bCmp);
		for (int i = 0; i < countP ; i++){
			cout << p[i].position << " " << p[i].name << endl;
		}
		for (int i = 0; i < countB ; i++){
			cout << b[i].position << " " << b[i].name << endl;
		}
	}
	system("pause");
	return 0;
}