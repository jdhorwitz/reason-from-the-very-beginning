let rec sum n => switch n {
  | 1 => 1
  | _ => n + sum (n - 1)
};