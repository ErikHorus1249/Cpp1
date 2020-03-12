#include<iostream>
using namespace std;

int par(int n){
	if(n==1){
		return 1;
	}
	if(n==0){
		return 1;
	}
	if(n%2==0){
		return par(n-1) + par(n/2);
	}
	else{
		return par(n-1);
	}
}
int main(){
	int t,n;
	cin >> t;
	for(int i = 1; i<=t; i++){
		cin >> n;
		cout << i << " " << par(n)<<endl;
	}
}

/* Phan tich bai toan
Doi vo mot patrition thuan nghich de quy thi moi so nguyen deu co it nhat hai thuan nghic ngoai tru 0 va 1 deu co 1 thuan nghich
de quy voi n = 1 ta p(1) = 1
					p(0) = 1
					p(2) = 2 (2 va 1+1)
					p(3) = 2 (3 va 1+1+1)
					P(4) = 4 (4, 1+1+1+1, 2+2 va 1+2+1)
					P(5) = 4 (5, 1+1+1+1+1, 1+3+1 va 2+1+2
					P(6) = 6 (6, 1+1+1+1+1+1, 3+3, 1+2+2+1, 2+2+2 va 1+4+1)
					p(7) = 6 (7, 1+1+1+1+1+1+1, 3+1+3,, 1+2+1+2+1, 2+3+2 va 1+5+1)
					=> ta thay cac so thuan nghich de quy tiep theo deu co quy luat la 
					+ So TNDQ cua so le thi bang so TNDQ cua so chan ngay truoc no 
					+ so TNDQ cua so chan = A(n-1) + A(n/2) */
