//
//  Card.hpp
//  Bank
//
//  Created by Dario Mazhara on 1/26/22.
//  Copyright © 2022 RUSH Software. All rights reserved.
//

#ifndef Card_hpp
#define Card_hpp

#include <stdio.h>
#include<string>

using namespace std;


//class Account;

class Card {

public:
    bool on;

protected:
    virtual void pay(string, double){};
    virtual void deposit(int){};
    virtual void withdraw(int){};
};
#endif /* Card_hpp */
