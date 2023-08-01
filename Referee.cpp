#include "Referee.h"

Referee::Referee(){}

Player* Referee::refGame(Player* player1, Player* player2){

    char p1_move, p2_move;
    p1_move = player1->makeMove();
    p2_move = player2->makeMove();

    if(p1_move == p2_move){
        return nullptr;
    }

    if(p1_move == 'R' && p2_move == 'S'){
        return player1;
    }
    if(p1_move == 'S' && p2_move == 'P'){
        return player1;
    }
    if(p1_move == 'P' && p2_move == 'R'){
        return player1;
    }

    return player2;
}