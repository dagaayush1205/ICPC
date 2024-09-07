def animal_farm():
    n = int(input())
    non_pig_inf = []
    pig_inf = 0

    for _ in range(n):
        species, inf = input().split()
        inf = int(inf)

        if species == "pig":
            pig_inf = max(pig_inf, inf)
        else:
            non_pig_inf.append(inf)

    non_pig_inf = [inf for inf in non_pig_inf if inf < pig_inf]
    non_pig_inf.sort(reverse=True)

    total_inf = pig_inf + sum(non_pig_inf)
    print(total_inf)

animal_farm()
