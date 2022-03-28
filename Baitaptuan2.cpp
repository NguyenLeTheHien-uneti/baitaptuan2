#include<iostream>
using namespace std;
class lopkhachhang {
public:
	char hoten[30];
	int ngay;
	int thang;
	int nam;
	char socmnd[10];
	char hokhau[50];
public:
	void nhap() {
		cout << "nhap ho ten khach hang la ";
		cin >> hoten;
		cout << "nhap ngay sinh khach hang la ";
		cin >> ngay;
		cout << "nhap thang sinh khach hang la ";
		cin >> thang;
		cout << "nhap nam sinh khach hang la  ";
		cin >> nam;
		cout << "nhap so chung minh nhan dan khach hang la ";
		cin >> socmnd;
		cout << "nhap ho khau khach hang la ";
		cin >> hokhau;
	}
	void xuat() {
		cout << "ho ten khach hang la " << hoten << endl
			<< "ngay sinh khach hang la " << ngay << endl
			<< "thang sinh khach hang la " << thang << endl
			<< "nam sinh khach hang la " << nam << endl
			<< "so cmnd khach hang la " << socmnd << endl
			<< "ho khau khach hang la " << hokhau << endl;
	}
	void dem() {
		int dem = strlen(hoten);
		cout <<"so luong tu trong ten khach hang " << dem << endl;
	}
	void xuatt() {
		xuat();
		dem();
		
	}

};


int main() {
	int n;
	cout << "NHAP SO LUONG KHACH HANG LA : ";
	cin >> n;
	lopkhachhang a[100];
	fflush;
	cout << "\n\tNHAP THONG TIN KHACH HANG LA : " << endl;
	for (int i = 0; i < n; i++) {
		cout << "\tKhach hang thu " << i + 1 << endl;
		a[i].nhap();
	}
	cout << "\n\tXUAT THONG TIN KHACH HANG LA : " << endl;
	for (int i = 0; i < n; i++) {
		cout << "\tKhach hang thu " << i + 1 << endl;
		a[i].xuatt();
	}
	
	for (int i = 0; i < n; i++) {
		if (a[i].thang == 12) {
			cout << "\n\tCAC KHACH HANG CO SINH NHAT THANG 12 LA : " << endl;
			a[i].xuat();
		}
	}
	
	return 0;
}