#include <stdlib.h>
#include "Agent.h"
#include "main.h"
/*
Global Variables Used: agents
*/

Agent* newAgent (int user, char mark) {
  Agent* a = malloc(sizeof(Agent));
  a->user = user;
  a->mark = mark;
  return a;
}

Agent* toggleAgent (Agent* curr) {
  //Agent* res = malloc(sizeof(Agent));
  return players[curr->user^(1<<0)];
  /*res->user = curr->user^(1<<0);
  if(curr->mark=='O') {
    curr->mark = 'X';
  }
  else {
    curr->mark = 'O';
  }
  return curr;*/
}