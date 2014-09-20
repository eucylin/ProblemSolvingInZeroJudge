#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

struct data{
	string name;
	int HH;
	char colon[1];
	int MM;
};

data deal_time(data student,data t){
	data anst;
	int minus = 0;
	if (t.MM - student.MM < 0){anst.MM = 60 + t.MM - student.MM; minus ++;}
	else {anst.MM = t.MM - student.MM;}
	anst.HH = t.HH - student.HH - minus;
	return anst;
}
int main(){
	int N;
	cin >> N;
	while (N--){
		int K;
		data et, lt;
		cin >> K;
		cin.width(2);
		cin >> et.HH;
		cin >> et.colon;
		cin >> et.MM;
		cin.width(2);
		cin >> lt.HH;
		cin >> lt.colon;
		cin >> lt.MM;
		while (K--){
			data student;
			data e_anst, l_anst;
			cin >> student.name;
			cin.width(2);
			cin >> student.HH;
			cin >> student.colon;
			cin >> student.MM;
			e_anst = deal_time(student, et);
			l_anst = deal_time(student, lt);			
			cout << setw(2) << setfill('0') <<
			e_anst.HH << ":" << setw(2) << setfill('0') <<
			e_anst.MM << " " << setw(2) << setfill('0') << 
			l_anst.HH << ":" << setw(2) << setfill('0') <<
			l_anst.MM << endl;
		}
	}
	return 0;
}