
for filename in ./*.ui; do
    

	filename=$(basename -- "$filename")
	extension="${filename##*.}"
	firstn="${filename%.*}"".cpp"

        uic "$filename" > "$firstn"
    
done
