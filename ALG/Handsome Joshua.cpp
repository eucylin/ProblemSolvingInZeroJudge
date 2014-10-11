#include <iostream>
#include <vector>
#include <cstdlib>
#include <algorithm>
using namespace std;

int main(){
	int N;
	while (cin >> N){
		if (N == 0) break;
		vector<int> a(21, 0);
		vector<int> max(21, 0);
		a[1] = N;
		for(int i = 2; i <= a[1]; i++){
			cin >> a[i];
		}
		for(int i = 1; i <= a[1]; i++){
			a.push_back(a[i]);
		}
		for(int i = 1; i <= a[1]; i++){
			vector<int> d(50, 0);
			d[i] = 0;
			for(int j = i + 1; j <= a[1]+ i - 1; j++){
				if (d[j] > 0) continue;
				int use = j;
				if (j > a[1]) {use -= a[1];d[use] = d[a[use]] + 1;}
				else{d[j] = d[a[j]] + 1;}
			}

			//int min = 0;
			max[i] = *max_element(d.begin(), d.end());
			cout << max[i] << endl;
			//if (max[i] <= min){
				//min = max[i];
				//ans.push_back(i);
			//}
		}
		//int *ans = min_element(max.begin(),max.end());
		/*vector<int> ans(0);
		for (int i = 1; i <= a[1]; i++){
			bool f = false;
			for (int j = 1; j <= a[1]; j++){
				if(max[j] == i){ans.push_back(j); f = true;} 
			}
			if(f){break;}
		}
		for(int i = 0; i < ans.size(); i++){
			cout << ans[i] << endl;
		}*/
	}
	system("pause");
	return 0;
}