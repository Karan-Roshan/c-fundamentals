#include <stdio.h>
#include <string.h>

#define MAX_CONTACTS 50
#define MAX_NAME_LENGTH 50
#define MAX_PHONE_LENGTH 20
#define MAX_EMAIL_LENGTH 50

struct Contact
{
    char name[MAX_NAME_LENGTH];
    char phone_number[MAX_PHONE_LENGTH];
    char email[MAX_EMAIL_LENGTH];
};

struct Contact contacts[MAX_CONTACTS];
int numContacts = 0;

void addContact()
{
    if (numContacts >= MAX_CONTACTS)
    {
        printf("Contact list is full. Cannot add more contacts.\n");
        return;
    }

    printf("Enter name: ");
    scanf("%s", contacts[numContacts].name);

    printf("Enter phone number: ");
    scanf("%s", contacts[numContacts].phone_number);

    printf("Enter email address: ");
    scanf("%s", contacts[numContacts].email);

    numContacts++;
    printf("Contact added successfully.\n");
}

void searchContact(char *searchName)
{
    int found = 0;
    for (int i = 0; i < numContacts; i++)
    {
        if (strcmp(contacts[i].name, searchName) == 0)
        {
            printf("Contact found:\n");
            printf("Name: %s\n", contacts[i].name);
            printf("Phone number: %s\n", contacts[i].phone_number);
            printf("Email: %s\n", contacts[i].email);
            found = 1;
            break;
        }
    }

    if (!found)
    {
        printf("Contact not found.\n");
    }
}

void updateContact(char *updateName)
{
    int found = 0;
    for (int i = 0; i < numContacts; i++)
    {
        if (strcmp(contacts[i].name, updateName) == 0)
        {
            printf("Enter new phone number: ");
            scanf("%s", contacts[i].phone_number);

            printf("Enter new email address: ");
            scanf("%s", contacts[i].email);

            printf("Contact information updated.\n");
            found = 1;
            break;
        }
    }

    if (!found)
    {
        printf("Contact not found. Cannot update.\n");
    }
}

void deleteContact(char *deleteName)
{
    int found = 0;
    for (int i = 0; i < numContacts; i++)
    {
        if (strcmp(contacts[i].name, deleteName) == 0)
        {
            // Shift elements to the left to overwrite the deleted contact
            for (int j = i; j < numContacts - 1; j++)
            {
                contacts[j] = contacts[j + 1];
            }
            numContacts--;
            printf("Contact deleted.\n");
            found = 1;
            break;
        }
    }

    if (!found)
    {
        printf("Contact not found. Cannot delete.\n");
    }
}

void displayContacts()
{
    printf("List of contacts:\n");
    for (int i = 0; i < numContacts; i++)
    {
        printf("Name: %s\n", contacts[i].name);
        printf("Phone number: %s\n", contacts[i].phone_number);
        printf("Email: %s\n", contacts[i].email);
        printf("---------------------\n");
    }
}

int main()
{
    int choice;
    char searchName[MAX_NAME_LENGTH];
    char updateName[MAX_NAME_LENGTH];
    char deleteName[MAX_NAME_LENGTH];

    while (1)
    {
        printf("\nContact Management System\n");
        printf("1. Add Contact\n");
        printf("2. Search Contact\n");
        printf("3. Update Contact\n");
        printf("4. Delete Contact\n");
        printf("5. Display Contacts\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            addContact();
            break;
        case 2:
            printf("Enter name to search: ");
            scanf("%s", searchName);
            searchContact(searchName);
            break;
        case 3:
            printf("Enter name to update: ");
            scanf("%s", updateName);
            updateContact(updateName);
            break;
        case 4:
            printf("Enter name to delete: ");
            scanf("%s", deleteName);
            deleteContact(deleteName);
            break;
        case 5:
            displayContacts();
            break;
        case 6:
            printf("Exiting...\n");
            return 0;
        default:
            printf("Invalid choice. Please enter a valid option.\n");
        }
    }

    return 0;
}
