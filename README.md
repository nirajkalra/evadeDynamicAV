### ℹ️ IMPORTANT:
This repository is used for maintaining project work for improved implementation of malWASH framework known as Fully Undetectable Malware Architecture (FUMA) to evade dynamic analysis by antivirus.
##       :mag: FULLY UNDETECTABLE MALWARE ARCHITECTURE (FUMA)
### Introduction  
Dynamic analysis observes a malicious behavior during the execution of sample code. malWASH is proposed as one such recent techniue for dynamic evasion.
malWASH is a dynamic diversification engine that executes an arbitrary program without being detected by dynamic analysis tools.
mamlWASH is a research project which is based on the principle of hiding the behaviour of malicious program by distributing programs execution across many benign processes on the system. It involves breaking the original binary into small chunks where individual chunk executes few system calls as it contains limited functionality. 

### Scope of project 
The scope of this project will include the following:
1. We analyse the implementation challenges in malWASH and suggest mechanisms to get over them.
2. Study the efficacy of malWASH against well-known antivirus.
3. Highlight the major limitations in active implementation of malWASH on live targets.
4. It extends malWASH and proposes techniques for complete evasion of dynamic detection by selecetd antivirus.
5. Proposes and implement a framework with malWASH called FUMA for complete evasion of antivirus dynamic detection and target process independent malware execution.

This repository is primarily being used for the verion control of the implementation part.
### Functioning of malWASH
malWASH framework functions in two phases. The first phase involves chopping of original binary program into hundreds of small pieces, extracting critical information such as segments, relocations, loaded libraries, global data and thread information. The second phase is marked at the execution of malWASH. It primarily involves loader injecting components into different processes and the emulator coordinating the execution of the program in separate host processes.

An input to the malWASH engine is a binary file that outputs a C++ source file. This file embeds all the essential binary parts along with malWASH components. Thereafter, the source file is compiled with the visual studio and the new malware is ready to execute under malWASH architecture. Conceptual flow diagram is shown in figure below
![concept](https://user-images.githubusercontent.com/32154629/45314384-31f53f00-b54f-11e8-9ec0-4504b8f5e89d.png)
