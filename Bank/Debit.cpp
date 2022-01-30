//
//  Debit.cpp
//  Bank
//
//  Created by Dario Mazhara on 1/26/22.
//  Copyright © 2022 RUSH Software. All rights reserved.
//

#include "Debit.hpp"
#include <iostream>
#include "Bank.cpp"


Debit::Debit(Account* linked_account) {
    
    *card_balance = linked_account->get_balance();

    this->linked_account = linked_account;
    

}

void Debit::pay(std::string item, double amount) {
    Bank::process_transaction(linked_account, amount);
    linked_account->post_statement(item, amount);
}

void Debit::deposit(int amount) {
    Bank::process_transaction(linked_account, amount);
    linked_account->post_statement("Deposit: ", amount);
}

void Debit::withdraw(int amount) {
    Bank::process_transaction(linked_account, amount);
    linked_account->post_statement("Withdrawal: ", amount);
}
