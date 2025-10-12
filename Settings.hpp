#pragma once
class Settings {
public:
    virtual void printSettings() const = 0;
    virtual ~Settings() = default;
};
