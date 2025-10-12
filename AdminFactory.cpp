#include "AdminFactory.hpp"
#include "AdminUser.hpp"
#include "AdminSettings.hpp"

std::unique_ptr<User> AdminFactory::createUser() const {
    return std::make_unique<AdminUser>();
}

std::unique_ptr<Settings> AdminFactory::createSettings() const {
    return std::make_unique<AdminSettings>();
}
