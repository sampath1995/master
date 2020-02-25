#include<iostream>
#include<string>
#include<memory>



class Entity {
private:
	std::string s_Name;
public:

	std::string getName() {
		return "Entity";
	}

	void printname(const std::string& name) {
		this->s_Name = name;
		std::cout << s_Name << std::endl;
	};

};

class UniqPointer {
private:
	std::string Uniqpoint;
public:
	UniqPointer() {
		std::cout << "Unique pointer is created" << std::endl;
	};
	~UniqPointer() {
		std::cout << "Gone Went Gone - Unique Pointer" << std::endl;
	}
};

class SharedPointer {
private:
	std::string Sharedpoint;
public:
	SharedPointer() {
		std::cout << "shared pointer is created" << std::endl;
	};
	~SharedPointer() {
		std::cout << "Gone Went Gone - Shared Pointer" << std::endl;
	}
};
class WeakPointer {
private:
	std::string Uniqpoint;
public:
	WeakPointer() {
		std::cout << "Weak pointer is created" << std::endl;
	};
	~WeakPointer() {
		std::cout << "Gone Went Gone - Weak Pointer" << std::endl;
	}
};
class Player : public Entity {
private:
	std::string m_player;
public:
	Player(const std::string& name) : m_player(name) {};

	std::string getName() { return m_player; }

};

void testMyAsset(const Entity& Lo) {
	std::cout << "Sike" << std::endl;
}
int main() {

	{
	Entity* e = new Entity();
	std::cout << e->getName() << std::endl;

	Player* p = new Player("CASSINI");
	std::cout << p->getName() << std::endl;

	std::unique_ptr<Entity> entity1(new Entity());

	entity1->printname("Sampath");

	}
	//testMyAsset(*entity1); - the object is deleted because it is out of scope 

	// Unique pointers
	{
		std::unique_ptr<UniqPointer> uni(new UniqPointer());
		{

		}
	}

	
	//shared pointers'
	{
	std::shared_ptr<SharedPointer> shareCB3;

	{ 
		std::shared_ptr<SharedPointer> shareCB2;
		{
			std::shared_ptr<SharedPointer> shared = std::make_shared<SharedPointer>();
			shareCB2 = shared;
		}
		shareCB3 = shareCB2;

	}
	}
	//weak pointers
	{
		{
			//std::weak_ptr<WeakPointer> weak = std::make_
			//for weak pointer we just dont count blocks;
			//we just check wheather the pointer is alive or not

		}
	}

	
	std::cin.get();
}