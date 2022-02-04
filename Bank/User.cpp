//
//  User.cpp
//  Bank
//
//  Created by Dario Mazhara on 1/25/22.
//  Copyright © 2022 RUSH Software. All rights reserved.
//

#include "User.hpp"
#include <iostream>
#include <string>
#include "Bank.hpp"

using namespace std;

Account* User::account() {
    if (logged_in) {
        return &Bank::accounts[this->id];
    }
    cout << "Login required";
    return nullptr;
}

void User::login(string creds) {
    if (Bank::login(creds).id == this->id) {
        logged_in = true;
        return;
    }
    cout << "Login failed" << "\n";
    
  //  Debit temp(&linked_account);
    
   // debit_card = temp;
}

void User::signup(string name, string creds) {
    logged_in = true;
    
    Bank::open_account(name, creds);
    
    account_balance = Bank::accounts[id].get_balance();
    
    ref = &account_balance;
    
    debit_card = new Debit(Bank::accounts[id], *ref);
}

void User::logout() {
    logged_in = false;
}

