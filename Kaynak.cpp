#include <iostream>
#include <string>
using namespace std;

class ortalama {
public:
	int toplican;
	string harf_notu;
};
ortalama deg;

void vize() {
	//VIZE NOTU HESAPLAYICI
	cout << "Vize notunuzu giriniz:\n";
	int vize_notu;
	cin >> vize_notu;
	int v = vize_notu * 4 / 10;
	deg.toplican = deg.toplican + v;

}
void final() {
	//FINAL NOTU HESAPLAYICI
	cout << "Final notunuzu giriniz:\n";
	int final_notu;
	cin >> final_notu;
	int f = final_notu * 6 / 10;
	deg.toplican = deg.toplican + f;
}
int main() {
	vize();
	final();
	string hf = "Harf Notunuz:";
	cout << "Ders Notunuz:" << deg.toplican << "\n";
		while (deg.toplican>=0 && deg.toplican<=49) {
		deg.harf_notu = "FF";
		cout << hf << deg.harf_notu;
		return 0;
		}
		while (deg.toplican>=50 && deg.toplican<=59) {
		deg.harf_notu = "DC";
		cout << hf << deg.harf_notu;
		return 0;
		}
		while (deg.toplican>=60 &&deg.toplican<=65) {
		deg.harf_notu = "CC";
		cout << hf << deg.harf_notu;
		return 0;
		}
		while (deg.toplican>=66 &&deg.toplican<=72) {
		deg.harf_notu = "CB";
		cout << hf << deg.harf_notu;
		return 0;
		}
		while (deg.toplican>=73 && deg.toplican<=79) {
		deg.harf_notu = "BB";
		cout << hf << deg.harf_notu;
		return 0;
		}
		while (deg.toplican>=80 &&deg.toplican<=87) {
		deg.harf_notu = "BA";
		cout << hf << deg.harf_notu;
		return 0;
		}
		while (deg.toplican>=88&&deg.toplican<=100) {
		deg.harf_notu = "AA";
		cout << hf << deg.harf_notu;
		return 0;
		}
}
