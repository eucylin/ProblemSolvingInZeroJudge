#include <iostream>
#include <vector>
using namespace std;

int main(){
	vector<int> count(5);
	while(true){
		cout << "1.���� 2.��� 3.�q�� 4.�ۥѾǤ�" << endl <<"�п�J�ҵ{���O,�����п�J 0 : ";
		int S;
		cin >> S;
		if(S == 0){break;}
		while(true){
			int N;
			cout << "�ФJ�Ǥ���, ������J�����п�J 0 : " ;
			cin >> N;
			if (N == 0){break;}
			count[S] += N;
		}
	}
	cout << "�A���Ǥ��έp��:" << endl << "����: " << count[1] << endl
	<< "���: " << count[2] << endl << "�q��: " << count[3] << endl 
	<< "�ۥѾǤ�: " << count[4] << endl <<"============"<< "�п�J0�H���}:";
	if (cin.get() == '0') {return 0;}
}