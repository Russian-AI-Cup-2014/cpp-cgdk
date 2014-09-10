#pragma once

#ifndef _WORLD_H_
#define _WORLD_H_

#include <vector>

#include "Hockeyist.h"
#include "Player.h"
#include "Puck.h"

namespace model {

    /**
     * Этот класс описывает игровой мир. Содержит также описания всех игроков и игровых объектов (<<юнитов>>).
     */
    class World {
    private:
        int tick;
        int tickCount;
        double width;
        double height;
        std::vector<Player> players;
        std::vector<Hockeyist> hockeyists;
        Puck puck;
    public:
        World();
        World(int tick, int tickCount, double width, double height, const std::vector<Player>& players,
                const std::vector<Hockeyist>& hockeyists, const Puck& puck);

        /**
         * @return Возвращает номер текущего тика.
         */
        int getTick() const;
        
        /**
         * @return Возвращает базовую длительность игры в тиках.
         *         Реальная длительность может отличаться от этого значения в большую сторону.
         */
        int getTickCount() const;
        
        /**
         * @return Возвращает ширину мира.
         */
        double getWidth() const;
        
        /**
         * @return Возвращает высоту мира.
         */
        double getHeight() const;
        
        /**
         * @return Возвращает список игроков (в случайном порядке).
         *         После каждого тика объекты, задающие игроков, пересоздаются.
         */
        const std::vector<Player>& getPlayers() const;
        
        /**
         * @return Возвращает список хоккеистов (в случайном порядке), включая вратарей и хоккеиста стратегии,
         *         вызвавшей этот метод. После каждого тика объекты, задающие хоккеистов, пересоздаются.
         */
        const std::vector<Hockeyist>& getHockeyists() const;
        
        /**
         * @return Возвращает шайбу.
         */
        const Puck& getPuck() const;

        /**
         * @return Возвращает вашего игрока.
         */
        Player getMyPlayer() const;
        
        /**
         * @return Возвращает игрока, соревнующегося с вами.
         */
        Player getOpponentPlayer() const;
    };
}

#endif
