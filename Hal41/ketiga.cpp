#include <iostream>
using namespace std;

int main (){
	
	int l,a,b;
	a = 1;
	l=0;
	cout<<"Mau ngulang berapa kali ? ";
	cin>>b;
	
	do {
		cout<<a<<",";
		l+=a;
		a++;
			
	}	
		while (a <= b);
		cout<<endl;
		cout<<"jumlah :"<<l;
}
