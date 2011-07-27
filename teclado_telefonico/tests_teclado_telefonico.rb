require 'test/unit'
require 'teclado_telefonico'

class TestTecladoTelefonico < Test::Unit::TestCase
  def test_list_of_chars_by_number
    assert_equal(["A","B","C"],TecladoTelefonico.new.para_letras(2))
  end
end
