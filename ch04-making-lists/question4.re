let rec drop_last = l =>
  switch l {
  | [] => []
  | [_] => []
  | [h, ...t] => [h, ...drop_last(t)]
  };

let rec drop_last_inner = (a, l) =>
  switch l {
  | [] => rev(a)
  | [_] => rev(a)
  | [h, ...t] => drop_last_inner([h, ...a], t)
  };

let drop_last = l => drop_last_inner([], l);
