#include <iostream>

// Initialize functions


// Main

int main()
{
	// Call LoginMenu.
	return 0;
}


// User Authentication

int LoginMenu()
{
	// Print the options “Login”, “New User”, and “Exit”
	// Ask the user to input options 1 to 3. Print “Please select from the listed options.” if the user submits something other than 1, 2, and 3.
	// UserAuth, NewUser, or “return 0” will be called based on the selection.
}

int UserAuth()
{
	// Display username and password input.
	// If the username and password match records, call AccMenu.
	// If the username and password does not match, print “Username or password is invalid, try again.” Then loop back to step 1.
}

int NewUser()
{
	// Ask the user to input their selected username and password. The limit will be 20 characters, the username cannot have special characters, and the password cannot have spaces.
	// Ask the user to retype their password and compare it to the previously typed password.
	// Store the username and password. If successful, print “Account created.” If not, print “Error creating account” and loop back to step 2.
	// Call AccMenu to take the user to their account options.
}


// Account Management

int AccMenu()
{
	// Print the options “Deposit Funds”, “Withdraw Funds”, “Transfer Funds”, “Transaction History”, “Change password”, and “Log out”
}

int ChangePassword()
{
	// Ask for the old password for confirmation.
	// Ask the user to insert their new password.
	// Ask the user to retype their password and compare it to the previously typed new password.
	// Overwrite the old password with the new one and print “Password updated.”. If it’s not successful, print “New password doesn’t match.” then loop back to step 3.
	// Call AccMenu to take the user bank to their account details.
}

class BankAccount {
public:
	// Data members: double accountAmt (Holds the amount of money the user has saved).
};
