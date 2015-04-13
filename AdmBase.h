/*
 * admBase.h
 *
 *  Created on: Mar 24, 2015
 *      Author: guilherme
 */

#ifndef ADMBASE_H_
#define ADMBASE_H_
#include <string>
#include <iostream>
#include <fstream>

#include "Pessoa.h"
#include "Resultado.h"
using namespace std;

/**
 * Struct que define os rotulos ou atributos da base
 */
struct RotuloBase{
	string rotulo;
	//int tamanho;
};



class AdmBase {

public:
	Pessoa pessoa;
	Resultado result;
	string consulta;
	char *caminhoBase;
	ifstream arquivo;
	RotuloBase atributos[7];


	AdmBase(char* caminhoBase);

	void modificarConsulta(string consulta);

	string retornarRotuloIndex(int i);

	int retornarIdexRotulo (string rotulo);

	int retornarTamanhoRotulo(string rotulo);

	int retornarTamanhoRotuloIndex(int i);

	void fazerConsulta(string consulta);

	void AbrirBase();

	void fecharBase();

	void lerBase();

	void auxConsulta1();

	void auxConsulta2();

	void auxConsulta3();

	void auxConsulta4();

	void auxConsulta5();

	void auxConsulta6();

	void auxConsulta7();

	void fazerConsultaFixa(int numConsulta);

	void medirTempoConsulta();

	virtual ~AdmBase();

};


#endif /* ADMBASE_H_ */
