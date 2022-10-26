#include "Menu.h"

using namespace std;

int main() {
	/*fstream fs; int n, m;
	Staff* NV = new Staff[20];
	Director* QL = new Director[10];
	fs.open("staff.txt", ios::in | ios::out);
	fs >> n;
	for (int i = 0; i < n; i++) {
		(NV + i)->readFile(fs);
	}
	fs >> m;
	for (int i = 0; i < m; i++) {
		(QL + i)->readFile(fs);
	}*/
	/*fs.seekp(0);
	fs << n << "\n";
	for (int i = 0; i < n; i++) {
		(NV + i)->writeFile(fs);
	}
	fs << m << "\n";
	for (int i = 0; i < m; i++) {
		(QL + i)->writeFile(fs);
	}*/
	/*string account, password;
	int cnt = 0;
	cout << "\t\t\t\t\t\t DANG NHAP:";
	do {
		cout << "\n\tTEN TAI KHOAN: ";
		getline(cin, account);
		cout << "\tMAT KHAU: ";
		getline(cin, password);
		for (int i = 0; i < n; i++) {
			if (account.compare((NV + i)->getAccount()) == 0 && password.compare((NV + i)->getPassword()) == 0) {
				cnt = 1;
			}
		}
		if (cnt != 1) {
			for (int i = 0; i < m; i++) {
				if (account.compare((QL + i)->getAccount()) == 0 && password.compare((QL + i)->getPassword()) == 0) {
					cnt = 2;
				}
			}
		}
		if (cnt == 0) {
			cout << "\n\tTai Khoan Khong Hop Le.";
			cout << "\n\t1. Dang Nhap Lai.";
			cout << "\n\t2. Thoat";
			cout << "\n\t";
			int x; cin >> x;
			if (x == 2) break;
			cin.ignore();
		}
	} while (cnt == 0);
	if (cnt == 1) {
		cout << "\tMENU NV";
	}*/
	Menu menu;
	//menu.stMenu();
	menu.login();
	return 0;
}