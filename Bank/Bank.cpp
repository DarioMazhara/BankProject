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
#include "Account.cpp"


void Bank::open_account(User* user, string login_credentials) {
    number_of_accounts++;
    
    
    double initial_balance = 0;
    double* ptr = &initial_balance;

    Account new_acc(initial_balance);
    
    bank_reference_accounts.push_back(make_pair(new_acc, ptr));
    account_access[login_credentials] = &new_acc;
    
}

void Bank::close_account(Account* account) {
    
    bank_reference_accounts[(account->id)-1].first = NULL;
    number_of_accounts--;
}
bool Bank::process_transaction(Account* account, double amount) {
    if (account->get_balance() + amount >= 0) {
        *bank_reference_accounts[(account->id)-1].second = (account->get_balance() + amount);
        
    }
}

Debit Bank::issue_debit(Account* account) {
    Debit new_debit(account);
    
    return new_debit;
}
