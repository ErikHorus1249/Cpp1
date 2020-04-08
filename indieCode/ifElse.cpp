


#include<iostream>
using namespace std;

int main(){
	float mark;
	while(1){
		cin >> mark;
		if(mark >= 0 && mark <= 10){
			break;
		}
	}
	if(mark < 4){
		cout << "Diem F";
	}
	else
	if(mark >= 4 && mark < 5.5){
		cout << "Diem D";
	}
	else
	if(mark >= 5.5 && mark < 7){
		cout << "Diem C";
	}
	else
	if(mark >= 7 && mark < 8.5){
		cout << "Diem B";
	}
	else{
		cout << "Diem A";
	}
}
