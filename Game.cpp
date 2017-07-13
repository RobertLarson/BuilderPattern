/*
 * Game.cpp
 *
 *  Created on: Jul 5, 2017
 *      Author: rlarson
 */

#include "Game.h"

#include <iostream>

Game::Game() {
}

Game::~Game() {
}

void Game::SetTime(const std::string & time)
{
	m_time = time;
}

void Game::SetHomeTeam(const std::string & name)
{
	m_homeTeam = name;
}

void Game::SetAwayTeam(const std::string & name)
{
	m_awayTeam = name;
}

void Game::Display() const
{
	std::cout << m_time << " : "
			  << m_awayTeam
			  << " at "
			  << m_homeTeam << "\n";
}
