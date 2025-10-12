#pragma once
#include <memory>
#include "User.hpp"
#include "Settings.hpp"

class AbstractFactory {
public:
    virtual std::unique_ptr<User> createUser() const = 0;
    virtual std::unique_ptr<Settings> createSettings() const = 0;
    virtual ~AbstractFactory() = default;
};
