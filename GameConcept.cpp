#include<iostream>
#include<stdlib.h>
#include<math.h>
#include<string.h>
using namespace std;
int main(){
	char skill;
	bool super = true;
	int max, min;
	while(super){
	cout << "Input hero skill [A Q W E R] : "; cin >> skill;
	
		if (skill =='A') {
			max = 250, min = 80;
			double AAA = rand() % (max-min+1) + min;
			cout << "Attack his enemy deal " << AAA << " damage.\n";
		} else if (skill == 'Q') {
			max = 6, min = 1;
			double BBB = rand() % (max-min+1) + min;
			max = 350, min = 150;
			double CCC = rand() % (max-min+1) + min;
			cout << "Chaos Bolt: Throws a mysterious bolt of energy at the target unit. It stuns for " << BBB << " seconds and deals " << CCC << " damage.\n";
		} else if (skill == 'W'){
			max = 10, min = 1;
			double DDD = rand() % (max-min+1) + min;
			cout << "Reality Rift: Teleports you, any clones you have and the target unit to a point along the line between the two of you." 
			<< " Reduces armor of the enemy unit by " << DDD << " for 6 seconds.\n";
		}else if (skill == 'E') {
	 		max = 250, min = 80;
			double AAA = rand() % (max-min+1) + min;
	 		double  FFF = AAA * 2.50;
			double GGG = FFF * 0.20;
			cout << "Chaos Strike: Increases his attack damage by 250%, and health him for 20% of that damage. Damage = " << FFF << ", Health = " << GGG << "\n";
		} else if (skill == 'R'){
			max = 5, min = 3;
			double EEE = rand() % (max-min+1) + min;
			cout << "Phantasm: Summons" << EEE << "clones of Chaos Knight for 3 seconds. The clones are strong illusions that deal 100% damage, but take 325% damage.\n";
		} else {
			break;
		}
	}

	return 0;
}
