#ifndef DADOS_COMODOS_HPP
#define DADOS_COMODOS_HPP


/*
 *  Mudanças neste segmento:
 *      ---> Adição de uma nova classe que contém algumas informações relacionadas aos cômodos do Imovel , anteriormente armazenadas na classe Imovel
 *      ---> Introdução de novos métodos:     
 *           * Construtor
 *           * get_quartos() ==> retorna o número de quartos do imovel  
 *           * get_banheiros() ==> retorna o número de banheiros do imovel 
 *           * get_vagas() ==> retorna o número de vagas do imovel 
 *      
 */
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