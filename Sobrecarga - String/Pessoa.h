#pragma once 

class Pessoa
{
private:
	char* nome;
	int id;

	void inicializar(const char* nome, int id);

	void destruir();
	
public:
	
	Pessoa(const char* nome, int id);

	virtual ~Pessoa();

	char* getNome();

	int getId();

	void alterarPrimeiraLetra(char letra);

	Pessoa& operator=(Pessoa& p)
	{
		if (this != &p)
		{
			destruir();

			inicializar(p.getNome(), p.getId());
		}

		return *this;
	}
};

