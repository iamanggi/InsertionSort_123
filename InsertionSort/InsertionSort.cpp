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

// procedure insertion sort
void insertionsort()
{
	int temp;		//membuat variabel data temporer atau penyimpanan sementara
	int j;			// membuat variabel j sebagai penanda

	for (int i = 1; i < n; i++)			//1. looping dengan i dimulai dari 1 hingga n-1
	{

		temp = arr[i];					//2. simpan nilai array [i] ke variabel sementara temp

		j = i - 1;						//3. setting nilai j sama dengan i-1;

		while (j >= 0 && arr[j] > temp)		//4. looping while dimana nilai j lebih besar sama dengan 0 dan
		{									// arr[j] lebih besar daripada temp
			arr[j + 1] = arr[j];			// a. simpan arr[j + 1]
			j--;							// b. decrement nilai j by 1
		}

		arr[j + 1] = temp;					// 5. simpan nilai temp ke dalam arr [j + 1]


		cout << endl;
		cout << "\nPass " << i << "; ";
		for (int k = 0; k < n; k++)
		{
			cout << arr[k] << " ";
		}
	}
};
 
void display()
{
	cout << endl;
	cout << "total element movement " << n - 1 << endl;		// cout movement element
	cout << "\n=====================" << endl;				// output ke layar
	cout << "element array yang telah tersusun" << endl;	//output ke layar
	cout << "\n=====================" << endl;				// output ke layar

	for (int j = 0; j < n; j++)
	{														// looping j dimulai dari 0 hingga n-1 
		cout << arr[j] << endl;								// output ke layar

	}
	cout << endl;					//output baris kosong 

}


int main()
{
	input();			// memanggil input 
	insertionsort();	// memanggil insertionsort 
	display();			// memanggil display
}