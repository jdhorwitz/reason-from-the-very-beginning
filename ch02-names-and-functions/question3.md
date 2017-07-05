### Question 3

```
let rec sum n =>
  if (n == 1) {
    1
  } else {
    n + sum (n - 1)
  };
  ```

  type:
  ```
  int => int => <fun>