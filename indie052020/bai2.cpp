
#include <bits/stdc++.h>

using namespace std;

struct BanGhi{
    int STT;
    string HTEN;
    int MACV;
    float HSLUONG;
    long PCCV;
    long TLINH;
};

typedef BanGhi BG;

void nhap(BG &bg, int count);
void xuatFile(BG a[], int n);

int main(){

    int n;

    do{
        cout << "\nNhap so luong ban ghi: " ; cin >> n;
    }while(n <= 0);

    BG a[n];

    for(int i = 0; i< n; ++i){
        nhap(a[i], i);
    }

    xuatFile(a, n);
}

// Ham su ly nhap xuat

void nhap(BG &bg, int count){

    cout << "\nNhap vao thong tin cua nguoi thu nhat " << count + 1<< endl;
    bg.STT = count + 1;
    cout << "\nNhap ten: "; cin >> bg.HTEN;
    cout << "\nNhap ma cong viec: "; cin >> bg.MACV;
    cout << "\nNhap he so luong: "; cin >> bg.HSLUONG;
    if((bg.MACV == 1 || bg.MACV == 3) && bg.HSLUONG >= 6.2){
        bg.PCCV = 500000;
    }
    else if(bg.MACV == 4 && bg.HSLUONG > 5.5){
        bg.PCCV = 450000;
    }else{
        bg.PCCV = 400000;
    }

    bg.TLINH = 1490000*bg.HSLUONG + bg.PCCV;

}

void xuatFile(BG a[], int n){
  fstream f;
  f.open("output.txt", ios::out);
  for(int i = 0;i < n;i++){
    f << "So thu tu: " << a[i].STT << " Ten: " << a[i].HTEN << " Ma cong viec: " << a[i].MACV << " He so luong: " << a[i].HSLUONG << " Phu cap cong viec: " << a[i].PCCV << " Thuc linh: " << a[i].TLINH << endl;
  }
}
