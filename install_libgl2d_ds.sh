#!/bin/bash

if [ "$EUID" -eq 0 ]; then
    echo "Please run as non-root user."
    exit 1
fi


export DEVKITPRO_ROOT=$DEVKITPRO
sudo sh -c "cp libgl2d_ds/include/* $DEVKITPRO_ROOT/libnds/include && cp libgl2d_ds/lib/* $DEVKITPRO_ROOT/libnds/lib"