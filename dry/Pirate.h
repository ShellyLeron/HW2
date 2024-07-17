
#pragma once

#include <iostream>

using std::string;

class Pirate {
private:
    string name;
    int bounty;

public:
    Pirate(const string& name, int bounty = 0);
    Pirate();

    ~Pirate() = default;

    void setName(const string& name);

    string getName();

    int getBounty();
    void setBounty(int bounty);

    friend std::ostream &operator<<(std::ostream &os, const Pirate &pirate);
};
