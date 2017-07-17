let not x => x ? false : true;

let rec sum_match n =>
  switch n {
  | 1 => 1
  | _ => n + sum_match (n - 1)
  };

let rec power_match x n =>
  switch n {
  | 0 => 1
  | 1 => x
  | _ => x * power_match x (n - 1)
  };

let isupper c =>
  switch c {
  | 'A'..'Z' => true
  | _ => false
  };

let islower c => not (isupper c);