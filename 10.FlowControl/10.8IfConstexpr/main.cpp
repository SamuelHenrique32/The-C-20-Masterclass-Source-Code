#include <iostream>


int main(){
   
   constexpr bool condition {false}; // constexpr indica que o valor, ou valor retornado, é constante e, sempre que possível, é calculado em tempo de compilacao

   if constexpr (condition){
       std::cout << "Condition is true" << std::endl;
   }else{
       std::cout << "Condition is false" << std::endl;
   }
    return 0;
}