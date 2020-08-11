#include<bits/stdc++.h>

using namespace std;
int n,  a[100];
vector< vector<int> > res;

void init(){
    for(int i = 0; i < n; i++) a[i] = i+1;
}

void xuat(){
    for(int i = res.size() - 1; i >= 0; i--){
    	for(int j = 0; j < res[i].size(); j++){
    		cout << res[i][j];
		}
	cout << " ";
	}
	cout << endl;
}
int main(){
    int t;
    cin >>t;
    while(t--){
        cin >> n;
        init();
        int check = true;
        while (check)
        {	
        	vector<int> b;
                for(int i = 0; i < n; i++){
                	b.push_back(a[i]);
				}
				res.push_back(b);
            int i = n -2;
            while(a[i] >= a[i+1]) i--;
            if(i >= 0){
                int j = n -1;
                while(a[i] > a[j]) j--;
                swap(a[i], a[j]);
                sort(a+i+1, a+n);
                
            }
            else check = false;
        }
        xuat();
        res.clear();
    }
}


