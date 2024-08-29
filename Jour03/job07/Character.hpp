#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "GameObject.hpp"
#include <string>

class Character : public GameObject {
private:
    std::string name; 
    int health;       

public:
    Character(double x, double y, const std::string& name, int health);
    virtual ~Character();

    const std::string& getName() const;

    void draw() override;
    void update() override;

    bool isAlive() const;
    int getHealth() const;
    void setHealth(int health);

};

#endif
