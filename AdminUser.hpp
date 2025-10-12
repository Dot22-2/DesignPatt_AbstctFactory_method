#pragma once
#include "User.hpp"

class AdminUser : public User {
public:
    void printInfo() const override;
};
