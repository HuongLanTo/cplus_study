#include <iostream>
#include <string>
#include "SinhVien.h"
using namespace std;

int main() {
	int n;
	SinhVien SV[50];
	cout << "Nhap so sinh vien: ";
	cin >> n;
	cout << endl;
	for (int i = 0; i < n; i++) {
		cout << "Sinh vien thu " << i + 1 << ": " << endl;
		SV[i].NhapThongTin();
	}	
	cout << endl;

	//in danh sach sinh vien
	cout << "Danh sach sinh vien: " << endl;
	for (int i = 0; i < n; i++) {
		cout << SV[i].GetTenSV() << endl;
	}

	//sap xep va in ra sinh vien theo diem tong ket
	for (int i = 0; i < n; i++) {
		for (int j = i; j < n; j++) {
			if (SV[i].TongKet() < SV[j].TongKet()) {
				SinhVien tam = SV[i];
				SV[i] = SV[j];
				SV[j] = tam;
			}
		}
	}
	cout << "Danh sach sinh vien theo diem tong ket tu cao xuong thap la: " << endl;
	for (int i = 0; i < n; i++) {
		cout << SV[i].GetTenSV() << ": " << SV[i].TongKet() << endl;
	}
	cout << endl;

	//sinh vien co diem tong ket cao va thap nhat
	cout << "Sinh vien co diem tong ket cao nhat: " << SV[0].GetTenSV() << endl;	
	cout << "Sinh vien co diem tong ket thap nhat: " << SV[n - 1].GetTenSV() << endl;
}
