/*
 * GameDate.cpp
 *
 *  Created on: Jul 5, 2017
 *      Author: rlarson
 */

#include "GameDate.h"

#include "Game.h"

#include <iostream>

GameDate::GameDate(std::string date)
: m_date(date)
{
}

GameDate::~GameDate() {
}

void GameDate::AddGame(const unsigned int& gameNumber, Game* game) {
	m_games.insert(std::make_pair(gameNumber, game));
}

Game* GameDate::GetGame(const unsigned int& gameNumber) {
	auto iter = m_games.find(gameNumber);
	if(iter != m_games.end())
	{
		return iter->second;
	}

	return nullptr;
}

void GameDate::Display() const {
	std::cout << m_date << "\n\n";
	for(auto iter = m_games.begin();
		iter != m_games.end(); ++iter)
	{
		iter->second->Display();
	}
}
