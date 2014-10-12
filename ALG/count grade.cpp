#include <iostream>
#include <vector>
using namespace std;

int main(){
	vector<int> count(5);
	while(true){
		cout << "1.必修 2.選修 3.通識 4.自由學分" << endl <<"請輸入課程類別,結束請輸入 0 : ";
		int S;
		cin >> S;
		if(S == 0){break;}
		while(true){
			int N;
			cout << "請入學分數, 全部輸入完畢請輸入 0 : " ;
			cin >> N;
			if (N == 0){break;}
			count[S] += N;
		}
	}
	cout << "你的學分統計為:" << endl << "必修: " << count[1] << endl
	<< "選修: " << count[2] << endl << "通識: " << count[3] << endl 
	<< "自由學分: " << count[4] << endl <<"============"<< "請輸入0以離開:";
	if (cin.get() == '0') {return 0;}
}