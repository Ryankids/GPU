#include "MajorAssignment.h"

int main(){

	int t;
	// Need to allocate memory first
	Allocate_Memory();

	char *input_file_name = "Export_50x50x50.dat";
	Load_Dat_To_Array(input_file_name);
	Init();
	for (t = 0; t < NO_STEPS; t++) {
		CPUHeatContactFunction();
		CalRenewResult();
	}

	char *output_file_name = "3DResults.dat";
	Save_Data_To_File(output_file_name);

	//// GPU code
	// Send to device
	//Send_To_Device();
	// Call our function
	//Call_GPU_Function();
	// Get from device
	//Get_From_Device();
	// Print out the first 5 values of b

	// Free the memory
	Free_Memory();
	return 0;

}
