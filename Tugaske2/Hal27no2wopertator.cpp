#include <iostream>
using namespace std;

int main (){
	int s;
	cout<<"masukan suhu :";
	cin>>s;
	
	string su = s <=20 ? "Dingin ":"Panas";
	
	cout<<su;
	
}
