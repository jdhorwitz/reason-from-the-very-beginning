### Question 4

```
let rec power x n =>
  if (n == 0) {
    1
  } else if (n == 1) {
    x
  } else {
    x * power x (n - 1)
  };
```

Type: 
```
int => int => int => <fun>
```