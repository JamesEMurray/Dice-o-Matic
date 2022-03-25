//Name: James Murray
//Date: 15/10/21
//Programmes purpose: Roll a specified dice for user. Random rolls.
//Known Bugs/Errors: None
//Time Taken: 35mins (Expected: 30)

//include relevant libraries
#include <time.h>
#include <random>

int rollDice(int t_max); //in pascal? RollDice

int main()
{
	//Declare variables
	int d4 = 0;
	int d6 = 0;
	int d8 = 0;
	int d10 = 0;
	int d12 = 0;
	int d20 = 0;
	int percDice = 0;

	//set up srand
	std::srand(static_cast<unsigned>(time(nullptr)));

	//input from user (dice type)
	d4 = rollDice(4);
	d6 = rollDice(6);
	d8 = rollDice(8);
	d10 = rollDice(10);
	d12 = rollDice(12);
	d20 = rollDice(20);
	percDice = rollDice(10) * 10;

	return (0);
}

int rollDice(int t_max)
{
	//Declare variables
	int answer = 0;

	answer = std::rand() % t_max + 1;

	return answer;
}
