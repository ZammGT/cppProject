#include <iostream>
using namespace std;
int main() {
    string nama,sekolah,ulang;
    do{
    cout<<"Masukkan Nama " <<endl ;
    cin>>nama;
    cout<<"Masukkan Nama Sekolah : ";
    cin>>sekolah;
    cout<<"namamu adalah ";
    cout<<nama <<endl;
    cout<<"sekolahmu di ";
    cout<< sekolah <<endl;
    cout<<"apkaah kamu mau mengulang? , tekan y atau Y" ;
    cin>>ulang;
    }
     while(ulang=="y" || ulang=="Y");
    system("pause");
    return 0;
}
