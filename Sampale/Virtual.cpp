#include<iostream>
#include<string>
class Entity {
public:
	std::string getName() {
		return "Entity";
	}

};

class Player : public Entity {
private:
	std::string m_player;
public:
	Player(const std::string& name) : m_player(name) {};

	std::string getName() { return m_player; }

};


int main() {


	Entity* e = new Entity();
	std::cout << e->getName() << std::endl;

	Player* p = new Player("CASSINI");
	std::cout << p->getName() << std::endl;
	std::cin.get();
}