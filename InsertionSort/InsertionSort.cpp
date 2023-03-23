#include <iostream>
using namespace std;

int arr[20];            // Membuat array dengan panjang data 20 
int n;                  // membuat variabel inputan n

void input()
{		// procedure input 
	while (true)
	{
		cout << "masukan jumlah data pada array : ";		// membuat inputan jumlah elemen array
		cin >> n;											// memanggil variabel inputan n

		if (n <= 20)
		{		// membuat kondisi n tidak lebih dari 20 
			break;

		}
		else
		{
			cout << "\nArray yang anda masukan maksimal 20 elemen. \n";		//menampilkan pesan jika data lebih dari 20 
		}

	}
	cout << endl;
	cout << "====================" << endl;								// membuat jarak per baris program 
	cout << "Masukan Elemen Array" << endl;								// membuat tampilan susunan data elemen array
	cout << "====================" << endl;

	// menggunakan perulangan for untuk menyimpan data pada array 
	for (int i = 0; i < n; i++)
	{
		cout << "data ke-" << (i + 1) << ": ";		// masukan atau menginputkan nilai data n
		cin >> arr[i];								// masukan nilai data n kedalam Array arr
	}
};