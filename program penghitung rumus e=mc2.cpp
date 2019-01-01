#include <iostream>
#include <iomanip>
using namespace std;

int main ()
{
	int e, m;
	float c2 = 89.88; // c = kecepatan laju cahaya konstan = 299792458 m/s, maka nilai c kuadrat = 89.88 KJ/kg
	
	cout << "masukkan nilai m (massa) : ";
	cin >> m;
	
	e = m * c2;
	cout << "Energinya adalah : " << e;
	
	return 0;
	
}
