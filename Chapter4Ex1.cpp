// Name: Logen N. Wolfe
// Date: 10/15/26
// Program: Chapter 4 Exercise 1
// Description: This program will ask for two integers, then determine which one is bigger and smaller, displaying the results.

#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	int num1;
	int num2;
	char choice;
	cout << "Welcome to Logen's Bigger or Smaller!" << endl;
	cout << "Gimme two numbers, any two numbers, and i'll maagically tell you which is bigger and smaller!" << endl;
	cout << "Let's see that first number!" << endl;
	cin >> num1;
	cout << "Now let's see that second number!" << endl;
	cin >> num2; 
	if (num1 > num2) // Number 1 Wins!
	{
		cout << "Looks like the bigger number is.." << num1 << "! Better luck next time," << num2 << "!" << endl;
	}
	else if (num1 < num2) // Number 2 Wins!
	{
		cout << "Looks like the bigger number is.." << num2 << "! Sucks to be you," << num1 << "!" << endl;
	}
	else if (num1 == num2) // Two equal numbers
	{
		cout << "..Haha, funny guy over here gave us the same number twice! Stop playin around, and give us two different numbers this time!" << endl;
		main();
	}

	else // Some other odd outcome..?
	{
		cout << "I..don't quite know what that means..! Let's give it another shot!" << endl;
		main();
	}

	cout << "Thanks for playin' Logen's Bigger or Smaller! Wanna play again? (y/n)" << endl;
	cin >> choice;

	if (choice == 'y' || choice == 'Y') // Yes, i'd love to play again!
	{
		main();
	}
	else if (choice == 'n' || choice == 'N') // Nah, i'm done.
	{
		cout << "Show's over then, see ya later!" << endl;
	}
	else // Some other odd outcome..?
	{
		cout << "..I have no clue what that means, so i'll just end the show here!" << endl;
	}
}

