#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
	int T;
	cin >> T;
	while(T--){
		int F;
		cin >> F;
		map<string, vector<string> > mStore;
		vector<string> friendList;
		while(F--){
			string tmp1, tmp2;
			cin >> tmp1 >> tmp2;
			mStore[tmp1].push_back(tmp2);
			mStore[tmp2].push_back(tmp1);
			int reapeatCount = 0;
			for(auto it = mStore[tmp1].begin(); it != mStore[tmp1].end(); ++it){
				if(find(mStore[tmp2].begin(), mStore[tmp2].end(), *it) != mStore[tmp2].end()){
					reapeatCount += 1;
				}
			}
			int ACount, BCount, sumCount;
			ACount = mStore[tmp1].size(); BCount = mStore[tmp2].size();
			cout << ACount << " " << BCount << " " << reapeatCount << endl;
			sumCount = ACount + BCount - reapeatCount;
			//cout << sumCount << endl;
			// for(auto mIt = mStore.begin(); mIt != mStore.end(); ++mIt){
			// 	for(auto vIt = mStore[mIt->first].begin(); vIt != mStore[mIt->first].end(); ++vIt){
			// 		if(find(friendList.begin(), friendList.end(), vIt->second) != friendList.end()){
			// 			friendList.push_back
			// 		}
			// 	}
			// }	
		}
	}
	return 0;
}