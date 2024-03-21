#include <iostream>
using namespace std;

int main(){
	
	int tema_buku, judul_buku;
	cout<<"Daftar Tema Buku yang tersedia"<<endl;
	cout<<" 1. pendidikan "<<endl;
	cout<<" 2. Sosial "<<endl;
	cout<<" 3. Budaya "<<endl;
	cout<<"=========================="<<endl;
	cout<<"Masukkan tema yang anda pilih = "; cin>>tema_buku;
	
	switch(tema_buku)
	case 1:{

	
		cout<<"judul buku : "<<endl;
		cout<<"Pendidikan Kewarganegaraan"<<endl;
		cout<<"Kimia"<<endl;
		cout<<"Ekonomi"<<endl;
		cout<<"Masukkan judul buku yang anda pilih"; cin>>judul_buku;
		
		switch(judul_buku)
		case 1 :{
			cout<<"Anda memilih buku Pendidikan Kewarganegaraan";
			break;
		}case 2 :{
			cout<<"Anda memilih buku Kimia";
			break;
		}case 3:{
			cout<<"Anda memilih buku Ekonomi";
			break;
		}Defauld :{
		cout<<"Inputan anda salah";
		break;
		}
	
	}
			
			
		
}
