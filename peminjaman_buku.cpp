#include <iostream>
using namespace std;

int main()
{
    int jumlahBuku = 0;
    cin >> jumlahBuku;

    int statusBuku[100];
    for (int i = 0; i < jumlahBuku; i++)
    {
        cin >> statusBuku[i];
    }

    int bukuTersedia = 0;
    for (int i = 0; i < jumlahBuku; i++)
    {
        if (statusBuku[i] == 1)
        {
            bukuTersedia++;
        }
    }

    cout << bukuTersedia << endl;

    return 0;
}