let rec power_match = (x, n) =>
  switch n {
  | 0 => 1
  | 1 => x
  | _ => x * power_match(x, n - 1)
  };
