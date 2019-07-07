#include <iostream>
#include <iomanip>

using namespace std;

struct WeatherStat
{
    string months;
    float rainFall;
    int lowTemp, highTemp;
};

int main(){
	//your code here
	const short NUM_MONTHS = 12;
	WeatherStat year[NUM_MONTHS];
	string month[NUM_MONTHS] = { "January", "February", "March", "April", "May",
    "June", "July", "August", "September", "October", "November", "December"};
	
	for (int i=0; i<NUM_MONTHS; i++){
	    cin>>year[i].months;
	    cin>>year[i].rainFall;
	    cin>>year[i].lowTemp;
	    if (year[i].lowTemp < -100 || year[i].lowTemp >140){
	        cin>>year[i].lowTemp;
	    }
	    cin>>year[i].highTemp;
	    if (year[i].highTemp < -100 || year[i].highTemp >140){
	        cin>>year[i].highTemp;
	    }
	}
	
	float totalR = 0;
	float avgRain = 0;
	int totalLT = 0;
	int totalHT = 0;
	int avgTemp = 0;
	
	for (int i=0; i<NUM_MONTHS; i++){
	    totalR += year[i].rainFall;
	    totalLT += year[i].lowTemp;
	    totalHT += year[i].highTemp;
	}
	
	avgRain = totalR/NUM_MONTHS;
	avgTemp = (totalLT + totalHT)/24;
	
	int lowest = year[0].lowTemp;
	int highest = year[0].highTemp;
	int monthL, monthH;
	
	for (int i=0; i<NUM_MONTHS; i++){
	    if (year[i].lowTemp < lowest){
	        lowest = year[i].lowTemp;
	        monthL = i;
	    }
	    if (year[i].highTemp > highest){
	        highest = year[i].highTemp;
	        monthH = i;
	    }
	}
	
	cout<<setprecision(1)<<fixed;
	cout<<"Average Rainfall "<<avgRain<<" inches/month"<<endl;
	cout<<"Lowest  Temperature "<<month[monthL]<<"  "<<lowest<<" Degrees Fahrenheit"<<endl;
    cout<<"Highest Temperature "<<month[monthH]<<"  "<<highest<<" Degrees Fahrenheit"<<endl;
    cout<<"Average Temperature for the year "<<avgTemp+1<<" Degrees Fahrenheit"<<endl;
	

	
	return 0;
}