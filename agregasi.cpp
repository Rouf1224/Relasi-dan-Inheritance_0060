#include <iostream>
using namespace std;

#include "anak.hpp"
#include "ibu.hpp"

int main() {
    ibu* varibu = new ibu("dini");
    ibu* varibu2 = new ibu("novi");
    anak* varAnak1 = new anak("tono");
    anak* varAnak2 = new anak("rini");
    anak* varAnak3 = new anak("dewi");

    varibu->tambahAnak(varAnak1);
    varibu->tambahAnak(varAnak2);
    varibu2->tambahAnak(varAnak3);
    varibu2->tambahAnak(varAnak1);
    
    varibu->cetakAnak();
    varibu->cetakAnak();

    delete varibu;
    delete varibu2;
    delete varAnak1;
    delete varAnak2;
    delete varAnak3;

    system("pause");

    return 0;

}