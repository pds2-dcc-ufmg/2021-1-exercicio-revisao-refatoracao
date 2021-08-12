#ifndef DADOS_COMODOS_HPP
#define DADOS_COMODOS_HPP

class DadosComodos{
    private:
        int _quartos , _banheiros , _vagas;

    public:
        DadosComodos(int quartos , int banheiros , int vagas);

        int get_quartos();

        int get_banheiros();

        int get_vagas();
};   

#endif