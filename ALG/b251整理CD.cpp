#include <iostream>
using namespace std;

int Check(int max, int N){
	if ((max % N) == 0){
		max --;
		return max;
	}
	else {return max;}
}

bool Special_Case(int N, int M, int K){
	if (K == 1 && M % N == 0){return true;}
	else if (N == 1){return true;}
	else if (N == 2 && M % N == 0){return true;}
	else {return false;}
	}

int main(){
	unsigned int T, N, M, K;
	cin >> T;
	while (T--){
		cin >> N >> M >> K;
		int count = 0;
		if (Special_Case(N, M, K)){
			cout << "IMPORTANT" << endl;
			continue;}

		if (K == 1 && M % N != 0){ count = M;}
		else if (N == 2 && M % N != 0){
			if (M % K == 0){
				count = M / K;
			} 
			else if (M % K != 0 && K == N){
				count = M;
			}
			else if(M % K != 0 && K != N){
				if ((M / K + 1) % N == 0){
					count = M / K + 2;
				}
				else{count = M / K + 1;}
			}	
		}
		else {
			while(M > 0){
				if (M > K){
					if ((count + 1) % N == 0){
						M -= Check(K - 1, N);
					}else {M -= Check(K, N);}
					count ++;
					continue;
				}else {
					if ((count + 1) % N == 0){
						M -= Check(M - 1, N);
					}else {M -= Check(M, N);}	
					count ++;
					continue;
				}
			}
		}
		if (count != 0){cout << count << endl;}
		else {cout << "IMPORTANT" << endl;}
		//count == 0 ? cout << "IMPORTANT" : cout << count;
		//cout << endl;
	}
	return 0;
}


//F(M, K) = 