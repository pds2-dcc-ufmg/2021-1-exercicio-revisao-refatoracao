#ifndef DADOS_VALOR_AREA
#define DADOS_VALOR_AREA

/*
 *  Mudanças neste segmento:
 *      ---> Adição de uma nova classe que contém algumas informações relacionadas às dimensões e ao valor do Imovel , anteriormente armazenadas na classe Imovel
 *      ---> Introdução de novos métodos:     
 *           * Construtor
 *           * getArea() ==> retorna a área do imovel  
 *           * getValorPorM2() ==> retorna o valor do Imovel por m^2
 *           * getValorTotal() ==> retorna o valor total do Imovel
 *           * getPercentageComissao() ==> retorna a porcentagem de comissao cobrada na venda do imovel
 *           * getComissao() ==> retorna o valor total da comissao cobrada
 *      ---> É importante destacar que o processo de cálculo do ValorTotal e da Comissao relacionados a um imovel agora
 *           são calculados pelo programa quando o construtor é chamado. Os resultados são automaticamente atribuídos
 *           às respectivas variáveis
 *      
 */
class DadosValorArea{
    private:
        double _area , _valor_por_m2 , _valorVenda , _valorArea, _percentageComissao , _comissao;
    
    public:
        DadosValorArea(double area , double valor_por_m2 , double percentageComissao);

        double getArea();

        double getValorPorM2();

        double getValorVenda();

        double getValorArea();

        double getPercentageComissao();

        double getComissao();
};

#endif