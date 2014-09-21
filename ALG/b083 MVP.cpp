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
                	cin.ignore();
			if (cin.get() == 'P'){
				p[countP].position = 'P';
				cin >> p[countP].name >> p[countP].win >> p[countP].lose >> p[countP].rate;
				countP++;
			}else{
				b[countB].position = 'B';
				cin >> b[countB].name >> b[countB].win >> b[countB].lose >> b[countB].rate;
				countB++;
			}
		}
		sort(p.begin(), p.begin() + countP, pCmp);
		sort(b.begin(), b.begin() + countB, bCmp);
		for (int i = 0; i < countP ; i++){
			cout << p[i].position << " " << p[i].name << endl;
		}
		for (int i = 0; i < countB ; i++){
			cout << b[i].position << " " << b[i].name << endl;
		}
		if (k == 0){break;}
		else{cout << "=====" << endl;}
	}
	//system("pause");
	return 0;
}
