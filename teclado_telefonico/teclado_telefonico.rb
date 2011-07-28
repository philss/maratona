
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
    c = lista_de_numeros.count
    i = 0
    j = 0
    palavra = ""
    while ( i < c ) do
      num = lista_de_numeros[i]
      i += 1
      while ( num == lista_de_numeros[i]) do
        j += 1
        i += 1
      end
      palavra << para_letras(lista_de_numeros[i - 1])[j]
      j = 0
    end
    #TODO this
    palavra
  end

  def separar_numeros(numero)
    numero.to_s.split("").map{ |x| x.to_i }
  end

  def posicao_passou_tamanho?(numero, posicao)
    total = para_letras(numero).count rescue 0
    posicao > total
  end
end
