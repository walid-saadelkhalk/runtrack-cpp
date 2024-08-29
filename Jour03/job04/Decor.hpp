#ifndef DECOR_HPP
#define DECOR_HPP

#include "GameObject.hpp"

class Decor : public GameObject {
    private:
    std::string name;

    public:
    Decor(double x, double y, const std::string& name);
    virtual ~Decor();

    void draw() override;
    void update() override;

};


#endif