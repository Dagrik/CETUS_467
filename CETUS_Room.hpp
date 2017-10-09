#include <string>
#include <algorithm>
#include <vector>

#ifndef CETUS_ROOM_HPP
#define CETUS_ROOM_HPP

using std::string;

class List;

class Room {
	
	private:
	
		string	longDesc;
		string	shortDesc;
		bool	visited;
		std::vector<Item*> roomItems;
		List 	neighbors;
			
	public:
	
		Room();
		//void Room::~Room();
		void addDescriptions(string longDesc, string shortDesc);
		void addItem(Item* current);
		void removeItem(Item* current);
		void addNeighbor(int direction, Room* neigbor);
		void printLong();
		void printShort();
		void getNeighbors();
};
#endif