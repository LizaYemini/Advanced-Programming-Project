//
// Created by ziv on 24/12/2019.
//

#include "ImportCommand.h"
#include "../VariableExtend.h"

int ImportCommand::execute() {
    Mutex_lock.lock();
    //update the in or out filed to in

    varsTable[Code[INDEX - 1]]->setIn(InOrOut::in);
    Mutex_lock.unlock();
    return 1;
}