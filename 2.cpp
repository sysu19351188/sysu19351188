#include<iostream>
using namespace std;

enum ye{y2010,y2011,y2012,y2013,y2014,y2015};
enum mo{jan,feb,mar,apr,may,jun,jul,aug,sep,Oct,nov,Dec};

class timedate {              //定义日期类
public:
	timedate() {
		year = y2010;
		month = jan;
		date = 1;
		hour = 0;
		minute = 0;
		second = 0;
	}
	timedate(ye a, mo b, int c) {                //构造
		year = a;
		month = b;
		date = c;
		hour = 12; minute = 60; second = 60;
	}
	void getdate(ye &,mo &,int &); 
	void gettime(int&, int&, int&);
	void putdate(ye,mo , int);
	void puttime(int, int, int);
	void list();
private:
	ye year;
	mo month;
	int date,hour,minute,second;                                           //数据成员
};
void timedate::getdate(ye &y,mo &m,int &d) {
	y = year;
	m = month;
	d = date;
}
void timedate::gettime(int& a, int& b, int& c) {
	a = hour;
	b = minute;
	c = second;
}
void timedate::putdate(ye a, mo b, int c) {
	year = a;
	month = b;
	date = c;
}
void timedate::puttime(int a, int b, int c) {
	hour = a;
	minute = b;
	second = c;
}
void timedate::list() {
	cout << "year month date:"<<endl;
	switch (year) {
	case y2010:cout << "2010"; break;
	case y2011:cout << "2011"; break;
	case y2012:cout << "2012"; break;
	case y2013:cout << "2013"; break;
	case y2014:cout << "2014"; break;
	case y2015:cout << "2015"; break;
	}
	switch (month) {
	case jan:cout << " " << "jan"; break;
	case feb:cout << " " << "feb"; break;
	case apr:cout << " " << "apr"; break;
	case mar:cout << " " << "may"; break;
	case jun:cout << " " << "jun"; break;
	case jul:cout << " " << "jul"; break;
	case aug:cout << " " << "aug"; break;
	case sep:cout << " " << "sep"; break;
	case Oct:cout << " " << "oct"; break;
	case nov:cout << " " << "nov"; break;
	case Dec:cout << " " << "dec"; break;
	}
	cout << " " << date << endl;
	cout << "hour minute second:" << endl;
	cout << hour << " " << minute << " " << second << endl;
}
int main() {
	timedate a(y2010, feb, 1), b;
	a.list();
	b.list();
	return 0;
}