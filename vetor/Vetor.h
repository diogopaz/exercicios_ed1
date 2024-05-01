#include <iostream>
#include <string>

using namespace std;

class Vetor{

    private:
        int* array;
        int capacity;
        int size;

    public:
        Vetor() {
            this->capacity = 1;
            this->size = 0;
        };
        ~Vetor() {}

        // Insere o elemento e na última posição
        bool push_back(int e) {
            gerenciaCapacidade();
            this->array[size] = e;
            this->size++;
            gerenciaCapacidade();
            return 1;
        };

        // Insere o elemento e na primeira posição
        bool push_front(int e) {
            gerenciaCapacidade();
            for(int i = size; i > 0; i--) {
                this->array[i] = this->array[i-1];
            }
            this->array[0] = e;
            this->size++;
            gerenciaCapacidade();
            return 1;
        };
        
        // Insere o elemento e na posição pos
        bool insert(int pos, int e) {
            gerenciaCapacidade();
            for(int i = size; i > pos; i--) {
                this->array[i] = this->array[i-1];
            }
            this->array[pos] = e;
            this->size++;
            gerenciaCapacidade();
        };

        // Remove o último elemento
        int pop_back() {
            int removed = this->array[size-1];
            this->array[size-1] = 0;
            this->size--;
            gerenciaCapacidade();
            return removed;
        };

        // Remove o primeiro elemento
        int pop_front() {
            int removed = this->array[0];
            for(int i = 0; i < size-1; i++) {
                this->array[i] = this->array[i+1];
            }
            this->size--;
            gerenciaCapacidade();
            return removed;
        };

        // Remove o elemento da posição pos e retorna o elemento removido
        int erase(int pos) {
            int removed = this->array[pos];
            for(int i = pos; i < size; i++) {
                this->array[i] = this->array[i+1];
            }
            this->size--;
            gerenciaCapacidade();
            return removed;
        };


        // Retorna o primeiro elemento
        int front() {
            return this->array[0];
        };
        // Retorna o último elemento
        int back() {
            return this->array[this->size-1];
        };
        // Retorna o elemento da posição pos
        int at(int pos) {
            return this->array[pos];
        };

        // Torna a lista vazia
        void clear() {
            this->array = nullptr;
            size = 0;
            gerenciaCapacidade();
        };

        // Verifica se o vetor está vazio
        bool empty() {
            return this->array == nullptr ? 1 : 0;
        };

        // Devolve a quantidade de elementos
        int sizeOf() {
            return this->size;
        };

        // Substitui o elemento da posição pos pelo elemento e
        bool replace(int pos, int e) {
            this->array[pos] = e;
            return 1;
        };

        // Imprime todos os elementos no formato [1,2,3]
        void print() {
            cout << "[";
            for(int i = 0; i < this->size; i++) {
                cout << this->array[i];
                if(i+1 < this->size) {
                    cout << ",";
                }
            }
            cout << "]" << endl;
        };

    private:
	    // Dobrar a capacidade quando não houver mais espaço
	    // Reduzir a capacidade pela metade quando for inferior a 25% de ocupação
        void gerenciaCapacidade() {
            if(this->size == this->capacity) {
                this->capacity *= 2;
            } else if (this->size < (this->capacity/4))
            {
                this->capacity /= 2;
            }
            
        };        
};