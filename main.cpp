
#include <iostream>
#include <iomanip>
#include <string>

#include "Imovel.hpp"
#include "Apartamento.hpp"
#include "Casa.hpp"
#include "Cobertura.hpp"

#include "Cliente.hpp"
#include "ClienteProps.hpp"

#include "Imoveis.hpp"
#include "ImovelProps.hpp"

int main () {
  Imoveis imoveis;
  string const b = "Belo Horizonte";
  string const m = "MG";
  imoveis.add(new Apartamento({ "Tuoruars", 55.4, 2, 1, 0, 987.0,
    Cliente({ "Xayso Sovon Ziahaka", "Rua Xangrilá - Braúnas", b, m, "31365-570", "3196007958" })
  }));
  imoveis.add(new Apartamento({ "Fyubyeis", 74.5, 2, 1, 2, 1540.0, 
    Cliente({ "Minia Pasies Kituos", "Rua dos Jacobinos - Ouro Minas", b, m,  "31870-290", "3197627067" })
  }));
  imoveis.add(new Apartamento({ "Kelia", 87.2, 3, 3, 2, 2354.0,
    Cliente({ "Vuocue Leiur Baonauza", "Rua Orminda de Almeida - Tupi B", b, m,  "31842-630", "3195949327" })
  }));
  imoveis.add(new Cobertura({ "Koci", 120.1, 3, 3, 2, 3123.5,
    Cliente({ "Zerer Huduy Fyogar", "Rua Taquaril - Jonas Veiga", b, m,  "30285-422", "3198596327" })
  }));
  imoveis.add(new Cobertura({ "Wail", 134.8, 4, 3, 3, 3578.2,
    Cliente({ "Ceziel Mioti Pler", "Rua João Gualberto Costa - Serrano", b, m,  "30882-747", "3196274465" })
  }));
  imoveis.add(new Cobertura({ "Fival", 180.0, 4, 4, 4, 4165.7,
    Cliente({ "Esxo Cilal Zyais", "Rua Américo Luiz Moreira - Jardim dos Comerciários (Venda Nova)", b, m,  "31650-560", "3195004414" })
  }));
  imoveis.add(new Casa({ "Beydo", 145.6, 3, 3, 2, 4023.6,
    Cliente({ "Leova Wikyecil Neaca", "Rua João Arantes - Cidade Nova", b, m,  "31170-240", "3198461192" })
  }));
  imoveis.add(new Casa({ "Riuzi", 245.0, 5, 4, 4, 4856.2,
    Cliente({ "Teas Heimeu Pipe", "Rua Maria Pereira Damasceno - Ernesto do Nascimento(Barreiro)", b, m,  "30668-430", "3197317802" })
  }));

  imoveis.printRelatorio();
}
