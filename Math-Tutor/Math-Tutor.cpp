// Jacob Hardman
// Comp Sci 1
// Professor Jennifer Bailey
// 9/17/19

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
	bool isRunning = true;
	string userInput;
	string mode;
	int num1;
	int num2;
	int answer;

	while (isRunning == true) {
		cout << "\nWelcome to 'Math Tutor!'";

		bool userConfirm = false;

		while (userConfirm == false) {
			cout << "\nPlease enter '1' for an addition problem, '2' for a subtraction problem, '3' for a multiplication problem, or '4' for a division problem: ";
			cin >> userInput;

			int selection = stoi(userInput);

			switch (selection) {
			case 1:
				mode = "add";
				userConfirm = true;
				break;
			case 2:
				mode = "sub";
				userConfirm = true;
				break;
			case 3:
				mode = "mul";
				userConfirm = true;
				break;
			case 4:
				mode = "div";
				userConfirm = true;
				break;
			default:
				cout << "Please make a valid selection.";
			}

			if (userConfirm == true) {
				break;
			}
		}

		// Addition problem
		if (mode == "add") {
			cout << "You selected an addition problem.";
			num1 = rand() % 999 + 1;
			num2 = rand() % 999 + 1;
			answer = num1 + num2;

			cout << "\n" << num1 << " plus " << num2 << " = " << answer << ".";
			cin >> userInput;
		}
		// Subtraction problem
		else if (mode == "sub") {
			cout << "You selected a subtraction problem.";
			num1 = rand() % 999 + 1;
			num2 = rand() % num1 + 1;
			answer = num1 - num2;

			cout << "\n" << num1 << " minus " << num2 << " = " << answer << ".";
			cin >> userInput;
		}
		// Multiplication problem
		else if (mode == "mul") {
			cout << "You selected a multiplication problem.";
			num1 = rand() % 999 + 1;
			num2 = rand() % 999 + 1;
			answer = num1 * num2;

			cout << "\n" << num1 << " times " << num2 << " = " << answer << ".";
			cin >> userInput;
		}
		// Division problem
		else if (mode == "div") {
			cout << "You selected a division problem.";
			double divNum1 = rand() % 999 + 1.00;
			double divNum2 = rand() % 999 + 1.00;
			answer = divNum1 / divNum2;

			cout << "\n" << divNum1 << " divided by " << divNum2 << " = " << answer << ".";
			cin >> userInput;
		}
		// Catch-All
		else {
			cout << "FATAL ERROR";
		}
	}
}
