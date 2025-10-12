#include <iostream>
#include "AdminFactory.hpp"
#include "GuestFactory.hpp"

void runFactory(const AbstractFactory& factory) {
    auto user = factory.createUser();
    auto settings = factory.createSettings();
    user->printInfo();
    settings->printSettings();
}

int main() {
    AdminFactory admin;
    GuestFactory guest;

    std::cout << "/___Admin___\\\n";
    runFactory(admin);

    std::cout << "\n/___Guest___\\\n";
    runFactory(guest);

    return 0;
}
