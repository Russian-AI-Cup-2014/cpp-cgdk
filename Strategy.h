#pragma once

#ifndef _STRATEGY_H_
#define _STRATEGY_H_

#include "model/Game.h"
#include "model/Move.h"
#include "model/World.h"

/**
 * Стратегия --- интерфейс, содержащий описание методов искусственного интеллекта хоккеиста.
 * Каждая пользовательская стратегия должна реализовывать этот интерфейс.
 * Может отсутствовать в некоторых языковых пакетах, если язык не поддерживает интерфейсы.
 */
class Strategy {
public:
    
    /**
     * Основной метод стратегии, осуществляющий управление хоккеистом.
     * Вызывается каждый тик для каждого хоккеиста.
     *
     * @param self  Хоккеист, которым данный метод будет осуществлять управление.
     * @param world Текущее состояние мира.
     * @param game  Различные игровые константы.
     * @param move  Результатом работы метода является изменение полей данного объекта.
     */
    virtual void move(const model::Hockeyist& self, const model::World& world, const model::Game& game, model::Move& move) = 0;

    virtual ~Strategy();
};

#endif
