//
// Created by Zeki Gulser on 03/05/2017.
//

#ifndef CHAINOFRESP_WITHDRAW50REQUESTHANDLER_H
#define CHAINOFRESP_WITHDRAW50REQUESTHANDLER_H

#include "ATMWithdrawRequestHandler.h"

class Withdraw50RequestHandler : public ATMWithdrawRequestHandler {

public:
    Withdraw50RequestHandler(){}

    double getWithdrawable(){return 50;}
};

#endif //CHAINOFRESP_WITHDRAW50REQUESTHANDLER_H
