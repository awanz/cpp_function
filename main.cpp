#include <iostream>

using namespace std;

// deklarasi fungsi atau void
int perkalian(int a, int b);
void bio(char nama[]);
int hitung();
int hitung(int angka);

// variable global
int varGlobal = 34;

int main()
{
    cout << perkalian(2,3) << endl;
    bio("awan");
    cout << hitung() << endl;
    cout << hitung(3) << endl;
    return 0;
}

// function
int perkalian(int a, int b){
    return a * b;
}

// void
void bio(char nama[]){
    cout << "Hallo, saya " << nama << endl;
}

// menggunakan variable local
int hitung(){
    int varLocal = 12;
    return varGlobal + varLocal;
}

// overloaded function
int hitung(int angka){
    return varGlobal + angka;
}
