/*
 * SportsGameScheduleBuilder.cpp
 *
 *  Created on: Jul 7, 2017
 *      Author: rlarson
 */

#include "SportsGameScheduleBuilder.h"

#include "SportsGameSchedule.h"

#include "Game.h"
#include "GameDate.h"

SportsGameScheduleBuilder::SportsGameScheduleBuilder()
: m_gameSchedule(nullptr) {
}

SportsGameScheduleBuilder::~SportsGameScheduleBuilder() {
  delete m_gameSchedule;
}

void SportsGameScheduleBuilder::BuildSchedule() {
  m_gameSchedule = new SportsGameSchedule();
}

void SportsGameScheduleBuilder::BuildDate(unsigned int dateNumber,
		std::string date) {
	if(m_gameSchedule != nullptr)
	{
		m_gameSchedule->AddGameDate(dateNumber,
				new GameDate(date));
	}
}

void SportsGameScheduleBuilder::BuildGame(unsigned int dateNumber,
		unsigned int gameNumber) {
	if(m_gameSchedule != nullptr)
	{
		GameDate * date = m_gameSchedule->GetGameDate(dateNumber);

		date->AddGame(gameNumber, new Game());
	}
}

void SportsGameScheduleBuilder::AddTime(unsigned int dateNumber,
		unsigned int gameNumber, std::string time) {
	if(m_gameSchedule != nullptr)
	{
		GameDate * date = m_gameSchedule->GetGameDate(dateNumber);
		Game * game = date->GetGame(gameNumber);

		game->SetTime(time);
	}
}

void SportsGameScheduleBuilder::AddHomeTeam(unsigned int dateNumber,
		unsigned int gameNumber, std::string name) {
	if(m_gameSchedule != nullptr)
	{
		GameDate * date = m_gameSchedule->GetGameDate(dateNumber);
		Game * game = date->GetGame(gameNumber);

		game->SetHomeTeam(name);
	}
}

void SportsGameScheduleBuilder::AddAwayTeam(unsigned int dateNumber,
		unsigned int gameNumber, std::string name) {
	if(m_gameSchedule != nullptr)
	{
		GameDate * date = m_gameSchedule->GetGameDate(dateNumber);
		Game * game = date->GetGame(gameNumber);

		game->SetAwayTeam(name);
	}
}

GameSchedule* SportsGameScheduleBuilder::GetSchedule() {
	return m_gameSchedule;
}
