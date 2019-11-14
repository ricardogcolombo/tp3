#!/bin/bash
# Busca demoras por mes en vuelos en todos los años

for i in `seq 1994 2008`; do ./get_delays_month.sh $i; done;
