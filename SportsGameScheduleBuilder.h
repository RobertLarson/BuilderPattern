/*
 * SportsGameScheduleBuilder.h
 *
 *  Created on: Jul 7, 2017
 *      Author: rlarson
 */

#ifndef SPORTSGAMESCHEDULEBUILDER_H_
#define SPORTSGAMESCHEDULEBUILDER_H_

#include "GameScheduleBuilder.h"

class SportsGameSchedule;

class SportsGameScheduleBuilder: public GameScheduleBuilder {
public:
	SportsGameScheduleBuilder();
	virtual ~SportsGameScheduleBuilder();

	virtual void BuildSchedule();
	virtual void BuildDate(unsigned int dateNumber, std::string date);
	virtual void BuildGame(unsigned int dateNumber, unsigned int gameNumber);
	virtual void AddTime(unsigned int dateNumber, unsigned int gameNumber, std::string time);
	virtual void AddHomeTeam(unsigned int dateNumber, unsigned int gameNumber, std::string name);
	virtual void AddAwayTeam(unsigned int dateNumber, unsigned int gameNumber, std::string name);

	virtual GameSchedule * GetSchedule();

private:
	SportsGameSchedule * m_gameSchedule;
};

#endif /* SPORTSGAMESCHEDULEBUILDER_H_ */
