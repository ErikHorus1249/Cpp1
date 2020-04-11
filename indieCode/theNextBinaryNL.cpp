
/*input : 5 10001
output : 10010 */


#include<iostream>

using namespace std;

void display(int a[], int n){
	for(int i = 0; i < n; i++){
		cout << a[i] ;
	}
	cout << endl;
}
int main(){
	int a[10], n;
	cin >> n;
	for(int i = 0 ; i< n ; i++){
		cin >> a[i];
	}
	display(a,n);
	if(a[n-1] == 0){
		a[n-1] = 1;
		display(a,n);
	}
	else{
		int count = n-1;
		while( count > 0 && a[count] == 1){
			count--;

		}

		a[count] = 1;
		for(int j = count+1; j < n ; j++){
			a[j] = 0;
		}
		display(a,n);
	}
}