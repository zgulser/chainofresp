#include <iostream>

#include "Withdraw100RequestHandler.h"
#include "Withdraw50RequestHandler.h"
#include "Withdraw20RequestHandler.h"
#include "Withdraw10RequestHandler.h"

int main() {
    Withdraw100RequestHandler* withdraw100RequestHandler = new Withdraw100RequestHandler();
    Withdraw50RequestHandler* withdraw50RequestHandler = new Withdraw50RequestHandler();
    Withdraw20RequestHandler* withdraw20RequestHandler = new Withdraw20RequestHandler();
    Withdraw10RequestHandler* withdraw10RequestHandler = new Withdraw10RequestHandler();

    withdraw100RequestHandler->setSuccessorRequestHandler(withdraw50RequestHandler);
    withdraw50RequestHandler->setSuccessorRequestHandler(withdraw20RequestHandler);
    withdraw20RequestHandler->setSuccessorRequestHandler(withdraw10RequestHandler);

    withdraw100RequestHandler->processRequest(800);

    int paperCount = 5;
    std::cout << "the number of " << typeid(withdraw100RequestHandler).name()
              << " used is " << (5 - withdraw100RequestHandler->getPaperCount()) << endl;
    std::cout << "the number of " << typeid(withdraw100RequestHandler).name()
              << " used is " << (5 - withdraw50RequestHandler->getPaperCount()) << endl;
    std::cout << "the number of " << typeid(withdraw100RequestHandler).name()
              << " used is " << (5 - withdraw20RequestHandler->getPaperCount()) << endl;
    std::cout << "the number of " << typeid(withdraw100RequestHandler).name()
              << " used is " << (5 - withdraw10RequestHandler->getPaperCount()) << endl;

    return 0;
}