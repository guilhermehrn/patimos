/*
 * Resultado.h
 *
 *  Created on: Apr 11, 2015
 *      Author: guilherme
 */

#ifndef RESULTADO_H_
#define RESULTADO_H_
#include "Pessoa.h"
#include <list>

using namespace std;

struct Resposta{
	int pais;
	int sexo;
	int coutAvg;
};

class Resultado {
public:

	list <Pessoa> pessoas;
	list<Resposta> Resposta;

	Resultado();

	void inserirPessoa(Pessoa pessoa);

	void retornarResultado();

	void imprimirResultado();

	virtual ~Resultado();
};

#endif /* RESULTADO_H_ */
