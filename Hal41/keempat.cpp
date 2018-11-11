#include <iostream>
using namespace std;

int main (){
	
	int l,a,b;
	a = 1;
	l=0;
	cout<<"Mau ngulang berapa kali ? ";
	cin>>b;

	while (a <= b){
		cout<<a<<",";
		l+=a;
		a++;
	}	
	cout<<endl;
	cout<<"Jumlah :"<<l;
}
