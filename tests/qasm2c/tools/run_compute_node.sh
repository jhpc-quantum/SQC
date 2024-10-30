#!/bin/bash
#PJM -N "SQC_test"                          # job title
#PJM -S                                     # Instructions for outputting statistics file
#PJM -L "elapse=04:00:00"                   # Elapsed time limit for the job
#PJM -L "rscgrp=small"                      # Specify the number of nodes resource group
#PJM -L "node=1"                            # Number of nodes
#PJM --mpi "max-proc-per-node=4"            # Number of processes the program creates per node
#PJM -x PJM_LLIO_GFSCACHE=/vol0003:/vol0004 # VOLUME of data area used by the job
#PJM -g "xxxx"                              # Issue Group Designation

# Loading Spack environment
. /vol0004/apps/oss/spack/share/spack/setup-env.sh

# Loading Python
spack load python@3.11.6/7x2kdfq

# Specify the Qiskit virtual environment used in the C-API build
source ~/pass/to/bin/activate

# Execute
export LD_LIBRARY_PATH=/vol0004/apps/oss/spack-v0.21/opt/spack/linux-rhel8-a64fx/gcc-13.2.0/python-3.11.6-7x2kdfqu57k7ej5hvkhbz6mjptpqhwuy/lib

./translation_all.sh
./qiskit_all.sh