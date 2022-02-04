//
//  Debit.cpp
//  Bank
//
//  Created by Dario Mazhara on 1/26/22.
//  Copyright © 2022 RUSH Software. All rights reserved.
//

#include "Debit.hpp"
#include <iostream>
#include <vector>
#include "Bank.hpp"

using namespace std;



void Debit::process_post(string desc, double amount) {
    Bank::process_transaction(linked_account, amount);
    (*linked_account).post_statement(desc, amount);
}
    


void Debit::pay(std::string item, double amount) {
    process_post("Purchase " + item, amount);
}

void Debit::deposit(double amount) {
    process_post("Deposit", amount);
    
}

void Debit::withdraw(double amount) {
    process_post("Withdrawal", amount);
}
