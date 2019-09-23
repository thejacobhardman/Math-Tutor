// Jacob Hardman
// Comp Sci 1
// Professor Jennifer Bailey
// 9/17/19

#include <iostream>
#include <iomanip>
#include <string>
#include <math.h>

using namespace std;

int main()
{
	bool isRunning = true;
	string userInput, mode;
	int num1, num2, answer;

	while (isRunning == true) {
		cout << "Welcome to 'Math Tutor!'";

		bool userConfirm = false;

		while (userConfirm == false) {
			cout << "\nPlease enter '1' for an addition problem, \n'2' for a subtraction problem, \n'3' for a multiplication problem, \nor '4' for a division problem: ";
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
			cout << "\nYou selected an addition problem." << endl;
			num1 = rand() % 999 + 1;
			num2 = rand() % 999 + 1;
			answer = num1 + num2;
			string displayAnswer = to_string(answer);
			int length = strlen(displayAnswer.c_str());
			string formattedAnswer;

			if (length == 4) {
				for (int i = 0; i < length; i++) {
					if (i == 1) {
						formattedAnswer += ",";
					}
					formattedAnswer += displayAnswer.at(i);
				}
			}
			else {
				formattedAnswer = displayAnswer;
			}

			cout << "\nSolve: ";
			cout << "\n " << right << setw(7) << num1 << "\n+" << right << setw(7) << num2 << "\n--------\n     ";
			
			cin >> userInput;
			int guess = stoi(userInput);

			if (guess == answer) {
				cout << "\nCORRECT!!!";
			}
			else {
				cout << "\nINCORRECT!!!";
			}

			cout << "\n " << right << setw(7) << num1 << "\n+" << right << setw(7) << num2 << "\n--------\n" << right << setw(8) << formattedAnswer << endl << endl;
		}
		// Subtraction problem
		else if (mode == "sub") {
			cout << "\nYou selected a subtraction problem."<< endl;
			num1 = rand() % 999 + 1;
			num2 = rand() % num1 + 1;
			answer = num1 - num2;

			cout << "\nSolve: ";
			cout << "\n " << right << setw(7) << num1 << "\n-" << right << setw(7) << num2 << "\n--------\n     ";

			cin >> userInput;
			int guess = stoi(userInput);

			if (guess == answer) {
				cout << "\nCORRECT!!!";
			}
			else {
				cout << "\nINCORRECT!!!";
			}

			cout << "\n " << right << setw(7) << num1 << "\n-" << right << setw(7) << num2 << "\n--------\n" << right << setw(8) << answer << endl << endl;
		}
		// Multiplication problem
		else if (mode == "mul") {
			cout << "\nYou selected a multiplication problem." << endl;
			num1 = rand() % 999 + 1;
			num2 = rand() % 999 + 1;
			answer = num1 * num2;
			string displayAnswer = to_string(answer);
			int length = strlen(displayAnswer.c_str());
			string formattedAnswer;

			switch (length) {
			case 4:
				for (int i = 0; i < length; i++) {
					if (i == 1) {
						formattedAnswer += ",";
					}
					formattedAnswer += displayAnswer.at(i);
				}
				break;
			case 5:
				for (int i = 0; i < length; i++) {
					if (i == 2) {
						formattedAnswer += ",";
					}
					formattedAnswer += displayAnswer.at(i);
				}
				break;
			case 6:
				for (int i = 0; i < length; i++) {
					if (i % 3 == 0 && i != 0) {
						formattedAnswer += ",";
					}
					formattedAnswer += displayAnswer.at(i);
				}
				break;
			}

			cout << "\nSolve: ";
			cout << "\n " << right << setw(7) << num1 << "\nX" << right << setw(7) << num2 << "\n--------\n   ";

			cin >> userInput;
			int guess = stoi(userInput);

			if (guess == answer) {
				cout << "\nCORRECT!!!";
			}
			else {
				cout << "\nINCORRECT!!!";
			}

			cout << "\n " << right << setw(7) << num1 << "\n*" << right << setw(7) << num2 << "\n--------\n" << right << setw(8) << answer << endl << endl;
		}
		// Division problem
		else if (mode == "div") {
		cout << setprecision(5);
			cout << "You selected a division problem." << endl;
			double divNum1 = rand() % 999 + 1.00;
			double divNum2 = rand() % 999 + 1.00;

			bool goodDiv = false;
			while (goodDiv == false) {
				divNum2 = rand() % 999 + 1.00;

				if (divNum2 < divNum1) {
					goodDiv = true;
				}
			}

			double divAnswer = divNum1 / divNum2;
			double roundedAnswer = round(divAnswer);

			cout << "\nSolve: (Round to 4 decimal places)";
			cout << "\n " << right << setw(7) << divNum1 << "\n/" << right << setw(7) << divNum2 << "\n--------\n  ";

			cin >> userInput;
			double guess = stod(userInput);
			guess = round(guess);

			if (guess == roundedAnswer) {
				cout << "\nCORRECT!!!";
			}
			else {
				cout << "\nINCORRECT!!!";
			}

			cout << "\n " << right << setw(7) << divNum1 << "\n/" << right << setw(7) << divNum2 << "\n--------\n" << right << setw(8) << divAnswer << endl << endl;
		}
		// Catch-All
		else {
			cout << "FATAL ERROR";
		}
	}
}
