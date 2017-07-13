/*
 * SportsGameSchedule.cpp
 *
 *  Created on: Jul 5, 2017
 *      Author: rlarson
 */

#include "SportsGameSchedule.h"

#include "GameDate.h"

#include <iostream>

SportsGameSchedule::SportsGameSchedule() {

}

SportsGameSchedule::~SportsGameSchedule() {
}

void SportsGameSchedule::AddGameDate(const unsigned int& dateNumber,
		GameDate* date) {
	m_gameDates.insert(std::make_pair(dateNumber, date));
}

GameDate* SportsGameSchedule::GetGameDate(
		const unsigned int& dateNumber) const {
	auto iter = m_gameDates.find(dateNumber);

	if(iter != m_gameDates.end())
	{
		GameDate * gameDate = iter->second;
		return gameDate;
	}

	return nullptr;
}

void SportsGameSchedule::Display() const {
	for(auto iter = m_gameDates.begin();
		iter != m_gameDates.end(); ++iter)
	{
		GameDate * gameDate = iter->second;
		gameDate->Display();
		std::cout << "\n\n";
	}
}
