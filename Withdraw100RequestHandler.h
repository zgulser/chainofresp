//
// Created by Zeki Gulser on 03/05/2017.
//

#ifndef CHAINOFRESP_WITHDRAW100REQUESTHANDLER_H
#define CHAINOFRESP_WITHDRAW100REQUESTHANDLER_H

#include "ATMWithdrawRequestHandler.h"

class Withdraw100RequestHandler : public ATMWithdrawRequestHandler {

public:
    Withdraw100RequestHandler(){}

    double getWithdrawable() {return 100;}
};

#endif //CHAINOFRESP_WITHDRAW100REQUESTHANDLER_H
