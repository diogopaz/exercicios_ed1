
#include <string>

class Vetor{

    private:
        int* array;
        int capacity;
        int size;

    public:
        Vetor();
        ~Vetor();

        // Insere o elemento e na última posição
        bool push_back(int e) {
            this->array[size] = e;
            size++;
        };
        // Insere o elemento e na primeira posição
        bool push_front(int e) {
            for(int i = size; i > 0; i--) {
                this->array[i] = this->array[i-1];
            }
            this->array[0] = e;
            size++;
        };
        // Insere o elemento e na posição pos
        bool insert(int pos, int e);

        // Remove o último elemento
        int pop_back();
        // Remove o primeiro elemento
        int pop_front();
        // Remove o elemento da posição pos e retorna o elemento removido
        int erase(int pos);


        // Retorna o primeiro elemento
        int front();
        // Retorna o último elemento
        int back();
        // Retorna o elemento da posição pos
        int at(int pos);

        // Torna a lista vazia
        void clear();

        // Verifica se o vetor está vazio
        bool empty();
        // Devolve a quantidade de elementos
        int size();
        // Substitui o elemento da posição pos pelo elemento e
        bool replace(int pos, int e);

        // Imprime todos os elementos no formato [1,2,3]
        void print();

    private:
	    // Dobrar a capacidade quando não houver mais espaço
	    // Reduzir a capacidade pela metade quando for inferior a 25% de ocupação
        void gerenciaCapacidade();        
};