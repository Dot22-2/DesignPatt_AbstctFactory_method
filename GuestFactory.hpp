#pragma once
#include "AbstractFactory.hpp"

class GuestFactory : public AbstractFactory {
public:
    std::unique_ptr<User> createUser() const override;
    std::unique_ptr<Settings> createSettings() const override;
};
