//
// Created by Zeki Gulser on 03/05/2017.
//

#ifndef CHAINOFRESP_WITHDRAW20REQUESTHANDLER_H
#define CHAINOFRESP_WITHDRAW20REQUESTHANDLER_H

#include "ATMWithdrawRequestHandler.h"

class Withdraw20RequestHandler : public ATMWithdrawRequestHandler {

public:
    Withdraw20RequestHandler(){}

    double getWithdrawable(){return 20;}
};

#endif //CHAINOFRESP_WITHDRAW20REQUESTHANDLER_H
