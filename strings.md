# Strings

The C language doesn't support strings out of the box. Instead we can use an array of single characters.

The are a number of C extension libraries that do give you strings.

C adds a sentinal character, `\0` to the end of a string (char array);

```
s = "Shatner";
```

The length of s is 8 because of the additional sentinel character.

