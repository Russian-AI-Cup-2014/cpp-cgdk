#pragma once

#ifndef _GAME_H_
#define _GAME_H_

namespace model {
    
    /**
     * Предоставляет доступ к различным игровым константам.
     */
    class Game {
    private:
        long long randomSeed;
        int tickCount;
        double worldWidth;
        double worldHeight;
        double goalNetTop;
        double goalNetWidth;
        double goalNetHeight;
        double rinkTop;
        double rinkLeft;
        double rinkBottom;
        double rinkRight;
        int afterGoalStateTickCount;
        int overtimeTickCount;
        int defaultActionCooldownTicks;
        int swingActionCooldownTicks;
        int cancelStrikeActionCooldownTicks;
        int actionCooldownTicksAfterLosingPuck;
        double stickLength;
        double stickSector;
        double passSector;
        int hockeyistAttributeBaseValue;
        double minActionChance;
        double maxActionChance;
        double strikeAngleDeviation;
        double passAngleDeviation;
        double pickUpPuckBaseChance;
        double takePuckAwayBaseChance;
        int maxEffectiveSwingTicks;
        double strikePowerBaseFactor;
        double strikePowerGrowthFactor;
        double strikePuckBaseChance;
        double knockdownChanceFactor;
        double knockdownTicksFactor;
        double maxSpeedToAllowSubstitute;
        double substitutionAreaHeight;
        double passPowerFactor;
        double hockeyistMaxStamina;
        double activeHockeyistStaminaGrowthPerTick;
        double restingHockeyistStaminaGrowthPerTick;
        double zeroStaminaHockeyistEffectivenessFactor;
        double speedUpStaminaCostFactor;
        double turnStaminaCostFactor;
        double takePuckStaminaCost;
        double swingStaminaCost;
        double strikeStaminaBaseCost;
        double strikeStaminaCostGrowthFactor;
        double cancelStrikeStaminaCost;
        double passStaminaCost;
        double goalieMaxSpeed;
        double hockeyistMaxSpeed;
        double struckHockeyistInitialSpeedFactor;
        double hockeyistSpeedUpFactor;
        double hockeyistSpeedDownFactor;
        double hockeyistTurnAngleFactor;
        int versatileHockeyistStrength;
        int versatileHockeyistEndurance;
        int versatileHockeyistDexterity;
        int versatileHockeyistAgility;
        int forwardHockeyistStrength;
        int forwardHockeyistEndurance;
        int forwardHockeyistDexterity;
        int forwardHockeyistAgility;
        int defencemanHockeyistStrength;
        int defencemanHockeyistEndurance;
        int defencemanHockeyistDexterity;
        int defencemanHockeyistAgility;
        int minRandomHockeyistParameter;
        int maxRandomHockeyistParameter;
        double struckPuckInitialSpeedFactor;
        double puckBindingRange;
    public:
        Game();
        Game(long long randomSeed, int tickCount, double worldWidth, double worldHeight, double goalNetTop,
                double goalNetWidth, double goalNetHeight, double rinkTop, double rinkLeft, double rinkBottom,
                double rinkRight, int afterGoalStateTickCount, int overtimeTickCount, int defaultActionCooldownTicks,
                int swingActionCooldownTicks, int cancelStrikeActionCooldownTicks,
                int actionCooldownTicksAfterLosingPuck, double stickLength, double stickSector, double passSector,
                int hockeyistAttributeBaseValue, double minActionChance, double maxActionChance,
                double strikeAngleDeviation, double passAngleDeviation, double pickUpPuckBaseChance,
                double takePuckAwayBaseChance, int maxEffectiveSwingTicks, double strikePowerBaseFactor,
                double strikePowerGrowthFactor, double strikePuckBaseChance, double knockdownChanceFactor,
                double knockdownTicksFactor, double maxSpeedToAllowSubstitute, double substitutionAreaHeight,
                double passPowerFactor, double hockeyistMaxStamina, double activeHockeyistStaminaGrowthPerTick,
                double restingHockeyistStaminaGrowthPerTick, double zeroStaminaHockeyistEffectivenessFactor,
                double speedUpStaminaCostFactor, double turnStaminaCostFactor, double takePuckStaminaCost,
                double swingStaminaCost, double strikeStaminaBaseCost, double strikeStaminaCostGrowthFactor,
                double cancelStrikeStaminaCost, double passStaminaCost, double goalieMaxSpeed, double hockeyistMaxSpeed,
                double struckHockeyistInitialSpeedFactor, double hockeyistSpeedUpFactor,
                double hockeyistSpeedDownFactor, double hockeyistTurnAngleFactor, int versatileHockeyistStrength,
                int versatileHockeyistEndurance, int versatileHockeyistDexterity, int versatileHockeyistAgility,
                int forwardHockeyistStrength, int forwardHockeyistEndurance, int forwardHockeyistDexterity,
                int forwardHockeyistAgility, int defencemanHockeyistStrength, int defencemanHockeyistEndurance,
                int defencemanHockeyistDexterity, int defencemanHockeyistAgility, int minRandomHockeyistParameter,
                int maxRandomHockeyistParameter, double struckPuckInitialSpeedFactor, double puckBindingRange);

