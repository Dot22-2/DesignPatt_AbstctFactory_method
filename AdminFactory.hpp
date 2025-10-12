#pragma once
#include "AbstractFactory.hpp"

class AdminFactory : public AbstractFactory {
public:
    std::unique_ptr<User> createUser() const override;
    std::unique_ptr<Settings> createSettings() const override;
};
