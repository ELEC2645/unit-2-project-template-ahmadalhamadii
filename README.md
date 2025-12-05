[![Open in Codespaces](https://classroom.github.com/assets/launch-codespace-2972f46106e565e64193e422d61a12cf1da4916b45550586e14ef0a7c637dd04.svg)](https://classroom.github.com/open-in-codespaces?assignment_repo_id=21899673)



# Ahmad's engineering and scientific calculator
ELEC2645 - PROJECT (30%)

## OVERVIEW 
This is a menu-driven command line application project of a engineering and scientific calculator. it includes:
1. scirentific operations
2. engineering formulas 
3. unit conversions 
4. log/test cetre 
- the mian goal of this application is to support some of the commonly used calculations in Electrical and Electronic engineering modules I have studied so far.

the menu system in 'main.c' and all functionality are implemented in 'funcs.c'



### Menus/features 

### 1. Scientific calculator
- addition, subtraction, division and multiplication
- square root
- cosine and sine 
- log10

### 2. Engineering Tools 
- Peak-to-Peak conversions 
- RC time constant  
- Capacitive reactance (Xc)   
- Voltage divider output  
- Power calculations (P = VI, P = I²R, P = V²/R)

### 3. Unit conversions
- degrees to radians 
- Hertz to rad/s
- dBm to mW

### 4. Log and test centre 
- view and clear the log
- automated self-test 
write notes to 'calc_log.txt'


### Running the code
- using the makefile
You can run the the code with `./main.out`



### instructions on using the program
after running the program, you will be asked to choose a menu option 1-5, follow the on-screen prompts and choose the type of calculation you want to preform. You will then be asked to enter numeric values and your answer will show up in the terminal alongside a confirmation message. After each calculation, press b to return to the main menu.
If you wanted to store calculated values or notes, use Menu 4.
You can also used the built-in self-test also found in Menu 4.


### limitations/ What could go wrong
- for the trigonometric functions the input is expected to be in radians.
- invalid inputs will trigger a validation loop. Ensure that the input is numerical 
