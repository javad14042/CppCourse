#include <iostream>
#include "DB_Manager.h"
#include "Login_Manager.h"

DB_Manager::DB_Manager() {
}

void DB_Manager::set_loginManager(std::shared_ptr<Login_Manager> input){
    loginManager = input;
}

void DB_Manager::insert() {
    message(functions::insert);
}

void DB_Manager::remove() {
    message(functions::remove);
}

std::string DB_Manager::find() {
    message(functions::find);
    return "";
}

void DB_Manager::message(functions flag) {
    std::cout << "You have updated the database successfully\n";
    if (flag == functions::find)
        std::cout << "Operation type : insert";
    else if (flag == functions::remove)
        std::cout << "Operation type : remove";
    else
        std::cout << "Operation type : find";
}


