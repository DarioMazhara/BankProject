//
//  Bank.hpp
//  Bank
//
//  Created by Dario Mazhara on 1/24/22.
//  Copyright © 2022 RUSH Software. All rights reserved.
//

#ifndef Bank_hpp
#define Bank_hpp

#include <stdio.h>
#include <string>
#include <vector>
#include "Account.hpp"
#include "Card.hpp"
#include "Debit.hpp"
#include "User.hpp"



class Bank {
private:
    static int number_of_accounts;
    
    //std::vector<Employee> employees;
    //std::vector<Account> accounts;
    static std::vector<pair<Account, double*>> bank_reference_accounts;
    static std::map<string, Account*> account_access;
    
public:
    
    Bank() {
        number_of_accounts = 0;;
    };
    
 
    static void open_account(User*, string);
    static void close_account(Account*);
    
    static bool process_transaction(Account*, double);
    
   // Card issue_card(Account*);
    static Debit issue_debit(Account*);
    
    
};

#endif /* Bank_hpp */
