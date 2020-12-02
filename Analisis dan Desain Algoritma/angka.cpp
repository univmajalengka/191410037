#include <iostream>
#include <algorithm>

using namespace std;

int main(){
	
	int i, k, j;
	int angka[7]={1,2,2,5,4,4,1};
	reverse(angka, angka + 7); 
			
	for (i=6; i>=0; i--){
		cout << angka[i] ;
			for(k=1; k<=i; k++){
				cout << "0" ;
			}
		cout << endl;
	}	
}
