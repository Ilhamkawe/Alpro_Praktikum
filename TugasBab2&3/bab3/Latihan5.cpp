#include <iostream>
using namespace std;

int main(){
	
	double tot_beli,
	potongan ,
	bayar ;
	
	cout<<"Total Pembelian Rp.";
	cin>>tot_beli;
	
	if(tot_beli >= 50000){
		
		potongan = 0.2 * tot_beli;
		
		
	}else{
		
		potongan = 0.05 * tot_beli;
		
		
		
	}
	
	cout<<"Besar potongan"<<potongan<<endl;
	bayar = tot_beli - potongan;
	
	cout<<"total :"<<bayar;
	
}
