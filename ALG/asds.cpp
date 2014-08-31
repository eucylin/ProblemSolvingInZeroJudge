#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
	vector<int> s(5);
	for (int i = 5; i >= 0; i--){
		s[i] = i;
	}
	s.push_back(0);
	cout << *find(s.begin(),s.end(), 15);
	return 0;
}
