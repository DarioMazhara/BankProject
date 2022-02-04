# BankProject (In progress)
A bank management system; a project to get familiar with C++, having never learned it

This is a fairly basic C++ project that I am working on as a means of learning and getting comfortable with C++. This is my first real effort to program in and
learn the language. I have one other abandoned repository using C++ from years ago, which is the start of a video game using the Unreal Engine. I do not consider that project
to be my first real attempt at C++ as it was back when I was much younger and less experienced, trying learn the Unreal API while having no idea how to program in C++.


This is a banking system/management project. Users can open a bank account and use it to make bank transfers to others, view their balance, and view their 
transactions. A user can signup for an account by providing a password, which is stored in a map as the key, with the value being the applicable account.
Similarly, a user is also given a debit card upon creating an account, which is used for buying things, making deposits/withdrawals. The debit card is linked to 
the same account so it affects the balance. All transactions are added to a list of transactions. Debit cards can be used even if the user is not logged in. 
Logging in/out only affects whether or not a user can access 'online banking' features, which are just bank transfers and viewing balance/statements.

#Relevant Concepts used (so far)
- Objected oriented programming
- A little usage of data structures (vectors, maps)
- Pointers/references

This project is me getting familiar with c++ so it is very basic and only implements a few concepts.
Next on todo is experimenting more with data structures and algorithms.

TODO:

Add credit cards
Add employees/staff
Add bank's own balance

