/*
 * Pessoa.h
 *
 *  Created on: Apr 11, 2015
 *      Author: guilherme
 */

#ifndef PESSOA_H_
#define PESSOA_H_

class Pessoa {

public:

	short sexo;
	short idade;
	short renda;
	short escloaridade;
	short idioma;
	short pais;
	int localizador;

	Pessoa();

	Pessoa(short sexo, short idade, short renda, short escloaridade, short idioma, short pais, int localizador);

	bool compararSexo(short sexo);

	bool compararIdade(short idade);

	bool compararRenda(short renda);

	bool compararEscolaridade(short escolaridade);

	bool compararIdioma(short idioma);

	bool comprarPais(short pais);

	bool compararLocalizador(int localizador);

	virtual ~Pessoa();
};

#endif /* PESSOA_H_ */
