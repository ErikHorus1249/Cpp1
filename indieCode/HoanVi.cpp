#include<bits/stdc++.h>

using namespace std;


void contruction(int a[], int n){
	for(int i = 1; i<= n; i++){
		a[i] = i;
	}
}
void config(int a[], int n){
	for(int i = 1; i <= n; i++){
		cout << a[i];	
	}
	cout << endl;
}

void burvleSort(int a[], int n, int x){
	for(int i = x; i<= n; i++){
		for(int j = i+1; j <= n; j++){
			if(a[i]>a[j]){
				int tmp = a[i];
				a[i] = a[j];
				a[j] = tmp;
			}
		}
	}
}

void Swap(int a, int b){
	int tmp = a;
	a= b;
	b = tmp;
}
int main(){
	int a[100];
	int n;
	cin >> n;
	contruction(a,n);
	config(a,n);
	bool stop = false;
	while(1){
		int i;
		for( i = n; i>0; i--){
			if(i==1){
				return 0;
			}
			 	
			if(a[i]>a[i-1]){
				break;
			}
				
		}
		for(int j = n; j>= i; j--){
			if(a[j]>a[i-1]){
				int tmp = a[i-1];
				a[i-1] = a[j];
				a[j] = tmp;
				burvleSort(a,n,i);
				config(a,n);
				break;
		}
		}
	}
}


