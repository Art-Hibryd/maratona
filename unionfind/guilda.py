# TLE porque nao foi balanceado.
def find(x):
    if player[x] == x :
        return x
    player[x] = find(player[x])
    return player[x]

def join(x, y):
    points[find(x)] += points[find(y)]
    player[find(y)] = find(x)

n, m, = (int(x) for x in input().split())
while n != 0  and m != 0 :
    wins = 0
    points = [int(x) for x in input().split()]
    player = [x for x in range(n)]

    for x in range(m):
        acao , play1, play2 = (int(x) for x in input().split())
        play1 -= 1
        play2 -= 1
        if acao == 1:
            join(play1, play2)
        else:
            if find(play1) == find(0):
                if points[find(play1)] > points[find(play2)]:
                    wins += 1
            if find(play2) == find(0):
                if points[find(play1)] < points[find(play2)]:
                    wins += 1
    print(wins)
    n, m, = (int(x) for x in input().split())
