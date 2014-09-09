#pragma once

#ifndef _HOCKEYIST_STATE_H_
#define _HOCKEYIST_STATE_H_

namespace model {

    /**
     * Состояние хоккеиста.
     */
    enum HockeyistState {
        _UNKNOWN_HOCKEYIST_STATE_ = -1,

        /**
         * Хоккеист находится на игровом поле.
         */
        ACTIVE = 0,
        
        /**
         * Хоккеист находится на игровом поле и делает замах клюшкой.
         * <p/>
         * Во время замаха стратегия не может управлять движением хоккеиста, а из действий доступны только
         * {@code ActionType.STRIKE} и {@code ActionType.CANCEL_STRIKE}.
         */
        SWINGING = 1,
        
        /**
         * Хоккеист находится на игровом поле, но сбит с ног.
         * Стратегия игрока не может им управлять.
         */
        KNOCKED_DOWN = 2,
        
        /**
         * Хоккеист отдыхает вне игрового поля.
         * Стратегия игрока не может им управлять.
         */
        RESTING = 3,
        
        _HOCKEYIST_STATE_COUNT_ = 4
    };
}

#endif
