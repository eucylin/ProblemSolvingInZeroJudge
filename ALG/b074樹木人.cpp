#include <iostream>
#include <vector>
#include <cstdio>
#include <string>
using namespace std;

#define set 48

int main(){
	while(true){
		string s; cin >> s;
		if(s[0] == '0'){break;}
		vector<int> d(s.length(), 0);
		d[0] = 1;
		//cout << s[0] - set << endl;
		//cout << (s[0] > '2') << endl << (int)s[1] - 1<< endl;
		int count = 0;
		//int bouns = 1;
		for(int i = 1; i < s.length(); i++){
			int sum = (s[i - 1]- set) * 10 + (s[i] - set);
			//cout << sum <<endl;
			//if(s[i - 1] > '2' || (s[i - 1] == '2' && s[i] > '6')){
			if(sum > 26){
				d[i] = d[i - 1];
			}else{			
				count += 1;
				if (count == 3){; count -= 1;}
				d[i] += d[i - 1] + bouns;
			}
		}
		cout << d[s.length() - 1] << endl;
	}
	return 0;	
}
