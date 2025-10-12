#pragma once
class User {
public:
    virtual void printInfo() const = 0;
    virtual ~User() = default;
};
