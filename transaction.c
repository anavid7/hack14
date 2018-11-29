/**
* Author(s): David Ryan, Collin Sipple, Victor Nguyen
* Date Created: 11/29/2018
* Date Modified: 11/29/2018
* Class: CSCE155e
* Professor: Dr. Chris Bourke
* NUID: 47810715
*/


#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

#include "transaction.h"



Transaction* createTransaction(  const char* uuid,
                                  transactionType type,
                                  const char* merchantNum,
                                  const char* accountNum,
                                  double amount,
                                  double balanceBefore,
                                  double balanceAfter) {
    Transaction* transaction = (transaction*)malloc(sizeof(transaction));

    transaction->uuid = (char*)malloc(sizeof(char) * (strlen(uuid) + 1));
    strcpy(transaction->uuid, uuid);

    transaction->type = (char*)malloc(sizeof(char) * (strlen(type) + 1));
    strcpy(transaction->type, type);

    transaction->merchantNum = (char*)malloc(sizeof(char) * (strlen(merchantNum) + 1));
    strcpy(transaction->merchantNum, merchantNum);

    transaction->accountNum = (char*)malloc(sizeof(char) * (strlen(accountNum) + 1));
    strcpy(transaction->accountNum, accountNum);

    transaction->amount = amount;

    transaction->balanceBefore = balanceBefore;

    transaction->balanceAfter = balanceAfter;

    return transaction;
  }

void fileToTransaction (const char* file, ) {
  FILE *transactions = fopen(filePath, "r");
  char* frogs = (char*) malloc(sizeof(char) * 10)
  fgets(frogs, 10, transactions);
  int numLines = atoi(frogs);
  int const maxSize = 50;
  char filePath[] = "data/mlb_nl_2011.txt";
  char tempBuffer[100];

  int i;
  char **teams = (char **)malloc(sizeof(char *) * numTeams);
  double *winPercentages = (double *)malloc(sizeof(double) * numTeams);
  for (i = 0; i < numTeams; i++) {
    teams[i] = (char *)malloc(sizeof(char) * maxSize);
  }

  FILE *data = fopen(filePath, "r");
  i=0;
  while (fgets(tempBuffer, maxSize, data) != NULL) {
    char* dataPoint = strtok(tempBuffer, " ");
    strcpy(teams[i], dataPoint);
    char* wins = strtok(NULL, " ");
    char* loses = strtok(NULL, " ");

}
