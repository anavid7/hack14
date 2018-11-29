/**
* Author(s): David Ryan, Collin Sipple, Victor Nguyen
* Date Created: 11/29/2018
* Date Modified: 11/29/2018
* Class: CSCE155e
* Professor: Dr. Chris Bourke
* NUID: 47810715
*/


typedef enum {
  PAYMENT,
  TRANSFER,
  WITHDRAWAL,
  DEBIT,
  DEPOSIT
}transactionType;

typedef struct {
  char* uuid;
  transactionType type;
  char* merchantNum;
  char* accountNum;
  double amount;
  double balanceBefore;
  double balanceAfter;
}Transaction;



Transaction* createTransaction(  const char* uuid,
                                  transactionType type,
                                  const char* merchantNum,
                                  const char* accountNum,
                                  double amount,
                                  double balanceBefore,
                                  double balanceAfter);
