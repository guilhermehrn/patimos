/*
 * admBase.cpp
 *
 *  Created on: Mar 24, 2015
 *      Author: guilherme
 */

#include "AdmBase.h"

AdmBase::AdmBase(char* caminhoBase) {
	//incializa a consulta.
	this->consulta = "select from";

	//inicializa o caminho da base
	this->caminhoBase = caminhoBase;

	//Inicializa os rotulos da tabela
	this->atributos[0].rotulo = "sexo";
	//this->atributos[0].tamanho = 1;

	this->atributos[1].rotulo = "idade";
	//this->atributos[1].tamanho = 7;

	this->atributos[2].rotulo = "rendamensal";
	//this->atributos[2].tamanho = 10;

	this->atributos[3].rotulo = "escolaridade";
	//this->atributos[3].tamanho = 2;

	this->atributos[4].rotulo = "idioma";
	//this->atributos[4].tamanho = 12;

	this->atributos[5].rotulo = "pais";
	//this->atributos[5].tamanho = 8;

	this->atributos[6].rotulo = "localizador";
	//this->atributos[6].tamanho = 24;

}

void AdmBase::modificarConsulta(string consulta) {
	this->consulta = consulta;
}

string AdmBase::retornarRotuloIndex(int i) {
	return this->atributos[i].rotulo;
}

int AdmBase::retornarIdexRotulo(string rotulo) {
	int aux = -1;
	for (int i = 0; i < 7; i++) {
		if (this->atributos[i].rotulo == rotulo) {
			aux = i;
		}
	}
	return aux;
}

int AdmBase::retornarTamanhoRotulo(string rotulo) {
	//int i = retornarIdexRotulo(rotulo);
	//return this->atributos[i].tamanho;
	return 0;
}

int AdmBase::retornarTamanhoRotuloIndex(int i) {
	//TODO por hora ainda não vai ser necesario
	//return this->atributos[i].tamanho;
	return 0;
}

void fazerConsulta(string consulta){
	//TODO
}

void AdmBase::AbrirBase(){
	this->arquivo.open(this->caminhoBase);
}

void AdmBase::fecharBase(){
	arquivo.close();
}

int avg(list<Pessoa> resp, int indexcap){
	//TODO
}

void coutn(list<Pessoa> resp, int *sexo0, int *sexo1){
	sexo0 = 0;
	sexo1= 0;
	for (std::list<Pessoa>::iterator it=resp.begin() ; it != resp.end(); ++it){
		if(*it->sexo == 0){
			sexo0++;
		}else{
			sexo1++;
		}
	}

}

void groupby(list<Pessoa> resp){
	//TODO

}

void AdmBase::lerBase(){
	//TODO
}


void AdmBase::auxConsulta1(){
	lerBase();
	//TODO
}

void AdmBase::auxConsulta2(){
	//TODO
}

void AdmBase::auxConsulta3(){
	//TODO
}

void AdmBase::auxConsulta4(){
	//TODO
}

void AdmBase::auxConsulta5(){
	//TODO
}

void AdmBase::auxConsulta6(){
	//TODO
}

void AdmBase::auxConsulta7(){
	//TODO
}

void AdmBase::fazerConsultaFixa(int numConsulta){
	//TODO
}

AdmBase::~AdmBase() {
// TODO Auto-generated destructor stub
}

