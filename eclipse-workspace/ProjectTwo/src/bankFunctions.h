/*
 * Jeff Perkinson
 * CS-210-J3528
 * Feb 2020
 * Project Two Airgead Banking
 */

/*
 * Per the standards, all header files should have #define guards to prevent
 * multiple inclusion.  The format of the symbol name should be
 * <PROJECT>_<PATH>_<FILE>_H_.  To guarantee uniqueness, they should be
 * based on the full path in a project's source tree.
 */

#ifndef PROJECTTWO_SRC_BANKFUNCTIONS_H_
#define PROJECTTWO_SRC_BANKFUNCTIONS_H_

/*
 * The namespaces below are scoped to the specific function declarations
 * Using 'namespace std' is considered bad practice, particularly
 * in a header file that can potentially be used in multiple other files
 * https://stackoverflow.com/questions/1452721/why-is-using-namespace-std-considered-bad-practice
 */

/*
 * The getDouble and input<dataMember> functions below do not use pointers or pass
 * by reference.  They instead create a local stack to store the user input and
 * return it, clearing the stack in the process.  The purpose of these functions
 * is to capture user input and use exception handling to ensure the input is valid.
 * The values captured are intended as input to instantiate the investment object that's the
 * heart of the program.  As such, pointer or pass-by-reference functionality
 * is not employed here to avoid a potential memory leak stemming from
 * allocating memory for the mere purpose of capturing input that will be used
 * to instantiate a separate object that will itself occupy memory elsewhere.
 */
double getDouble(std::string t_prompt);									// Capture user input as type double
double inputInvestment(std::string t_prompt);							// Capture investment amount from the user
double inputDeposit(std::string t_prompt);								// Capture the monthly deposit amount from the user
double inputInterestRate(std::string t_prompt);							// Capture the interest rate from the user
double inputNumberYears(std::string t_prompt);							// Capture the number of years from the user
double grabDepositAmout();												// Prompt user for and return a deposit amount
void printHorizontalBorder(int t_length, char t_printChar);				// Used to print borders in output
void printInvestmentSnapshot();											// Print an empty snapshot (i.e. program start)
void printInvestmentSnapshot(Investment& t_investment);					// Print a snapshot with investment attributes
void printGrowth(Investment& t_investment, bool t_withMonthly=false);	// Print growth, default is no additional deposits
void investmentSimulation	(Investment& t_investment, 					// Function to allow user to make changes and view results
							std::shared_ptr<double> t_investmentAmount,
							std::shared_ptr<double> t_interestRate,
							std::shared_ptr<double> t_numberYears,
							std::shared_ptr<double> t_depositAmount);

#endif /* PROJECTTWO_SRC_BANKFUNCTIONS_H_ */
