//
//  Account.hpp
//  Bank
//
//  Created by Dario Mazhara on 1/26/22.
//  Copyright © 2022 RUSH Software. All rights reserved.
//

#ifndef Account_hpp
#define Account_hpp

#include <stdio.h>
#include <map>
#include<string>



using namespace std;

class Account {
private:
    string account_holder_name;
    double balance;
    map<string, int> transactions;
    
    
public:
    int id;
    
    Account(double);
    
    Account() {
        balance = 0;
    }
    
    
    void transfer(Account*);
    
    void post_statement(std::string, int);
    
    double get_balance() {return balance;}
    
    void update_balance();
};
#endif /* Account_hpp */
