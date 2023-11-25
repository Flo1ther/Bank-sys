#pragma once
#include "Header.h"
#include <cmath>
struct user
{
	Bank bank;
	int usamount=0;
	int a;
	int cash;
	void cashout()
	{
		cout << "amount: " << usamount << endl;
		cout << "Bank total: " << bank.total << endl;
		cout << "To enter into bank system press 1: " << endl;
		cin >> a;
		if (a==1)
		{
			cout << "Welcome to our bank! If u want to cashout press 2"<<'\n'<<"if u want to cashin press 3" << endl;
			cin >> a;
			if (a==2)
			{
				
				cout << "Enter amount: ";
				cin >> cash;
				if (cash>bank.bankallowedpay)
				{
					cout << "Sorry, that`s too much cowboy" << endl;
					return;
				}
				bank.comission = cash * 0.01;
				cash = cash-bank.comission;
				usamount = cash;
				bank.total = bank.total - cash;
				cout << "User acc: " << usamount << endl;
				cout << "Bank total: " << bank.total << endl;
			}
			if (a==3)
			{
				if (usamount)
				{
					cout << "You dont have money cowboy!";
					return;
				}
				cout << "Enter amount: " << cash << endl;
				cin >> cash;
				bank.total += cash;
				cout << "Thanks! Bank total now: " << bank.total << endl;
			}
		}
	}
};