#include <iostream>
#include <string>

int main(){

    std::string nombreApellido {};
    int edad {};

    std::cout << "Introduce tu nombre y apellido: ";
    std::getline(std::cin >> std::ws, nombreApellido);

    std::cout << "Ahora introduce tu edad: ";
    std::cin >> edad;

    std::cout << "Tu nombre y apellidos son: " << nombreApellido << " y tu edad es: " << edad << "\n";

    return 0;
}