# REPORT

This is a C Programming vaccine registration application project. this project Aim to Smoother vaccination registration process,Reduced data traffic in the main server,Operation of registration and verification is localized.


## Aim
* Smoother vaccination registration process
* Reduced data traffic in the main server
* Operation of registration and verification is localized
## Input
* Pre-registered list of patients for vaccination
* New registration of patients for vaccination
## Process
* Pre registered patients who had appointments verify the documents
* Patients must regester on **Online or At the centre** with their mobile numbers
* Verification is done with pre registered data of patients
* New registrations are added to the vaccinated log
* Total number of vaccine vials consumed is tracked for both type of vaccines
## Output
* Vaccinated data log is updated and new registrations are added to the end of the pre data list
* List of vaccinated patients along with total vials consumed is printed
* Data will be shared to each and everyone who registered for the vaccinaton

 ## High Level Requirements
| ID | Description | Status (Implemented/Future) |
| --- | --- | --- |
| HR01 | System should be able to access pre loaded registration data for verification | Implemented |
| HR02 | User should be able to add new registrations | Implemented |
| HR03 | System should recognize vaccinated patients | Implemented |
| HR04 | System should recognize invalid credentials | Implemented |
| HR05 | System should be updated with the time interval between two doses | Future |
| HR06 | OTP generated verification for secure registration | Future |
| HR07 | System should recognize invalid credentials | Future |
| HR08 | System  send alert SMS to upload nearby covid attack patient | Future |


## Low Level Requirement
| ID | Description | Status (Implemented/Future) |
| --- | --- | --- | 
| LR01 | Only new user must be given an option to select vaccine type | Implemented |
| LR02 | Total quantity of vaccines used must be shown by EOD | Implemented |
| LR03 | Full list of patients vaccinated must be set as output | Implemented |
| LR04 | Remaining and present stock of vaccines must be tracked | Future |
| LR05 | 1st dose Vaccinated patient get notify with an SMS to get regester for the 2nd dose   | Future |
| LR06 | Virtual chat bot is added to the website | Future |
# Architecture

 In this folder it contain both the process and the product of planning,designing ,flowchart and structures.

## Folder Structure
|Folder             | Description |
|-------------------| -----------------------------------------|
| `1_Behavior Diagrams`   | high level requriment|
| `2_Structure Diagrams`         | high level requriment|

# Implementation

## Introduction

This folder conatins all the coding files as well as the resources and testing files neede for proper execution of program
