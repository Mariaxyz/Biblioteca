/*
 * Persona.cpp
 *
 *  Created on: 11 jun. 2020
 *      Author: yeison
 */

#include <Persona.h>
#include <iostream>_
#include <string.h>
using std::string;

Persona::Persona(){
	nombres = "";
	apellidos = "";
	correo = "";
	telefono = {0,0,0,0,0,0,0,0,0};
	dni = {0,0,0,0,0,0,0,0};
	direccion = "";
}

Persona::Persona(string nom, string ape, string cor, int tel[9], int dn[8], string dir){
	nombres = nom;
	apellidos = ape;
	correo = cor;
	telefono = tel;
	dni = dn;
	direccion = dir;
}
string Persona::getNombres(){
	return nombres;
}
string Persona::getApellidos(){
	return apellidos;
}
string Persona::getCorreo(){
	return correo;
}
int* Persona::getTelefono(){
	return telefono;
}
int* Persona::getDNi(){
	return dni;
}
string Persona::getDireccion(){
	return direccion;
}
Persona::~Persona(){
	delete []dni;
	delete []telefono;
}




