#include <iostream>



int main(){

	//Non const reference
	std::cout << std::endl;
	std::cout << "Non const reference : " << std::endl;
	int age {27};
	const int& ref_age{age};
	int& ref_age_no_const{age};

	std::cout << "age : " << age << std::endl;
	std::cout << "ref_age : " << ref_age << std::endl;
	
	
	//Can modify original variable through reference

	std::cout << std::endl;
	std::cout << "Modify original variable through reference : " << std::endl;
	
	//ref_age++; //Mofify through reference (not allowed with const reference)
	ref_age_no_const++;
	
	std::cout << "age : " << age << std::endl;
	std::cout << "ref_age : " << ref_age << std::endl;


   //Simulating reference behavior with pointers
    const int * const p_age {&age};
    //*p_age = 45; //Not allowed
	
   
    return 0;
}