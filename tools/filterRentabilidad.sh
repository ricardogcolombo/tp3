#!/bin/bash
# Filtrar columnas fecha, aerolinea, nro. de vuelo
infile1994="../data/1994.csv"
infile1995="../data/1995.csv"
infile1996="../data/1996.csv"
infile1997="../data/1997.csv"
infile1998="../data/1998.csv"
infile1999="../data/1999.csv"
infile2000="../data/2000.csv"
infile2001="../data/2001.csv"
infile2002="../data/2002.csv"
infile2003="../data/2003.csv"
infile2004="../data/2004.csv"
infile2005="../data/2005.csv"
infile2006="../data/2006.csv"
infile2007="../data/2007.csv"
infile2008="../data/2008.csv"

outfile1994Rentabilidad="../data/1994Rentabilidad.csv"
outfile1995Rentabilidad="../data/1995Rentabilidad.csv"
outfile1996Rentabilidad="../data/1996Rentabilidad.csv"
outfile1997Rentabilidad="../data/1997Rentabilidad.csv"
outfile1998Rentabilidad="../data/1998Rentabilidad.csv"
outfile1999Rentabilidad="../data/1999Rentabilidad.csv"
outfile2000Rentabilidad="../data/2000Rentabilidad.csv"
outfile2001Rentabilidad="../data/2001Rentabilidad.csv"
outfile2002Rentabilidad="../data/2002Rentabilidad.csv"
outfile2003Rentabilidad="../data/2003Rentabilidad.csv"
outfile2004Rentabilidad="../data/2004Rentabilidad.csv"
outfile2005Rentabilidad="../data/2005Rentabilidad.csv"
outfile2006Rentabilidad="../data/2006Rentabilidad.csv"
outfile2007Rentabilidad="../data/2007Rentabilidad.csv"
outfile2008Rentabilidad="../data/2008Rentabilidad.csv"



# -f indica que columnas, "-d," significa "delimitador es una ','".
cut -f1,9,15 -d, $infile1994 > $outfile1994Rentabilidad
cut -f1,9,15 -d, $infile1995 > $outfile1995Rentabilidad
cut -f1,9,15 -d, $infile1996 > $outfile1996Rentabilidad
cut -f1,9,15 -d, $infile1997 > $outfile1997Rentabilidad
cut -f1,9,15 -d, $infile1998 > $outfile1998Rentabilidad
cut -f1,9,15 -d, $infile1999 > $outfile1999Rentabilidad
cut -f1,9,15 -d, $infile2000 > $outfile2000Rentabilidad
cut -f1,9,15 -d, $infile2001 > $outfile2001Rentabilidad
cut -f1,9,15 -d, $infile2002 > $outfile2002Rentabilidad
cut -f1,9,15 -d, $infile2003 > $outfile2003Rentabilidad
cut -f1,9,15 -d, $infile2004 > $outfile2004Rentabilidad
cut -f1,9,15 -d, $infile2005 > $outfile2005Rentabilidad
cut -f1,9,15 -d, $infile2006 > $outfile2006Rentabilidad
cut -f1,9,15 -d, $infile2007 > $outfile2007Rentabilidad
cut -f1,9,15 -d, $infile2008 > $outfile2008Rentabilidad