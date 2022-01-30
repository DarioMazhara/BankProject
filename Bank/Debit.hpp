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
    
    Debit(Account*);
    
    double get_card_balance() {return *card_balance;}
    
    void pay(std::string, double);
    
    void deposit(int);
    
    void withdraw(int);
    
    double* get_balance() { return card_balance;}
};
    
#endif /* Debit_hpp */
