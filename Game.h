/*
 * Game.h
 *
 *  Created on: Jul 5, 2017
 *      Author: rlarson
 */

#ifndef GAME_H_
#define GAME_H_

#include <string>

class Game {
public:
	Game();
	virtual ~Game();

	void SetTime(const std::string & time);
	void SetHomeTeam(const std::string & name);
	void SetAwayTeam(const std::string & name);

	std::string GetTime()     const { return m_time; }
	std::string GetHomeTeam() const { return m_homeTeam; }
	std::string GetAwayTeam() const { return m_awayTeam; }

	void Display() const;

private:
	std::string m_time;
	std::string m_homeTeam;
	std::string m_awayTeam;
};

#endif /* GAME_H_ */
