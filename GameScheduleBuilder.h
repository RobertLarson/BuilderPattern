/*
 * GameScheduleBuilder.h
 *
 *  Created on: Jul 7, 2017
 *      Author: rlarson
 */

#ifndef GAMESCHEDULEBUILDER_H_
#define GAMESCHEDULEBUILDER_H_

#include <string>

class GameSchedule;

class GameScheduleBuilder
{
public:
	virtual void BuildSchedule() = 0;
	virtual void BuildDate(unsigned int dateNumber, std::string date) = 0;
	virtual void BuildGame(unsigned int dateNumber, unsigned int gameNumber) = 0;
	virtual void AddTime(unsigned int dateNumber, unsigned int gameNumber, std::string time) = 0;
	virtual void AddHomeTeam(unsigned int dateNumber, unsigned int gameNumber, std::string name) = 0;
	virtual void AddAwayTeam(unsigned int dateNumber, unsigned int gameNumber, std::string name) = 0;

	virtual GameSchedule * GetSchedule() = 0;
};


#endif /* GAMESCHEDULEBUILDER_H_ */
