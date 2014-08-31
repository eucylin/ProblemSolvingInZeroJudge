#include <iostream>
#include <string>
using namespace std;

int main(){
	int L, W, x, y;

	while (cin >> L >> W >> x >> y){
		if(L==0 && W==0 && x==0 && y==0){
		 	break;
		 }
		else if ((L%x == 0 && W%y == 0)||(L%y == 0 && W%x == 0)){
			cout << (L*W)/(x*y) << endl;
		}
		else{
			cout << "-1" << endl;
		}
	}
	return 0;
}