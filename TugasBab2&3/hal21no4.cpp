#include <iostream>
using namespace std;

int main (){
	
	double s,t,ideal,tinggi;
	
	cout<<"Menghitung Berat badan ideal seseorang "<<endl;
	cout<<"masukan tinggi badan : ";
	cin>>tinggi;
	
	s = tinggi-100;
	t = s * 10 / 100;
	ideal = s - t ;
	
	cout<<ideal;
	
}
