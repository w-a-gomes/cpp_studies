#include <iostream>
#include <cmath>
#include <string>
#include "FuncMath.h"

std::string StringGlobal = "String global!";
namespace funcmath
{
    //static
    int StaticEx()
    {
        static int StaticNum = 0;
        StaticNum++;
        return StaticNum;
    }

    int Somar(int num1, int num2)
    {   
        std::cout << StringGlobal << " ";
        return num1 + num2;
    }

    int Subtrair(int num1, int num2)
    {
        // Modificadores de tipo: short, long, signed e unsigned
        return num1 - num2;
    }

    int Multiplicar(int num1, int num2)
    {
        return num1 * num2;
    }

    float Dividir(int num1, int num2)
    {
        // cast: conversão explícita
        return (float)num1 / (float)num2;
    }

    int Potencia(int num1, int num2)
    {
        return pow(num1, num2);
    }

    float RaizQuadrada(int num)
    {
        return sqrt(num);
    }
}