#ifndef DADOS_VALOR_AREA
#define DADOS_VALOR_AREA

class DadosValorArea{
    private:
        double _area , _valor_por_m2 , _valorTotal , _percentageComissao , _comissao;
    
    public:
        DadosValorArea(double area , double valor_por_m2 , double percentageComissao);

        double getArea();

        double getValorPorM2();

        double getValorTotal();

        double getPercentageComissao();

        double getComissao();
};

#endif