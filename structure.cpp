#include<iostream>
using namespace std;
struct Date {
	int Day, Month, Year;
};
struct Movie {
	string Title;
	string Author;
	int Year;
	Date ReleaseDate;
};
Movie Input(){
	Movie movies;
	cout << "Title : "; cin >> movies.Title;
	cout << "Author : "; cin >> movies.Author;
	cout << "Year : "; cin >> movies.Year;
	cout << "==Release Date==\n";
	cout << "Day : "; cin >> movies.ReleaseDate.Day;
	cout << "Month : "; cin >> movies.ReleaseDate.Month;
	cout << "Year : "; cin >> movies.ReleaseDate.Year;
	cout << endl;
	return movies;
}
void Display (Movie movies){
	cout << movies.Title << "\t";
	cout << movies.Author << "\t";
	cout << movies.Year << "\t";
	cout << movies.ReleaseDate.Day << "-";
	cout << movies.ReleaseDate.Month << "-";
	cout << movies.ReleaseDate.Year << endl;
}
int main(){
	Movie mov1[3];
	
	for(int i=0; i<3; i++){
		mov1[i] = Input();
		if(i==0){
			mov1[i].Title += "    " ;
		}
	}
	cout << "Tittle\t\t\tAuthor\tYear\tRelease Date\n";
	for(int i=0; i<3; i++){
		Display(mov1[i]);
	}
	return 0;
}
