#include<bits/stdc++.h>
using namespace std;


string Column (long x)
{
    string tmp = "";
    char c;
    while (1)
    {
        if (x==0) break;
        x--;
        c = 'A' + x%26;
        tmp = c + tmp;
        x = x/26;
    }
    return tmp;
}
int main(){
	long row, col;
	char tmp;
	while(1){
		cin >> tmp >> row >> tmp >> col;
		if(col == 0 && row == 0){
			break;
		}
		cout << Column(col) << row << endl;
	}
		
}
