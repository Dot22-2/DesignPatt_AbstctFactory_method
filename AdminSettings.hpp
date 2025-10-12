#pragma once
#include "Settings.hpp"

class AdminSettings : public Settings {
public:
    void printSettings() const override;
};
