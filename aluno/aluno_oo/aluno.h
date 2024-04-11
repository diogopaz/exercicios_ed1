#include <iostream>
#include <string>

using namespace std;

class Aluno {
    private:
        string ra;
        string nome;

    public:
        Aluno(string ra, string nome) {
            this->ra = ra;
            this->nome = nome;
        }

        ~Aluno() {
            cout << "Aluno " << this->getNome() << " destruído." << endl;
        }

        string getRa() {
            return this->ra;
        }
        void setRa(string ra) {
            this->ra = ra;
        }

        string getNome() {
            return this->nome;
        }
        void setNome(string nome) {
            this->nome = nome;
        }

        void imprimir() {
            cout << "(" << this->ra << ", " << this->nome << ")" << endl;
        }
};