#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
	int num, guess, tries = 0;
	srand(time(0)); 
	num = rand() % 100 + 1; 
	cout << "Number Guessing Game!!\n\n";

	do
	{
		cout << "Enter a guess number between 1 and 100 : ";
		cin >> guess;
		tries++;

		if (guess > num)
			cout << "Your guess is too high!\n\n";
		else if (guess < num)
			cout << "Your guess is too low!\n\n";
		else
			cout << "\nYey Correct guess! You got it in " << tries << " guesses!\n";
	} while (guess != num);

	return 0;
}
