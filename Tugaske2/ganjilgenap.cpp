#include <iostream>
using namespace std;

int main (){
	
	int nilai;
	cout<<"masukan angka :";
	cin>>nilai;
	string gg = nilai % 2 == 0 ? "Genap" : "Ganjil";
	cout<<gg;
	
}
