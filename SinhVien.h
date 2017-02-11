#include <iostream>
#include <string>
using namespace std;

class SinhVien {
	private:
		string TenSV;
		string MaSV;
		double DiemLT;
		double DiemTH;
	public:
		void NhapThongTin();
		string GetTenSV();
		string GetMaSV();
		void SetDiemLT(double DiemLT);
		double GetDiemLT();
		void SetDiemTH(double DiemTH);
		double GetDiemTH();
		double TongKet();
		void XepHang();
};