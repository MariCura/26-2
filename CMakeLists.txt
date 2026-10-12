cmake_minimum_required(VERSION 4.3)
project(Calculo_de_notas)

set(CMAKE_CXX_STANDARD 20)

add_executable(Calculo_de_notas main.cpp
        Curso.cpp
        Curso.h
        c1v.cpp
        c1v.h
        Quimica.cpp
        Quimica.h
        ProgramacionII.cpp
        ProgramacionII.h
        Intro_meca.cpp
        Intro_meca.h
        Algebra_Lineal.cpp
        Algebra_Lineal.h
        guardar.cpp
        guardar.h)
