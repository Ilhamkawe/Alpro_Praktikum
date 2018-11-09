#include <iostream>
using namespace std;

int main (){
	
	int a,b;
	a = 1;
	cout<<"Mau ngulang berapa kali ? ";
	cin>>b;

	do {
		cout<<a<<",";
		a++;
	}	
		while (a <= b);
	
}
