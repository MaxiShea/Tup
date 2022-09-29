# Definir una función concatena(string1, string2, nro) que reciba como parámetro dos strings y un
# número y los devuelva concatenados

def concatena(string1, string2, nro) -> str:
    return string1 + " " + string2 + " " + str(nro)

stringConcatenado= concatena("XD", "Wep", 74)
print(stringConcatenado)