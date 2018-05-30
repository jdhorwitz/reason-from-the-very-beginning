let rec make_set = l =>
  switch l {
  | [] => []
  | [h, ...t] =>
    if (member(h, t)) {
      make_set(t);
    } else {
      [h, ...make_set(t)];
    }
  };

let rec rev_inner = (a, l) =>
  switch l {
  | [] => a
  | [h, ...t] => rev_inner([h, ...a], t)
  };

let rev = l => rev_inner([], l);
