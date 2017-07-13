/*
 * SportsGameSchedule.h
 *
 *  Created on: Jul 5, 2017
 *      Author: rlarson
 */

#ifndef SPORTSGAMESCHEDULE_H_
#define SPORTSGAMESCHEDULE_H_

#include "GameSchedule.h"

#include <map>

class GameDate;

class SportsGameSchedule : public GameSchedule {
public:
	SportsGameSchedule();
	virtual ~SportsGameSchedule();

	void AddGameDate(const unsigned int & dateNumber, GameDate * date);
	GameDate * GetGameDate(const unsigned int & dateNumber) const;

	virtual void Display() const;
private:
	std::map<unsigned int, GameDate * > m_gameDates;
};

#endif /* SPORTSGAMESCHEDULE_H_ */
