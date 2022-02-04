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
//include "Card.hpp"
#include "Debit.hpp"


class Bank {
public:
    static int number_of_accounts;
    
    //std::vector<Employee> employees;
    //std::vector<Account> accounts;
  //  static std::vector<pair<Account*, double* > > bank_reference_accounts;
    static std::vector<Account> accounts;
   // static std::map<string, Account*> account_access;
    static std::map<std::string, Account*> password_hash;
    
 //   friend class User;
 //   friend class Debit;
    
    
public:
   
    
    static void open_account(string, string);
    static void close_account(int);
    
    
    static bool process_transaction(Account*, double);
    
   // Card issue_card(Account*);
    static Debit issue_debit(Account*);
    
    static Account login(string);
    
};

#endif /* Bank_hpp */
