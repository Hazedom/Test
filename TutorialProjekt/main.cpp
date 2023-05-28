#include <iostream>
#include <string>

using namespace std;

string FizzBuzz(int num1);


int main() {
	
	int fzbznum;
	
	cout << "Nummer zur Ueberpruefung eingeben:" << " ";
	cin >> fzbznum;
	
	if (fzbznum == 0) {
		cout << "Keine Null oder Charaktere eingeben." << endl;
		return 1;
	}
	else {
		cout << FizzBuzz(fzbznum) << endl;
	}

	return 0;
}


string FizzBuzz(int num1)
{
	string str1;
	if (num1 % 3 == 0 || num1 % 5 == 0) {

		if (num1 % 3 == 0 && num1 % 5 == 0) {
			return "fizzbuzz";
		}

		else if (num1 % 3 == 0) {
			return "fizz";
		}

		else {
			return "buzz";
		}
	}
	else {

		str1 = to_string(num1);	
		return str1;
	}
}