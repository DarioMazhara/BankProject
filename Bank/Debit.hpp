//
//  Debit.hpp
//  Bank
//
//  Created by Dario Mazhara on 1/26/22.
//  Copyright © 2022 RUSH Software. All rights reserved.
//

#ifndef Debit_hpp
#define Debit_hpp

#include <stdio.h>
#include "Card.hpp"
#include "Account.hpp"




class Debit : public Card {
private:
    Account* linked_account;
    double* card_balance;

public:
    Debit() {
        linked_account = nullptr;
        card_balance = nullptr;
    }
    Debit(Account& acc_ref, double& bal_ref) {
        linked_account = &acc_ref;
        card_balance = &bal_ref;
    }
    
    void process_post(std::string, double);
    
    void pay(std::string, double);
    
    void deposit(double);
    
    void withdraw(double);
    
    double get_balance() { return *card_balance;}
};
    
#endif /* Debit_hpp */
