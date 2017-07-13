/*
 * NFLSchedulerTest.cpp
 *
 *  Created on: Jul 7, 2017
 *      Author: rlarson
 */

#include "NFLScheduler.h"
#include "SportsGameScheduleBuilder.h"
#include "GameSchedule.h"

int main()
{
	SportsGameScheduleBuilder * gameScheduleBuilder = new SportsGameScheduleBuilder();

	NFLScheduler scheduler(gameScheduleBuilder);

	scheduler.ConstructSchedule();

	GameSchedule * schedule = gameScheduleBuilder->GetSchedule();

    schedule->Display();

	return 0;
}

