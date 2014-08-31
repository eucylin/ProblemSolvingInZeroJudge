#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
string deal_time(int dlineHH,int spendHH,int dlineMM,int spendMM){
	int ansHH,ansMM;
	int minus = 0;
	string ans;
	if (dlineMM - spendMM < 0){ansMM = 60 + dlineMM - spendMM; minus ++;}
	else {ansMM = dlineMM - spendMM;}
	ansHH = dlineHH - spendHH - minus;
	ans = ansHH + ':' + ansMM;
	return ans;
}
int main(){
	int N;
	while (N--){
		int K;
		int earliestHH, earliestMM, latestHH, latestMM;
		cin >> K;
		cin >> earliestHH;
		cin >> earliestMM;
		cin >> latestHH;
		cin >> latestMM;
		while (K--){
			int HH, MM;
			string trash;
			cin >> trash;
			cin >> HH;
			cin >> MM;

			cout << deal_time(earliestHH, HH, earliestMM, MM);
			cout << deal_time(latestHH, HH, latestMM, MM);
		}
	}
	return 0;
}