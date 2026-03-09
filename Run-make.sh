#!/bin/bash
toolbox run make -j4 2>&1 | grep "error:" | head -40 >> error.log
