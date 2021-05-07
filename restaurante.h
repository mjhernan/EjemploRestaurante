#include <iostream>
#include <string>
#include <vector>

class restaurante
{
private:
    int cantidadEmpleados;
    double salarioMinimo;
    std::string nombre;
    std::string ubicacion;
    std::vector<std::string> listaAlmuerzos;
    std::vector<std::string> listaPostres;
    bool ventaAlcohol;

public:
    restaurante();
    ~restaurante();

    void IndicarCantidadEmpleados(int cantidadEmpleados);
    void IndicarNombre(std::string nombre);
    void IndicarUbicacion(std::string provincia, std::string canton, int numeroCalle);
    void AgregarAlmuerzo(std::string almuerzo);
    void AgregarPostre();
    void ImprimirInformacion();
};

restaurante::restaurante()
{
    this->cantidadEmpleados = 0;
    this->nombre = "";
    this->ubicacion = "";
    this->listaAlmuerzos = {};
    this->listaPostres = {};
    this->ventaAlcohol = false;
}

restaurante::~restaurante()
{
}

void restaurante::ImprimirInformacion(){
    std::string stringEmpleados;
    std::string stringNombre;
    std::string stringUbicacion;
    std::string stringAlmuerzos;
    std::string stringPostres;
    std::string stringAlcohol;

    std::cout << "Informacion del restauImprimirInformacionrante" << std::endl;
    this->cantidadEmpleados == 0 ? stringEmpleados = "Sin definir" : stringEmpleados = std::to_string(this->cantidadEmpleados);
    this->nombre == "" ? stringNombre = "Sin definir" : stringNombre = this->nombre;
    this->ubicacion == "" ? stringUbicacion = "Sin definir" : stringUbicacion = this->ubicacion;
    this->ventaAlcohol == false ? stringAlcohol = "No" : stringAlcohol = "Si";

    std::cout << "\tRestaurante: " + stringNombre << std::endl;
    std::cout << "\tUbicacion: " + stringUbicacion << std::endl;
    std::cout << "\tCantidad de empleados: " + stringEmpleados << std::endl;
    std::cout << "\tVenta de alcohol: " + stringAlcohol << std::endl;
    std::cout << "\tAlmuerzos:" << std::endl;
    for (auto almuerzo : this->listaAlmuerzos){
        std::cout << "\t\t" + almuerzo << std::endl;
    }
    for (auto postre : this->listaPostres){
        std::cout << "\t\t" + postre << std::endl;
    }
}