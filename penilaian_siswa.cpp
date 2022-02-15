#include <iostream>
using namespace std;

int main(){
	char nama [100][100];
	float nilai_ph[100], nilai_pts[100], nilai_pas[100], rata[100], akhir[100], no;
	
	cout<<"masukan jumlah siswa : ";
	cin>>no;
	
	for (int i=1; i<=no; i++) {
		cout<<"masukan nama siswa " <<i<<" : ";
		cin>>	nama[i];
		
		cout<<"masukan nilai PH  : ";
		cin>>	nilai_ph[i];
		
		cout<<"masukan nilai PTS : ";
		cin>> 	nilai_pts[i];
		
		cout<<"masukan nilai PAS : ";
		cin >>	nilai_pas[i];
		
	}


	for (int i=1; i<=no; i++){
		cout<<"============================="<<endl;
		cout<< "Nama Siswa" <<i<<" : "<<nama[i]<<endl;
		rata[i]=(nilai_ph[i]+nilai_pts[i]+nilai_pas[i])/3;
		akhir[i]=(2*rata[i]+nilai_pts[i]+nilai_pas[i])/4;
		cout<<"nilai rata-rata : "<<rata[i]<<endl;
		cout<<"nilai akhir     : "<<akhir[i]<<endl;
		cout<<"============================="<<endl;
	}
	
}
