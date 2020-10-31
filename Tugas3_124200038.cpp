#include <iostream>
using namespace std;

int main (){
	int pass = 124200038;
	string username ="trisnaadisti";

	cout << "Login Akun ===========\n";
	cout <<"Username	: "; cin>>username;
	cout << "Password	: "; cin>>pass;
	cout <<"========================\n\n";
	
	if (username == "trisnaadisti" && pass == 124200038){
		cout << "Login Berhasil";
	} else if(username != "trisnaadisti" && pass != 124200038){
		cout << "Username dan Password anda salah!";
	} else if (username != "trisnaadisti"){
		cout << "Username anda salah!";
	} else if (pass != 124200038){
		cout << "Password anda salah!";
	} else {}
	
	//input matkul
	int opsi, nh1, uts1, uas1, ta1;
	int nh2, uts2, uas2, ta2;
	cout << endl;
	cout << endl;
	if (username == "trisnaadisti" && pass == 124200038){
	cout << "Input Nilai Mata Kuliah\n";
	cout << "1. Algoritma dan Pemrograman"<<endl;
	cout << "2. Kalkulus"<<endl;
	cout << "Pilih : "; cin >> opsi;
	cout << endl;
	} else {
		
	}
	
	if (opsi == 1){
		cout << "Nilai Harian	: "; cin >> nh1;
		cout << "Nilai UTS	: "; cin >> uts1;
		cout << "Nilai UAS	: "; cin >> uas1;
		cout << endl;
		ta1 = (nh1+uts1+uas1)/3;
		if (ta1 >= 80){
			cout << "Anda Lulus Algoritma dan Pemrograman dengan nilai " << ta1 << endl;
		} else if (ta1 < 80){
			cout << "Anda Tidak Lulus Algoritma dan Pemrograman dengan nilai " << ta1 << endl;
		} else {
			cout << "Input anda salah";
			}
	} else if (opsi == 2){
		cout << "Nilai Harian	: "; cin >> nh2;
		cout << "Nilai UTS	: "; cin >> uts2;
		cout << "Nilai UAS	: "; cin >> uas2;
		cout << endl;
		ta2 = (nh2+uts2+uas2)/3;
		if (ta2 >= 80){
			cout << "Anda Lulus Kalkulus dengan nilai " << ta2 << endl;
		} else if (ta2 < 80) {
			cout << "Anda Tidak Lulus Kalkulus dengan nilai " << ta2 << endl;
		} else {}
	} else if (opsi >2){ //maaf kak saya bingung agar pilihannya selain 1 sama 2 soalnya kalau (opsi != 1 && opsi != 2)  
		cout << "Input anda Salah"; // hasilnya dia gabung sama penginputan username dan password. jadinya saya putuskan untuk > 2
		}
	/* else if (opsi != 1 && opsi != 2){
		cout << "Input anda Salah";
	} else {}*/
	
		return 0;
	}



	

