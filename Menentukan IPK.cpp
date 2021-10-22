//Program Menghitung IPK

#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;

main(){
	menu:
	int n, i=1;
	float nilai,rata,jml=0,jawab;
	
	cout<<"||======================||";
	cout<<"||PROGRAM MENENTUKAN IPK||";
	cout<<"||======================||"<<endl<<endl;
	cout<<"Berapa Banyak Matkul="; cin>>n;
	while(i<=n){
		cout<<"Masukkan Nilai Mata Kuliah ke "<<i<<" (0=E 1=D 2=C 3=B 4=A)="; cin>>nilai;
		jml=jml+nilai;
		rata=jml/n;
		i++;
	}
	cout<<"\nIPK="<<rata;
	getch ();
	
}
