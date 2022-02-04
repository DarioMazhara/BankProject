//
//  Account.cpp
//  Bank
//
//  Created by Dario Mazhara on 1/26/22.
//  Copyright © 2022 RUSH Software. All rights reserved.
//

#include "Account.hpp"
#include <iostream>
#include <map>
#include <vector>
#include "Bank.hpp"


void Account::transfer(Account* receiver, double amount) {
    if (Bank::process_transaction(this, -amount)) {
        Bank::process_transaction(receiver, amount);
        post_statement("Transfer to " + receiver->account_holder, amount);
        
        receiver->post_statement("Received transfer from " + this->account_holder, amount);
    }
}

void Account::post_statement(std::string desc, double amount) {
  // transactions[desc] = amount;
    transactions.push_back(make_pair(desc, amount));
    transactions_hash[transaction_id] = {(transactions)};
    transaction_id++;
}

void Account::statements() {
    
    //for (auto const& [desc, amount] : transactions) {
      //  cout << desc << " : " << amount << endl;
    //}
    
    for(int i = 0; i < transaction_id; i++) {
        cout << i
             << " : "
            << transactions[i].first
            << "  "
        << "$" << transactions[i].second << endl;
    }
}

