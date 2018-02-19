#include <iostream>
using namespace std;
void horoscopes(int day, int month);

int main()
{
	int day,month;
	cout<<"enter day when you were born: ";
	cin>>day;
	cout<<"enter month when you were born: ";
	cin>>month;
	cout<<"Your horoscopes is: ";
	horoscopes(day, month);
	cout<<endl;

}

void horoscopes(int day, int month)
{
if (day > 31 || month > 12 || day == 0 || month == 0)
		{cout<<"Invalid day and month"<<endl;}
else
{
	switch(month)
	{
		case 1:
			if (day < 20)
				{ cout<<"Capricorn"<<endl;}
			if (day > 19)
				{ cout<<"Aquarius"<<endl;}
			break;
		case 2:
			if (day < 19)
				{ cout<<"Aquarius"<<endl;}
			if (day > 18)
				{ cout<<"Pisces"<<endl;}
			break;
		case 3:
			if (day < 21)
				{ cout<<"Pisces"<<endl;}
			if (day > 20)
				{ cout<<"Aries"<<endl;}
			break;
		case 4:
			if (day < 20)
				{ cout<<"Aries"<<endl;}
			if (day > 19)
				{ cout<<"Taurus"<<endl;}
			break;
		case 5:
			if (day < 21)
				{ cout<<"Taurus"<<endl;}
			if (day > 20)
				{ cout<<"Gemini"<<endl;}
			break;
		case 6:
			if (day < 21)
				{ cout<<"Gemini"<<endl;}
			if (day > 20)
				{ cout<<"Cancer"<<endl;}
			break;
		case 7:
			if (day < 23)
				{ cout<<"Gemini"<<endl;}
			if (day > 22)
				{ cout<<"Leo"<<endl;}
			break;
		case 8:
			if (day < 23)
				{ cout<<"Leo"<<endl;}
			if (day > 22)
				{ cout<<"Virgo"<<endl;}
			break;
		case 9:
			if (day < 23)
				{ cout<<"Virgo"<<endl;}
			if (day > 22)
				{ cout<<"Libra"<<endl;}
			break;
		case 10:
			if (day < 23)
				{ cout<<"Libra"<<endl;}
			if (day > 22)
				{ cout<<"Scorpio"<<endl;}
			break;
		case 11:
			if (day < 22)
				{ cout<<"Scorpio"<<endl;}
			if (day > 21)
				{ cout<<"Sagittarius"<<endl;}
			break;
		case 12:
			if (day < 22)
				{ cout<<"Sagittarius"<<endl;}
			if (day > 21)
				{ cout<<"Capricorn"<<endl;}
			break;
	}
}
}