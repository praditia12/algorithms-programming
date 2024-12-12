#include <iostream>
using namespace std;

int main()
{
    int jumlahHari = 0;
    cin >> jumlahHari;

    int intensitasHujan[100];
    for (int i = 0; i < jumlahHari; i++)
    {
        cin >> intensitasHujan[i];
    }

    // average intensitas hujan
    int totalIntensitas = 0;
    for (int i = 0; i < jumlahHari; i++)
    {
        totalIntensitas += intensitasHujan[i];
    }
    double average = totalIntensitas / jumlahHari;

    cout << "Rata-rata intensitas hujan: " << average << endl;

    int totalHariDiatasRataRata = 0;
    for (int i = 0; i < jumlahHari; i++)
    {
        if (intensitasHujan[i] > average)
        {
            totalHariDiatasRataRata++;
        }
    }

    cout << "Total hari diatas rata-rata: " << totalHariDiatasRataRata << endl;

    return 0;
}