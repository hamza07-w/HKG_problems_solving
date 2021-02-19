def indexing(word):
	alph = ["a","b","c","d","e","f","g","h","i","j","k","l","m","n","o","p","q","r","s","t","v","w","x","y","z"]
	for letter in word:
		for i in range(len(alph)):
			if letter == alph[i]:
				print(f"index of letter {letter} is {i+1}")
indexing("hamza")
