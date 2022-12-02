#ifndef CAR_DB_MANAGER_H
#define CAR_DB_MANAGER_H

#include <memory>

class Login_Manager;

enum class functions{
    insert,
    remove,
    find
};

class DB_Manager {
public:
    std::weak_ptr<Login_Manager> loginManager;
    DB_Manager();
    void set_loginManager(std::shared_ptr<Login_Manager> input);
    void insert();
    void remove();
    std::string find();
    void message(functions);
};


#endif //CAR_DB_MANAGER_H
