#include <iostream>
using namespace std;

class bangunDatar {

	//akses modifier
private:
	float panjang, Lebar;
public:
	float Luas;

	void input() { //methode input persegi panjang
		cout << "masukkan panjangnya = ";
		cin >> panjang;
		cout << "masukkan Lebarnya = ";
		cin >> Lebar;
	}

	float hitungluas() {
		return panjang * Lebar;
	}

	void display() {
		cout << "panjangnya = " << panjang << endl;
		cout << "Lebar = " << Lebar << endl;
		cout << "Luasnya = " << hitungluas() << endl;
	}
};

int main() {
	bangunDatar pp;
	pp.input();
	pp.display();

	return 0;

}