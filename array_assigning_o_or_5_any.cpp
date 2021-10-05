int arr[10] = {};
 We can assign a whole array with some predefined values using the memset function. 
 If we want to initialize the array with value 5, then all elements will hold 5. We can do by writing these lines −

int arr[10];
memset(arr, 5, sizeof(arr));