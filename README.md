# M1_Vaccineregister_Util 
## About the code
| Codacy | Code Inspector | CI | Unity | Git Inspector |
| --- | --- | --- | --- | --- |
| [![Codacy Badge](https://app.codacy.com/project/badge/Grade/c875ac4eede94456bacf7e43360cb2c3)](https://www.codacy.com/gh/Harsha7337/M1_Vaccineregister_Util/dashboard?utm_source=github.com&amp;utm_medium=referral&amp;utm_content=Harsha7337/M1_Vaccineregister_Util&amp;utm_campaign=Badge_Grade) | ![CI](https://api.codiga.io/project/31267/status/svg) | [![cppcheck-action](https://github.com/Harsha7337/M1_Vaccineregister_Util/actions/workflows/windows_c-cpp.yml/badge.svg)](https://github.com/Harsha7337/M1_Vaccineregister_Util/actions/workflows/windows_c-cpp.yml) | [![Unit Testing - Unity](https://github.com/Harsha7337/M1_Vaccineregister_Util/actions/workflows/unity.yml/badge.svg)](https://github.com/Harsha7337/M1_Vaccineregister_Util/actions/workflows/unity.yml) |  [![Contribution Check - Git Inspector](https://github.com/Harsha7337/M1_Vaccineregister_Util/actions/workflows/Git_Inspector.yml/badge.svg)](https://github.com/Harsha7337/M1_Vaccineregister_Util/actions/workflows/Git_Inspector.yml) |



# M1_Vaccineregister_Util
## Vaccination status

       This programming based project is to create a registration application for the 
       local server where the vaccination status, registration, adn types
       of vaccinations are available and upload it by the End of the day to Reduce the traffic in
       the main server.
### FOLDER STRUCTURE
| Folder  | Description  |
|--- |--- |
| 1_Requirements | Details about Project |
| 2_Architecture | Structural and Behavioural UML Diagrams for High Level and Low level Implementation |
| 3_Implementation | Contains Main Code |
| 4_Test Plan and Output | Required test plans and outputs |
| 5_Report | Generated Report |
| 6_ImagesandVideos | Images and Videos of the Project Implementation |


## High Level Test Plan
| Test ID | Description | Input | Expected output | Actual Output |
| --- | --- | --- | --- | --- |
| 01 | Check patient registration status | 123 (aadhar no) | {-1} |  (not found) |
| 02 | Check patient registration status | 123 (aadhar no) | {0,1} |  (found) |
| 03 | Check patient vaccination status | 3 (patient id) | {>0} | (vaccinated) |
## Low Level Test Plan
| Test ID | Description | Input | Expected output | Actual Output |
| --- | --- | --- | --- | --- |
| 01 | Check patient registration status | 125 (aadhar no) | 0 | 0 (registered, not vaccinated) |
| 02 | Check patient registration status | 130 (aadhar no) | 1 | 1 (registered, vaccinated) |
| 03 | Check patient vaccination status | 3 (patient id) | 1 | 1 (first dose) |
| 04 | Check patient vaccination status | 3 (patient id) | 2 | 2 (second dose) |
| 05 | Check patient vaccination status | 3 (patient id) | 3 | 3 (already vaccinated) |
 
 
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

 ## Output
* Vaccinated data log is updated and new registrations are added to the end of the pre data list
* List of vaccinated patients along with total vials consumed is printed
* Data will be shared to each and everyone who registered for the vaccinaton



| CONTRIBUTION BY |
| --- |
| *A.HARSHAVARDHAN* |
| HARSHA |
