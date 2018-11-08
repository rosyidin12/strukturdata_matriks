#include <iostream>
#include <iomanip>
#include <stdlib.h>
using namespace std;
int main()
{
    int x[100][100];
    int m;
    cout<<"masukkan panjang matriks : ";cin>>m;

    for (int a=0;a<m;a++){
        for (int b=0;b<m;b++){
            cout << "Matriks " <<a<<","<<b<< " = ";
            cin >> x[a][b];
                if(m==a+b+1)
                    x[a][b];
        }
    }
    cout << "\n============================================" << endl;
    cout << "Hasil yang anda masukan, Tampilannya Adalah " << endl;
    cout << "============================================" << endl;
    for (int a=0;a<m;a++){
        for(int b=0;b<m;b++){
            cout << x[a][b]<< " ";
        }cout << endl;
    }
 system("pause");
}
