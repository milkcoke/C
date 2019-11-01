#include <iostream>
using namespace std;

class Date {
private:
  int year;
  int month;
  int day;

 public:
  void set_date(int _year, int _month, int _day) {
  this->year = _year;
	if(_month <= 12)
  		this->month = _month;
  	else
  		this->month = _month % 12;
  this->day = _day;
  }
  void add_day(int inc) {
  this->day += inc;
  }
  void add_month(int inc) {
	if((this->month + inc) <= 12)
  		this->month += inc;
  	else
  		this->month = (month+inc) % 12;
  }
  void add_year(int inc) {
  this->year += inc;
  }
  void get_date() {
  cout << this->year << "³â " << this->month << "¿ù " << this->day << "ÀÏ \n";
	}
};

int main(void){
	Date list[3];
	Date date2018;
	Date date2019;
/*	for(int i = 0; i < 3; i++)
	{
		list[i] = new Date;
	}
*/
	date2018.set_date(2018, 30, 2);
	date2018.get_date();
	date2019.set_date(2019, 10, 30);
	date2019.get_date();
	list[1].set_date(2030, 40, 17);
	list[1].get_date();
	
	return 0;
}
