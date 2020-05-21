#include<iostream>
using namespace std;

class time
{
	private:
		int hours;
		int minutes ;
		int seconds;
		
	public:
		timedetails();
		displaydetail();
		convertsec(){
			int sec;
			sec =hours*3600+minutes*60+seconds;
			cout<<"Time in total seconds is :"<<sec;
			return sec;
		}
};

time:: timedetails(){
	cout<<"THIS IS A 12 HOUR FORMAT CLOCK :"<<endl;
	cout<<"Enter the time in HH:MM:SS format"<<endl;
	cout<<"HOURS ? :\t";
	cin>>hours;
	cout<<"MINUTES ? :\t";
	cin>>minutes;
	cout<<"SECONDS ? :\t";
	cin>>seconds;
}
time:: displaydetail(){
	cout<<"THE TIME YOU HAVE ENTERED IS(HH:MM:SS) :"<<endl;
	cout<<"HOURS  :"<<hours<<endl;
	cout<<"MINUTES  :"<<minutes<<endl;
	cout<<"SECONDS  :"<<seconds<<endl;
	cout<<"The time is ="<<hours<<":"<<minutes<<":"<<seconds<<endl;
}

int main()
{
	time t1;
	t1.timedetails();
	t1.displaydetail();
	t1.convertsec();
	return 0;
}
