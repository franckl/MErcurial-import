##########################################################
#
# common variable for the different parallel sparse solver
#
#########################################################

# frefem++ variables
FREEFEM_DIR     = /Users/morice/work/postdoc/freefem++debug/
FREEFEM_INCLUDE = -I$(FREEFEM_DIR)examples++-load/include/ 

# directory of the different package
SOFT_DIR =  /Users/morice/librairie/

#==========
#   BLAS
#==========
BLAS_INCLUDE = 
BLAS_LIB     = -L$(SOFT_DIR)PATCHVECLIB/ -lwrapperdotblas  -framework veclib

#============
#  BLACS : this library is need by MUMPS 
#============
BLACS_DIR     =  $(SOFT_DIR)/BLACS/
BLACS_INCLUDE = 
BLACS_LIB     =  -L$(BLACS_DIR)LIB/ -lblacsCinit_MPI-BROCHET-0 -lblacs_MPI-BROCHET-0 -lblacsF77init_MPI-BROCHET-0

#=============
#  SCALAPACK : this library is need by MUMPS
#=============
SCALAPACK_DIR     = $(SOFT_DIR)/scalapack-1.8.0/
SCALAPACK_INCLUDE = -I$(SCALAPACK_DIR)SRC/ 
SCALAPACK_LIB     = -L$(SCALAPACK_DIR) -lscalapack

#==============================================
#   ordering : metis, parmetis, scotch 
#===============================================
#  pord : this ordering is given in the mumps package 
#         and it is only need by MUMPS
#PORD_DIR     =  $(SOFT_DIR)MUMPS_4.8.3/PORD/
#PORD_INCLUDE = -I$(PORD_DIR)include
#PORD_LIB     = -L$(PORD_DIR)lib/ -lpord

# scotch
SCOTCH_DIR = $(SOFT_DIR)/scotch_5.1_esmumps/
SCOTCH_INCLUDE = -I$(SCOTCH_DIR)include/
SCOTCH_LIB     = -L$(SCOTCH_DIR)lib/  -lesmumps  -lscotch -lscotcherr -lscotcherrexit -lm

# ptscotch 
PTSCOTCH_INCLUDE = -I$(SCOTCH_DIR)include/
PTSCOTCH_LIB     = -L$(SCOTCH_DIR)lib/ -lptscotch -lptscotcherrexit -lm

# metis
METIS_DIR      = $(SOFT_DIR)ParMetis-3.1.1/
METIS_INCLUDE  = -I$(METIS_DIR)METISLib/
METIS_LIB      = -L$(METIS_DIR) -lmetis

# parmetis
PARMETIS_DIR      = $(SOFT_DIR)ParMetis-3.1.1/
PARMETIS_INCLUDE  = -I$(PARMETIS_DIR)
PARMETIS_LIB      = -L$(PARMETIS_DIR) -lparmetis -lmetis