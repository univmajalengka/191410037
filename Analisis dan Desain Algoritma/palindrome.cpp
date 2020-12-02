#include <iostream>
#include <string.h>

using namespace std;

int main(){
	char a [100], b[100];
	
	cout << "Program pengecekan palindrome" << endl;
	cout << "Masukkan kata yg ingin dicek : "; cin >> a;
	
	strcpy(b,a);
	strrev(b);
	
	if(strcmp(a,b) == 0){
		cout << "Kata " << a << " adalah kata polindrome";
	}else{
		cout << "Kata " << a << " bukan kata polindrome";
	}
	
}
