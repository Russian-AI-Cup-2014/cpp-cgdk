#pragma once

#ifndef _UNIT_H_
#define _UNIT_H_

namespace model {

    /**
     * Базовый класс для определения объектов (<<юнитов>>) на игровом поле.
     */
    class Unit {
    private:
        long long id;
        double mass;
        double radius;
        double x;
        double y;
        double speedX;
        double speedY;
        double angle;
        double angularSpeed;
    protected:
        Unit(long long id, double mass, double radius, double x, double y, double speedX, double speedY, double angle,
                double angularSpeed);
    public:
        
        /**
         * @return Возвращает уникальный идентификатор объекта.
         */
        long long getId() const;
        
        /**
         * @return Возвращает массу объекта в единицах массы.
         */
        double getMass() const;
        
        /**
         * @return Возвращает радиус объекта.
         */
        double getRadius() const;
        
        /**
         * @return Возвращает X-координату центра объекта. Ось абсцисс направлена слева направо.
         */
        double getX() const;
        
        /**
         * @return Возвращает Y-координату центра объекта. Ось ординат направлена свеху вниз.
         */
        double getY() const;
        
        /**
         * @return Возвращает X-составляющую скорости объекта. Ось абсцисс направлена слева направо.
         */
        double getSpeedX() const;
        
        /**
         * @return Возвращает Y-составляющую скорости объекта. Ось ординат направлена свеху вниз.
         */
        double getSpeedY() const;

        /**
         * @return Возвращает угол поворота объекта в радианах. Нулевой угол соответствует направлению оси абсцисс.
         *         Положительные значения соответствуют повороту по часовой стрелке.
         */
        double getAngle() const;
        
        /**
         * @return Возвращает скорость вращения объекта.
         *         Положительные значения соответствуют вращению по часовой стрелке.
         */
        double getAngularSpeed() const;

        /**
         * @param x X-координата точки.
         * @param y Y-координата точки.
         * @return Возвращает ориентированный угол [{#code -PI}, {#code PI}] между направлением
         *         данного объекта и вектором из центра данного объекта к указанной точке.
         */
        double getAngleTo(double x, double y) const;
        
        /**
         * @param unit Объект, к центру которого необходимо определить угол.
         * @return Возвращает ориентированный угол [{#code -PI}, {#code PI}] между направлением
         *         данного объекта и вектором из центра данного объекта к центру указанного объекта.
         */
        double getAngleTo(const Unit& unit) const;
       
        /**
         * @param x X-координата точки.
         * @param y Y-координата точки.
         * @return Возвращает расстояние до точки от центра данного объекта.
         */
        double getDistanceTo(double x, double y) const;
        
        /**
         * @param unit Объект, до центра которого необходимо определить расстояние.
         * @return Возвращает расстояние от центра данного объекта до центра указанного объекта.
         */
        double getDistanceTo(const Unit& unit) const;

        virtual ~Unit();
    };
}

#endif
