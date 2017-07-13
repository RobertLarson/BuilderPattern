/*
 * NFLSchedulerTest.cpp
 *
 *  Created on: Jul 7, 2017
 *      Author: rlarson
 */

#include "NFLScheduler.h"
#include "SportsGameScheduleBuilder.h"

int main()
{
	NFLScheduler scheduler(new SportsGameScheduleBuilder());

	scheduler.ConstructSchedule();

	return 0;
}

