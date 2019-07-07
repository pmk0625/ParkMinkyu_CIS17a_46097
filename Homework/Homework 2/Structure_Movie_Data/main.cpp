#include <iostream>
#include <string>

using namespace std;

struct MovieData
{
    string title, director;
    int year, movieTime;
    
};

int main(){
	//your code here
	int number; 
	
	MovieData movie1;
	MovieData movie2;
	
	cout<<"This program reviews structures"<<endl;
	cout<<"Input how many movies, the Title of the Movie, Director, Year Released, and the Running Time in (minutes)."<<endl;
	
	cin>>number;
	
	cin.ignore();
	getline(cin, movie1.title);
	getline(cin, movie1.director);
	
	cin>>movie1.year;
	cin>>movie1.movieTime;
	
	cout<<endl;
	
	cout<<"Title:     "<<movie1.title<<endl;
	cout<<"Director:  "<<movie1.director<<endl;
	cout<<"Year:      "<<movie1.year<<endl;
	cout<<"Length:    "<<movie1.movieTime<<endl;
	
	cout<<endl;
	
	cin.ignore();
	getline(cin, movie2.title);
	getline(cin, movie2.director);
	
	cin>>movie2.year;
	cin>>movie2.movieTime;
	
	cout<<"Title:     "<<movie2.title<<endl;
	cout<<"Director:  "<<movie2.director<<endl;
	cout<<"Year:      "<<movie2.year<<endl;
	cout<<"Length:    "<<movie2.movieTime<<endl;
	
	
	
	return 0;
}