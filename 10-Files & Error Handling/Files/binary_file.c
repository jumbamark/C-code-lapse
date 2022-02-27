#include <stdio.h>


// the following program demonstrates writing to and reading from binary files
void rw_binaryFile () {
    FILE *fptr;
    int arr[10];
    int x[10];

    // generate an array of numbers
    for (int k = 0; k < 10; k++) {
        arr[k] = k;
    }

    // write array to file
    // item size and the number of elements were determined by using the size of an element and the size of the entire variable
    fptr = fopen("datafile.bin", "wb");
    fwrite(arr, sizeof(arr[0]), sizeof(arr)/sizeof(arr[0]), fptr);
    fclose(fptr);

    // read array from file
    fptr = fopen("datafile.bin", "rb");
    fread(x, sizeof(arr[0]), sizeof(arr)/sizeof(arr[0]), fptr);
    fclose(fptr);

    // print array
    for (int k = 0; k < 10; k++) {
        printf("%d", x[k]);
    }    
}



int main () {
    rw_binaryFile();

    return 0;
}



/*
Writing only chars to a file can become tedious when you have an array or structure
To write blocks of memory to a file, there are the following binary functions;
* rb - open file for reading (file must exists)
* wb - open file for writing (file need not exist)
* ab - open for append (file need not exist)
* rb+ - open for reading and writing from beginning
* wb+ - open for reading and writing, overwriting file
* ab+ - open for reading and writing, appending to file
* fwrite(ptr, item_size, num_items, fp) - writes num_items of item_size from pointer ptr to the file pointed to by file pointer fp
* fread(ptr, item_size, num_items, fp) - reads num_items of item_size size from the file pointed to by file pointer fp into memory pointed to by ptr
* fclose(fp) - closes the file opened with file fp, returns 0 if succesful and EOF if there was an error in closing
* feof(fp) - returns 0 when the end of the file stream has been reached
* File extensions are useful for indicating the type of data to expect ;
.txt- text, .bin - binary data,.csv-comma separated values, .dat - data file
*/