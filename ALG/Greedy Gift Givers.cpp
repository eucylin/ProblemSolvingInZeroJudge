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
#include <unordered_map>
using namespace std;

int main(){
	ofstream fout ("gift1.out");
    ifstream fin ("gift1.in");
    int NP;
    fin >> NP;
    unordered_map<int, pair<string, int>> d;
    //map<string ,int>::const_iterator it;
    for (int i = 0; i < NP; i++){
    	string name;
    	fin >> name;
    	d[i] = pair(name, 0);
    }
    for (int i = 0; i < NP; i++){
    	int j, money;
    	string giver;
    	fin >> giver;
    	fin >> money >> j;
    	if (money == 0 && j == 0){break;}
    	for (int i = 0; i < j; i++){
    		string receiver;
    		fin >> receiver;
    		d[j] += money / j;
    	}
    	d[giver] = d[giver] - money + money % j;
    }
    for (auto it = d.begin(); it != d.end(); it++){
    	fout << it->first << " " << it->second << endl;
    }
    return 0;
}
