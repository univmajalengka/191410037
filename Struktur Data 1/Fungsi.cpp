#include <iostream>
using namespace std;
int KJ(int j, int m, int d)
{
int td;
td = (j*3600)+(m*60)+d;
return td;	
}
int main ()
{
	int j1, m1, d1, j2 , m2, d2, td1, td2, td3;
	cout<<"Masukkan jam 1 : "; cin>>j1;
	cout<<"Masukkan menit 1 : "; 	cin>>m1;
    cout<<"Masukkan detik 1 : "; 	cin>>d1;
	cout<<"Masukkan jam 2 : "; cin>>j2;
	cout<<"Masukkan menit 2 : "; 	cin>>m2;
    cout<<"Masukkan detik 2 : "; 	cin>>d2;
td1= KJ(j1, m1, d1);
td2= KJ(j2, m2, d2);
td3= td2-td1;
cout<<td3;
}