/*
 * Pessoa.cpp
 *
 *  Created on: Apr 11, 2015
 *      Author: guilherme
 */

#include "Pessoa.h"

Pessoa::Pessoa() {
	this->sexo = 0;
	this->idade = 0;
	this->renda = 0;
	this->escloaridade = 0;
	this->idioma = 0;
	this->pais = 0;
	this->localizador = 0;
}

Pessoa::Pessoa(short sexo, short idade, short renda, short escloaridade, short idioma,
		short pais, int localizador) {
	this->sexo = sexo;
	this->idade = idade;
	this->renda = renda;
	this->escloaridade = escloaridade;
	this->idioma = idioma;
	this->pais = pais;
	this->localizador = localizador;
}

bool Pessoa::compararSexo(short sexo) {
	return this->sexo == sexo;
}

bool Pessoa::compararIdade(short idade) {
	return this->idade == idade;
}

bool Pessoa::compararRenda(short renda) {
	return this->renda = renda;
}

bool Pessoa::compararEscolaridade(short escolaridade) {
	return this->escloaridade == escolaridade;
}

bool Pessoa::compararIdioma(short idioma) {
	return this->idioma == idioma;
}

bool Pessoa::comprarPais(short pais) {
	return this->pais == pais;
}

bool Pessoa::compararLocalizador(int localizador) {
	return this->localizador == localizador;
}

Pessoa::~Pessoa() {
	// TODO Auto-generated destructor stub
}

