#include <gtest/gtest.h>
#include "../src/postal.h"

namespace {

    TEST (Postal_Test, Test_CalculoCostoPostal) {

        //AAA

        // Arrange - configurar el escenario de pruebas unitarias
        float distancia = 10;
        float peso = 5;
        int clase = 3;
        Postal envio(peso, distancia, clase);

        // Act - ejecutar la secuencia de instrucciones(operacion)
        int actual = envio.CalculoCosto();
        int esperado = 0.12;

        // Assert - validacion de los resultados obtenidos con los esperados 
        EXPECT_EQ(esperado, actual);
    
    }

}