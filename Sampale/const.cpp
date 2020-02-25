//#include<iostream>
//
//int main()
//{
//	int test = 3456;
//	int testing = 234;
//	const int* a = &test; //can change where its pointing not the value inside it
//	int* const b = &test; //can change value inside it not where its pointing to
//
//	*a = 567;
//	a = &testing;
//
//	*b = 34;
//	b = &testing;
//
//
//}

//* = asterisk 

//#include<iostream>
//
//class Constant {
//
//private:
//	int x, y;
//public:
//	Constant(int a,int b) {
//		this->x = a;
//		this->y = b;
//
//	}
//
//	int nonconst() {
//		return x + y + 1;
//	}
//
//	int regularconst() const {
//		return x + y;
//	}
//
//};
//
//
//int main() {
//
//	Constant nonConstObj(23,4);
//	const Constant constObj(456,78) ;
//	std::cout << nonConstObj.nonconst << "\n" << std::endl;
//	std::cout << nonConstObj.regularconst << "\n" << std::endl;
//	std::cout << constObj.regularconst << "\n" << std::endl;
//	std::cout << constObj.nonconst << "\n" << std::endl;
//}