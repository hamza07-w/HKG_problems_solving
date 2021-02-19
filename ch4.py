

def feb(nember):

	'''
	fibbonaci algorithme
	'''
	a = 1
	b = 1
	print(1)
	for i in range(nember):
		c = a + b
		a = b
		b = c
		print(c)
feb(5)