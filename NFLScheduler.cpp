/*
 * NFLScheduler.cpp
 *
 *  Created on: Jul 7, 2017
 *      Author: rlarson
 */

#include "NFLScheduler.h"

#include "GameScheduleBuilder.h"

#include "GameSchedule.h"

NFLScheduler::NFLScheduler(GameScheduleBuilder* builder)
: m_gameScheduleBuilder(builder) {
}

NFLScheduler::~NFLScheduler() {
}

void NFLScheduler::ConstructSchedule() {
	unsigned int dateNumber = 0;
	unsigned int gameNumber = 0;

	m_gameScheduleBuilder->BuildSchedule();

	m_gameScheduleBuilder->BuildDate(dateNumber, std::string("09/07/17"));

	m_gameScheduleBuilder->BuildGame(dateNumber, gameNumber);

	m_gameScheduleBuilder->AddTime(dateNumber, gameNumber, std::string("8:30pm"));
	m_gameScheduleBuilder->AddHomeTeam(dateNumber, gameNumber, std::string("New England Patriots"));
	m_gameScheduleBuilder->AddAwayTeam(dateNumber, gameNumber, std::string("Kansas City Chiefs"));

	m_gameScheduleBuilder->BuildDate(++dateNumber, std::string("09/10/17"));

	m_gameScheduleBuilder->BuildGame(dateNumber, ++gameNumber);

	m_gameScheduleBuilder->AddTime(dateNumber, gameNumber, std::string("1:00pm"));
	m_gameScheduleBuilder->AddHomeTeam(dateNumber, gameNumber, std::string("New York Jets"));
	m_gameScheduleBuilder->AddAwayTeam(dateNumber, gameNumber, std::string("Buffalo Bills"));

	m_gameScheduleBuilder->BuildGame(dateNumber, ++gameNumber);

	m_gameScheduleBuilder->AddTime(dateNumber, gameNumber, std::string("1:00pm"));
	m_gameScheduleBuilder->AddHomeTeam(dateNumber, gameNumber, std::string("Washington Redskins"));
	m_gameScheduleBuilder->AddAwayTeam(dateNumber, gameNumber, std::string("Philadelphia Eagles"));

	m_gameScheduleBuilder->BuildGame(dateNumber, ++gameNumber);

	m_gameScheduleBuilder->AddTime(dateNumber, gameNumber, std::string("1:00pm"));
	m_gameScheduleBuilder->AddHomeTeam(dateNumber, gameNumber, std::string("Tennessee Titans"));
	m_gameScheduleBuilder->AddAwayTeam(dateNumber, gameNumber, std::string("Las Vegas Raiders"));

	m_gameScheduleBuilder->BuildGame(dateNumber, ++gameNumber);

	m_gameScheduleBuilder->AddTime(dateNumber, gameNumber, std::string("1:00pm"));
	m_gameScheduleBuilder->AddHomeTeam(dateNumber, gameNumber, std::string("Miami Dolphins"));
	m_gameScheduleBuilder->AddAwayTeam(dateNumber, gameNumber, std::string("Tampa Bay Buccaneers"));

	m_gameScheduleBuilder->BuildGame(dateNumber, ++gameNumber);

	m_gameScheduleBuilder->AddTime(dateNumber, gameNumber, std::string("1:00pm"));
	m_gameScheduleBuilder->AddHomeTeam(dateNumber, gameNumber, std::string("Houston Texans"));
	m_gameScheduleBuilder->AddAwayTeam(dateNumber, gameNumber, std::string("Jacksonville Jaguars"));

	m_gameScheduleBuilder->BuildGame(dateNumber, ++gameNumber);

	m_gameScheduleBuilder->AddTime(dateNumber, gameNumber, std::string("1:00pm"));
	m_gameScheduleBuilder->AddHomeTeam(dateNumber, gameNumber, std::string("Detroit Lions"));
	m_gameScheduleBuilder->AddAwayTeam(dateNumber, gameNumber, std::string("Arizona Cardinals"));

	m_gameScheduleBuilder->BuildGame(dateNumber, ++gameNumber);

	m_gameScheduleBuilder->AddTime(dateNumber, gameNumber, std::string("1:00pm"));
	m_gameScheduleBuilder->AddHomeTeam(dateNumber, gameNumber, std::string("Chicago Bears"));
	m_gameScheduleBuilder->AddAwayTeam(dateNumber, gameNumber, std::string("Atlanta Falcons"));

	m_gameScheduleBuilder->BuildGame(dateNumber, ++gameNumber);

	m_gameScheduleBuilder->AddTime(dateNumber, gameNumber, std::string("1:00pm"));
	m_gameScheduleBuilder->AddHomeTeam(dateNumber, gameNumber, std::string("Cinncinati Bengals"));
	m_gameScheduleBuilder->AddAwayTeam(dateNumber, gameNumber, std::string("Baltimore Ravens"));

	m_gameScheduleBuilder->BuildGame(dateNumber, ++gameNumber);

	m_gameScheduleBuilder->AddTime(dateNumber, gameNumber, std::string("1:00pm"));
	m_gameScheduleBuilder->AddHomeTeam(dateNumber, gameNumber, std::string("Pittsburgh Steelers"));
	m_gameScheduleBuilder->AddAwayTeam(dateNumber, gameNumber, std::string("Cleveland Browns"));

	m_gameScheduleBuilder->BuildGame(dateNumber, ++gameNumber);

	m_gameScheduleBuilder->AddTime(dateNumber, gameNumber, std::string("4:05pm"));
	m_gameScheduleBuilder->AddHomeTeam(dateNumber, gameNumber, std::string("Los Angeles Rams"));
	m_gameScheduleBuilder->AddAwayTeam(dateNumber, gameNumber, std::string("Indianapolis Colts"));

	m_gameScheduleBuilder->BuildGame(dateNumber, ++gameNumber);

	m_gameScheduleBuilder->AddTime(dateNumber, gameNumber, std::string("4:25pm"));
	m_gameScheduleBuilder->AddHomeTeam(dateNumber, gameNumber, std::string("Green Bay Packers"));
	m_gameScheduleBuilder->AddAwayTeam(dateNumber, gameNumber, std::string("Seattle Seahawks"));

	m_gameScheduleBuilder->BuildGame(dateNumber, ++gameNumber);

	m_gameScheduleBuilder->AddTime(dateNumber, gameNumber, std::string("4:25pm"));
	m_gameScheduleBuilder->AddHomeTeam(dateNumber, gameNumber, std::string("San Francisco 49ers"));
	m_gameScheduleBuilder->AddAwayTeam(dateNumber, gameNumber, std::string("Carolina Panthers"));

	m_gameScheduleBuilder->BuildGame(dateNumber, ++gameNumber);

	m_gameScheduleBuilder->AddTime(dateNumber, gameNumber, std::string("8:30pm"));
	m_gameScheduleBuilder->AddHomeTeam(dateNumber, gameNumber, std::string("Dallas Cowboys"));
	m_gameScheduleBuilder->AddAwayTeam(dateNumber, gameNumber, std::string("New York Giants"));

	m_gameScheduleBuilder->BuildDate(++dateNumber, std::string("09/11/17"));

	m_gameScheduleBuilder->BuildGame(dateNumber, ++gameNumber);

	m_gameScheduleBuilder->AddTime(dateNumber, gameNumber, std::string("7:10pm"));
	m_gameScheduleBuilder->AddHomeTeam(dateNumber, gameNumber, std::string("Minnesota Vikings"));
	m_gameScheduleBuilder->AddAwayTeam(dateNumber, gameNumber, std::string("New Orleans Saints"));

	m_gameScheduleBuilder->BuildGame(dateNumber, ++gameNumber);

	m_gameScheduleBuilder->AddTime(dateNumber, gameNumber, std::string("10:20pm"));
	m_gameScheduleBuilder->AddHomeTeam(dateNumber, gameNumber, std::string("Denver Broncos"));
	m_gameScheduleBuilder->AddAwayTeam(dateNumber, gameNumber, std::string("San Diego Chargers"));

	GameSchedule * schedule = m_gameScheduleBuilder->GetSchedule();

	schedule->Display();
}
