#include <iostream>
using namespace std;

int main (){
	
	char huruf;
	cout<<"masukan huruf Kecil  :";
	cin>>huruf;
	
	if	(huruf == 'a' | huruf == 'i' | huruf == 'u' |huruf == 'e' | huruf == 'o' ){
		
		cout<<"Huruf yang anda masukan huruf vokal";
		
	}else{
		cout<<"huruf yang anda masukan huruf konsonan";
	}
	
}
