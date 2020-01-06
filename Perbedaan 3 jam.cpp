#include <string>
#include <iostream>
using namespace std;
int main(){
	struct data_jam{
	int j,m,d;
};
	data_jam jam1, jam2, jam3;
	cout<< "Masukkan jam pertama"<<endl;
	cout<< "Jam	: "; cin>> jam1.j;
	cout<< "Menit	: "; cin>> jam1.m;
	cout<< "Detik	: "; cin>> jam1.d;
	cout<<endl;
	cout<< "Masukkan jam kedua"<<endl;
	cout<< "Jam	: "; cin>> jam2.j;
	cout<< "Menit	: "; cin>> jam2.m;
	cout<< "Detik	: "; cin>> jam2.d;
	jam3.j=((jam2.j*3600)-(jam1.j*3600))/3600;
	jam3.m=((jam2.m*3600)-(jam1.m*3600))/3600;
	jam3.d=jam2.d-jam1.d;
	cout<<endl;
	cout<< "Selisih : "<< jam3.j<< " : "<< jam3.m<< " : "<< jam3.d<<endl;
}
