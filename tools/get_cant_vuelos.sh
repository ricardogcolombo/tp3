#!/bin/bash
# Buscamos numero de vuelos.

# Definimos algunas variables. Ojo que a bash no le gustan los espacios cerca del "=".
inyear=$1
year=${inyear:=2008}
infile="../data/${year}.csv"
outdir="../cant_vuelos_by_month/"
outfile="${outdir}cant_vuelos_by_month-${year}.csv"

mkdir -p $outdir

# La secuencia es:
# 1. Filtramos las lineas que matchean el mes. Esto es facil de hacer con el comando grep.
# 2. Contamos la cantidad de lineas con el comando wc.
# El resultado queda en $outfile, es un vector con la cantidad de delays por mes del año elegido.

for i in `seq 1 12`; do cat $infile | grep $year,$i | wc -l; done > $outfile;
