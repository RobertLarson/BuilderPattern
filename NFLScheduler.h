/*
 * NFLScheduler.h
 *
 *  Created on: Jul 7, 2017
 *      Author: rlarson
 */

#ifndef NFLSCHEDULER_H_
#define NFLSCHEDULER_H_

class GameScheduleBuilder;

class NFLScheduler {
public:
	NFLScheduler(GameScheduleBuilder * builder);
	virtual ~NFLScheduler();

	void ConstructSchedule();

private:
	GameScheduleBuilder * m_gameScheduleBuilder;
};

#endif /* NFLSCHEDULER_H_ */
