
class TecladoTelefonico
  def initialize

  end

  def para_letras(numero)
    letras_por_teclas = [
                          [],
                          [],
                          ["A","B","C"],
                          ["D","E","F"],
                          ["G","H","I"],
                          ["J","K","L"],
                          ["M","N","O"],
                          ["P","K","R","S"],
                          ["T","U","V"],
                          ["W","X","Y","Z"]
                        ]
    letras_por_teclas[numero]
  end

  def para_palavras(numero)
    lista_de_numeros = separar_numeros(numero)
    #TODO this
  end

  def separar_numeros(numero)
    numero.to_s.split("").map{|x| x.to_i }
  end
end
