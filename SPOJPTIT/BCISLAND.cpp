/*author : Erik horus
BCISLAND
su dung DFS va loang*/

#include <iostream>

using namespace std;// std :: cout/ in

 
int n, m;//in iput size of map
int seawater[102][102];// init map of sea
int Hmax=0;// hihgest h = 0 for begin
void read () // khoi tao gia tri cac vi tri tren ban do 
{
	for (int i=1; i<=n; i++)
	{
		for (int j=1; j<=m; j++)
		{
			cin>>seawater[i][j];
			if (seawater[i][j]>Hmax) Hmax=seawater[i][j]; // se tim diem cao nhat cua ban do gan vao gia tri Hmax
		}
	}
}
 
int check[102][102];// mang hai chieu su dung de kiem tra
int check_connect[102][102];  // mang su dung de kiem tra cac diem lien ket voi nhau khi loang
void init () // ham khoi tao gia tri cho hai mang tren gia tri dau vao deu la 0
{
	for (int i=1; i<=n; i++)
	{
		for (int j=1; j<=m; j++)
		{
			check[i][j]=0;
			check_connect[i][j]=0;
		}
	}
}
 
int extra;
int x_ar[]={+1, +0, -1, +0};// hai day x, y nay tuong ung voi toa do ma mot vi tri loang no se laong ra bon phia
int y_ar[]={+0, -1, +0, +1};// nen gia tri toa do cua  diem ta dang muon loang cong voi gia tri tung truong hop se ra vi tri laong tiep theo
void loang (int i, int j) // ham su dung de loang 
{
	check[i][j]=1; // gia tri check chuyen 1 danh dau vi tri nay da duoc check
	for (int k=0; k<4; k++)
	{
		int X=j+x_ar[k];// loang ra vi tri co toa do xung quanh 1 don vi 
		int Y=i+y_ar[k];// loang ra vi tri co toa do xung quanh 1 don vi 
		if (X>=1 && X<=m && Y>=1 && Y<=n)// xet dieu kien neu vi tri loang ko vuot ra ngoai ban do
		{
			if (check[Y][X]==0 && seawater[Y][X]<=extra) loang (Y, X); // neu ham check diem tiep theo la 0 tuc la diem chua duoc loang va diem do co mdo cao thap hon extra thi tiep tuc goi ham loang 
		}
	}
}
 
void DFS (int i, int j)// su dung duyet sau de kiem tra lien thong
{
	check_connect[i][j]=1; // khi bat dau thi diem duoc kiem tra se chuyen gia tri tu 0 sang 1 de danh dau la diem nay da duoc duyet
	for (int k=0; k<4; k++)
	{
		int X=j+x_ar[k]; // tinh duoc gia tri toa do cua die duyet tiep theo
		int Y=i+y_ar[k]; // tinh duoc gia tri toa do cua die duyet tiep theo
		if (X>=1 && X<=m && Y>=1 && Y<=n)// neu diem duyet tiep ko vuot ra ngoai ban do
		{
			if (check_connect[Y][X]=check[i][j]==0) DFS (Y, X);// neu check tai vi tri do la 0 va diem do chua bi ngap thi tiep tuc goi DFS
		}
	}
}
 
int main ()
{
	int t=0;
	while (1)
	{
		cin>>n>>m; // nhap m, n
		if (n==0 && m==0) break;
		t++;
		read ();
		int kt=0;
		for (int k=0; k<=Hmax; k++)
		{
			extra=k; // vong lap su dung de duyet muc nuoc dang
			init ();
			for (int i=1; i<=n; i++)
			{
				for (int j=1; j<=m; j++)
				{
					if ((i==1 || i==n || j==1 || j==m) && seawater[i][j]<=k && check[i][j]==0) loang (i, j); 
					/*loang phai bat dau tu cac canh ngoai*/
				}
			}
			//dem lien thong?
			int count_connect=0;
			for (int i=1; i<=n; i++)
			{
				for (int j=1; j<=m; j++)
				{
					if (check_connect[i][j]==0 && check[i][j]==0) neu diem do ko bi ngap dong thoi chua xet lien thong thi moi bat dau duyet lien thong
					{
						count_connect++; // moi cum lien thong xuat hien the hien cho viec bi chia cat
						DFS (i, j); // goi duyet
					}
				}
			}
			if (count_connect>1) // so cum lien thong lon hon 1 thi tuc la dao bi chia cat
			{
				kt=1;
				break;
			}
		}
		if (kt==1) cout<<"Case "<<t<<": Island splits when ocean rises "<<extra<<" feet."<<endl;
		else cout<<"Case "<<t<<": Island never splits."<<endl;
	}
	return 0;
}
