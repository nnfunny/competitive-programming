# link: https://www.hackerrank.com/challenges/the-hurdle-race/problem
def hurdleRace(k, height):
    max_h = max(height)
    needed_dosen = max_h - k
    if needed_dosen <= 0:
        return 0
    else:
        return needed_dosen