# Projeto V1

A versão paralela e a serial chegam a 30 mil casas decimais com o uso da biblioteca GMP.

Se executado com 20000 de precisão as 30 mil casas são precisas.

![2023-05-02-135551_2091x677_scrot](https://user-images.githubusercontent.com/84486266/235746762-82b16b8c-2918-4d94-af53-28ca9d565763.png)

## Serial
compilar com: gcc serial.c -lgmp

Com 20000 de precisão: 15,841s

## Paralelo
Compilar com: gcc paralelo.c -lgmp -fopenmp

Com 20000 de precisão: 15,733s

## Speedup

Speedup = 1,0068645522

# Projeto V2

Os número no arquivo resultParalelo.txt foram cálculados com esse tempo

![image](https://github.com/lucastso10/proj-compu-paralela/assets/84486266/f39608ef-036b-425d-90ca-bf61379fbd85)

são 100mil casas decimais, verificadas.
