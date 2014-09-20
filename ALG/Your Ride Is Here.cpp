/*
ID: eucylin1
PROG: ride
LANG: C++               
*/
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){
	ofstream fout ("ride.out");
    ifstream fin ("ride.in");
    string a, b;
    int sumA = 1, sumB = 1;
    fin >> a >> b;
    for (int i = 0; i < a.length(); i++){
    	sumA *= (a[i] - 'A' + 1);
    }
    for (int i = 0; i < b.length(); i++){
    	sumB *= (b[i] - 'A' + 1);
    }
    if (sumA % 47 == sumB % 47){
    	fout << "GO" << endl;
    }else {
    	fout << "STAY" << endl;
    }
	return 0;
}
