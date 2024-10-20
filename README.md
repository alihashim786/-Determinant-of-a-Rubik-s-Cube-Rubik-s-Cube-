C++ program to find the  Determinant of a Rubik's Cube on the basis of user input 

# Find the Determinant of a Rubik's Cube

This project focuses on creating and manipulating a Rubik's Cube of varying sizes, ranging from 2x2x2 to 5x5x5. Each side of the cube is represented as a 2D square matrix filled with random values. The main objective is to compute the **determinant** of each side of the cube, using the last column only, and check for any **singular** sides.

## Features

1. **Rubik's Cube Creation**:
   - User selects the size of the Rubik's Cube (from 2x2x2 to 5x5x5).
   - Each side is initialized with random values between 1 and 99.

2. **Top Side Input**:
   - After cube initialization, the user manually inputs values for the top side of the Rubik's Cube.

3. **Determinant Calculation**:
   - The determinant for each side is calculated using the **last column** only.
   - After each determinant is computed, it is displayed alongside the running sum of all determinants.

4. **Singular Check**:
   - The program identifies if any side is **singular** (a determinant of 0).
   - Singular sides are displayed in a separate section for clarity.

## How the Program Works

1. **User Input**:
   - The user is prompted to enter the size of the Rubik's Cube (between 2 and 5).
   - For the top side, the user provides values row by row.

2. **Determinant Calculation**:
   - The program calculates the determinant of each side using the values from the last column.
   - The sum of determinants for all sides is updated and displayed after each calculation.

3. **Singular Sides**:
   - Any side of the cube with a determinant of 0 is flagged as **singular** and displayed in a separate section.

## Example Output

Please enter the size of the Rubik's Cube (2-5): 3 Initial Rubik's Cube: 
  
     79 89 21 
     69 49 53
     85 50 31
     
     55 54 73
     43 74 46 
     45 7 71
     
     26 67 89 
     64 36 14
     20 78 41

Enter values for the top side of the Rubik's Cube:

Enter value for position (1,1): 8

Enter value for position (1,2): 9

Enter value for position (1,3): 1

Enter value for position (2,1): 2

Enter value for position (2,2): 3

Enter value for position (2,3): 4

Enter value for position (3,1): 5

Enter value for position (3,2): 6

Enter value for position (3,3): 7

Determinant of side 1: 27

Determinant of side 2: -2939

Determinant of side 3: 233144

Sum of determinants for each side: 230232

Updated Rubik's Cube:

    8 9 1
    2 3 4
    5 6 7 
    
    55 54 73
    43 74 46
    45 7 71
    
    26 67 89 
    64 36 14
    20 78 41

## <img src="https://img.icons8.com/ios/50/000000/email-open.png" width="20"/> Contact:
If you have any queries, feel free to email me at [muhammadalihashim514@gmail.com](mailto:muhammadalihashim514@gmail.com) or [i220554@nu.edu.pk](mailto:i220554@nu.edu.pk).

Feel free to connect with me on [LinkedIn](https://www.linkedin.com/in/muhammad-ali-hashim-5115882b4) to stay in touch and network.

