#include <gtest/gtest.h>
#include "../src/postal.h"

namespace
{

    TEST(Postal_Test, Test_CalculoCostoPostalClase3)
    {

        // AAA

        // Arrange - configurar el escenario de pruebas unitarias
        float distancia = 10;
        float peso = 5;
        int clase = 3;
        Postal envioP(peso, distancia, clase);

        // Act - ejecutar la secuencia de instrucciones(operacion)
        int actual = envioP.CalculoCosto();
        int esperado = 0.12;

        // Assert - validacion de los resultados obtenidos con los esperados
        EXPECT_EQ(esperado, actual);
    }

    TEST(Postal_Test, Test_CalculoCostoPostalClase1)
    {

        // AAA

        // Arrange - configurar el escenario de pruebas unitarias
        float distancia = 6;
        float peso = 10;
        int clase = 1;
        Postal envioP(peso, distancia, clase);

        // Act - ejecutar la secuencia de instrucciones(operacion)
        int actual = envioP.CalculoCosto();
        int esperado = 3.6;

        // Assert - validacion de los resultados obtenidos con los esperados
        EXPECT_EQ(esperado, actual);
    }

    TEST(Postal_Test, Test_CalculoCostoPostalClase2)
    {

        // AAA

        // Arrange - configurar el escenario de pruebas unitarias
        float distancia = 4;
        float peso = 16;
        int clase = 2;
        Postal envioP(peso, distancia, clase);

        // Act - ejecutar la secuencia de instrucciones(operacion)
        int actual = envioP.CalculoCosto();
        int esperado = 0.3;

        // Assert - validacion de los resultados obtenidos con los esperados
        EXPECT_EQ(esperado, actual);
    }

}