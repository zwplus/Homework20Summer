#include<iostream>
#include<time.h>

using namespace std;

class Date{
	int year;
	int month;
	int day;
public:	
	Date(){
		time_t tt = time(NULL);
		tm* today=localtime(&tt);
		year=today->tm_year+1900;
		month=today->tm_mon+1;
		day=today->tm_mday;
	}
	
	Date(int year,int month,int day){
		this->year=year;
		this->month=month;
		this->day=day;
	}
	
	
	void setYear(int year){
		this->year=year;
	}
	
	void setMonth(int month){
		this->month=month;
	}
	
	void setDay(int day){
		this->day=day;
	}
	
	int getYear(){
		return year;
	}
	
	int getMonth(){
		return month;
	}
	
	int getDay(){
		return day;
	}
	
}; 

class DateTime{
	Date a;
	
	int hour,min,sec;
	
	public:
	DateTime(){
		time_t tt = time(NULL);
		tm* today=localtime(&tt);
		hour=today->tm_hour;
		min=today->tm_min;
		sec=today->tm_sec;	
	}
	DateTime(int year,int month,int day,int hour,int min,int sec){
		a=Date(year,month,day);
		this->hour=hour;
		this->min=min;
		this->sec=sec;
	}
	void setDate(int year,int month,int day){
		a.setDay(day);
		a.setMonth(month);
		a.setYear(year);
		}
	Date getDate(){
		return a;
	}
	void setHour(int hour){
	    this->hour=hour;
	}
	int getHour(){
		return hour;
	}
	void setMin(int min){
	    this->min=min;
	}
	int getMin(){
		return min;
	}
	void setSecond(int sec){
	    this->sec=sec;
	}
	int getSecond(){
		return sec;
	}
	void show(){
		cout<<a.getYear()<<"年"<<a.getMonth()<<"月"<<a.getDay()<<"日"<<hour<<"时"<<min<<"分"<<sec<<"秒"<<endl;
	}	
};

int main(){
	DateTime a;
	a.show();
	return 0;
} 
