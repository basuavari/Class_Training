<<<<<<< HEAD
#include<stdio.h> 
// Function to delete an element
// where array[] is the array from which element needs to be deleted
// size is the size of the array
// keyToBeDeleted is the element to be deleted from the array
int deleteElement(int array[], int size, int keyToBeDeleted) 
{ 
// Calling findElement function to get the position of the element which needs to be deleted
int pos = findElement(array, size, keyToBeDeleted); 
// If element is not found then it prints Element not found
if (pos == - 1) 
{ 
printf("Element not found"); 
return size; 
} 
// Otherwise it deletes the element & moves rest of the element by one position
int i; 
for (i = pos; i < size - 1; i++) 
array[i] = array[i + 1]; 
return size - 1; 
} 
// Function to find the element for deletion
int findElement(int array[], int size, int keyToBeDeleted) 
{ 
int i; 
// Finding & returning the position of the element 
for (i = 0; i < size; i++) 
if (array[i] == keyToBeDeleted) 
return i; 
return - 1; 
}   
// Main Function 
int main() 
{ 
int array[] = { 31, 27, 3, 54, 67, 31 };
int size = sizeof(array) / sizeof(array[0]); 
int i, keyToBeDeleted = 67; 
printf("n Before Deletion: "); 
for (i = 0; i < size; i++) 
printf("%d  ", array[i]); 
// Calling the function to delete an element from the array
size = deleteElement(array, size, keyToBeDeleted); 
printf("n After Deletion: "); 
for (i = 0; i < size; i++) 
printf("%d  ",array[i]); 
return 0; 
=======
#include<stdio.h> 
// Function to delete an element
// where array[] is the array from which element needs to be deleted
// size is the size of the array
// keyToBeDeleted is the element to be deleted from the array
int deleteElement(int array[], int size, int keyToBeDeleted) 
{ 
// Calling findElement function to get the position of the element which needs to be deleted
int pos = findElement(array, size, keyToBeDeleted); 
// If element is not found then it prints Element not found
if (pos == - 1) 
{ 
printf("Element not found"); 
return size; 
} 
// Otherwise it deletes the element & moves rest of the element by one position
int i; 
for (i = pos; i < size - 1; i++) 
array[i] = array[i + 1]; 
return size - 1; 
} 
// Function to find the element for deletion
int findElement(int array[], int size, int keyToBeDeleted) 
{ 
int i; 
// Finding & returning the position of the element 
for (i = 0; i < size; i++) 
if (array[i] == keyToBeDeleted) 
return i; 
return - 1; 
}   
// Main Function 
int main() 
{ 
int array[] = { 31, 27, 3, 54, 67, 31 };
int size = sizeof(array) / sizeof(array[0]); 
int i, keyToBeDeleted = 67; 
printf("n Before Deletion: "); 
for (i = 0; i < size; i++) 
printf("%d  ", array[i]); 
// Calling the function to delete an element from the array
size = deleteElement(array, size, keyToBeDeleted); 
printf("n After Deletion: "); 
for (i = 0; i < size; i++) 
printf("%d  ",array[i]); 
return 0; 
>>>>>>> 0ac4945 (added)
}