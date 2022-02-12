#define REGIST_C
#ifndef REGIST_C


 // Checks for registration details of new patients
int regist_status(long pd );

// Checks details from the pre registered patients
int existregist();

// Checks how many doses should be given
int vaccine_status(int );

// Structure that stores all details of a patient
typedef struct patient{
    int aadhar;
    long age;
    int secret_code;
    int ph_number;
    int vaccine_doses;
    int vaccine_type;
}
patient_details;

// variable pd that stores details of upto 1000 patients
patient_details pd[1000];

#endif
