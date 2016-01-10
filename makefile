CUDA_INSTALL_PATH := /usr/local/cuda
CUDA_LIB :=  -L $(CUDA_INSTALL_PATH)/lib64 -lcuda -lcudart

all: MAIN

MAIN: CPU GPU
        g++ MajorAssignment.o MajorAssignmentInCuda.o $(CUDA_LIB) -O3 -o TestMA.run

CPU:
        g++ -O3 -c MajorAssignment.c
GPU:
        nvcc -O3 -c  MajorAssignmentInCuda.cu
clean:
        rm *.o
        
