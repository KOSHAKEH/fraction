#pragma once
#include <iostream>
#include <string>
using namespace std;

//   _________________________________________________________________________________
//  |                                                                                 |
//  |         ЭТОТ КЛАСС/ПРОГРАММА НЕ УМЕЮТ СОКРАЩАТЬ ДРОБИ                           |
//  |                                                                                 |
//  |_________________________________________________________________________________|

class fraction
{
private:
	int numeratorFirst{ 0 }, denominatorFirst{ 0 }, numeratorSecond{ 0 }, denominatorSecond{ 0 };
	string action;

public:
	fraction() {

	}
	fraction(int NumeratorFirst, int DenominatorFirst, int NumeratorSecond,int DenominatorSecond) {
		numeratorFirst = NumeratorFirst;
		denominatorFirst = DenominatorFirst;
		numeratorSecond = NumeratorSecond;
		denominatorSecond = DenominatorSecond;
	}

	void setNumeratorFirst(int NumeratorFirst) {
		numeratorFirst = NumeratorFirst;
	}
	void setDenominator(int DenominatorFirst) {
		denominatorFirst = DenominatorFirst;
	}
	void setNumeratorSecond(int NumeratorSecond) {
		numeratorSecond = NumeratorSecond;
	}
	void setDenominatorSecond(int DenominatorSecond) {
		denominatorSecond = DenominatorSecond;
	}

	int getNumeratorFirst() {
		return numeratorFirst;
	}
	int getDenominatorFirst() {
		return denominatorFirst;
	}
	int getNumeratorSecond() {
		return numeratorSecond;
	}
	int getDenominatorSecond() {
		return denominatorSecond;
	}


	void Input() {
		cout << "Первая дробь" << endl;
		cout << "Введите значение для знаменателя: ";
		cin >> numeratorFirst;
		cout << "Введите значение для числителя: ";
		cin >> denominatorFirst;

		cout << "Вторая дробь" << endl;
		cout << "Введите значение для знаменателя: ";
		cin >> numeratorSecond;
		cout << "Введите значение для числителя: ";
		cin >> denominatorSecond;

		cout << "Выберите действие(+, -, *, /): ";
		cin >> action;
	}
	void Display() {
		cout << numeratorFirst << "/" << denominatorFirst << endl
			 << numeratorSecond << "/" << denominatorSecond << endl 
			 << action << endl;
	}

