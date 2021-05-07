#include "restaurante.h"

int main() {

    // Funciones a utilizar con la instancia MiRestaurante
        // MiRestaurante.IndicarNombre(std::string nombre);
        // MiRestaurante.IndicarUbicacion(std::string provincia, std::string canton, int numeroCalle);
        // MiRestaurante.AgregarAlmuerzo(std::string almuerzo);
        // MiRestaurante.AgregarPostre();
        // MiRestaurante.ImprimirInformacion();

    auto MiRestaurante = restaurante();

    MiRestaurante.ImprimirInformacion();

    return 0;
}