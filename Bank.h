#pragma once
#include<iostream>

using namespace std;


class Bank {
private:
	double balance,
		intRate,
		interest;
	int transactions;
public:
	Bank();
	void makeDeposit(double deposit);
	bool withdraw(double amount);
	void calcInterest();
	double getBalance();
	double getInterest();
	int getTransactions();
};

Bank::Bank() {
	balance = 0.00;
	intRate = 0.045;
}

void Bank::makeDeposit(double deposit) {
	balance += deposit;
	transactions++;
}

bool Bank::withdraw(double amount) {
	
	if (amount > balance) {
		return false;
	}
	else {
		balance -= amount;
		transactions++;
		return true;
	}	
}

void Bank::calcInterest() {
	interest = balance * intRate;
	balance += interest;
}

double Bank::getBalance() {
	return balance;
}

double Bank::getInterest() {
	return interest;
}

int Bank::getTransactions() {
	return transactions;
}