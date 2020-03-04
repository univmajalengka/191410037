#include <iostream>
using namespace std;
int nilai[5]; 
int main (){
	int max, i;
	cout << "Berapa jumlah data yang ingin diinput? "; cin >> max;
	for (i=0; i<max; ++i){
	cout << "Masukkan data ke "<< i+1<< " : "; cin >> nilai[i];
	}
	for (i=0; i<max; ++i){
	cout << nilai[i]<<endl;
	}
}
