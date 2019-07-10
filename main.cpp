#include <iostream>
#include <random>
#include <ctime>
using namespace std;

std::default_random_engine RNG(time(0));


//dice 
std::uniform_int_distribution<int> d4(1,4);
std::uniform_int_distribution<int> d6(1,6);
std::uniform_int_distribution<int> d8(1,8);
std::uniform_int_distribution<int> d10(1,10);
std::uniform_int_distribution<int> d12(1,12);
std::uniform_int_distribution<int> d20(1,20);
std::uniform_int_distribution<int> d100(1,100);

void menu() {
	int choice;
	std::cout << "1. d4\n";
	std::cout << "2. d6\n";
	std::cout << "3. d8\n";
	std::cout << "4. d10\n";
	std::cout << "5. d12\n";
	std::cout << "6. d20\n";
	std::cout << "7. d100\n";
	std::cin >> choice; 

	switch(choice) {
			int numOfRolls;
		case 1:
			std::cout << "How many times would you like to roll? ";
				std::cin >> numOfRolls;
				for(int i = 0; i < numOfRolls; i++) {
					std::cout << d4(RNG)  << std::endl;
				}
		break;
		case 2:
			std::cout << "How many times would you like to roll? ";
				std::cin >> numOfRolls;
				for(int i = 0; i < numOfRolls; i++) {
					std::cout << d6(RNG)  << std::endl;
				}
		break;
		case 3:
			std::cout << "How many times would you like to roll? ";
				std::cin >> numOfRolls;
				for(int i = 0; i < numOfRolls; i++) {
					std::cout << d8(RNG)  << std::endl;
				}
		break;
		case 4:
			std::cout << "How many times would you like to roll? ";
				std::cin >> numOfRolls;
				for(int i = 0; i < numOfRolls; i++) {
					std::cout << d10(RNG)  << std::endl;
				}
		break;
		case 5:
			std::cout << "How many times would you like to roll? ";
				std::cin >> numOfRolls;
				for(int i = 0; i < numOfRolls; i++) {
					std::cout << d12(RNG)  << std::endl;
				}
		break;
		case 6:
			std::cout << "How many times would you like to roll? ";
				std::cin >> numOfRolls;
				for(int i = 0; i < numOfRolls; i++) {
					std::cout << d20(RNG)  << std::endl;
				}
		break;
		case 7:
			std::cout << "How many times would you like to roll? ";
				std::cin >> numOfRolls;
				for(int i = 0; i < numOfRolls; i++) {
					std::cout << d100(RNG) << std::endl;
				}
		break;

		default:
#ifdef _WIN32
		system("cls");
#elif _LINUX
		system("clear");
#endif
		menu();
		break;
	}

}



int main() {
	menu();
	return 0;
}
