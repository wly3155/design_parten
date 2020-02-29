#include <iostream>
#include <stdio.h>
using namespace std;

class signleton {

	private:
		static signleton* instance;
	    
		signleton() {
            printf("signleton constractor\n");
        }
		
		signleton(const signleton&) {

		}

		signleton& operator = (const signleton&) {

		}
	
	public:
		static signleton* getInstance() {
			if (instance == nullptr)
				instance = new signleton;
			return instance;
		}
};

signleton* signleton::instance = nullptr;

int main() {
	signleton *test1 = signleton::getInstance(); 
	signleton *test2 = signleton::getInstance(); 
	printf("%p,%p\n", test1, test2);
	printf("wly test\n");
	return 0;
}
