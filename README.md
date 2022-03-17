# BankProject 

Small fun C++ project.

This is a banking system/management project. Users can open a bank account and use it to make bank transfers to others, view their balance, and view their transactions. A user can signup for an account by providing a password, which is stored in a map as the key, with the value being the applicable account.
Similarly, a user is also given a debit card upon creating an account, which is used for buying things, making deposits/withdrawals. The debit card is linked to 
the same account so it affects the balance. All transactions are added to a list of transactions. Debit cards can be used even if the user is not logged in. 
Logging in/out only affects whether or not a user can access 'online banking' features, which are just bank transfers and viewing balance/statements.



