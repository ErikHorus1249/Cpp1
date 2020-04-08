


/*input : integer n
output : is an Amstrong number ?*/


#include<bits/stdc++.h>
using namespace std;

int main(){
	int n, count, temp,originalNum,staticNumber;
	int sum = 0;
	cin >> n;
	originalNum = staticNumber = n;
	temp = 0;
	while(n>0){
		n/=10;
		count ++;
	}
	while(staticNumber>0){
		temp = staticNumber % 10;
		sum += pow(temp,count);
		staticNumber /= 10;
	}
	if(originalNum == sum){
		cout << "This is a Amstrong Number";
	}
	else{
		cout << "It's Not";
	}
}
