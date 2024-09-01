#ifndef GAMEMANAGER_HPP
#define GAMEMANAGER_HPP

#include "GameObject.hpp"
#include "Character.hpp"
#include "Player.hpp"
#include "Enemy.hpp"
#include <vector>
#include <memory>
#include <algorithm>

class GameManager {
private:
    std::vector<std::unique_ptr<GameObject>> gameObjects;

public:
    GameManager() = default;
    ~GameManager() = default;

    template<typename T, typename... Args>
    void addObject(Args&&... args) {
        static_assert(std::is_base_of<GameObject, T>::value, "T must derive from GameObject");
        gameObjects.push_back(std::make_unique<T>(std::forward<Args>(args)...));
    }

    const std::vector<std::unique_ptr<GameObject>>& getGameObjects() const {
        return gameObjects;
    }

    void updateObjects() {
        for (auto& obj : gameObjects) {
            obj->update();
        }
    }

    void drawObjects() {
        for (auto& obj : gameObjects) {
            obj->draw();
        }
    }

    void cleanUp() {
        gameObjects.erase(
            std::remove_if(gameObjects.begin(), gameObjects.end(),
                [](const std::unique_ptr<GameObject>& obj) {
                    auto* character = dynamic_cast<Character*>(obj.get());
                    return character && !character->isAlive();
                }),
            gameObjects.end()
        );
    }

    bool isGameOver() const {
        auto* player = dynamic_cast<Player*>(gameObjects[0].get());
        return player && !player->isAlive();
    }

    bool isVictory() const {
        return std::all_of(gameObjects.begin() + 1, gameObjects.end(),
            [](const std::unique_ptr<GameObject>& obj) {
                auto* enemy = dynamic_cast<Enemy*>(obj.get());
                return enemy && !enemy->isAlive();
            });
    }
};

#endif
