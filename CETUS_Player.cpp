#include <iostream>
#include <string>
#include "CETUS_Player.hpp"

#define NORTH 0
#define SOUTH 1
#define EAST 2
#define WEST 3
#define UP 4
#define DOWN 5

using std::endl;
using std::cout;
using std::string;

	Player::Player(){
		
		this->health = 100;
		this->movesCompleted = 0;
		this->currentRoom = NULL;
		//this->currentNeighbors = NULL;
		this->specialItemCount = 0;
		return;
	}
	
	Player::Player(Room* current){
		
		this->health = 100;
		this->movesCompleted = 0;
		this->currentRoom = current;
		//this->currentNeighbors = current->getNeighbors();
		this->specialItemCount = 0;
		return;
	}
	
	string Player::getName(){
		
		return this->Name;
		
	}
	int Player::getHealth(){
		
		return this->health;
		
	}
	int Player::getMovesCompleted(){
		
		return this->movesCompleted;
		
	}
	
	/*void Player::setCurrentRoom(Room* current){
		
		this->currentRoom = current;
		return;
	}*/
	
	Room* Player::getCurrentRoom(){
		
		return this->currentRoom;
		
	}
	/*
	int Player::getSpecialItemCount(){
		
		return this->specialItemCount;
		
	}*/
	
	int Player::addItem(Item* current){
		
		this->inventory.push_back(current);
        return 0;
	}
	int Player::dropItem(Item* current){
		
		return 0;
		
	}
	int Player::incrementMoves(){
		
		this->movesCompleted++;
		return 0;
		
	}
	int Player::decrementMoves(){
		
		this->movesCompleted--;
		return 0;
		
	}
	int Player::resurrectPlayer(Room* current){
		
		this->health = 100;
		this->movesCompleted = 0;
		this->currentRoom = current;
		//this->currentNeighbors = current->getNeighbors();
		this->specialItemCount = 0;
		return 1;
		
	}
	int Player::damagePlayer(int damage){
		
		this->health -= damage;

		if(this->health < 0){
			
			this->health = 0;
			
		}
		
		return 0;
		
	}
	int Player::healPlayer(int health){
		
		this->health += health;

		if(this->health > 100){
			
			this->health = 100;
			
		}
		
		return 0;		
		
	}

/*	void Player::printAllAdjacent(){
		
		if (this->north != NULL){
			
			cout << this->north->Name << endl;
			
		}
		
		if (this->south != NULL){
			
			cout << this->south->Name << endl;
			
		}
		
		if (this->east != NULL){
			
			cout << this->east->Name << endl;
			
		}
		
		if (this->west != NULL){
			
			cout << this->west->Name << endl;
			
		}
		
		
		if (this->up != NULL){
			
			cout << this->up->Name << endl;
			
		}
		
		if (this->down != NULL){
			
			cout << this->down->Name << endl;
			
		}
		
		return;
	}
 
	void Player::printInventory(){
		
		for(std::vector<T>::iterator it = this->inventory.begin(); it != this->inventory.end(); ++it) {
			
			cout << *it->getName();
			
		}
		
		return;
		
	}
	void Player::printRoomInventory(){
		
		for(std::vector<T>::iterator it = this->currentRoom->roomItems.begin(); it != this->currentRoom->roomItems.end(); ++it) {
			
			cout << *it->getName();
			
		}
		
		return;		
		
	}
	void Player::printAdjacent(int direction){
		
		switch(direction){
			
			case NORTH:
				cout << this->currentRoom->north->Name << endl;
				break;
			
			case SOUTH:
				cout << this->currentRoom->south->Name << endl;
				break;
			
			case EAST:
				cout << this->currentRoom->east->Name << endl;
				break;
			
			case WEST:
				cout << this->currentRoom->west->Name << endl;
				break;
			
			case UP:
				cout << this->currentRoom->up->Name << endl;
				break;
			
			case DOWN:
				cout << this->currentRoom->down->Name << endl;
				break;
			
			default:
				break;
			
		}		
		return;		
		
	}
	
	void Player::move(int direction){
		
		switch(direction){
			
			case NORTH:
				this->currentRoom = this->currentRoom->north;
				this->currentNeighbors = this->currentRoom->getNeighbors();
				break;
			
			case SOUTH:
				this->currentRoom = this->currentRoom->south;
				this->currentNeighbors = this->currentRoom->getNeighbors();
				break;
			
			case EAST:
				this->currentRoom = this->currentRoom->east;
				this->currentNeighbors = this->currentRoom->getNeighbors();
				break;
			
			case WEST:
				this->currentRoom = this->currentRoom->west;
				this->currentNeighbors = this->currentRoom->getNeighbors();
				break;
			
			case UP:
				this->currentRoom = this->currentRoom->up;
				this->currentNeighbors = this->currentRoom->getNeighbors();
				break;
			
			case DOWN:
				this->currentRoom = this->currentRoom->down;
				this->currentNeighbors = this->currentRoom->getNeighbors();
				break;
			
			default:
				break;
			
		}		
		return;
	}*/
