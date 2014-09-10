#pragma once

#ifndef _PLAYER_H_
#define _PLAYER_H_

#include <string>

namespace model {

    /**
     * Содержит данные о текущем состоянии игрока.
     */
    class Player {
    private:
        long long id;
        bool me;
        std::string name;
        int goalCount;
        bool strategyCrashed;
        double netTop;
        double netLeft;
        double netBottom;
        double netRight;
        double netFront;
        double netBack;
        bool justScoredGoal;
        bool justMissedGoal;
    public:
        Player();
        Player(long long id, bool me, const std::string& name, int goalCount, bool strategyCrashed, double netTop,
                double netLeft, double netBottom, double netRight, double netFront, double netBack, bool justScoredGoal,
                bool justMissedGoal);

        /**
         * @return Возвращает уникальный идентификатор игрока.
         */
        long long getId() const;

        /**
         * @return Возвращает {#code true} в том и только в том случае, если этот игрок ваш.
         */
        bool isMe() const;
        
        /**
         * @return Возвращает имя игрока.
         */
        const std::string& getName() const;
        
        /**
         * @return Возвращает количество шайб, заброшенных хоккеистами данного игрока в сетку противника.
         *         Шайбы, заброшенные во время состояния вне игры, не влияют на этот счётчик.
         */
        int getGoalCount() const;
        
        /**
         * @return Возвращает специальный флаг --- показатель того, что стратегия игрока <<упала>>.
         *         Более подробную информацию можно найти в документации к игре.
         */
        bool isStrategyCrashed() const;
        
        /**
         * @return Возвращает ординату верхней штанги ворот.
         */
        double getNetTop() const;
        
        /**
         * @return Возвращает абсциссу левой границы ворот.
         */
        double getNetLeft() const;
        
        /**
         * @return Возвращает ординату нижней штанги ворот.
         */
        double getNetBottom() const;
        
        /**
         * @return Возвращает абсциссу правой границы ворот.
         */
        double getNetRight() const;
        
        /**
         * @return Возвращает абсциссу ближайшей к вратарю вертикальной границы ворот.
         *         Соответствует одному из значений {#code netLeft} или {#code netRight}.
         */
        double getNetFront() const;

        /**
         * @return Возвращает абсциссу дальней от вратаря вертикальной границы ворот.
         *         Соответствует одному из значений {#code netLeft} или {#code netRight}.
         */
        double getNetBack() const;
        
        /**
         * @return Возвращает {#code true} в том и только в том случае, если игрок только что забил гол.
         *         <p/>
         *         Вместе с установленным флагом {#code justMissedGoal} другого игрока означает,
         *         что сейчас состояние вне игры и новые голы не будут засчитаны.
         *         Длительность состояния вне игры составляет {#code game.afterGoalStateTickCount} тиков.
         */
        bool isJustScoredGoal() const;
        
        /**
         * @return Возвращает {#code true} в том и только в том случае, если игрок только что пропустил гол.
         *         <p/>
         *         Вместе с установленным флагом {#code justScoredGoal} другого игрока означает,
         *         что сейчас состояние вне игры и новые голы не будут засчитаны.
         *         Длительность состояния вне игры составляет {#code game.afterGoalStateTickCount} тиков.
         */
        bool isJustMissedGoal() const;
    };
}

#endif