	void plus() {
		int temp, NumeratorFirst, DenominatorFirst, NumeratorSecond, DenominatorSecond;

		if (denominatorFirst == denominatorSecond) {
			temp = numeratorFirst + numeratorSecond;

			cout << endl << " " << temp << endl
				<< " " << (char)22 << endl
				<< " " << denominatorFirst << endl;
		}
		else {
			if (denominatorFirst % denominatorSecond != 0 && denominatorSecond % denominatorFirst != 0) {

				NumeratorFirst = denominatorSecond * numeratorFirst;
				DenominatorFirst = denominatorSecond * denominatorFirst;
				NumeratorSecond = denominatorFirst * numeratorSecond;
				DenominatorSecond = denominatorFirst * denominatorSecond;

				temp = NumeratorFirst + NumeratorSecond;

				cout << endl << " " << temp << endl
					<< " " << (char)22 << endl 
					<< " " << DenominatorSecond << endl;
			}
			else {
				if (denominatorFirst > denominatorSecond) {
					temp = denominatorFirst / denominatorSecond;

					NumeratorSecond = temp * numeratorSecond;
					DenominatorSecond = temp * denominatorSecond;

					temp = numeratorFirst + NumeratorSecond;

					cout << endl << " " << temp << endl
						<< " " << (char)22 << endl
						<< " " << DenominatorSecond << endl;
				}
				else {
					temp = denominatorSecond / denominatorFirst;

					NumeratorFirst = temp * numeratorFirst;
					DenominatorFirst = temp * denominatorFirst;

					temp = NumeratorFirst + numeratorSecond;

					cout << endl << " " << temp << endl
						<< " " << (char)22 << endl
						<< " " << DenominatorFirst << endl;
				}
			}
		}
	}
	void minus() {
		int temp, NumeratorFirst, DenominatorFirst, NumeratorSecond, DenominatorSecond;

		if (denominatorFirst == denominatorSecond) {
			if (numeratorFirst < numeratorSecond) {
				temp = numeratorSecond - numeratorFirst;

				cout << endl << "  " << temp << endl
					<< (char)22 << " " << (char)22 << endl
					<< "  " << denominatorFirst << endl;
			}
			else {
				temp = numeratorFirst - numeratorSecond;

				cout << endl << " " << temp << endl
					<< " " << (char)22 << endl
					<< " " << denominatorFirst << endl;
			}

		}
		else {
			if (denominatorFirst % denominatorSecond != 0 && denominatorSecond % denominatorFirst != 0) {
				NumeratorFirst = denominatorSecond * numeratorFirst;
				DenominatorFirst = denominatorSecond * denominatorFirst;
				NumeratorSecond = denominatorFirst * numeratorSecond;
				DenominatorSecond = denominatorFirst * denominatorSecond;

				if (NumeratorFirst < NumeratorSecond) {
					temp = NumeratorSecond - NumeratorFirst;

					cout << endl << "  " << temp << endl
						<< (char)22 << " " << (char)22 << endl
						<< "  " << DenominatorFirst << endl;
				}
				else {
					temp = NumeratorFirst - NumeratorSecond;

					cout << endl << " " << temp << endl
						<< " " << (char)22 << endl
						<< " " << DenominatorFirst << endl;
				}
			}
			else {
				if (denominatorFirst > denominatorSecond) {
					temp = denominatorFirst / denominatorSecond;

					NumeratorSecond = temp * numeratorSecond;
					DenominatorSecond = temp * denominatorSecond;

					if (numeratorFirst < NumeratorSecond) {
						temp = NumeratorSecond - numeratorFirst;

						cout << endl << "  " << temp << endl
							<< (char)22 << " " << (char)22 << endl
							<< "  " << DenominatorSecond << endl;
					}
					else {
						temp = numeratorFirst - NumeratorSecond;

						cout << endl << " " << temp << endl
							<< " " << (char)22 << endl
							<< " " << DenominatorSecond << endl;
					}
				}
				else {
					temp = denominatorSecond / denominatorFirst;

					NumeratorFirst = temp * numeratorFirst;
					DenominatorFirst = temp * denominatorFirst;

					if (NumeratorFirst < numeratorSecond) {
						temp = numeratorSecond - NumeratorFirst;

						cout << endl << "  " << temp << endl
							<< (char)22 << " " << (char)22 << endl
							<< "  " << DenominatorFirst << endl;
					}
					else {
						temp = NumeratorFirst - numeratorSecond;

						cout << endl << " " << temp << endl
							<< " " << (char)22 << endl
							<< " " << DenominatorFirst << endl;
					}
				}
			}
		}
	}
	void multiplication() {
		int Numerator, Denominator;

		Numerator = numeratorFirst * numeratorSecond;
		Denominator = denominatorFirst * denominatorSecond;

		cout << endl << " " << Numerator << endl
			<< " " << (char)22 << endl
			<< " " << Denominator << endl << endl
			<< "Cокращай сам, мне в падлу)" << endl;
	}
	void division() {
		int NumeratorSecond, DenominatorSecond, Numerator, Denominator;

		NumeratorSecond = denominatorSecond;
		DenominatorSecond = numeratorSecond;

		Numerator = numeratorFirst * NumeratorSecond;
		Denominator = denominatorFirst * DenominatorSecond;

		cout << endl << " " << Numerator << endl
			<< " " << (char)22 << endl
			<< " " << Denominator << endl << endl
			<< "Cокращай сам, мне в падлу)" << endl;
	}

	void choice() {
		if (action == "+") {
			plus();
		}
		else if (action == "-") {
			minus();
		}
		else if (action == "*") {
			multiplication();
		}
		else if (action == "/") {
			division();
		}
		else {
			cout << endl << "Я не знаю что это за действие((" << endl;
		}
	}
};
