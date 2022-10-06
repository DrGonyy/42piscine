#!/bin/sh
echo $FT_NBR1+$FT_NBR2 \
    | sed "y/\'\\\\\"\?\!/01234/" \
    | sed "y/mrdoc/01234/" \
    | sed "s/^/obase=13;ibase=5;/" \
    | bc \
    | sed "y/0123456789ABC/gtaio luSnemf/"
