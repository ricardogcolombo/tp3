#!/bin/bash
# Buscamos numero de vuelos demorados por mes.

# Definimos algunas variables. Ojo que a bash no le gustan los espacios cerca del "=".
inyear=$1
year=${inyear:=2008}
infile="../data/${year}.csv"
outfile="delays_by_month-${year}.csv"

# La secuencia es:
# 1. Primero filtramos por vuelos con ArrDelay > 15m. Esto lo hacemos una unica vez y lo guardamos en el archivo delay_aux.csv
# 2. Del output de 1, filtramos las lineas que matchean el mes. Esto es facil de hacer con el comando grep.
# 3. Contamos la cantidad de lineas con el comando wc.
# El resultado queda en $outfile, es un vector con la cantidad de delays por mes del año elegido.

awk -F, '$15 > 14' $infile > delay_aux.csv
for i in `seq 1 12`; do cat delay_aux.csv | grep $year,$i | wc -l; done > $outfile;

# Borramos el archivo auxiliar.
rm delay_aux.csv
