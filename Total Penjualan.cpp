#include <iostream>
#include <conio.h>
using namespace std;

main(){
	menu:
	int jmlbrg, n, hrg=0, hrgtl, i=1, jwb;
	
	cout<<"||==================================||"<<endl;
	cout<<"||Program Menghitung Total Belanjaan||"<<endl;
	cout<<"||==================================||"<<endl<<endl;
	
	cout<<"---------------------------------------------"<<endl;
	cout<<"Silahkan Masukkan Data Di Bawah Ini"<<endl;
	cout<<"Jumlah Barang="; cin>>jmlbrg;
	while(i<=jmlbrg){
		cout<<"Masukkan Harga Barang Ke "<<i<<" ="; cin>>n;
		hrg=hrg+n;
		i++;
	}
	cout<<"---------------------------------------------"<<endl<<endl;
	
	if(hrg>=500000){
		hrgtl=hrg-(hrg*0.1);
	}
	else if(hrg>=200 && jmlbrg<=500000){
		hrgtl=hrg-(hrg*0.05);
	}
	else if(hrg<=200000){
		hrgtl=hrg;
	}
	
	cout<<"----------------------------------"<<endl;
	cout<<"Harga Asli="<<hrg<<endl;
	cout<<"Harga Setelah Di Diskon="<<hrgtl<<endl;
	cout<<"----------------------------------"<<endl<<endl;
	
	getch();
}
