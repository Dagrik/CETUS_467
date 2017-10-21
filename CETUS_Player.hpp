
#include <vector>
#include <string>
#include <sstream>
#include <iostream>
//#include "CETUS_List.hpp"
#define numItems 10

#ifndef CETUS_PLAYER_HPP
#define CETUS_PLAYER_HPP

using std::string;

class Item;
class Room;

class Player{
	
	private:
	
		string Name = "John";
		int	health;
		int movesCompleted;
		Room* currentRoom;
		std::vector<Item*> inventory;
		int specialItemCount;
		//List* currentNeighbors;
	
	public:
	
		Player();
		Player(Room* current);
		string getName();
		int getHealth();
		int getMovesCompleted();
		Room*	getCurrentRoom();
		void getSpecialItemCount();
		void setCurrent(Room* current);
		int addItem(Item* current);
		int dropItem(Item* current);
		int incrementMoves();
		int decrementMoves();
		int resurrectPlayer(Room* current);
		int damagePlayer(int damage);
		int healPlayer(int health);
		void printAllAdjacent();
		void printInventory();
		void printRoomInventory();
		void printAdjacent(int direction);
		void move(int direction);
	
};

#endif
