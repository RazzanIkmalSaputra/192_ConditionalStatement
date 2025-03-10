#include <iostream>
using namespace std;

double alas, tinggi;

void prosedureinput(){
    cout << "Masukan NIlai Atas : ";
    cin >> alas;

    cout << "Masukan Nilai Tinggi : ";
    cin >> tinggi;
}

double hitungluas(){
    return 0.5 * alas * tinggi;
}

void proseduroutput(){
    cout << "Luas Segitiga = " << hitungluas() << endl;
}

int main(){
    prosedureinput();
    proseduroutput();
}
   