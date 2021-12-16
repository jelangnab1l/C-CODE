#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;

int n,sks=0,tsks=0,bobot;
char mkul[30],kode[5],ket;
float nilai=0,ipk=0,tbobot,ttl;

void nilai_huruf()
{
	if (nilai >=80){
	ket='A';
	}
	else if (nilai >=65){
	ket='B';
	}
	else if (nilai >=55){
    	ket='C';
	}
	else if (nilai >=40){
		ket='D';
	}
	else{
	    ket='E';	
	}
}

void bobot_nilai()
{
	if (ket=='A'){
	bobot=4;
	}
		else if (ket=='B'){
	bobot=3;
	}
		else if (ket=='C'){
	bobot=2;
	}
		else if (ket=='D'){
	bobot=1;
	}
		else if (ket=='E'){
	bobot=0;
	}
}
void rumus(){
	bobot_nilai();
	tsks+=sks;
	tbobot=bobot*sks;
	ttl+=tbobot;
	ipk+=ttl/tsks;
}
main(){
	cout<<"Input Banyak Mata Kuliah = ";cin>>n;
	for (int i=1;i<n;i++){
		cout<<"\n\nData ke = "<<i;
		cout<<"\n-----------------------\n";
		cout<<"Kode Matkul = ";cin>>kode;
		cout<<"Mata Kuliah = ";cin>>mkul;
		cout<<"Jumlah SKS  = ";cin>>sks;
		cout<<"Nilai Angka = ";cin>>nilai;
		nilai_huruf();
		rumus();
		cout<<"\nNilai Huruf = "<<ket;
		cout<<"\nBobot Nilai = "<<bobot;
		cout<<"\nTotal Nilai = "<<tbobot;
}
		cout<<"\n\n==================================\n";
		cout<<"\nTotal SKS                 = "<<tsks;
		cout<"\nTotal Semua Nilai          = ";ttl;
		cout<<"\nIPK                        = "<<setiosflags(ios::fixed)<<setprecision(2)<<ipk;
		getch();
		return 0;
	
}

