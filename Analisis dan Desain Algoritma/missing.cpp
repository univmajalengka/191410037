#include <iostream>

using namespace std;

int missing (int a[], int x){
	int total;  
	total  = ((x + 1) * (x + 2))/2;  
	for (int i = 0; i < x; i++)    
    	total -= a[i];  
	return total;
}
int main() {
	int n;   
		cout << "Jumlah angka yang akan dimasukkan : "; cin >> n;    
		int arr[n-1];
		   
		for(int i=0; i<n; i++){   
			cout << "Angka ke " << i+1 << " : "; cin >> arr[i];  
   }
   cout << endl; 
   cout << "Angka yang hilang : " << missing(arr,5);
   return 0;
}
