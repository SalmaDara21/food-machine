#include <iostream>
#include <string.h>
using namespace std;



struct listSnax{
	char name[30];
	int harga;
	int stok;
};
listSnax snack[10];
void outListSnax(){
	strcpy(snack[0].name,"Rice Balls"); (snack[0].harga=13000); (snack[0].stok=20);
	strcpy(snack[1].name,"Sandwich"); (snack[1].harga=8000); (snack[1].stok=30);
	strcpy(snack[2].name,"Hotdogs"); (snack[2].harga=9000); (snack[2].stok=30);
	strcpy(snack[3].name,"Salad"); (snack[3].harga=11000); (snack[3].stok=30);
	strcpy(snack[4].name,"French Fries"); (snack[4].harga=7500); (snack[4].stok=30);
	strcpy(snack[5].name,"Noodles"); (snack[5].harga=6000); (snack[5].stok=30);
	strcpy(snack[6].name,"Lunch Set"); (snack[6].harga=24000); (snack[6].stok=30);
	strcpy(snack[7].name,"Lemon Soda"); (snack[7].harga=4000); (snack[7].stok=30);
	strcpy(snack[8].name,"Lemon Tea"); (snack[8].harga=4500); (snack[8].stok=30);
	strcpy(snack[9].name,"Coca-Cola"); (snack[9].harga=5000); (snack[9].stok=30);

}


int main(){
    int checkout;
    int uangKertas;
    listSnax();
	outListSnax();
	
    inputUang:
    cout << "Masukkan Uang Kertas (Min. Rp. 5.000): "; cin >> uangKertas; cout << endl;



    if(uangKertas>=5000){
    	reqBarang:
		for (int i=0; i<10; i++){
		cout<<"\n"<<i+1<<") "<<snack[i].name<<"\t\t"<<snack[i].harga<<"\t"<<snack[i].stok<<" remaining";
		}
    	cout << "\n" << "11) Tidak Ingin Membeli Apa-Apa" << endl;
    	cout << "Ingin Membeli Apa?: ";
    	cin >> checkout;
    	if (checkout>=1 && checkout<=10){
    		if(snack[checkout-1].stok==0){
    			cout << "Barang Ini Sudah Habis" << endl;
    			goto reqBarang;
			}
		}
		if(checkout==11){
			cout << "Terima Kasih Telah Menggunakan Mesin Ini" << endl;
		} else if(checkout >=1 && checkout<=10){
			if(uangKertas>=20000){
				cout << "Anda Memilih " << snack[checkout-1].name << endl << endl;
				cout << "dan Kembalian Anda Sebesar: Rp. " << uangKertas-snack[checkout-1].harga << endl;
				snack[checkout-1].stok=snack[checkout-1].stok-1;
				cout << endl << snack[checkout-1].name << " Tersisa " << snack[checkout-1].stok << endl;
				goto inputUang;
			}else{
				cout << "Uang Anda Tidak Cukup, Mohon Masukkan Pecahan Lebih Besar" << endl << endl;
				goto inputUang;
			}
			
		}
			
		
    	
    	
	}else{
		cout << "Pecahan Uang Tidak Diterima, Mohon Masukkan Uang yang Diterima" << endl << endl;
		goto inputUang;
	}
	
	
    
    

	
	
	


	return 0;
    
}
