size = gets.to_i
exit if size < 1 or size > 50
soma = 0
i = 0
while ( i < size ) do
	tmp = gets.to_i 
	soma += tmp if tmp >= -5000 and tmp <= 5000
	i += 1
end
puts soma
