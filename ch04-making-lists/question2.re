let rec count_true = l =>
  switch l {
  | [] => 0
  | [true, ...t] => 1 + count_true(t)
  | [false, ...t] => count_true(t)
  };

let rec count_true_inner = (n, l) =>
  switch l {
  | [] => n
  | [true, ...t] => count_true_inner(n + 1, t)
  | [false, ...t] => count_true_inner(n, t)
  };

let count_true = l => count_true_inner(0, l);
