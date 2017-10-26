#!/usr/bin/python3
#este problema, usar uma implementacao do union find.

#funcao find: retorna o patriarca de um elemento x

n, k = (int(x) for x in input().split())

#initicalizando o vetor do union find.
pai = [x for x in range(100101)]
peso = [x for x in range(100101)]

#funcao find, que encontra o patriarca
def find(x):
	if pai[x] == x:
		return x
	pai[x] = find(pai[x])
	return pai[x]

#une dois grupos.
def join(x, y):

	y = find(y)
	x = find(x)
	if x == y:
		return
	if peso[x] > peso[y] :
		pai[x] = y
	if peso[y] > peso[x] :
		pai[y] = x
	if peso[x] == peso[y]:
		pai[x] = y
		peso[y]+=1

for x in range(k):
	op = input()
	banco1 , banco2 = (int(x) for x in input().split())

	if op is 'F':
		join(banco1, banco2)
	else:
		if find(banco1) == find(banco2):
			print('S')
		else:
			print('N')
