#include <iostream>
#include <list>
#include <string>

bool par(int& n)
{
    if (n % 2 == 0)
        return true;
    else
        return false;
     
}

bool comparar_tamanho(const std::string& s1, const std::string& s2)
{
    if (s1.size() < s2.size())
        return true;
    else
        return false;
}
void mostrando_elemento(std::list<int> Lista, std::string mensagem)
{
    std::cout << "\n\n" << mensagem << std::endl;
    for (std::list<int>::iterator it = Lista.begin(); it != Lista.end(); it++)
        std::cout << *it << std::endl;
}
int main()
{
    std::list<int> Lista;

    // Inserindo elementos - push_back e push_front
    Lista.push_back(10);
    Lista.push_back(15);
    Lista.push_front(20);

    mostrando_elemento(Lista, "Inserindo elementos - push_back e push_front");

    // Acessando o primeiro e ultimo elemento - front e back
    std::cout << "\n\nPrimeiro elemento da lista: " << Lista.front() << std::endl;
    std::cout <<"Ultimo elemento da lista: "<< Lista.back() << std::endl;

    // Tamanho da lista - size
    std::cout << "\n\nTamanho da lista: " << Lista.size() << std::endl;

    // Removendo elementos da lista - pop_front e pop_back
    Lista.pop_front();
    Lista.pop_back();
    mostrando_elemento(Lista, "Removendo elementos da lista - pop_front e pop_back");

    // Atribuindo elemento - assign
    int vetor[] = { 1, 2, 3, 4 };
    Lista.assign(vetor, vetor + 4);
    mostrando_elemento(Lista, "Atribuindo elemento a lista - assign");

    // Inserindo elementos  - insert
    std::list<int>::iterator it = Lista.begin();

    Lista.insert(++it, 100);
    mostrando_elemento(Lista, "Inserindo elementos  - insert");

    Lista.insert(++it, 2, 50);
    mostrando_elemento(Lista, "Inserindo elementos  - insert");

    // Apagando - erase
    Lista.erase(Lista.begin(), it);
    mostrando_elemento(Lista, "Apagando - erase");

    // Removendo todos os valores - clear
    Lista.clear();
    mostrando_elemento(Lista, "Removendo todos os valores - clear");
    std::cout << "Tamanho da Lista: " << Lista.size() << std::endl;

    // Transfere todos os elementos de uma lista para outra - splice
    std::list<int> Lista2(3, 100);
    it = Lista.begin();
    Lista.splice(it, Lista2);
    mostrando_elemento(Lista, "Transfere todos os elementos de uma lista para outra - splice");
    std::cout << "Tamanho da Lista2: " << Lista2.size() << std::endl;

    // Remove todos os elementos iguais a um valor - remove
    Lista.push_back(50);
    Lista.remove(100);
    mostrando_elemento(Lista, "Remove todos os elementos iguais a um valor - remove");

    // Remove se ocorrer uma determinada condicao - remove_if
    int vet[5] = { 2, 3, 4, 5, 6 };
    Lista.assign(vet, vet + 5);
    Lista.remove_if(par);
    mostrando_elemento(Lista, "Remove se ocorrer uma determinada condicao - remove_if");

    // Ordenando strings por tamanho
    std::list<std::string> linguagens;

    linguagens.push_back("Python");
    linguagens.push_back("C++");
    linguagens.push_back("JavaScript");
    linguagens.push_back("C#");
    
    std::cout << "\n\n Antes da ordenacao - strings" << std::endl;
    for (std::list<std::string>::iterator lg = linguagens.begin(); lg != linguagens.end(); lg++)
        std::cout << *lg << std::endl;

    linguagens.sort(comparar_tamanho);

    std::cout << "\n\n Depois da ordenacao - strings" << std::endl;
    for (std::list<std::string>::iterator lg = linguagens.begin(); lg != linguagens.end(); lg++)
        std::cout << *lg << std::endl;

}


