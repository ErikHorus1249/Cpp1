#include<bits/stdc++.h>

using namespace std;
#define max 100
int A[max][max];

int p,q;
void nhap(int A[][max], int p, int q){
  cout << "Nhap vao mang co " << p << "hang " << q << " cot : " << endl;
  for(int i=0;i<p;i++){
    for(int j=0;j<q;j++){
      cin>>A[i][j];
    }
  }
}
void xuat(int A[][max], int p, int q){

  for(int i=0;i<p;i++){
    for(int j=0;j<q;j++){

      cout << A[i][j] << " ";
    }
    cout << endl;
  }
}
long tongChan(int A[][max], int p, int q){
  long sum=0;
  for(int i=0;i<p;i++){
    for(int j=0;j<q;j+=2){
      if((A[i][j]>=3) && (A[i][j]<=20)) sum+=A[i][j];
    }
  }
  return sum;
}
long tong11(int A[][max],int p, int q){
  long sums=0;
  for(int i=0;i<p;i++){
    for(int j=0;j<q;j++){
      if(A[i][j]%11==0) sums += A[i][j];
    }
  }
  return sums;
}
int main(){
  cout << "Nhap vao so hang va cot cua ma tran : ";
  cin>>p>>q;
  nhap(A,p,q);
  cout << endl;
  // xuat(A,p,q);

  cout<<"Tong cac cot chan tu 3 den 20 : "<< tongChan(A,p,q) << endl;

  cout<<"Tong cac phan tu trong mang chia het cho 11 : "<< tong11(A,p,q) << endl;

  return 0;
}
