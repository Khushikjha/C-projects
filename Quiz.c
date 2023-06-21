#include <stdio.h>

int main() {
    int score = 0;
    int choice;

    printf("Welcome to the Quiz !!\n\n");

    printf("Question 1: A hard disk is divided into tracks which are further subdivided into:\n");
    printf("1. Clusters\n");
    printf("2. Sectors\n");
    printf("3. Vectors\n");
    printf("4. Heads\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    if (choice == 2) {
        printf("Correct! \n\n");
        score++;
    } else {
        printf("Wrong answer.\n\n");
    }

    printf("Question 2: Process is?\n");
    printf("1. Program in High level language kept on disk\n");
    printf("2. Contents of main memory\n");
    printf("3. A program in execution\n");
    printf("4. A job in secondary memory\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    if (choice == 3) {
        printf("Correct!\n\n");
        score++;
    } else {
        printf("Wrong answer.\n\n");
    }

    printf("Question 3: What command is used to remove files?\n");
    printf("1. rm\n");
    printf("2. dm\n");
    printf("3. delete\n");
    printf("4. erase\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    if (choice == 1) {
        printf("Correct!\n\n");
        score++;
    } else {
        printf("Wrong answer.\n\n");
    }

    printf("Question 4: 'OS' computer abbreviation usually means ?\n");
    printf("1. Order of Significance\n");
    printf("2. Open Software\n");
    printf("3. Optical Sensor\n");
    printf("4. Operating System\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    if (choice == 4) {
        printf("Correct!\n\n");
        score++;
    } else {
        printf("Wrong answer.\n\n");
    }

    printf("Question 5: The brain of any computer system is \n");
    printf("1. ALU\n");
    printf("2. Memory\n");
    printf("3. CPU\n");
    printf("4. Control unit\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    if (choice == 3) {
        printf("Correct!\n\n");
        score++;
    } else {
        printf("Wrong answer.\n\n");
    }

    printf("Question 6: What command is used to remove the directory?\n");
    printf("1. rdir\n");
    printf("2. delete\n");
    printf("3. remove\n");
    printf("4. rmdir\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    if (choice == 4) {
        printf("Correct!\n\n");
        score++;
    } else {
        printf("Wrong answer.\n\n");
    }

    printf("Question 7: What is the default subnet mask for a class C network?\n");
    printf("1. 127.0.0.1\n");
    printf("2. 255.0.0.0\n");
    printf("3. 255.255.255.0\n");
    printf("4. 255.255.0.0\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    if (choice == 3) {
        printf("Correct!\n\n");
        score++;
    } else {
        printf("Wrong answer.\n\n");
    }

    printf("Question 8: De Morgan's second therm says that NAND gate is equivalent to a bubbled _____ gate.\n");
    printf("1. AND\n");
    printf("2. XAND\n");
    printf("3. XOR\n");
    printf("4. OR\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    if (choice == 4) {
        printf("Correct!\n\n");
        score++;
    } else {
        printf("Wrong answer.\n\n");
    }

    printf("Question 9: Among the following option identify the one which is not a type of learning?\n");
    printf("1. Unsupervised learning\n");
    printf("2. Supervised learning\n");
    printf("3. Semi unsupervised learning\n");
    printf("4. Reinforcement learning\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    if (choice == 3) {
        printf("Correct!\n\n");
        score++;
    } else {
        printf("Wrong answer.\n\n");
    }

    printf("Question 10: How do you initialize an array in C?\n");
    printf("1. int arr[3] = (1,2,3);\n");
    printf("2. int arr[3] = {1,2,3};\n");
    printf("3. int arr(3) = {1,2,3};\n");
    printf("4. int arr(3) = (1,2,3);\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    if (choice == 2) {
        printf("Correct!\n\n");
        score++;
    } else {
        printf("Wrong answer.\n\n");
    }

    printf("\nQuiz completed!\n");
    printf("Your score: %d out of 10\n", score);

    return 0;
}
