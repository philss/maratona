
class TecladoTelefonico
  def initialize

  end

  def para_letras(numero)
    letras_por_teclas = [
                          [],
                          [],
                          ["A","B","C"],
                          ["D","E","F"],
                          []
                        ]
    letras_por_teclas[numero]
  end
end
