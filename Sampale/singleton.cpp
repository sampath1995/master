//#include <iostream>
//
//class Singleton
//{
//private:
//    /* Here will be the instance stored. */
//    static Singleton* instance;
//
//    /* Private constructor to prevent instancing. */
//    Singleton();
//
//public:
//    /* Static access method. */
//    static Singleton* getInstance();
//};
//
///* Null, because instance will be initialized on demand. */
//Singleton* Singleton::instance = 0;
//
//Singleton* Singleton::getInstance()
//{
//    if (instance == 0)
//    {
//        instance = new Singleton();
//    }
//
//    return instance;
//}
//
//Singleton::Singleton()
//{}
//
//int main()
//{
//    //new Singleton(); // Won't work
//    Singleton* s = Singleton::getInstance(); // Ok
//    Singleton* r = Singleton::getInstance();
//
//    /* The addresses will be the same. */
//    std::cout << s << std::endl;
//    std::cout << r << std::endl;
//}
//
//
//
//#include<iostream>
//
//
//class Box {
//private:
//	double length;
//	double breadth;
//	double height;
//public:
//	Box(double l = 2, double b = 4, double h = 3) {
//		length = l;
//		breadth = b;
//		height = h;
//	}
//	double Volume() {
//		return length * breadth * height;
//	}
//};
//
//int main() {
//
//	Box box1(12.3, 4.56, 78.9);
//	Box box2;
//	Box* boxPtr;
//	boxPtr = &box1;
//	Box** boxDoublePtr = &boxPtr;
//	
//	std::cout << boxPtr->Volume() << std::endl;
//	std::cout <<" Address of boxPtr which is stored in boxDoublePtr :  "<< boxDoublePtr << std::endl;
//	std::cout << " Address of box1 which is stored in boxPtr :  "<< boxPtr << std::endl;
//	std::cout << boxPtr << std::endl;
//
//
//	std::cin.get();

//#include<iostream>
//
//int main() {
//
//	std::cout << "hello sampath" << std::endl;
//
//
//
//	std::cin.get();
//}












