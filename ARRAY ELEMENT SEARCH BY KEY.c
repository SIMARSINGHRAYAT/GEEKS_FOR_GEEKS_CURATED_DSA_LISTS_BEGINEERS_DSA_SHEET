#include<stdio.h>
int main() {
    int arr[100];
    int n;
    printf("Enter array size:\n");
    scanf("%d", &n);
    printf("Enter array elements:\n");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int key;
    printf("Enter your key: ");
    scanf("%d", &key);
    int found = 0;
    int position = -1;
    for(int i = 0; i < n; i++) {
        if(key == arr[i]) {
            found = 1;
            position = i;
            break;
        }
    }
    if(!found) {
        printf("Element not found.\n");
    } else {
        printf("Element %d found at position %d\n", key, position);
    }  
    return 0;
}