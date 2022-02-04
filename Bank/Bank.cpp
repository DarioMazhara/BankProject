//
//  Bank.cpp
//  Bank
//
//  Created by Dario Mazhara on 1/24/22.
//  Copyright © 2022 RUSH Software. All rights reserved.
//

#include "Bank.hpp"
#include<string>
#include<vector>
#include<algorithm>
#include <iostream>
//#include "Account.cpp"


std::vector<Account> Bank::accounts = {};
std::map<string, Account*> Bank::password_hash = {};
int Bank::number_of_accounts = 0;

void Bank::open_account(string name, string login) {
    
    Account* ptr = new Account(name, 0);
    
    accounts.push_back(*ptr);
    
    password_hash[login] = ptr;
}

void Bank::close_account(int id) {
    accounts.erase(accounts.begin() + id);
}

bool Bank::process_transaction(Account* account, double amount) {
    if (account->get_balance() + amount >= 0) {
        Bank::accounts[account->id].set_balance(account->get_balance() + amount);
        return true;
    }
    cout << "Insufficient funds \n";
    return false;
}

Account Bank::login(string credentials) {
    return accounts[password_hash[credentials]->id];
}

Debit Bank::issue_debit(Account* account) {
 //   Debit new_debit(account);
    
  //  return new_debit;
    Debit new_debit;
    return new_debit;
}


