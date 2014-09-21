/*
ID: eucylin1
PROG: gift1
LANG: C++11               
*/
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;

int main(){
	ofstream fout ("gift1.out");
    ifstream fin ("gift1.in");
    int NP;
    fin >> NP;
    map<string, int> d;
    vector<string> name;
    for (int i = 0; i < NP; i++){
    	string name__;
    	fin >> name__;
    	name.push_back(name__);
    }
    for (int i = 0; i < NP; i++){
    	int j, money;
    	string giver;
    	fin >> giver;
    	fin >> money >> j;
    	if (money == 0 && j == 0){continue;}
    	for (int i = 0; i < j; i++){
    		string receiver;
    		fin >> receiver;
    		d[receiver] += money / j;
    	}
    	d[giver] -= money / j * j;
    }
    for (auto iter = name.begin(); iter != name.end(); iter++){
    	fout << *iter << " " << d[*iter] << endl;
    }
    return 0;
}
