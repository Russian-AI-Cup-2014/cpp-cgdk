#pragma once

#ifndef _MOVE_H_
#define _MOVE_H_

#include "ActionType.h"

namespace model {
    
    /**
     * Стратегия игрока может управлять хоккеистом посредством установки свойств объекта данного класса.
     */
    class Move {
    private:
        double speedUp;
        double turn;
        ActionType action;
        double passPower;
        double passAngle;
        int teammateIndex;
    public:
        Move();

        /**
         * @return Возвращает текущее ускорение хоккеиста.
         */
        double getSpeedUp() const;
        
        /**
         * Устанавливает ускорение хоккеиста.
         * <p/>
         * Ускорение является относительным и должно лежать в интервале от {@code -1.0} до {@code 1.0}.
         * Значения, выходящие за указанный интервал, будут приведены к ближайшей его границе.
         */
        void setSpeedUp(const double speedUp);
        
        /**
         * @return Возвращает текущий угол поворота хоккеиста.
         */
        double getTurn() const;
        
        /**
         * Устанавливает угол поворота хоккеиста.
         * <p/>
         * Угол поворота задаётся в радианах относительно текущего направления хоккеиста и для хоккеиста
         * с базовым значением атрибута подвижность и максимальным запасом выносливости ограничен
         * интервалом от {@code -game.hockeyistTurnAngleFactor} до {@code game.hockeyistTurnAngleFactor}.
         * Значения, выходящие за указанный интервал, будут приведены к ближайшей его границе.
         * Положительные значения соответствуют повороту по часовой стрелке.
         */
        void setTurn(const double turn);
        
        /**
         * @return Возвращает текущее действие хоккеиста.
         */
        ActionType getAction() const;
        
        /**
         * Устанавливает действие хоккеиста.
         */
        void setAction(const ActionType action);
        
        /**
         * @return Возвращает текущую силу паса.
         */
        double getPassPower() const;
        
        /**
         * Устанавливает силу паса ({@code ActionType.PASS}).
         * <p/>
         * Сила паса является относительной величиной и должна лежать в интервале от {@code 0.0} до {@code 1.0}.
         * Значения, выходящие за указанный интервал, будут приведены к ближайшей его границе.
         * К значению реальной силы паса применяется также поправочный коэффициент {@code game.passPowerFactor}.
         */
        void setPassPower(const double passPower);
        
        /**
         * @return Возвращает текущее направление паса.
         */
        double getPassAngle() const;
        
        /**
         * Устанавливает направление паса ({@code ActionType.PASS}).
         * <p/>
         * Направление паса задаётся в радианах относительно текущего направления хоккеиста
         * и должно лежать в интервале от {@code -0.5 * game.passSector} до {@code 0.5 * game.passSector}.
         * Значения, выходящие за указанный интервал, будут приведены к ближайшей его границе.
         */
        void setPassAngle(const double passAngle);
        
        /**
         * @return Возвращает текущий индекс хоккеиста, на которого будет произведена замена,
         *         или {@code -1}, если хоккеист не был указан.
         */
        int getTeammateIndex() const;
        
        /**
         * Устанавливает индекс хоккеиста для выполнения замены ({@code ActionType.SUBSTITUTE}).
         * <p/>
         * Индексация начинается с нуля. Значением по умолчанию является {@code -1}.
         * Если в команде игрока не существует хоккеиста с указанным индексом, то замена произведена не будет.
         */
        void setTeammateIndex(const int teammateIndex);
    };
}

#endif
