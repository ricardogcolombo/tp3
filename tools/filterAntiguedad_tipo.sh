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

outfile1994tipo="1994tipo.csv"
outfile1995tipo="1995tipo.csv"
outfile1996tipo="1996tipo.csv"
outfile1997tipo="1997tipo.csv"
outfile1998tipo="1998tipo.csv"
outfile1999tipo="1999tipo.csv"
outfile2000tipo="2000tipo.csv"
outfile2001tipo="2001tipo.csv"
outfile2002tipo="2002tipo.csv"
outfile2003tipo="2003tipo.csv"
outfile2004tipo="2004tipo.csv"
outfile2005tipo="2005tipo.csv"
outfile2006tipo="2006tipo.csv"
outfile2007tipo="2007tipo.csv"
outfile2008tipo="2008tipo.csv"

outfile1994antiguedad="1994antiguedad.csv"
outfile1995antiguedad="1995antiguedad.csv"
outfile1996antiguedad="1996antiguedad.csv"
outfile1997antiguedad="1997antiguedad.csv"
outfile1998antiguedad="1998antiguedad.csv"
outfile1999antiguedad="1999antiguedad.csv"
outfile2000antiguedad="2000antiguedad.csv"
outfile2001antiguedad="2001antiguedad.csv"
outfile2002antiguedad="2002antiguedad.csv"
outfile2003antiguedad="2003antiguedad.csv"
outfile2004antiguedad="2004antiguedad.csv"
outfile2005antiguedad="2005antiguedad.csv"
outfile2006antiguedad="2006antiguedad.csv"
outfile2007antiguedad="2007antiguedad.csv"
outfile2008antiguedad="2008antiguedad.csv"



# -f indica que columnas, "-d," significa "delimitador es una ','".
cut -f1,11,19 -d, $infile1994 > $outfile1994tipo
cut -f1,11,19 -d, $infile1995 > $outfile1995tipo
cut -f1,11,19 -d, $infile1996 > $outfile1996tipo
cut -f1,11,19 -d, $infile1997 > $outfile1997tipo
cut -f1,11,19 -d, $infile1998 > $outfile1998tipo
cut -f1,11,19 -d, $infile1999 > $outfile1999tipo
cut -f1,11,19 -d, $infile2000 > $outfile2000tipo
cut -f1,11,19 -d, $infile2001 > $outfile2001tipo
cut -f1,11,19 -d, $infile2002 > $outfile2002tipo
cut -f1,11,19 -d, $infile2003 > $outfile2003tipo
cut -f1,11,19 -d, $infile2004 > $outfile2004tipo
cut -f1,11,19 -d, $infile2005 > $outfile2005tipo
cut -f1,11,19 -d, $infile2006 > $outfile2006tipo
cut -f1,11,19 -d, $infile2007 > $outfile2007tipo
cut -f1,11,19 -d, $infile2008 > $outfile2008tipo

cut -f1,11 -d, $infile1994 > $outfile1994antiguedad
cut -f1,11 -d, $infile1995 > $outfile1995antiguedad
cut -f1,11 -d, $infile1996 > $outfile1996antiguedad
cut -f1,11 -d, $infile1997 > $outfile1997antiguedad
cut -f1,11 -d, $infile1998 > $outfile1998antiguedad
cut -f1,11 -d, $infile1999 > $outfile1999antiguedad
cut -f1,11 -d, $infile2000 > $outfile2000antiguedad
cut -f1,11 -d, $infile2001 > $outfile2001antiguedad
cut -f1,11 -d, $infile2002 > $outfile2002antiguedad
cut -f1,11 -d, $infile2003 > $outfile2003antiguedad
cut -f1,11 -d, $infile2004 > $outfile2004antiguedad
cut -f1,11 -d, $infile2005 > $outfile2005antiguedad
cut -f1,11 -d, $infile2006 > $outfile2006antiguedad
cut -f1,11 -d, $infile2007 > $outfile2007antiguedad
cut -f1,11 -d, $infile2008 > $outfile2008antiguedad