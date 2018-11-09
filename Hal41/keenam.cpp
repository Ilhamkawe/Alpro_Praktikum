#include <iostream>
using namespace std;

int main (){
	
	float a,b,h,r;
	a = 1;
	h = 0;
	cout<<"Mau ngulang berapa kali ? ";
	cin>>b;

	do{
		
		cout<<a<<",";
		h+=a;
		a++;
			
	}	
		while (a <= b);
		r = h / b;
		cout<<endl;
		cout<<"Hasil :"<<h<<endl;
		cout<<"Rata Rata :"<<r<<endl ;
	
}
