#include <string>
#include <iostream>
using namespace std;
int main(){
	struct data_jam{
	int j,m,d;
};
	data_jam jam1, jam2, jam3;
	cout<< "Masukkan jam pertama"<<endl;
	cout<< "Jam	= "; cin>> jam1.j;
	cout<< "Menit	= "; cin>> jam1.m;
	cout<< "Detik	= "; cin>> jam1.d;
	cout<<endl;
	cout<< "Masukkan jam kedua"<<endl;
	cout<< "Jam	= "; cin>> jam2.j;
	cout<< "Menit	= "; cin>> jam2.m;
	cout<< "Detik	= "; cin>> jam2.d;
	cout<<endl;
	cout<< "Selisih = ";
	if ((jam2.d - jam1.d) < 0) {
		jam3.d = (60 + jam2.d) - jam1.d;
		}
	else {
		jam3.d = jam2.d - jam1.d;
		}
	if ((jam2.m- jam1.m) < 0) {
		jam3.m= (60 + jam2.m) - jam1.m - 1;
		jam3.j = jam2.j - jam1.j - 1;
		}
	else {
		jam3.m = jam2.m- jam1.m;
		jam3.j = jam2.j - jam1.j;
		}
	if ((jam2.d - jam1.d) < 0, (jam2.m- jam1.m) < 0, jam2.j < jam1.j){
		jam3.j = jam2.j + 11 - jam1.j;
	}
	cout<<jam3.j<<":"<<jam3.m<<":"<<jam3.d<<endl;

}
