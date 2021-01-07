#include "Pessoa.h"
#include "string.h"

#pragma warning(disable : 4996)

using namespace std;

Pessoa::Pessoa(const char* nome, int id)
{
	inicializar(nome, id);
}

Pessoa::~Pessoa()
{
	destruir();
}

void Pessoa::inicializar(const char* nome, int id)
{
	this->nome = new char[strlen(nome) + 1];
	strcpy(this->nome, nome);
	this->id = id;
}

void Pessoa::destruir()
{
	delete[] nome;
	nome = 0;
}

char* Pessoa::getNome()
{
	return nome;
}

int Pessoa::getId()
{
	return id;
}

void Pessoa::alterarPrimeiraLetra(char letra)
{
	nome[0] = letra;
}
