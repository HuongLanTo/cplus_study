#include <iostream>
#include <string>
#include "SinhVien.h"
using namespace std;

void SinhVien::NhapThongTin() {
	cout << "Ma SV: ";
	cin >> MaSV;
	cout << "Ten SV: ";
	fflush(stdin);
	getline(std::cin, TenSV);	
	cout << "Diem ly thuyet: ";
	cin >> DiemLT;
	cout << "Diem thuc hanh: ";
	cin >> DiemTH;
};

string SinhVien::GetTenSV() {
	return TenSV;
};
string SinhVien::GetMaSV() {
	return MaSV;
};
void SinhVien::SetDiemLT(double LT) {
	DiemLT = LT;
};
double SinhVien::GetDiemLT() {
	return DiemLT;
};
void SinhVien::SetDiemTH(double TH) {
	DiemTH = TH;
};
double SinhVien::GetDiemTH() {
	return DiemTH;
};

double SinhVien::TongKet() {
	return (DiemLT * 0.3 + DiemTH * 0.7);
};

void SinhVien::XepHang() {
	if (TongKet() > 0 && TongKet() < 4) {
		cout << "Hang trung binh";
	}
	else if (TongKet() >= 4 && TongKet() <= 7) {
		cout << "Hang kha";
	}
	else if (TongKet() > 7 && TongKet() <= 10) {
		cout << "Hang gioi";
	}
};