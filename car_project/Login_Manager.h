#ifndef CAR_LOGIN_MANAGER_H
#define CAR_LOGIN_MANAGER_H

#include <memory>


class DB_Manager;
class Login_Manager {
public:

    std::shared_ptr<DB_Manager> dbManager;

    Login_Manager();
    void set_dbManager(std::shared_ptr<DB_Manager> input);
    void callInsert();

    void login();
    void logout();

};


#endif //CAR_LOGIN_MANAGER_H
