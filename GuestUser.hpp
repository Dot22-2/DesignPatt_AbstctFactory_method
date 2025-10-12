#pragma once
#include "User.hpp"

class GuestUser : public User {
public:
    void printInfo() const override;
};
