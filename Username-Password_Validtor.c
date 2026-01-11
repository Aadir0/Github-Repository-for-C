#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Function to check if password meets all criteria
int validatePassword(char password[])
{
    int length = strlen(password);
    int hasNumber = 0;
    int hasSpecial = 0;

    // Check if password length is at least 8 characters
    if (length < 8)
    {
        printf("Error: Password must be at least 8 characters long.\n");
        return 0;
    }

    // Check for number and special character
    for (int i = 0; i < length; i++)
    {
        if (isdigit(password[i]))
        {
            hasNumber = 1;
        }
        // Check for special characters
        if (!isalnum(password[i]) && password[i] != ' ')
        {
            hasSpecial = 1;
        }
    }

    if (!hasNumber)
    {
        printf("Error: Password must contain at least one number.\n");
        return 0;
    }

    if (!hasSpecial)
    {
        printf("Error: Password must contain at least one special character.\n");
        return 0;
    }

    return 1; // All criteria met
}

// Function to validate username
int validateUsername(char username[])
{
    int length = strlen(username);

    if (length == 0)
    {
        printf("Error: Username cannot be empty.\n");
        return 0;
    }

    return 1;
}

int main()
{
    char username[50];
    char password[50];

    printf("=== Username-Password Validation System ===\n\n");
    printf("Password Requirements:\n");
    printf("- At least 8 characters\n");
    printf("- At least one number (0-9)\n");
    printf("- At least one special character (!@#$%%^&*()_+-=[]{}|;:',.<>?/)\n\n");

    // Get username
    printf("Enter username: ");
    fgets(username, sizeof(username), stdin);
    username[strcspn(username, "\n")] = '\0'; // Remove newline

    // Get password
    printf("Enter password: ");
    fgets(password, sizeof(password), stdin);
    password[strcspn(password, "\n")] = '\0'; // Remove newline

    printf("\n--- Validation Results ---\n");

    // Validate username
    int usernameValid = validateUsername(username);

    // Validate password
    int passwordValid = validatePassword(password);

    // Display final result
    printf("\n");
    if (usernameValid && passwordValid)
    {
        printf("✓ SUCCESS: Username-Password combination is VALID!\n");
        printf("Username: %s\n", username);
        printf("Password: %s\n", password);
    }
    else
    {
        printf("✗ FAILED: Invalid username-password combination.\n");
    }

    return 0;
}