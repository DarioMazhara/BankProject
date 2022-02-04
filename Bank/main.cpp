//
//  main.cpp
//  Bank
//
//  Created by Dario Mazhara on 1/24/22.
//  Copyright © 2022 RUSH Software. All rights reserved.
//

#include <iostream>
#include<string>
#include "User.cpp"
#include "Account.cpp"
#include "Debit.cpp"
#include "Card.hpp"
#include "Bank.cpp"

double amount = 4;
double* ptr_amount = &amount;



int main(int argc, const char * argv[]) {
    // insert code here...
    
    User* user = new User();
    
    User* user2 = new User();
    
    user->signup("dario", "123");
    user2->signup("rose", "456");
    
    cout << "Account id's\n";
    cout << user->account()->id << "\n";
    cout << user2->account()->id << "\n";
    
    user->account()->set_balance(10);
    user2->account()->set_balance(800);
    
    user2->account()->transfer(user->account(), 700);
    
    
    user->logout();
    
    user2->logout();
    
    user->login("123");
    user2->login("456");
    
    cout << "Balances\n";
    
    cout << user->account()->get_balance() << "\n";
    cout << user2->account()->get_balance() << "\n";
    
    cout << "Account statements, Dario\n";
    user->account()->statements();
    cout << "Account statments, Rose\n";
    user2->account()->statements();
    
    //Transfer of 100 from user2 to user
    user2->account()->transfer(user->account(), 100);
    
    
    cout << "Balances\n";
    
    cout << user->account()->get_balance() << "\n";
    cout << user2->account()->get_balance() << "\n";
    
    
    cout << "Account statements, Dario\n";
      user->account()->statements();
      cout << "Account statments, Rose\n";
      user2->account()->statements();
    
    
  
    

    
 //   cout << user->get_balance() << "\n";
 //   user->logout();
   // cout << user->get_balance() << "\n";
    std::cout << "Welcome to RUSH Bank\n";
    return 0;
}
    
