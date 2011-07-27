require 'test/unit'
require 'teclado_telefonico'

class TestTecladoTelefonico < Test::Unit::TestCase
  def test_lista_de_caracteres_por_numero
    assert_equal(["A","B","C"],TecladoTelefonico.new.para_letras(2))
  end
  def test_separar_numeros
    assert_equal([3,2,3,2],TecladoTelefonico.new.separar_numeros(3232))
  end
  def test_formar_palavras_por_numeros
    assert_equal("DADA",TecladoTelefonico.new.para_palavras(3232))
  end
end
