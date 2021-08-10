cmake_minimum_required(VERSION 3.20)
project(2021_1_exercicio_revisao_refatoracao)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(2021_1_exercicio_revisao_refatoracao
        Models/Imovel/Apartamento/Apartamento.cpp
        Models/Imovel/Apartamento/Apartamento.hpp
        Models/Imovel/Casa/Casa.cpp
        Models/Imovel/Casa/Casa.hpp
        Models/Pessoa/Pessoa.cpp
        Models/Pessoa/Pessoa.hpp
        Models/Imovel/Cobertura/Cobertura.hpp
        Models/Imovel/Imovel.hpp
        main.cpp Models/Imovel/Cobertura/Cobertura.cpp Models/Imovel/Imovel.cpp)
