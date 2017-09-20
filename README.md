# learning-c

## Rocks

```
cd rocks
gcc rocks.c -o rocks
./rocks
```

Outputs

```
$ ./rocks
C Rocks!
```

## Cards

```
cd cards
gcc cards.c -o cards
./cards
```

Output

```
Enter card name: 
K
The card value is: 10
```

## Card Count

```
cd cards
gcc cardcount.c -o cardcount
./cardcount
```

Output

```
Enter card name: 
K
The card value is: 10
Count has gone down
```


## Sort

```
cd sort
gcc sort.c selection_sort.c -o sort -std=c99
./sort
```

Output

```
15 33 48 65 57 79 52 
Sort starting ...
Sort has ended. 
15 33 48 52 57 65 79
```


## Cloud 9 Notes

Cloud 9 supports:

- C++ 11
- C++ 14

The C++ Workspace provides:

- GCC version 4.8.4

To use C++ 11 functions pass

```
-std=c++11

/usr/bin/g++ -std=c++11 $file -o runme; chmod 755 $file_path/runme; $file_path/runme
```

To use C++ 14

```
/usr/bin/g++-5 -std=c++14 $file -o runme; chmod 755 $file_path/runme; $file_path/runme
```

## References

- [Writing a C++ App](https://community.c9.io/t/writing-a-c-app/4965)
- [Head First C](http://shop.oreilly.com/product/0636920015482.do)
- [Advanced Topics in C](http://www.apress.com/us/book/9781430264002)
- [Notes and Resources on Make](https://stormwild.github.io/make)