        /**
         * @return Возвращает некоторое число, которое ваша стратегия может использовать для инициализации генератора
         *         случайных чисел. Данное значение имеет рекомендательный характер, однако позволит более точно
         *         воспроизводить прошедшие игры.
         */
        long long getRandomSeed() const;
        
        /**
         * @return Возвращает длительность игры в тиках.
         */
        int getTickCount() const;
        
        /**
         * @return Возвращает ширину игрового мира.
         */
        double getWorldWidth() const;
        
        /**
         * @return Возвращает высоту игрового мира.
         */
        double getWorldHeight() const;
        
        /**
         * @return Возвращает ординату верхней штанги ворот.
         */
        double getGoalNetTop() const;
        
        /**
         * @return Возвращает ширину ворот.
         */
        double getGoalNetWidth() const;
        
        /**
         * @return Возвращает высоту ворот.
         */
        double getGoalNetHeight() const;
        
        /**
         * @return Возвращает ординату верхней границы игрового поля.
         */
        double getRinkTop() const;
        
        /**
         * @return Возвращает абсциссу левой границы игрового поля.
         */
        double getRinkLeft() const;
        
        /**
         * @return Возвращает ординату нижней границы игрового поля.
         */
        double getRinkBottom() const;
        
        /**
         * @return Возвращает абсциссу правой границы игрового поля.
         */
        double getRinkRight() const;
        
        /**
         * @return Возвращает длительность состояния вне игры после гола.
         *         В течение этого времени новые забитые голы игнорируются,
         *         а действия не требуют затрат выносливости.
         */
        int getAfterGoalStateTickCount() const;
        
        /**
         * @return Возвращает длительность дополнительного времени.
         *         Дополнительное время наступает в случае ничейного счёта на момент окончания основного времени.
         *         Если за основное время не было забито ни одного гола, вратари обоих игроков убираются с поля.
         */
        int getOvertimeTickCount() const;
        
        /**
         * @return Возвращает длительность задержки, применяемой к хоккеисту
         *         после совершения им большинства действий ({#code move.action}).
         *         В течение этого времени хоккеист не может совершать новые действия.
         */
        int getDefaultActionCooldownTicks() const;
        
        /**
         * @return Возвращает длительность задержки, применяемой к хоккеисту
         *         после совершения им действия замах ({#code ActionType.SWING}).
         *         В течение этого времени хоккеист не может совершать новые действия.
         */
        int getSwingActionCooldownTicks() const;
        
        /**
         * @return Возвращает длительность задержки, применяемой к хоккеисту
         *         после отмены им удара ({#code ActionType.CANCEL_STRIKE}).
         *         В течение этого времени хоккеист не может совершать новые действия.
         */
        int getCancelStrikeActionCooldownTicks() const;
        
        /**
         * @return Возвращает длительность задержки, применяемой к хоккеисту
         *         в случае потери шайбы вследствие воздействия других хоккеистов.
         *         В течение этого времени хоккеист не может совершать действия.
         */
        int getActionCooldownTicksAfterLosingPuck() const;
        
        /**
         * @return Возвращает длину клюшки хоккеиста. Хоккеист может воздействовать на игровой объект,
         *         если и только если расстояние от центра хоккеиста до центра объекта не превышает эту величину.
         */
        double getStickLength() const;

