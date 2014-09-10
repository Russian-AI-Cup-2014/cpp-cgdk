#pragma once

#ifndef _HOCKEYIST_H_
#define _HOCKEYIST_H_

#include "ActionType.h"
#include "HockeyistState.h"
#include "HockeyistType.h"
#include "Unit.h"

namespace model {
    
    /**
     * Класс, определяющий хоккеиста. Содержит также все свойства юнита.
     */
    class Hockeyist : public Unit {
    private:
        long long playerId;
        int teammateIndex;
        bool teammate;
        HockeyistType type;
        int strength;
        int endurance;
        int dexterity;
        int agility;
        double stamina;
        HockeyistState state;
        int originalPositionIndex;
        int remainingKnockdownTicks;
        int remainingCooldownTicks;
        int swingTicks;
        ActionType lastAction;
        int lastActionTick;
    public:
        Hockeyist();
        Hockeyist(long long id, long long playerId, int teammateIndex, double mass, double radius, double x, double y,
                double speedX, double speedY, double angle, double angularSpeed, bool teammate, HockeyistType type,
                int strength, int endurance, int dexterity, int agility, double stamina, HockeyistState state,
                int originalPositionIndex, int remainingKnockdownTicks, int remainingCooldownTicks, int swingTicks,
                ActionType lastAction, int lastActionTick);

        /**
         * @return Возвращает идентификатор игрока, в команду которого входит хоккеист.
         */
        long long getPlayerId() const;
        
        /**
         * @return Возвращает 0-индексированный номер хоккеиста в команде.
         */
        int getTeammateIndex() const;
        
        /**
         * @return Возвращает {#code true}, если и только если данный хоккеист входит в команду вашего игрока.
         */
        bool isTeammate() const;
        
        /**
         * @return Возвращает тип хоккеиста.
         */
        HockeyistType getType() const;
        
        /**
         * @return Возвращает значение атрибута сила.
         */
        int getStrength() const;
        
        /**
         * @return Возвращает значение атрибута стойкость.
         */
        int getEndurance() const;
        
        /**
         * @return Возвращает значение атрибута ловкость.
         */
        int getDexterity() const;
        
        /**
         * @return Возвращает значение атрибута подвижность.
         */
        int getAgility() const;
        
        /**
         * @return Возвращает текущее значение выносливости.
         */
        double getStamina() const;
        
        /**
         * @return Возвращает состояние хоккеиста.
         */
        HockeyistState getState() const;
        
        /**
         * @return Возвращает индекс исходной позиции хоккеиста или {#code -1} для вратаря или хоккеиста,
         *         отдыхающего за пределами игрового поля. На эту позицию хоккеист будет помещён при разыгрывании шайбы.
         *         При выполнении действия замена {#code ActionType.SUBSTITUTE} индексы исходных позиций хоккеистов,
         *         участвующих в замене, меняются местами.
         */
        int getOriginalPositionIndex() const;
        
        /**
         * @return Возвращает количество тиков, по прошествии которого хоккеист восстановится после падения,
         *         или {#code 0}, если хоккеист не сбит с ног.
         */
        int getRemainingKnockdownTicks() const;
        
        /**
         * @return Возвращает количество тиков, по прошествии которого хоккеист сможет совершить какое-либо
         *         действие ({#code move.action}), или {#code 0}, если хоккеист может совершить действие в данный тик.
         */
        int getRemainingCooldownTicks() const;
        
        /**
         * @return Для хоккеиста, находящегося в состоянии замаха ({#code HockeyistState.SWINGING}),
         *         возвращает количество тиков, прошедших от начала замаха. В противном случае возвращает {#code 0}.
         */
        int getSwingTicks() const;
        
        /**
         * @return Возвращает последнее действие ({#code move.action}), совершённое хоккеистом, или {#code null}
         *         ({#code UNKNOWN_ACTION} в пакетах некоторых языков) в случае, если хоккеист ещё не совершил
         *         ни одного действия.
         */
        ActionType getLastAction() const;
        
        /**
         * @return Возвращает номер тика, в который хоккеист совершил своё последние действие ({#code move.action}),
         *         или {#code null} ({#code -1} в пакетах некоторых языков) в случае, если хоккеист ещё не совершил
         *         ни одного действия.
         */
        int getLastActionTick() const;
    };
}

#endif
