#ifndef ENEMYFACTORY_HPP
#define ENEMYFACTORY_HPP

#include <string>
#include <unordered_map>
#include <functional>
#include "Enemy.hpp"
#include "Goblin.hpp"
#include "Ogre.hpp"
#include "Dragon.hpp"

class EnemyFactory {
public:
    EnemyFactory() {
        enemyMap["Goblin"] = []() -> std::unique_ptr<Enemy> { return std::make_unique<Goblin>(); };
        enemyMap["Ogre"] = []() -> std::unique_ptr<Enemy> { return std::make_unique<Ogre>(); };
        enemyMap["Dragon"] = []() -> std::unique_ptr<Enemy> { return std::make_unique<Dragon>(); };
    }

    std::unique_ptr<Enemy> createEnemy(const std::string& enemyType) {
        auto it = enemyMap.find(enemyType);
        if (it != enemyMap.end()) {
            return it->second(); 
        }
        return nullptr;
    }

private:
    std::unordered_map<std::string, std::function<std::unique_ptr<Enemy>()>> enemyMap;
};

#endif