        /**
         * @return Возвращает сектор клюшки хоккеиста. Хоккеист может воздействовать на игровой объект,
         *         если и только если угол между направлением хоккеиста и вектором из центра хоккеиста в центр объекта
         *         не превышает половину этой величины.
         */
        double getStickSector() const;
        
        /**
         * @return Возвращает сектор клюшки хоккеиста. Хоккеист может воздействовать на игровой объект,
         *         если и только если угол между направлением хоккеиста и вектором из центра хоккеиста в центр объекта
         *         не превышает половину этой величины.
         */
        double getPassSector() const;
        
        /**
         * @return Возвращает сектор, ограничивающий направление паса.
         */
        int getHockeyistAttributeBaseValue() const;
        
        /**
         * @return Возвращает базовое значение атрибута хоккеиста.
         *         Данная величина используется как коэффициент в различных игровых формулах.
         */
        double getMinActionChance() const;
        
        /**
         * @return Возвращает минимальный шанс на совершение любого вероятностного действия.
         */
        double getMaxActionChance() const;
        
        /**
         * @return Возвращает стандартное отклонение распределения Гаусса для угла удара ({#code ActionType.STRIKE})
         *         хоккеиста при базовом значении атрибута ловкость. Чем выше ловкость конкретного хоккеиста,
         *         тем точнее его удар.
         */
        double getStrikeAngleDeviation() const;
        
        /**
         * @return Возвращает стандартное отклонение распределения Гаусса для угла паса ({#code ActionType.PASS})
         *         хоккеиста при базовом значении атрибута ловкость. Чем выше ловкость конкретного хоккеиста,
         *         тем точнее его пас.
         */
        double getPassAngleDeviation() const;
        
        /**
         * @return Возвращает базовый шанс подобрать шайбу, не контролируемую другим хоккеистом.
         *         Максимальный из атрибутов ловкость и подвижность хоккеиста увеличивает шанс на захват.
         *         Скорость шайбы уменьшает шанс на захват.
         */
        double getPickUpPuckBaseChance() const;
        
        /**
         * @return Возвращает базовый шанс отнять шайбу у другого хоккеиста.
         *         Максимальный из атрибутов сила и ловкость хоккеиста, отнимающего шайбу, увеличивает шанс на захват.
         *         Максимальный из атрибутов стойкость и подвижность текущего владельца шайбы уменьшает шанс на её потерю.
         */
        double getTakePuckAwayBaseChance() const;
        
        /**
         * @return Возвращает длительность замаха, после достижения которой сила удара не увеличивается.
         */
        int getMaxEffectiveSwingTicks() const;
        
        /**
         * @return Возвращает коэффициент силы удара без замаха.
         */
        double getStrikePowerBaseFactor() const;
        
        /**
         * @return Возвращает увеличение коэффициента силы удара за каждый тик замаха.
         *         Максимальное количество учитываемых тиков ограничено значением {#code maxEffectiveSwingTicks}.
         */
        double getStrikePowerGrowthFactor() const;
        
        /**
         * @return Возвращает базовый шанс ударить шайбу. Базовый шанс не зависит от того,
         *         контролирует шайбу другой хоккеист или нет, однако на результирующий шанс удара
         *         по свободной и контролируемой шайбе влияют разные атрибуты хоккеиста
         *         (смотрите документацию к {#code pickUpPuckBaseChance} и {#code takePuckAwayBaseChance}).
         *         Если хоккеист, совершающий удар, контролирует шайбу, то вероятность удара всегда будет 100%.
         */
        double getStrikePuckBaseChance() const;
        
        /**
         * @return Возвращает шанс ударом ({#code ActionType.STRIKE}) сбить с ног другого хоккеиста при максимальной
         *         длительности замаха. Среднее значение атрибутов сила и ловкость хоккеиста, совершающего удар,
         *         увеличивает шанс сбить с ног. Значение атрибута стойкость атакуемого хоккеиста уменьшает шанс на падение.
         */
        double getKnockdownChanceFactor() const;
        
        /**
         * @return Возвращает количество тиков, по прошествии которого хоккеист восстановится после падения при базовом
         *         значении атрибута подвижность. Чем выше подвижность, тем быстрее восстановление.
         */
        double getKnockdownTicksFactor() const;
        
