//
// Created by Zeki Gulser on 03/05/2017.
//

#ifndef CHAINOFRESP_ATMREQUESTHANDLER_H
#define CHAINOFRESP_ATMREQUESTHANDLER_H

#include <typeinfo>
#include <iostream>

using namespace std;

class ATMWithdrawRequestHandler {

public:
    ATMWithdrawRequestHandler(){}

    inline void setSuccessorRequestHandler(ATMWithdrawRequestHandler* successorRequestHandler){
        this->successorRequestHandler = successorRequestHandler;
    }

    double processRequest(double amount) {
        if(amount <= 0) {
            return 0;
        } else {
            if(this->getWithdrawable() <= amount){
                if(this->paperCount > 0){
                    this->paperCount -= 1;
                    amount -= this->getWithdrawable();
                    return this->processRequest(amount);
                } else {
                    return successorRequestHandler->processRequest(amount);
                }
            } else {
                return successorRequestHandler->processRequest(amount);
            }
        }
    }

    int getPaperCount() {return paperCount;}

protected:
    ATMWithdrawRequestHandler* successorRequestHandler;
    int paperCount = 5;

    virtual double getWithdrawable() = 0;

};

#endif //PASSBYREF_ATMREQUESTHANDLER_H
