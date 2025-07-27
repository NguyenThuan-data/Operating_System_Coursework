## Student name: Thuan Nguyen
## Student ID: 23194073


## Display an appropriate error message and terminate if the number of arguements is not exactly 2
if [ "$#" -ne 2 ]; then
 echo "Error:Please enter exactly two arguements."
 echo "Usage: <file_name> <directory>"
 exit 1
fi

## If the file (specified in arguement 1) does not exist, then display an appropriate message and terminate
if [ ! -e "$1" ]; then
 echo "Error: File named "$1" does not exist."
 exit 1
fi

## Check if the directory (specified in arguement 2) exist, if no, then create it.
if [ ! -d "$2" ]; then
 echo "Error: Directory name "$2" does not exist. Creating "$2""
 mkdir -p $2
fi

## Search for lines containing "special" in the file and append them to 'special.txt' in the specified directory

grep "special" "$1" >> "$2"/special.txt

## Notify that lines those line have been saved to 'special.txt'

echo "If lines contain 'special' word, it will be saved to "$2"/special.txt."