        /**
         * @return Возвращает максимальную допустимую скорость для выполнения замены хоккеиста.
         */
        double getMaxSpeedToAllowSubstitute() const;
        
        /**
         * @return Возвращает высоту зоны, в которой может быть выполнена замена хоккеиста. Зона расположена вдоль верхней
         *         границы игровой площадки. Замена может быть выполнена только на своей половине поля.
         */
        double getSubstitutionAreaHeight() const;
        
        /**
         * @return Возвращает коэффициент силы паса. Умножается на устанавливаемое стратегией в интервале
         *         [{#code 0.0}, {#code 1.0}] значение силы паса ({#code move.passPower}).
         */
        double getPassPowerFactor() const;
        
        /**
         * @return Возвращает максимальное значение выносливости хоккеиста. Выносливость тратится на перемещение
         *         и совершение хоккеистом различных действий. Каждый тик может восстановиться небольшое количество
         *         выносливости в зависимости от состояния хоккеиста ({#code hockeyist.state}). По мере расходования
         *         выносливости все атрибуты (соответственно, и эффективность всех действий) хоккеиста равномерно
         *         уменьшаются и достигают значения {#code zeroStaminaHockeyistEffectivenessFactor} (от начальных
         *         показателей) при падении выносливости до нуля. Хоккеист не восстанавливает выносливость в состояниях
         *         {#code HockeyistState.SWINGING} и {#code HockeyistState.KNOCKED_DOWN}.
         */
        double getHockeyistMaxStamina() const;
        
        /**
         * @return Возвращает значение, на которое увеличивается выносливость хоккеиста за каждый тик в состоянии
         *         {#code HockeyistType.ACTIVE}.
         */
        double getActiveHockeyistStaminaGrowthPerTick() const;
        
        /**
         * @return Возвращает значение, на которое увеличивается выносливость хоккеиста за каждый тик в состоянии
         *         {#code HockeyistType.RESTING}.
         */
        double getRestingHockeyistStaminaGrowthPerTick() const;
        
        /**
         * @return Возвращает коэффициент эффективности действий хоккеиста при падении его выносливости до нуля.
         */
        double getZeroStaminaHockeyistEffectivenessFactor() const;
        
        /**
         * @return Возвращает количество выносливости, которое необходимо затратить на максимальное по модулю
         *         ускорение/замедление хоккеиста ({#code move.speedUp}) за 1 тик. Для меньших значений ускорения затраты
         *         выносливости пропорционально падают.
         */
        double getSpeedUpStaminaCostFactor() const;
        
        /**
         * @return Возвращает количество выносливости, которое необходимо затратить на максимальный по модулю
         *         угол поворота хоккеиста ({#code move.turn}) за 1 тик. Для меньших значений угла поворота затраты
         *         выносливости пропорционально падают.
         */
        double getTurnStaminaCostFactor() const;
        
        /**
         * @return Возвращает количество выносливости, которое необходимо затратить на совершение действия
         *         {#code ActionType.TAKE_PUCK}.
         */
        double getTakePuckStaminaCost() const;
        
        /**
         * @return Возвращает количество выносливости, которое необходимо затратить на совершение действия
         *         {#code ActionType.SWING}.
         */
        double getSwingStaminaCost() const;
        
        /**
         * @return Возвращает базовое количество выносливости, которое необходимо затратить на совершение действия
         *         {#code ActionType.STRIKE}.
         */
        double getStrikeStaminaBaseCost() const;
        
        /**
         * @return Возвращает увеличение затрат выносливости на удар ({#code ActionType.STRIKE}) за каждый тик замаха.
         *         Максимальное количество учитываемых тиков ограничено значением {#code maxEffectiveSwingTicks}.
         */
        double getStrikeStaminaCostGrowthFactor() const;
        
        /**
         * @return Возвращает количество выносливости, которое необходимо затратить на совершение действия
         *         {#code ActionType.CANCEL_STRIKE}.
         */
        double getCancelStrikeStaminaCost() const;
        
        /**
         * @return Возвращает количество выносливости, которое необходимо затратить на совершение действия
         *         {#code ActionType.PASS}.
         */
        double getPassStaminaCost() const;
        
        /**
         * @return Возвращает максимальную скорость перемещения вратаря.
         */
        double getGoalieMaxSpeed() const;
        
