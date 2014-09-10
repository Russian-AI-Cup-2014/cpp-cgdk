#pragma once

#ifndef _PUCK_H_
#define _PUCK_H_

#include "Unit.h"

namespace model {

    /**
     * Класс, определяющий хоккейную шайбу. Содержит также все свойства юнита.
     */
    class Puck : public Unit {
    private:
        long long ownerHockeyistId;
        long long ownerPlayerId;
    public:
        Puck();
        Puck(long long id, double mass, double radius, double x, double y, double speedX, double speedY,
                long long ownerHockeyistId, long long ownerPlayerId);

        /**
         * @return Возвращает идентификатор хоккеиста, контролирующего шайбу, или {#code -1}.
         */
        long long getOwnerHockeyistId() const;
        
        /**
         * @return Возвращает идентификатор игрока, контролирующего шайбу, или {#code -1}.
         */
        long long getOwnerPlayerId() const;
    };
}

#endif
