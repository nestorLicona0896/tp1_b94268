#include <gtest/gtest.h>
#include "../src/fedex.h"

namespace {

    TEST (Fedex_Test, Test_CalculoCostoFedex) {

        //AAA

        // Arrange - configurar el escenario de pruebas unitarias
        float distancia = 10;
        float peso = 5;
        Fedex envio(peso, distancia);

        // Act - ejecutar la secuencia de instrucciones(operacion)
        int actual = envio.CalculoCosto();
        int esperado = 35;

        // Assert - validacion de los resultados obtenidos con los esperados 
        EXPECT_EQ(esperado, actual);
    
    }

}