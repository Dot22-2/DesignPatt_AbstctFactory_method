#pragma once
#include "Settings.hpp"

class GuestSettings : public Settings {
public:
    void printSettings() const override;
};
