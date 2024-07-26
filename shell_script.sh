#!/bin/bash

# Create a directory called Lab1_Dir
mkdir Lab1_Dir

# Change the current directory to Lab1_Dir
cd Lab1_Dir

# Creating a file named testfile.txt
touch testfile.txt

# Writing into the file
echo "Hello World!" > testfile.txt

#append text to file
echo "Another hello world!" >> testfile.txt

# Display the contents of testfile.txt
cat testfile.txt

# List the files in Lab1_Dir
ls -l

#change file permissions
chmod 644 testfile.txt

#file backup
cp testfile.txt testfile1.txt

#delete original file
rm testfile.txt

#move backup file to original file name
mv testfile1.txt testfile.txt

#display updated file list
ls -l
