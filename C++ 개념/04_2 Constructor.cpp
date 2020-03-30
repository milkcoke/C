#include <iostream>
using namespace std;

class Date{
	private: 
	int year, month, day;
	
	public:
		
	void setDate(int year, int month, int day)
		{
			this->year = year;
			this->month = month;
			this->day = day;
		};
	void showDate(){
		cout << this->year << "년 " << this->month << "월 " << this->day << "일" << endl;
	};
	
	void addMonth(int month)
	{
		if((this->month + month) > 12)
		{
		 this->year += (this->month + month) / 12;
		}
		this->month = (this->month + month) % 12;	
	};
	void addYear(int year)
	{
		this->year += year;
	};
	void addDay(int day)
	{
		if(this->day + day > 30)
		{
			this->month += (this->day + day) / 30;
		}
		this->day = (this->day + day) % 30;
	};
	
	Date(){
		this->year = 2019;
		this->month = 11;
		this->day = 20;
	}
	Date(int year, int month, int day)
	{
		this->year = year;
		this->month = month;
		this->day = day;
	}
	~Date(){
		cout << "알아서 소멸자 생성됨" << endl;
	}
};

int main(void)
{
	Date day;
	Date day1(2016, 4, 6);
	
	day.showDate();
	day1.showDate();
	
	day1.addMonth(50);
	day1.showDate();
	day1.addDay(30);
	day1.showDate();
	//day1.showDate();
	
	return 0;
}
