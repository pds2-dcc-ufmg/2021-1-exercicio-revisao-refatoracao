#ifndef CONTADOR_HPP
#define CONTADOR_HPP

#include "iostream"

/*
    Isola a lógica de contagem utilizada para as subclasses de Imóvel.
    Premissa:
    - CountedClass deve possuir os métodos comissao() e valor_pre_corretagem()
*/

template<class CountedClass>
class CountingFeatures {
  public:
    CountingFeatures(const CountedClass& obj) : counted_object(obj) { 
        contador_de_instancias_ += 1;
        add_to_valor_total();
        add_to_comissao_total();
    }
    virtual ~CountingFeatures() { 
        contador_de_instancias_ -= 1; 
        subtract_from_valor_total();
        subtract_from_comissao_total();
    }

    static unsigned get_contador_de_instancias() {
        return contador_de_instancias_;
    }
    static double get_valor_total() { return valor_total_; }
    static double get_comissao_total() { return comissao_total_; }

    void subtract_from_valor_total() {
        valor_total_ -= counted_object.valor_pre_corretagem();
    }

    void add_to_valor_total() {
        valor_total_ += counted_object.valor_pre_corretagem();
    }

    void subtract_from_comissao_total() {
        comissao_total_ -= counted_object.comissao();
    }

    void add_to_comissao_total() { 
        comissao_total_ += counted_object.comissao();
    }

  private:
    const CountedClass& counted_object;
    inline static unsigned contador_de_instancias_ = 0;
    inline static double valor_total_ = 0;
    inline static double comissao_total_ = 0;
};

#endif 
