//
// Created by Zeki Gulser on 03/05/2017.
//

#ifndef CHAINOFRESP_WITHDRAW10REQUESTHANDLER_H
#define CHAINOFRESP_WITHDRAW10REQUESTHANDLER_H

#include "ATMWithdrawRequestHandler.h"

class Withdraw10RequestHandler : public ATMWithdrawRequestHandler {

public:
    Withdraw10RequestHandler(){}

    double getWithdrawable(){return 10;}
};

#endif //CHAINOFRESP_WITHDRAW10REQUESTHANDLER_H
