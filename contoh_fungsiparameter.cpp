#include <iostream>
using namespace std;

double alas, tinggi;

void prosedureinput(){
    cout << "Masukan NIlai Alas : ";
    cin >> alas;

    cout << "Masukan Nilai Tinggi : ";
    cin >> tinggi;
}

double hitungluas(){
    return 0.5 * alas * tinggi;
}

double hitungluas2(double a, double t){
    return 0.5 * a * t;
}

void proseduroutput(){
    cout << "Luas Segitiga = " << hitungluas() << endl;
}

void proseduroutput2(){
    cout << "luas segitiga = " <<  hitungluas2(alas, tinggi) << endl;
}

int main(){
    prosedureinput();
    proseduroutput();
    proseduroutput2();
}
