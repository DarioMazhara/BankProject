//
//  Account.cpp
//  Bank
//
//  Created by Dario Mazhara on 1/26/22.
//  Copyright © 2022 RUSH Software. All rights reserved.
//

#include "Account.hpp"
#include <iostream>

Account::Account(double balance) {
    this->balance = balance;
}

void Account::transfer(Account* receiver, Customer* sender) {
    
}

void Account::post_statement(std::string desc, int amount) {
    transactions[desc] = amount;
}
