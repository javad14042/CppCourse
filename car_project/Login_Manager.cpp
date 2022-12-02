#include "Login_Manager.h"
#include "DB_Manager.h"
#include <iostream>

Login_Manager::Login_Manager() {
}

void Login_Manager::set_dbManager(std::shared_ptr<DB_Manager> input){
    dbManager = input;
}

void Login_Manager::callInsert() {
        dbManager->insert();
}