        /**
         * @return Возвращает максимальную скорость перемещения полевого хоккеиста.
         */
        double getHockeyistMaxSpeed() const;
        
        /**
         * @return Возвращает модуль скорости, добавляемой хоккеисту, попавшему под удар силы 1.0.
         */
        double getStruckHockeyistInitialSpeedFactor() const;
        
        /**
         * @return Возвращает модуль ускорения, приобретаемого хоккеистом, при {#code move.speedUp} равном 1.0,
         *         базовом значении атрибута подвижность и максимальном запасе выносливости.
         *         Направление ускорения совпадает с направлением хоккеиста.
         *         В игре отсутствует специальное ограничение на максимальную скорость хоккеиста, однако все
         *         игровые объекты подвержены воздействию силы трения, которая уменьшает модуль их скорости каждый тик.
         *         Чем больше скорость, тем на большую величину она уменьшается.
         */
        double getHockeyistSpeedUpFactor() const;
        
        /**
         * @return Возвращает модуль ускорения, приобретаемого хоккеистом, при {#code move.speedUp} равном -1.0,
         *         базовом значении атрибута подвижность и максимальном запасе выносливости.
         *         Направление ускорения противоположно направлению хоккеиста.
         *         В игре отсутствует специальное ограничение на максимальную скорость хоккеиста, однако все
         *         игровые объекты подвержены воздействию силы трения, которая уменьшает модуль их скорости каждый тик.
         *         Чем больше скорость, тем на большую величину она уменьшается.
         */
        double getHockeyistSpeedDownFactor() const;
        
        /**
         * @return Возвращает максимальный модуль угла поворота хоккеиста за тик при базовом значении атрибута подвижность
         *         и максимальном запасе выносливости.
         */
        double getHockeyistTurnAngleFactor() const;
        
        /**
         * @return Возвращает значение атрибута сила для хоккеиста-универсала.
         */
        int getVersatileHockeyistStrength() const;
        
        /**
         * @return Возвращает значение атрибута стойкость для хоккеиста-универсала.
         */
        int getVersatileHockeyistEndurance() const;
        
        /**
         * @return Возвращает значение атрибута ловкость для хоккеиста-универсала.
         */
        int getVersatileHockeyistDexterity() const;
        
        /**
         * @return Возвращает значение атрибута подвижность для хоккеиста-универсала.
         */
        int getVersatileHockeyistAgility() const;
        
        /**
         * @return Возвращает значение атрибута сила для нападающего.
         */
        int getForwardHockeyistStrength() const;
        
        /**
         * @return Возвращает значение атрибута стойкость для нападающего.
         */
        int getForwardHockeyistEndurance() const;
        
        /**
         * @return Возвращает значение атрибута ловкость для нападающего.
         */
        int getForwardHockeyistDexterity() const;
        
        /**
         * @return Возвращает значение атрибута подвижность для нападающего.
         */
        int getForwardHockeyistAgility() const;
        
        /**
         * @return Возвращает значение атрибута сила для защитника.
         */
        int getDefencemanHockeyistStrength() const;
        
        /**
         * @return Возвращает значение атрибута стойкость для защитника.
         */
        int getDefencemanHockeyistEndurance() const;
        
        /**
         * @return Возвращает значение атрибута ловкость для защитника.
         */
        int getDefencemanHockeyistDexterity() const;
        
        /**
         * @return Возвращает значение атрибута подвижность для защитника.
         */
        int getDefencemanHockeyistAgility() const;
        
        /**
         * @return Возвращает минимально возможное значение любого атрибута для хоккеиста со случайными параметрами.
         */
        int getMinRandomHockeyistParameter() const;
        
        /**
         * @return Возвращает максимально возможное значение любого атрибута для хоккеиста со случайными параметрами.
         */
        int getMaxRandomHockeyistParameter() const;
        
        /**
         * @return Возвращает модуль скорости, устанавливаемой шайбе, попавшей под удар силы 1.0.
         */
        double getStruckPuckInitialSpeedFactor() const;
        
        /**
         * @return Возвращает расстояние от центра хоккеиста, контролирующего шайбу, до центра шайбы.
         */
        double getPuckBindingRange() const;
    };
}

#endif
