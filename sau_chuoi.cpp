//====================LÝ THUYẾT ==============
//bài 1. trình bày cơ chế cin, gets
//
// Cin sẽ vào kho kiểm tra các kí tự nhập vào nó sẽ nhận các kí từ và không nhận khoảng trắng cũng như là xuống dòng
// gets_s sẽ nhận hầu như tất cả chỉ trừ xuống dòng là không nhận 
// 
// bài 2. phân tích lỗi trôi lệnh
// Lỗi trôi lệnh xảy ra khi bạn dùng lệnh get_s mà trên đó có lệnh cin vd bạn nhập một số 123abc mà biến bạn khai báo chỉ 
// là int nhap thi nó vẫn còn thừa abc và khi đó nó tự động lưu abc vào câu lênh gets ở dưới và cứ trôi dần dần xuống
// 
// 
//

#include <iostream>
using namespace std;
void bai1();
int do_dai(char c[]);
void copy_2sau(char c2[], char c1[]);
char* copy_sautro(char c1[]);
void in_thuong(char c[]);
void in_hoa(char c[]);
void Dao_nguoc(char c[]); 
void them(char c[], int vitri, char kitu);
void xoa(char c[], int vitri);
int so_sanh_co_pb_hoa_thuong(char c1[], char c2[]);
void Bai1sau(char c[]);
void Bai2sau(char c[]);
void palindrom(char c[]);
int tong(char c[]);
void thongke(char c[]);
void main()
{
	cout << "\t\t==============BAI2=============" << endl;
	char c1[30];
	char c2[30];
	gets_s(c1);
	thongke(c1);
	//Bai1sau(c1);
	//cout << c1;
	//Bai2sau(c1);
	//cout << c1;
	//palindrom(c1);
	//cout << c1;
	//cout << "\nDo dai chuoi: " << do_dai(c1);
	//copy_2sau(c2, c1);
//	cout << "\nCopy : " << c2;
	//char* c3 = copy_sautro(c1);
	//cout <<" \nCopy cho con tro " << c3;
	//in_thuong(c1);
//	cout << " \nIn thuong : " << c1;
	//in_hoa(c1);
//	cout << "\nIn hoa : " << c1;
//	Dao_nguoc(c1);
//	Dao_nguoc(c1);
//	them(c1);
//	cout << "\nThem : " << c1;
	//xoa(c1);
	//cout << "\nXoa : " << c1;
	//int x =  so_sanh_co_pb_hoa_thuong(c1, c2);
	//cout << "\nGia tri so sanh : " << x << endl;
	//bai1();
	cout << endl;
	system("pause");
}
void trasn(char c[])
{
	int n = do_dai(c);
	for (int i = 0; i < n; i++)
	{

	}
}
void bai3(char c[])
{
	int n = do_dai(c);
	for (int i = 0; i < n; i++)
	{

	}
}
void bai1()
{
	// khai báo
	cout << "\t\t\n==========BAI1==========" << endl;
	char hoten[30];
	char masv[10];
	int namsinh;
	char que[20];
	// nhập
	cout << "Nhap ho ten thang sinh vien : "; gets_s(hoten);
	cout << "Nhap ma sinh vien : "; gets_s(masv);
	cout << "Nhap nam sinh : "; cin >> namsinh;
	while (getchar() != '\n');
	cout << "Nhap que quan thang sinh vien : "; gets_s(que);
	cout << " Hoten : " << hoten << endl;
	cout << "Ma sinh vien : " << masv << endl;
	cout << " Nam sinh : " << namsinh << endl;
	cout << " Que quan : " << que << endl;
}
//BAI2===============
int do_dai(char c[])
{
	int i = 0;
	while (c[i] != '\0')
	{
		i++;
	}
	return i;
}
void copy_2sau(char c2[], char c1[])
{
	int n = do_dai(c1);
	for (int i = 0; i <= n; i++)
	{
		c2[i] = c1[i];
	}
}
char *copy_sautro(char c1[])
{
	int n = do_dai(c1);
	char* c3 = new char[n + 1];
	for (int i = 0; i <= n; i++)
	{
		c3[i] = c1[i];
	}
	return c3;
}
void in_thuong(char c[]) {
	int n = do_dai(c);
	for (int i = 0; i < n; i++)
	{
		if ((c[i] > 65) && ( c[i] < 90))
		{
			c[i] = c[i] + 32;
		}
	}
}
void in_hoa(char c[])
{
	int n = do_dai(c);
	for (int i = 0; i< n; i++)
	{
		if ((c[i] > 97) && (c[i] < 122))
		{
			c[i] = c[i] - 32;
		}
	}
}
void Dao_nguoc(char c[])
{
	int n = do_dai(c);
	char* c1;
	c1 = copy_sautro(c);
	for (int i = 0; i < n; i++)
	{
		c[i] = c1[n - i - 1];
	}
	cout<< "\n" << c;
	delete c1;
}
void them(char c[], int vitri, char kitu)
{
	int n = do_dai(c);
	for (int i = n+1 ;i > vitri; i--)
	{
		c[i] = c[i - 1];
	}
	c[vitri] = kitu;
}
void xoa(char c[], int vitri)
{
	int n = do_dai(c);
	for (int i = vitri; i < n; i++)
	{
		c[i] = c[i + 1];
	}
}
int so_sanh_co_pb_hoa_thuong(char c1[], char c2[])
{
	int n1 = do_dai(c1);
	int n2 = do_dai(c2);
	int min = (n1 < n2) ? n1 : n2;
	for (int i = 0; i < min; i++)
	{
		if (c1[i] != c2[i])
		{
			return c1[i] - c2[i];
		}
	}
	return n1 - n2;
}
//////////////////////
////
//
// 
// 
// 
// 
//
//========================SAU=====================
void Bai1sau(char c[])
{
	int n = do_dai(c);
	char* c2 = new char[n + 1];
	c2 = copy_sautro(c);
	int dem = 1; bool kiemtra = false;
	for (int i = 0; i < n; i++)
	{
		// Kiemtra xem có lặp lại không
		for (int k = 0; k < i; k++)
		{
			if (c2[k] == c[i])
			{
				kiemtra = true;
			}
		}
		for (int j = i + 1; j < n; j++)
		{
			if (kiemtra == true)
			{
				break;;
			}
			if (c[i] == c[j])
			{
				dem++;
			}
		}
		c2[i] = c[i];
		if (kiemtra == false)
		{
			cout << c[i] << " xuat hien " << dem << " lan " << endl;
		}
		dem = 1;
		kiemtra = false;
	}
}
void Bai2sau(char c[])
{
	int i = 0;
	int n = do_dai(c);
	while (c[0] == ' ') // kiểm tra đầu dòng
	{
		xoa(c, 0);
		n--;
	}
	int temp = n - 1; int dem = 0;
	while (c[temp] == ' ') // kiểm tra cuối dòng 
	{
		xoa(c, temp);
		temp--;
		n--;
	}
	bool kiemtra;
	for (int i = 0; i < n; i++) // vòng lặp kiểm tra cách dòng
	{
		if (c[i] == ' ')         
		{						    
			dem++;
			if (dem > 1)
			{
				xoa(c, i);
				i--;
				continue;
			}
		}
		else
		{
			dem = 0;
		}
	}
}
/// bài tập nâng cao 
void palindrom(char c[])
{
	int kiemtra = tong(c);
	int n = do_dai(c); int temp = n;
	for (int i = 0; i < n-1; i++)
	{
		if (kiemtra > 5105 && kiemtra < 1)
		{
			them(c, temp, c[i]);
			temp++;
		}
		kiemtra = tong(c);
	}
}
int tong(char c[])
{
	int n = do_dai(c); int tong= 0;
	for (int i = 0; i < n; i++)
	{
		tong = tong + abs(c[i]);
	}
	return tong;
}
// nâng cao
void thongke(char c[])
{
	int n = do_dai(c);
	for (int i = 0; i < n; i++)
	{
		bool kt = false;
		for (int k = 0; k < i; k++)
		{
			if (c[i] == c[k])
			{
				kt = true;
				break;
			}
		}
		if (kt == false)
		{
			int dem = 1;
			for (int j = i + 1; j < n; j++)
			{
				if (c[i] == c[j])
				{
					dem++;
				}
			}
			cout << c[i] << "xuat hien " << dem << " lan" << endl;
		}
	}
}

