#!/bin/bash
# Filtrar columnas fecha, aerolinea, nro. de vuelo
infile1994="1994.csv"
infile1995="1995.csv"
infile1996="1996.csv"
infile1997="1997.csv"
infile1998="1998.csv"
infile1999="1999.csv"
infile2000="2000.csv"
infile2001="2001.csv"
infile2002="2002.csv"
infile2003="2003.csv"
infile2004="2004.csv"
infile2005="2005.csv"
infile2006="2006.csv"
infile2007="2007.csv"
infile2008="2008.csv"

outfile1994DesviacionPartida="../data/1994DesviacionPartida.csv"
outfile1995DesviacionPartida="../data/1995DesviacionPartida.csv"
outfile1996DesviacionPartida="../data/1996DesviacionPartida.csv"
outfile1997DesviacionPartida="../data/1997DesviacionPartida.csv"
outfile1998DesviacionPartida="../data/1998DesviacionPartida.csv"
outfile1999DesviacionPartida="../data/1999DesviacionPartida.csv"
outfile2000DesviacionPartida="../data/2000DesviacionPartida.csv"
outfile2001DesviacionPartida="../data/2001DesviacionPartida.csv"
outfile2002DesviacionPartida="../data/2002DesviacionPartida.csv"
outfile2003DesviacionPartida="../data/2003DesviacionPartida.csv"
outfile2004DesviacionPartida="../data/2004DesviacionPartida.csv"
outfile2005DesviacionPartida="../data/2005DesviacionPartida.csv"
outfile2006DesviacionPartida="../data/2006DesviacionPartida.csv"
outfile2007DesviacionPartida="../data/2007DesviacionPartida.csv"
outfile2008DesviacionPartida="../data/2008DesviacionPartida.csv"



# -f indica que columnas, "-d," significa "delimitador es una ','".
cut -f1,4,5 -d, $infile1994 > $outfile1994DesviacionPartida
cut -f1,4,5 -d, $infile1995 > $outfile1995DesviacionPartida
cut -f1,4,5 -d, $infile1996 > $outfile1996DesviacionPartida
cut -f1,4,5 -d, $infile1997 > $outfile1997DesviacionPartida
cut -f1,4,5 -d, $infile1998 > $outfile1998DesviacionPartida
cut -f1,4,5 -d, $infile1999 > $outfile1999DesviacionPartida
cut -f1,4,5 -d, $infile2000 > $outfile2000DesviacionPartida
cut -f1,4,5 -d, $infile2001 > $outfile2001DesviacionPartida
cut -f1,4,5 -d, $infile2002 > $outfile2002DesviacionPartida
cut -f1,4,5 -d, $infile2003 > $outfile2003DesviacionPartida
cut -f1,4,5 -d, $infile2004 > $outfile2004DesviacionPartida
cut -f1,4,5 -d, $infile2005 > $outfile2005DesviacionPartida
cut -f1,4,5 -d, $infile2006 > $outfile2006DesviacionPartida
cut -f1,4,5 -d, $infile2007 > $outfile2007DesviacionPartida
cut -f1,4,5 -d, $infile2008 > $outfile2008DesviacionPartida