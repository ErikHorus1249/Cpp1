#include<iostream>
#include<algorithm>


void contruction(int a[], int n){ // ham khoi tao day dau tien la mot day tang deu 
	for(int i = 1; i <= n ;i ++){
		a[i] = i;
	}
}

void config(int a[], int n){ // in ra cau hinh 
	for(int i = 1; i<=n; i++){
		std::cout << a[i];
	}
	std::cout << "\n";
}

int main(){   
	int a[100];
	int n;
	std::cin >> n;
	contruction(a, n);
	config(a, n);
	while(1){
		int i;
		for(i = n; i>0; i--){  // duyet cac phan tu tu cuoi day de tim day giam dai nhat
			if(i==1) return 0; // neu day la day giam tuyet doi thi ket thuc chuong trinh vi day la hoan vi co gia tri cao nhat co duoc
			if(a[i]>a[i-1]){
				break; // khi phat hien day giam dai nhat thi danh dau tai vi tri i va thoat khoi duyet
			}
		}
		
		
		for(int j = n; j>=i; j--){ // doi cho phan tu dung truoc day giam tuc vi tri i - 1 voi mot phan tu nho nhat trong day giam lien tuc ma lon hon gia tri cua i-1
			if(a[j]>a[i-1]){
				int tmp = a[i-1];
				a[i-1] = a[j];
				a[j] = tmp;
				std::sort(a+i,a+1+n);// sap xep lai cac gia tri tang dan tu vi tri i
				config(a,n);// in ra cau hinh hoan vi tiep theo
			}
		}
	}
}

