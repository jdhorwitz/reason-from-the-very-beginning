/* You could raise an exception during a check for negative and 0. */
let rec factorial x =>
  if (x <= 0) {
    0
  } else if (x == 1) {
    1
  } else {
    x * factorial (x - 1)
  };