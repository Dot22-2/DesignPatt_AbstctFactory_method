#include "GuestFactory.hpp"
#include "GuestUser.hpp"
#include "GuestSettings.hpp"

std::unique_ptr<User> GuestFactory::createUser() const {
    return std::make_unique<GuestUser>();
}

std::unique_ptr<Settings> GuestFactory::createSettings() const {
    return std::make_unique<GuestSettings>();
}
