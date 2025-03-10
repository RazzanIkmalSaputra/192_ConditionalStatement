#include <iostream>
using namespace std;

double alas, tinggi;

void prosedureinput(){
    cout << "Masukan NIlai Alas : ";
    cin >> alas;

    cout << "Masukan Nilai Tinggi : ";
    cin >> tinggi;
}


double hitungluas2(double a, double t){
    return 0.5 * a * t;
}

string ukuransegitiga(double l){
    //jika luas > 60
    if(l> 60){
        return "besar";
    }
    else{
        return "kecil";
    }
    

}

void proseduroutput2(){
    cout << "luas segitiga = " <<  ukuransegitiga(hitungluas2(alas, tinggi)) << endl;
}

int main(){
    prosedureinput();
    proseduroutput2();
}
