/*1107*/
/*
#include <iostream>
#include<cmath>
using namespace std;
int Inverse(int num) {
	int digit = log10(num);
	int vrsNum = 0;
	for (int i = 0; i <= digit; i++) {
		vrsNum += (int)pow(10, digit - i)*((num / (int)pow(10, i)) % 10);
	}
	return vrsNum;
}
int main() {
	int n;
	cin >> n;
	int m = Inverse(n);
	while (m != n) {
		cout << n << ' ';
		n += m;
		m=Inverse(n);
	}
	cout << m;
	system("pause");
}
*/
/*1106*/
/*
#include <iostream>
#include <cmath>
using namespace std;
int Inverse(int num) {
	int digit = log10(num);
	int vrsNum = 0;
	for (int i = 0; i <= digit; i++) {
		vrsNum += (int)pow(10, digit - i)*((num / (int)pow(10, i)) % 10);
	}
	return vrsNum;
}
int main() {
	int m,n;
	cin >> m >> n;
	for (int i = m; i <= n; i++) {
		if (Inverse(i) == i) {
			cout << i<<' ';
		}
	}
	system("pause");
}
*/
/*1104*/
/*
#include<iostream>
using namespace std;
int facsum(int num) {
	int sum = 0;
	for (int i = 1; i < num; i++) {
		if (num%i == 0) {
			sum += i;
		}
	}
	return sum;
}
int main() {
	int n;
	cin >> n;
	cout << facsum(n);
	system("pause");
}
*/
/*
#include <iostream>
#include<iomanip>
using namespace std;
double GPA(int n) {
	if (n < 1)
		return -0.1;
	int *d = new int[n];
	int *pt = new int[n];
	double gpa = 0;
	for (int i = 0; i < n; i++) {
		cin >> pt[i] >> d[i];
	}
	int points = 0;
	for (int i = 0; i < n; i++) {
		points += pt[i];
	}
	for (int i = 0; i < n; i++) {
		d[i] = (d[i] - 50) / 10;
		gpa += d[i] * pt[i];
	}
	delete[] d,pt;
	return gpa / (double)points;
}
int main() {
	int n;
	cin >> n;
	cout << setiosflags(ios::fixed) << setprecision(1) << GPA(n) << endl;
	system("pause");
}
*/
/*binaryConvert*/
//#include <iostream>
//using namespace std;
//void Convert(int num) {
//	if (num > 1) {
//		Convert(num / 2);
//	}
//	cout << num % 2;
//}
//int main() {
//	int n;
//	cin >> n;
//	Convert(n);
//	cout << endl;
//	system("pause");
//}
/*1113*/
//#include<iostream>
//using namespace std;
//int counter = 0;
//int fib(int k)
//{
//	counter++;
//	if (k == 1 || k == 2)
//		return 1;
//	else
//		return fib(k - 1) + fib(k - 2);
//
//}
//int main() {
//	int num;
//	cin >> num;
//	cout << fib(num) << endl;
//	cout << "µÝ¹éµ÷ÓÃÁË" << counter << "´Î" << endl;
//	system("pause");
//}
/*1114*/
//#include <iostream>
//#include<iomanip>
//#include <vector>
//using namespace std;
//int main() {
//	int n;
//	cin >> n;
//	vector<int>vec;
//	for (int i = 0; i < n; i++) {
//		int num;
//		cin >> num;
//		vec.push_back(num);
//	}
//	for (int i = 0; i < n; i++) {
//		cout.flags(ios::right);
//		cout <<setw(4)<< vec[n - i - 1];
//	}
//	system("pause");
//}
/*1115*/
//#include<iostream>
//using namespace std;
//int main() {
//	int n;
//	cin >> n;
//	int min, minIndex=0,num;
//	for (int i = 0; i < n; i++) {
//		cin >> num;
//		if (i == 0)
//			min = num;
//		else if (num < min) {
//			minIndex = i;
//			min = num;
//		}
//	}
//	cout << min << ' ' << minIndex;
//	system("pause");
//}
/*1116 && 1117*/
//#include<iostream>
//#include <iomanip>
//using namespace std;
//void del(int arr[], int n, int i) {
//	for (int j = i; j < n - 1; j++) {
//		arr[j] = arr[j + 1];
//	}
//}
//void PrintArr(int arr[], int n) {
//	for (int i = 0; i < n; i++) {
//		cout.flags(ios::right);
//		cout <<setw(4)<< arr[i];
//	}
//}
//int find(int arr[], int n, int x) {
//	for (int i = 0; i < n; i++) {
//		if (arr[i] == x) {
//			return i;
//		}
//	}
//	return -1;
//}
//int main() {
//	int n;
//	cin >> n;
//	int *arr = new int[n];
//	for (int i = 0; i < n; i++) {
//		cin >> arr[i];
//	}
//	int x;
//	cin >> x;
//	if (find(arr, n, x) == -1) {
//		cout << "Not Found" << endl;
//	}
//	else {
//		del(arr, n, find(arr, n, x));
//		PrintArr(arr, n-1);
//	}
//	delete[]arr;
//	system("pause");
//}
/*1118*/
//#include<iostream>
//using namespace std;
//void insert(int arr[], int n, int val) {
//	int lstNum=val;
//	for (int i = 0; i <=n; i++) {
//		if (arr[i]>=val||i==n) {
//				int temp = arr[i];
//				arr[i] = lstNum;
//				lstNum = temp;
//		}
//	}
//}
//void PrintArr(int arr[], int n) {
//	for (int i = 0; i < n; i++) {
//		cout << arr[i];
//		if (i != n - 1)
//			cout << ' ';
//	}
//}
//int main() {
//	int n;
//	cin >> n;
//	int d[1001];
//	for (int i = 0; i < n; i++) {
//		cin >> d[i];
//	}
//	int val;
//	cin >> val;
//	insert(d, n, val);
//	PrintArr(d, n + 1);
//	system("pause");
//}
/*1119*/
//#include <iostream>
//using namespace std;
//int qSort(int arr[],int beg,int over) {
//	int mid = arr[beg];
//	while (beg<over) {
//		while (beg < over) {
//			if (arr[over] < mid) {
//				arr[beg] = arr[over];
//				break;
//			}
//			over--;
//		}
//		while (beg < over) {
//			if (arr[beg] > mid) {
//				arr[over] = arr[beg];
//				break;
//			}
//			beg++;
//		}
//	}
//	arr[beg] = mid;
//	return beg;
//}
//void Qsort(int arr[], int s, int e) {
//	if (s < e) {
//		int index = qSort(arr, s, e);
//		Qsort(arr, s, index - 1);
//		Qsort(arr, index + 1, e);
//	}
//}
//void PrintArr(int arr[], int n) {
//	for (int i = 0; i < n; i++) {
//		cout << arr[i];
//		if (i != n - 1)
//			cout << ' ';
//	}
//}
//int main() {
//	int n;
//	cin >> n;
//	int *arr = new int[n];
//	for (int i = 0; i < n; i++) {
//		cin >> arr[i];
//	}
//	Qsort(arr,0,n-1);
//	PrintArr(arr,n);
//	delete[]arr;
//	system("pause");
//}
/*1120*/
//#include<iostream>
//using namespace std;
//int minIndex(int arr[], int n) {
//	int minindx = 0;
//	int min = arr[0];
//	for (int i = 1; i < n; i++) {
//		if (arr[i] < min) {
//			min = arr[i];
//			minindx = i;
//		}
//	}
//	return minindx;
//}
//int maxIndex(int arr[], int n) {
//	int maxindx = 0;
//	int max = arr[0];
//	for (int i = 1; i < n; i++) {
//		if (arr[i] > max) {
//			max = arr[i];
//			maxindx = i;
//		}
//	}
//	return maxindx;
//}
//void PrintArr(int arr[], int len) {
//	for (int i = 0; i < len; i++) {
//		cout << arr[i];
//		if (i != len - 1)
//			cout << ' ';
//	}
//}
//int main() {
//	int n;
//	cin >> n;
//	int *arr = new int[n];
//	for (int i = 0; i < n; i++) {
//		cin >> arr[i];
//	}
//	int temp = arr[0];
//	int x = minIndex(arr, n);
//	arr[0] = arr[x];
//	arr[x] = temp;
//	temp = arr[n - 1];
//	int y = maxIndex(arr, n);
//	arr[n - 1] = arr[y];
//	arr[y] = temp;
//	PrintArr(arr, n);
//	delete[]arr;
//	system("pause");
//}
/*1122*/
//#include <iostream>
//#include <algorithm>
//using namespace std;
//void del(int arr[], int n, int i) {
//	for (int j = i; j < n-1; j++) {
//		arr[j] = arr[j + 1];
//	}
//}
//void PrintArr(int arr[], int n) {
//	for (int i = 0; i < n; i++) {
//		cout << arr[i];
//		if (i != n - 1)
//			cout << ' ';
//	}
//}
//int main() {
//	int n;
//	cin >> n;
//	int *arr = new int[n];
//	for (int i = 0; i < n; i++) {
//		cin >> arr[i];
//	}
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < n; j++) {
//			if (arr[i] == arr[j]&&i!=j) {
//				del(arr, n, j);
//				n--;
//			}
//		}
//	}
//	cout << n << endl;
//	sort(arr, arr + n);
//	PrintArr(arr, n);
//	delete[] arr;
//	system("pause");
//}
/*1123*/
/*
#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;
struct Counter {
public :
	int id;
	int num;
};
bool comp(Counter a, Counter b) {
	return a.num > b.num;
}
int main() {
	int n;
	vector<Counter>vec;
	while (cin >> n && n != -1) {
		bool found = false;
		for (unsigned int i = 0; i < vec.size(); i++) {
			if (vec[i].id == n) {
				vec[i].num++;
				found = true;
				break;
			}
		}
		if (!found) {
			Counter *c=new Counter();
			c->id = n;
			(c->num)++;
			vec.push_back(*c);
		}
	}
	sort(begin(vec),end(vec), comp);
	int max = vec[0].num;
	vector<int> vecs;
	for (unsigned int i = 0; i < vec.size(); i++) {
		if (vec[i].num == max) {
			vecs.push_back(vec[i].id);
		}
	}
	sort(begin(vecs), end(vecs));
	for (unsigned int i = 0; i < vecs.size(); i++) {
		cout << vecs[i];
		if (i != vecs.size() - 1)
			cout << ' ';
	}
	system("pause");
}
*/
/*1124*/
/*
#include <iostream>
#include <algorithm>
using namespace std;
bool cmp(int a, int b) {
	return a > b;
}
int main() {
	int m, n;
	cin >> m;
	int *d = new int[m];
	for (int i = 0; i < m; i++) {
		cin >> d[i];
	}
	cin >> n;
	int *d1 = new int[n];
	for (int i = 0; i < n; i++) {
		cin >> d1[i];
	}
	int *d2 = new int[m + n];
	for (int i = 0; i < m+n; i++) {
		if (i >= m) {
			d2[i] = d1[i - m];
		}
		else {
			d2[i] = d[i];
		}
	}
	sort(d2, d2 + m + n,cmp);
	for (int i = 0; i < m + n; i++) {
		cout << d2[i];
		if (i != m + n - 1)
			cout << ' ';
	}
	cout << endl;
	delete[] d, d1,d2;
	system("pause");
}
*/
/*1125*/
/*
#include <iostream>
using namespace std;
int main() {
	int m;
	cin >> m;
	bool b = true;
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < m; j++) {
			int n;
			cin >> n;
			if (i>=j+1 && n) {
				b = false;
				break;
			}
		}
	}
	if (b) {
		cout << "YES" << endl;
	}
	else {
		cout << "NO" << endl;
	}
	system("pause");
}
*/
/*1126*/
/*
#include <iostream>
using namespace std;
bool Matrix(int *arr[],int m) {
	int *h = new int[m];
	int *v = new int[m];
	for (int i = 0; i < m; i++) {
		h[i] = 0;
		v[i] = 0;
	}
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < m; j++) {
			h[i] += arr[i][j];
			v[i] += arr[j][i];
		}
	}
	for (int i = 0; i < 4; i++) {
		if (h[i] % 2 || v[i] % 2) {
			delete[] h, v;
			return false;
		}
	}
	delete[] h, v;
	return true;
}
int main() {
	int m;
	cin >> m;
	int **d = new int*[m];
	int *h = new int[m];
	int *v = new int[m];
	for (int i = 0; i < m; i++) {
		d[i] = new int[m];
		for (int j = 0; j < m; j++) {
			cin >> d[i][j];
		}
		h[i] = 0;
		v[i] = 0;
	}
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < m; j++) {
			h[i] += d[i][j];
			v[i] += d[j][i];
		}
	}
	int odd = 0;
	for (int i = 0; i < m; i++) {
		if (h[i] % 2 == 1) {
			odd++;
		}
		if (v[i] % 2 == 1) {
			odd++;
		}
	}
	if (odd > 0) {
		if (odd == 2) {
			bool shouldBreak = false;
			bool Des = true;
			for (int i = 0; i < m; i++) {
				if (shouldBreak)
					break;
				for (int j = 0; j < m; j++) {
					if (d[i][j]!=1) {
						d[i][j] = 1;
						if (Matrix(d, m)) {
							cout << "Change bit(" << i << "," << j << ")" << endl;
							shouldBreak = true;
							Des = false;
							break;
						}
						else {
							d[i][j] = 0;
						}
					}
				}
			}
			if (Des) {
				cout << "Corrupt" << endl;
			}
		}else {
			cout << "Corrupt" << endl;
		}
	}
	else {
		cout << "OK" << endl;
	}
	for (int i = 0; i < m; i++) {
		delete[] d[i];
	}
	delete[] h, v;
	system("pause");
}
*/
/*
#include<iostream>
#include<iomanip>
using namespace std;
int main() {
	int m, n;
	cin >> m >> n;
	int **stu = new int*[m];
	for (int i = 0; i < m; i++) {
		stu[i] = new int[n];
	}
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			cin >> stu[i][j];
		}
	}
	double *d = new double[n];
	for (int i = 0; i < n; i++) {
		d[i] = 0;
		for (int j = 0; j < m; j++) {
			d[i] += stu[j][i];
		}
	}
	for (int i = 0; i < n; i++) {
		cout << setiosflags(ios::fixed) << setprecision(2) << d[i] / m;
		if (i != n - 1)
			cout << ' ';
	}
	delete[] d;
	for (int i = 0; i < m; i++) {
		delete[]stu[i];
	}
	system("pause");
}
*/
/*
#include <iostream>
#include<string>
#include<cmath>
using namespace std;
int main() {
	string s;
	int num = 0;
	cin >> s;
	for (int i = 0; i < s.length(); i++) {
		const char c = s.at(i);
		switch (c)
		{
		case '0':
			num += 0;
			break;
		case '1':
			num += pow(16, s.length() - i - 1);
			break;
		case '2':
			num += pow(16, s.length() - i - 1)*2;
			break;
		case '3':
			num += pow(16, s.length() - i - 1)*3;
			break;
		case '4':
			num += pow(16, s.length() - i - 1) * 4;
			break;
		case '5':
			num += pow(16, s.length() - i - 1) * 5;
			break;
		case '6':
			num += pow(16, s.length() - i - 1) * 6;
			break;
		case '7':
			num += pow(16, s.length() - i - 1) * 7;
			break;
		case '8':
			num += pow(16, s.length() - i - 1) * 8;
			break;
		case '9':
			num += pow(16, s.length() - i - 1) * 9;
			break;
		case 'A':
				num += pow(16, s.length() - i - 1) * 10;
				break;
		case 'B':
					num += pow(16, s.length() - i - 1) * 11;
					break;
		case 'C':
						num += pow(16, s.length() - i - 1) * 12;
						break;
		case 'D':
							num += pow(16, s.length() - i - 1) * 13;
							break;
		case 'E':
								num += pow(16, s.length() - i - 1) * 14;
								break;
		case 'F':
									num += pow(16, s.length() - i - 1) * 15;
									break;
		}
	}
	cout << num << endl;
	system("pause");
}
*/
/*
#include<iostream>
#include<string>
using namespace std;
int add(int a, int b){
	return a + b;
}
int main() {
	int supply(int a, int b);

	char a[10];
	cin >> a;
	string s = "HelloWorld";
	cout << s[5] << endl;
	int i = 0;
	switch (s.at(i))
	{
	default:
		break;
	}
	int ai, b;
	cin >> ai >> b;
	cout << supply(ai, b) << endl;
	cout << a << endl;
	system("pause");
}
*/
/*
#include <iostream>
#include <string>
using namespace std;
int main() {
	string s;
	int arr[53];
	for (int i = 0; i < 53; i++) {
		arr[i] = 0;
	}
	cin >> s;
	for (int i = 0; i < s.length(); i++) {
		char c = s.at(i);
		if (c == ' ') {
			arr[0]++;
		}
		else if ('A' <= c <= 'Z') {
			arr[c - 64]++;
		}
		else {
			arr[c - 96]++;
		}
	}
	char c = ' ';
	int max = arr[0];
	for (int i = 1; i < 53; i++) {
		if (arr[i] > max) {
			max = arr[i];
			if (0 < i < 27) {
				c = i + 64;
			}
			else {
				c = i + 96;
			}
		}
	}
	cout << c << endl;
	system("pause");
}
*/
/*Taller sort*/
/*
#include <iostream>
#include <cmath>
using namespace std;
void Sort(int *arr, int len, bool(*cmp)(const int &a,const int &b)) {
	for (int i = 0; i < len-1; i++) {
		for (int j = i + 1; j < len; j++) {
			if (!cmp(arr[i], arr[j])) {
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
}
bool CmpAsc(const int &a, const int &b) {
	return a < b;
}
bool CmpDec(const int &a, const int &b) {
	return a > b;
}
bool CmpAbsAsc(const int &a, const int &b) {
	if (abs(a) == abs(b)) {
		return a < b;
	}
	else {
		return abs(a) < abs(b);
	}
}
int main() {
	int res,n;
	cin >> n;
	int *arr = new int[n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	cin >> res;
	switch (res)
	{
	case 1:
		Sort(arr, n, CmpAsc);
		break;
	case 2:
		Sort(arr, n, CmpDec);
		break;
	case 3:
		Sort(arr, n, CmpAbsAsc);
		break;
	}
	for (int i = 0; i < n; i++) {
		cout << arr[i];
		if (i != n - 1)
			cout << ' ';
	}
	delete[] arr;
}
*/
/*stringLength*/
/*
#include<iostream>
using namespace std;
int main() {
	char c;
	int len = 0;
	for (int i = 0; i < 101; i++) {
		c = getchar();
		if (c == '\n')
			break;
		if(c!=' ')
			len++;
	}
	cout << len << endl;
	system("pause");
}
*/
/*encrypt string*/
/*
#include <iostream>
#include <string>
using namespace std;
void encrypt(char *plain,int len) {
	int a;
	for (int i = 0; i < len; i++) {
		a = plain[i] - 24;
		cout << a;
		if (i == len - 1)
			cout << endl;
	}
}
void cpy(const char *c, char *arr, int len) {
	for (int i = 0; i < len; i++) {
		arr[i] = c[i];
	}
}
int main() {
	string str;
	cin >> str;
	char *arr = new char[str.length()];
	cpy(str.c_str(), arr,str.length());
	encrypt(arr , str.length());
	system("pause");
}
*/
/*format*/
/*
#include <iostream>
#include <iomanip>
using namespace std;
int main() {
	int a, b, c;
	cin >> a >> b >> c;
	cout << left << setw(9) << a <<left<<setw(9)<< a * a << left << setw(9) << a * a*a << endl;
	cout << left << setw(9) << b << left << setw(9) << b * b << left << setw(9) << b * b*b << endl;
	cout << left << setw(9) << c << left << setw(9) << c * c << left << setw(9) << c * c*c << endl;
	system("pause");
}
*/
/*Get sum*/
/*
#include <iostream>
using namespace std;
int main() {
	int b, e, d;
	cin >> b >> e >> d;
	int sum = b;
	int S = b;
	while (1) {
		sum += d;
		S += sum;
		if (sum == e)
			break;
	}
	cout << S << endl;
	system("pause");
}
*/
/*
#include <iostream>
#include <iomanip>
using namespace std;
int main() {
	int num;
	cin >> num;
	int n = (num/ 100)*(num/100)*(num/100) + ((num / 10) % 10)*((num / 10) % 10)*((num / 10) % 10) + (num % 10)*(num % 10)*(num % 10);
	if ( n== num) {
		cout << "yes" << endl;
	}
	else {
		cout << "no" << endl;
	}
	cout << n << endl;
	system("pause");

}
*/
/*
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main() {
	int m, n;
	cin >> m >> n;
	for (int i = m; i <= n; i++) {
		cout << setw(4) << i << setw(8) << setiosflags(ios::fixed) << setprecision(4) << log(i) << endl;
	}
	system("pause");
}
*/
/*
#include <iostream>
#include <iomanip>
using namespace std;
int main() {
	int n;
	double sum = 0;
	for (int i = 1; i <= n; i++) {
		if (i % 2) {
			sum += ((double)i / ((double)(2 * i) - 1.0));
		}
		else {
			sum -= ((double)i / ((double)(2 * i) - 1.0));
		}
	}
	cout << setiosflags(ios::fixed) << setprecision(3) << sum << endl;
	system("pause");
	return 0;
}
*/
/*
#include <iomanip>
#include <iostream>
using namespace std;
int main() {
	double a, b;
	char c;
	cin >> a >> c >> b;
	switch (c) {
	case '+':
		cout << setiosflags(ios::fixed) << setprecision(2) << a + b << endl;
		break;
	case '-':
		cout << setiosflags(ios::fixed) << setprecision(2) << a - b << endl;
		break;
	case '*':
		cout << setiosflags(ios::fixed) << setprecision(2) << a * b << endl;
		break;
	case '/':
		if (!b) {
			cout << "Wrong input!" << endl;
		}
		else {
			cout << setiosflags(ios::fixed) << setprecision(2) << a / b << endl;
		}
		break;
	default:
		cout << "Wrong input!" << endl;
		break;
	}
	system("pause");
	return 0;
}
*/
/*
#include <iostream>
using namespace std;
int main() {
	int y,m;
	cin >> y>>m;
	switch (m)
	{
	case 12:
		cout << 31 << endl;
		break;
	case 11:
		cout << 30 << endl;
		break;
	case 10:
		cout << 31 << endl;
		break;
	case 9:
		cout << 30 << endl;
		break;
	case 8:
		cout << 31 << endl;
		break;
	case 7:
		cout << 31 << endl;
		break;
	case 6:
		cout << 30 << endl;
		break;
	case 5:
		cout << 31 << endl;
		break;
	case 4:
		cout << 30 << endl;
		break;
	case 3:
		cout << 31 << endl;
		break;
	case 2:
		if ((y % 4 == 0 && y % 100 != 0) || y % 400 == 0) {
			cout << 29 << endl;
		}
		else {
			cout << 28 << endl;
		}
		break;
	case 1:
		cout << 31 << endl;
		break;
	}
	return 0;
}
*/
/*
#include <iostream>
using namespace std;
unsigned long long int pow(const int &d, const int &p) {
	unsigned long long int sum = 1;
	for (int i = 0; i<p; i++) {
		sum *= d;
	}
	return sum;
}
unsigned long long int getNum(const int &n, const int &x) {
	unsigned long long int sum = 0;
	for (int i = 0; i<n; i++) {
		sum += x * pow(10, i);
	}
	return sum;
}
int main() {
	int n, x;
	cin >> n >> x;
	unsigned long long int res = 0;
	for (int i = 0; i<n; i++) {
		res += getNum(i + 1, x);
	}
	cout << res << endl;
	system("pause");
	return 0;
}
*/
/*
#include <iostream>
#include <iomanip>
using namespace std;
double myPow(const double &d, const double &p) {
	double sum = 1;
	for (int i = 0; i<p; i++) {
		sum *= d;
	}
	return sum;
}
double getFact(const double &x) {
	double sum = 1;
	for (int i = 0; i<x; i++) {
		sum *= (i + 1);
	}
	return sum;
}
double Sin(const double &x) {
	double sum = 0;
	for (int i = 1; i<11; i++) {
		if (i % 2) {
			sum += (myPow(x, 2 * i - 1) / getFact(2 * i - 1));
		}
		else {
			sum -= (myPow(x, 2 * i - 1) / getFact(2 * i - 1));
		}
	}
	return sum;
}
int main() {
	double x;
	cin >> x;
	cout << setiosflags(ios::fixed) << setprecision(3) << Sin(x) << endl;
	system("pause");
	return 0;
}
*/
/*
#include <iomanip>
#include <iostream>
using std::cout;
using std::cin;
using std::endl;
using std::setiosflags;
using std::setprecision;
using std::ios;
int main() {
	double a, b;
	char c;
	cin >> a >> c >> b;
	switch (c) {
	case '+':
		cout << setiosflags(ios::fixed) << setprecision(2) << a + b << endl;
		break;
	case '-':
		cout << setiosflags(ios::fixed) << setprecision(2) << a - b << endl;
		break;
	case '*':
		cout << setiosflags(ios::fixed) << setprecision(2) << a * b << endl;
		break;
	case '/':
		if (!b) {
			cout << "Wrong input!" << endl;
		}
		else {
			cout << setiosflags(ios::fixed) << setprecision(2) << a / b << endl;
		}
		break;
	default:
		cout << "Wrong input!" << endl;
		break;
	}
	system("pause");
	return 0;
}
*/
/*
#include <iostream>
using std::cout;
using std::cin;
bool Number(const int &num) {
	for (int i = 1; i<num; i++) {
		if (num%i == 0 && i != 1) {
			return false;
		}
	}
	return true;
}
int main() {
	for (int i = 1; i <= 1000; i++) {
		bool b = Number(i);
		if (b) {
		}
		else {
			cout << i<<"\t"<<"No" << std::endl;
		}
	}
	system("pause");
	return 0;
}
*/
/*MaxScore*/
/*
#include <iostream>
using std::cin;
using std::cout;
using std::endl;
unsigned int GetFact(const unsigned int &num) {
	unsigned int sum = 1;
	for (unsigned int i = 1; i <= num; i++) {
		sum *= i;
	}
	return sum;
}
unsigned int GetSum(const unsigned int &num) {
	unsigned int sum = 0;
	for (unsigned int i = 1; i <= num; i++) {
		sum += GetFact(i);
	}
	return sum;
}
int main() {
	unsigned int n;
	cin >> n;
	unsigned int lastNum = 1;
	for (unsigned int j = 1; j < 1000; j++) {
		if (GetSum(j) >= n) {
			break;
		}
		lastNum = j;
	}
	cout << "m<=" << lastNum << std::endl;
	system("pause");
	return 0;
}
*/
/*
#include <iostream>
using std::cin;
using std::cout;
using std::endl;
int main() {
	int min = -1;
	int score;
	while (cin >> score) {
		if (score < 0)
			break;
		if (score > min)
		{
			min = score;
		}
	}
	cout << min << endl;
	system("pause");
	return 0;
}
*/
/*
#include <iostream>
#include <cmath>
using namespace std;
int main() {
	int num;
	cin >> num;
	int digit = log10(num);
	for (int i = 0; i <= digit; i++) {
		cout <<( num/(int)pow(10, i)) % 10;
		if (i != digit)
			cout << ' ';
	}
	system("pause");
	return 0;
}
*/
/*encriptString*/
/*
#include <iostream>
#include <string>
using namespace std; void Encript(string s, string &s1) {
	for (int i = 0; i < s.length(); i++) {
		if ('a' <= s[i] && s[i] <= 'y') {
			s1 += s[i] + 1;
		}
		else if (s[i] == 'z') {
			s1 += 'a';
		}
		else {
			s1 += s[i];
		}
	}
}
string Lowercase(string str) {
	string s;
	for (int i = 0; i < str.length(); i++) {
		if ('A' <= str[i] && str[i] <= 'Z') {
			s += str[i] + 32;
		}
		else {
			s += str[i];
		}
	}
	return s;
}
int main() {
	string str;
	char c;
	while ((c = getchar())!= '@') {
		str += c;
	}
	str=Lowercase(str);
	string s;
	Encript(str, s);
	cout << s << endl;
	system("pause");
	return 0;
}
*/
/*
#include <iostream>
#include <string>
using namespace std;
int count_string(const string &str) {
	int c = 0;
	for (int i = 0; i < str.length(); i++) {
		if ('0' <= str[i] && str[i] <= '9') {
			c++;
		}
	}
	return c;
}
int main() {
	string str;
	char c;
	while ((c = getchar()) != '\n') {
		str += c;
	}
	cout << count_string(str) << endl;
	system("pause");
	return 0;
}
*/
/*
#include <iostream>
using namespace std;
int main() {
	int a;
	int b;
	cin >> a >> b;
	cout << a + b<<endl;
	system("pause");
	return 0;
}
*/
/*
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
class Human {
protected:
	string Name;
};
class human :Human{
public:
	string get_name() {
		return Name;
	}
	human(string name) {
		Name = name;
	}
	string get_others_name(human *b) {
		return b->Name = "123456";
	}
};
int main() {
	human *a = new human("ÕÅÈý");
	human *b = new human("ÀîËÄ");
	cout << a->get_name() << endl;
	cout<< a->get_others_name(b)<<endl;
	cout<< b->get_name() << endl;
	system("pause");
	return 0;
}
*/
/*
#include <iostream>
#include <vector>
#include "My_List.h"
#include <string>
using namespace std;
int my_qSort(int arr[], int i, int j) {
	int mid = arr[i];
	while (i<j) {
		while (i<j) {
			if (arr[j]<mid) {
				arr[i] = arr[j];
				break;
			}
			j--;
		}
		while (i<j) {
			if (arr[i]>mid) {
				arr[j] = arr[i];
				break;
			}
			i++;
		}
	}
	arr[i] = mid;
	return i;
}
void my_qSortUnit(int arr[], int beg, int over) {
	if (beg < over) {
		int index = my_qSort(arr, beg, over);
		my_qSortUnit(arr, beg, index - 1);
		my_qSortUnit(arr, index + 1, over);
	}
}
int main() {
	vector<string> vec;
	my_List<string> vec_1;
	string s;
	while (cin >> s) {
		vec.push_back(s);
		vec_1 + s;
	}
	for (size_t i = 0; i < vec_1.Size(); i++) {
		cout << "vector:" << vec[i] << endl;
		cout << "my_List:" << vec_1[i] << endl;
	}
	system("pause");
	return 0;
}
*/
/*
#include <iostream>
using namespace std;
int main(){
	unsigned long long int day=0;
	unsigned long long int high,up,down;
	cin>>high>>up>>down;
	for(unsigned long long int i=1;;i++){
		high-=up;
		if(high<=0)
		{
			day=i;
			break;
		}
		high+=down;
	}
	cout<<day<<endl;
	system("pause");
}
*/
/*
#include <iostream>
#include <iomanip>
using namespace std;
int main() {
	int m;
	cin >> m;
	bool _find = false;
	for (double i = 0; i<m / 5; i++) {
		for (double j = 0; j<m / 3; j++) {
			for (double k = 0; k<m; k++) {
				if (((i + j + k) == m) && ((i * 5 + j * 3 + k / 3) == m)) {
					cout.flags(ios::right);
					cout << setw(4) << i;
					cout.flags(ios::right);
					cout << setw(4) << j;
					cout.flags(ios::right);
					cout << setw(4) << k;
					cout << '\n';
					_find = true;
				}
			}
		}
	}
	if (!_find)
		cout << "No Answer" << endl;
	system("pause");
	return 0;
}
*/
/*
#include <iostream>
#include <iomanip>
using namespace std;
int main() {
	int  n;
	cin >>n;
	bool _find = false;
	for (int i = 0; i <= 9; i++) {
		for (int j = 0; j <= 9; j++) {
			for (int k = 0; k <= 9; k++) {
				if ((i*100+j*10+k+j*100+k*10+k)==n) {
					cout.flags(ios::right);
					cout << setw(4) << i << setw(4) << j << setw(4) << k << endl;
					_find = true;
				}
			}
		}
	}
	if (!_find)
		cout << "No answer" << endl;
	system("pause");
	return 0;
}
*/
/*encript string*/
/*
#include <iostream>
#include <string>
using namespace std;
string _input() {
	char c, d;
	string s;
	d = getchar();
	while ((c = getchar()) != '\n') {
		s += c;
	}
	return s;
}
int main() {
	int k;
	string str;
	cin >>k;
	str = _input();
	k %= 26;
	for (char &x : str) {
		int tmp = x;
		if (tmp > 64&&tmp<91) {
			tmp += k;
			if (tmp > 90) {
				tmp -= 26;
			}
		}
		else if(tmp>96&&tmp<123){
			tmp += k;
			if (tmp > 122) {
				tmp -= 26;
			}
		}
		x = tmp;
	}
	cout << str << endl;
	system("pause");
}
*/
/*tick and tick*/
/*
#include <iostream>
using namespace std;
int main() {
	double d;
	cin >> d;
	double alpha;
	int seconds = 0;
	for (alpha = 0; alpha < 24 * 60 * 360; alpha++) {
		if(fmod(alpha,360)-fmod(alpha/60,360)>=d&&fmod())
	}
}
*/
/*statistical*/
//
//#include <iostream>
//using namespace std;
//int main() {
//	int t;
//	while (cin >> t) {
//		if (!t)
//			break;
//		double num;
//		int a = 0, b = 0, c = 0;
//		for (int i = 0; i < t; i++) {
//			cin >> num;
//			if (num < 0) {
//				a++;
//			}
//			else if (num == 0) {
//				b++;
//			}
//			else {
//				c++;
//			}
//		}
//		cout << a << ' ' << b << ' ' << c << endl;
//	}
//	system("pause");
//	return 0;
//}
/*count the distance between two points*/
/*
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main() {
	double a, b, c, d;
	while (cin >> a >> b >> c >> d) {
		cout << setiosflags(ios::fixed) << setprecision(2) << sqrt((a - c)*(a - c) + (b - d)*(b - d)) << endl;
	}
	return 0;
}
*/

//
//#include <string>
//#include <iostream>
//using namespace std;
//int main() {
//	string str;
//	int n;
//	cin >> n;
//	while (n--) {
//		cin >> str;
//		string year, month, day;
//		year = str.substr(6, 4);
//		month = str.substr(10, 2);
//		day = str.substr(12, 2);
//		cout << year << '-' << month << '-' << day << endl;
//	}
//	return 0;
//}


/*jump downstairs*/
/*
#include <iostream>
using namespace std;
int main() {
	int n;
	int arr[40];
	arr[0] = 1;
	arr[1] = 2;
	arr[2] = 3;
	for (int i = 3; i < 40; i++) {
		arr[i] = arr[i - 2] + arr[i - 1];
	}
	while (cin >> n) {
		if (!n) break;
		cout << arr[n-1] << endl;
	}
	return 0;
}
*/

/*count vowel*/
/*
#include <iostream>
#include <string>
using namespace std;
bool vowel(const char &c) {
	if (c == 'a' || c == 'e' || c == 'i' || c == 'u' || c == 'o' || c == 'A' || c == 'E' || c == 'I' || c == 'U' || c == 'O') return 1;
	return 0;
}
string _input() {
	string s;
	char c;
	while ((c = getchar()) != '\n') {
		s += c;
	}
	return s;
}
int main() {
	int cnt = 0;
	string str = _input();
	for (const auto &x : str) {
		if (vowel(x)) cnt++;
	}
	cout << cnt << endl;
	system("pause");
}
*/
/*time minus*/
/*
#include <iostream>
#include <string>
using namespace std;
int main() {
	string str1, str2;
	while (cin >> str1 >> str2) {
		string h1, h2, m1, m2, s1, s2;
		h1 = str1.substr(0, 2);
		m1 = str1.substr(3, 2);
		s1 = str1.substr(6, 2);
		h2 = str2.substr(0, 2);
		m2 = str2.substr(3, 2);
		s2 = str2.substr(6, 2);
		int _h1, _h2, _m1, _m2, _s1, _s2;
		_h1 = std::stoi(h1);
		_m1 = std::stoi(m1);
		_s1 = std::stoi(s1);
		_h2 = std::stoi(h2);
		_m2 = std::stoi(m2);
		_s2 = std::stoi(s2);
		int rh, rm, rs;
		if (_s2 < _s1) {
			_s2 += 60;
			_m2 -= 1;
		}
		rs = _s2 - _s1;
		if (_m2 < _m1) {
			_m2 += 60;
			_h2 -= 1;
		}
		rm = _m2 - _m1;
		rh = _h2 - _h1;
		string res;
		if (rh < 10) {
			res = res + '0';
		}
		res = res + to_string(rh);
		res = res + ':';
		if (rm < 10) {
			res = res + '0';
		}
		res = res + to_string(rm);
		res = res + ':';
		if (rs < 10) {
			res = res + '0';
		}
		res = res + to_string(rs);
		cout << res << endl;
	}
}
*/

/*flower number*/
/*
#include <iostream>
#include <string>
using namespace std;
bool judge(const int &num) {
	string str = to_string(num);
	int sum=0;
	for (int i = 0; i < 3; i++) {
		sum += (str[i]-48)*(str[i] - 48)*(str[i] - 48);
	}
	if(sum==num)return 1;
	return false;
}
int main() {
	int m, n;
	while (cin >> m >> n) {
		bool _has = false;
		for (; m <= n; m++) {
			if (judge(m)) {
				cout << m << ' ';
				_has = true;
			}
		}
		if (!_has) {
			cout << "no" << endl;
		}
		else {
			cout << endl;
		}
	}
	system("pause");
	return 0;
}
*/

/*avarage grade*/
/*
#include <iostream>
#include <iomanip>
using namespace std;
int main() {
	int arr[]{ 95,85,75,65,40 };
	char c;
	double sum = 0;
	int cnt=0;
	while ((c = getchar()) != '\n') {
		sum += arr[c - 65];
		cnt++;
	}
	cout << setiosflags(ios::fixed) << setprecision(1) << sum / (double)cnt << endl;
	system("pause");
	return 0;
}

*/

/*angle of vally guess*/
/*
#include <iostream>
int getStep(int &num) {
	int step = 0;
	while(num != 1) {
		if (num % 2) {
			num = num * 3 + 1;
		}
		else {
			num /= 2;
		}
		step++;
	}
	return step;
}
using namespace std;
int main() {
	int m;
	while(cin >> m)	cout << getStep(m) << endl;
	system("pause");
}
*/


/*fact function*/
/*
#include <iostream>
using namespace std;
unsigned long fact(const unsigned &num) {
	unsigned long f = 1;
	for (unsigned int i = 2; i <= num; i++) {
		f *= i;
	}
	return f;
}
int main() {
	unsigned int m, k;
	cin >> m >> k;
	cout << fact(m) / (fact(k)*fact(m - k)) << endl;
	system("pause");
}
*/

/*the sum of inverse number*/
/*
#include <iostream>
using namespace std;
int Inverse(int num) {
	int digit = log10(num);
	int vrsNum = 0;
	for (int i = 0; i <= digit; i++) {
		vrsNum += (int)pow(10, digit - i)*((num / (int)pow(10, i)) % 10);
	}
	return vrsNum;
}
int main() {
	int m;
	cin >> m;
	int n = Inverse(m);
	cout << m + n << endl;
	return 0;
}
*/


/*train ticket cancel fee*/
/*
#include <iostream>
#include<iomanip>
using namespace std;
double CancelFee(const double &price) {
	double fee = 0.05*price;
	if (fee - (int)fee < 0.25) {
		return (int)fee;
	}
	else if (fee - (int)fee < 0.75) {
		return (int)fee + 0.5;
	}
	else {
		return (int)fee + 1;
	}
}
int main() {
	double price;
	cin >> price;
	cout <<setiosflags(ios::fixed)<<setprecision(1)<< CancelFee(price) << endl;
	system("pause");
	return 0;
}
*/
/*Pascal's triangle*/
/*
#include <iostream>
using namespace std;
int main() {
	int **arr = new int*[30];
	for (int i = 0; i < 30; i++) {
		arr[i] = new int[i + 1];
		for (int j = 0; j < i + 1; j++) {
			if (!j || j == i) {
				arr[i][j] = 1;
			}
			else {
				arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
			}
		}
	}
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < i + 1; j++) {
			cout << arr[i][j];
			if (j == i) {
				cout << endl;
			}
			else {
				cout << ' ';
			}
		}
	}
	system("pause");
}
*/

/*count highest frequency letter of a string*/
/*
#include <iostream>
#include <string>
using namespace std;
string _input() {
	string s;
	char c;
	while ((c = getchar()) != '\n') {
		s += c;
	}
	return s;
}
int main() {
	string str = _input();
	short letter[26];
	for (short i = 0; i < 26; i++) {
		letter[i] = 0;
	}
	for (auto &x : str) {
		if (x > 64 && x < 91) {
			letter[x - 65]++;
		}
		else if (x > 96 && x < 123) {
			letter[x - 97]++;
		}
	}
	short _max = letter[0];
	short _maxIndex = 0;
	for (short i = 1; i < 26; i++) {
		if (letter[i] > _max) {
			_max = letter[i];
			_maxIndex = i;
		}
	}
	cout << char(_maxIndex+97) << endl;
	system("pause");
}
*/


/*count how many number in a string*/
/*
#include <iostream>
using namespace std;
int main() {
	char c;
	int times;
	cin >> times;
	while (times--) {
		int cnt = 0;
		int j = 0;
		while ((c = getchar()) != '\n'||j==0) {
			if (c > 47 && c < 58) {
				cnt++;
			}
			j++;
		}
		cout << cnt << endl;
	}
	system("pause");
}
*/
/*count words*/
/*
#include <string>
#include <iostream>
#include <vector>
using namespace std;
int main() {
	string s;
	vector<string> vec;
	while (cin >> s) {
		vec.push_back(s);
	}
	cout << vec.size() << endl;
	system("pause");
}
*/
/*string to int */
/*
#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int my_stoi(string &s) {
	int digit = s.length();
	int sum = 0;
	for (int i = 0; i < digit; i++) {
		sum += ((int)pow(10, digit - i - 1))*(s[i] - 48);
	}
	return sum;
}
string _input() {
	string s;
	char c;
	while ((c = getchar()) != '\n') {
		if (c > 47 && c < 58) {
			s += c;
		}
	}
	return s;
}
int main() {
	string str = _input();
	int n = my_stoi(str) * 2;
	cout << n << endl;
	system("pause");
	return 0;
}
*/
/*归并排序*/
/*
#include <iostream>

using namespace std;

void Merge(int *array, int low, int middle, int high)
{
	int *A = new int[high - low + 1];
	int i = low;
	int j = middle + 1;
	int k = 0;
	while (i <= middle && j <= high)
	{
		if (array[i] < array[j])
			A[k++] = array[i++];
		else
			A[k++] = array[j++];
	}

	while (i <= middle)
		A[k++] = array[i++];
	while (j <= high)
		A[k++] = array[j++];
	for (i = low; i <= high; i++)
		array[i] = A[i - low]; 
	delete A;
}

void MergeSort(int *array, int low, int high)
{
	int middle;
	if (low < high)
	{
		middle = (low + high) / 2;
		MergeSort(array, low, middle);
		MergeSort(array, middle + 1, high);
		Merge(array, low, middle, high);
	}
}

int main()
{
	int n;
	cin >> n;
	int *array = new int[n];
	for (int i = 0; i < n; i++)
	{
		cin >> array[i];
	}

	MergeSort(array, 0, n - 1);
	for (int j = 0; j < n; j++)
	{
		cout << array[j] << " ";
	}
	cout << endl;
	return 0;
}
*/

/*寻找两个链表的第一个公共节点*/
#include <iostream>
using namespace std;

struct Node {
	int val;
	Node *next;
	Node() :val(0),next(0){}
};

//获得链表的长度
int GetListLength(Node *head) {
	int len=0;
	for (;head; len++)
		head = head->next;
	return len;
}

//从指定节点后移steps个节点
void relocate(Node *&list,const int &steps) {
	for (int i = 0; i < steps; i++) {
		list = list->next;
	}
}

int GetCommonNode(Node *list1, Node *list2) {
	int len1 = GetListLength(list1);
	int len2 = GetListLength(list2);
	//获得两链表中的长链表
	Node *longList = list1;
	Node *shortList = list2;
	if (len2 > len1) {
		longList = list2;
		shortList = list1;
	}
	//将长链表后移n个节点，使得新链表的长度与锻炼表的长度相等
	relocate(longList, abs(len1 - len2));
	//此时可以让两个链表同时向后移动来找到公共节点
	while (longList) {
		if (longList->val == shortList->val) {
			return longList->val;
		}
		longList = longList->next;
		shortList = shortList->next;
	}
	//如果没有公共节点，返回-1
	return -1;
}

int main() {
	Node n1, n2, n3, n4, n5, n6, n7;
	n1.val = 1;
	n2.val = 2;
	n3.val = 3;
	n4.val = 4;
	n5.val = 5;
	n6.val = 6;
	n7.val = 7;
	n1.next = &n2;
	n2.next = &n3;
	n3.next = &n4;
	n4.next = &n5;
	n5.next = &n6;
	n7.next = &n4;
	cout << GetCommonNode(&n1, &n7) << endl;
	system("Pause");
}
