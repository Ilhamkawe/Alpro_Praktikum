#include <iostream>
using namespace std;

int main (){
	
	double m,ty,tf,ti;
	double const 	y = 0.9144,
					f = 0.3048,
					i = 0.0254;
	
	cout<<"=============Konversi==============="<<endl;
	cout<<"Masukan Satuan Panjang (Meter) :";
	cin>>m;
	cout<<"===================================="<<endl;
	
	ty = m * y;
	tf = m * f;
	ti = m * i;
	
	cout<<m<<" meter sama dengan, "<<ty<<" yard, "<<tf<<" kaki, "<<ti<<" inchi";
	
	
	
	
	
}
