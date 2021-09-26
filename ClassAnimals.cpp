#include<iostream>
using namespace std;
class Animal {
	//Data member
	public:
		double lenght;
		double height;
		string name;
		string gender;
	//Constructor
	public:
		//Default constructor
		Animal(){
			lenght = 0.00;
			height = 0.00;
			name = "Lucky";
			gender = "Male";
		}
		// Constructor have parameter
		Animal(double lenght, double height, string name, char gender){
			this->lenght = lenght;
			this->height = height;
			this->name = name;
			this->gender = gender;
		}
		//Set method
		void setLenght(double lenght){
			this->lenght = lenght;
		}
		void setHeight(double height){
			this->height = height;
		}
		void setName(string name){
			this->name = name;
		}
		void setGender(string gender){
			this->gender = gender;
		}
		//Get Method
		double getLenght(){
			return lenght;
		}
		double gethHeight(){
			return height;
		}
		string getName(){
			return name;
		}
		string getGender(){
			return gender;
		}
};
class Dog : public Animal {
	public:
		//Data member
		string dog_type;
		int num_legs;
		double running_speed;
	//Constructor
	public:
		//Default constructor
		Dog(){
			dog_type = "Khmer Dog";
			num_legs = 4;
			running_speed = 140;
		}
		//Construcor have parameter
		Dog(string dog_type, int num_legs, double running_speed){
			this->dog_type = dog_type;
			this->num_legs = num_legs;
			this->running_speed = running_speed;
		}
		//Set method
		void setDog_type(string dog_type){
			this->dog_type = dog_type;
		}
		void setNum_legs(int num_legs){
			this->num_legs = num_legs;
		}
		void setRunning_speed(double running_speed){
			this->running_speed = running_speed;
		}
		//Get method
		string getDog_type(){
			return dog_type;
		}
		int getNum_legs(){
			return num_legs;
		}
		double getRunning_speed(){
			return running_speed;
		}
		//Display method
		void display(){
			cout << lenght << "\t";
			cout << height << "\t";
			cout << name << "\t";
			cout << gender << "\t";
			cout << dog_type << "\t";
			cout << "    ";
			cout << num_legs << "\t";
			cout << "         ";
			cout << running_speed << "\n";
		}
};
int main(){
	Dog Category[3];
	Category[0].setLenght(50);
	Category[0].setHeight(0.25);
	Category[0].setName("Lucky");
	Category[0].setGender("Male");
	Category[0].setDog_type("Khmer Dog");
	Category[0].setNum_legs(4);
	Category[0].setRunning_speed(17);
	
	Category[1].setLenght(50);
	Category[1].setHeight(0.40);
	Category[1].setName("Mike");
	Category[1].setGender("Male");
	Category[1].setDog_type("USA Dog   ");
	Category[1].setNum_legs(4);
	Category[1].setRunning_speed(19);
	
	Category[2].setLenght(50);
	Category[2].setHeight(0.50);
	Category[2].setName("Jonh");
	Category[2].setGender("Male");
	Category[2].setDog_type("US Dog    ");
	Category[2].setNum_legs(4);
	Category[2].setRunning_speed(20);
	
	cout << "Lenght\tHeight\tName\tGender\tDog_Type\tNum_Lenght\tRunning_Speed\n";
	
	for(int j=0; j<3; j++){
		Category[j].display();
	}
	
	return 0;
}
