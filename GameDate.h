/*
 * GameDate.h
 *
 *  Created on: Jul 5, 2017
 *      Author: rlarson
 */

#ifndef GAMEDATE_H_
#define GAMEDATE_H_

#include <string>
#include <map>

class Game;

class GameDate {
public:
	GameDate(std::string date);
	virtual ~GameDate();

	void AddGame(const unsigned int & gameNumber, Game * game);
    Game * GetGame(const unsigned int & gameNumber);

    void Display() const;

private:
	std::string m_date;
	std::map<unsigned int, Game *> m_games;
};

#endif /* GAMEDATE_H_ */
