#include <iostream>
using namespace std;

int main (){
	
	int j1,j2,m1,m2,d1,d2,a,b,c,d,e,f,g;
	cout<<"==========masukan waktu 1==========="<<endl;
	cout<<"Masukan Jam   : ";
	cin>>j1;
	cout<<"Masukan Menit : ";
	cin>>m1;
	cout<<"Masukan Detik : ";
	cin>>d1;
	a = (j1*3600) + (m1*60) + d1;
	
	cout<<"==========masukan waktu 2==========="<<endl;
	cout<<"Masukan Jam   : ";
	cin>>j2;
	cout<<"Masukan Menit : ";
	cin>>m2;
	cout<<"Masukan Detik : ";
	cin>>d2;
	b = (j2*3600) + (m2*60) + d2;	
	cout<<"==========Selisih==========="<<endl;
	c = a - b;
	d = c / 3600;
	e = c % 3600;
	f = e / 60;
	g = e %60;
	
	cout<<d<<" : "<<f<<" : "<<g;
}
