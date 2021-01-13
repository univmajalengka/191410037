#include <iostream>

using namespace std;

int main()
{
	int i, x;
	
	cout << "Masukkan jumlah angka : "; cin >> x;
			for (i=1; i<=x; i++){
				if ((i % 3 == 0) && (i % 5 != 0)){
					cout << "Upin " << endl;
				}
				else if ((i % 3 != 0) && (i % 5 == 0)){
					cout << "Ipin" << endl;
				}
				else if ((i % 3 == 0) && (i % 5 == 0)){
					cout << "Upin & Ipin" << endl;
				}
				else{
					cout << i << endl;
				}
		}
	return 0;
}

