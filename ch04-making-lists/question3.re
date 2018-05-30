let rec rev = l =>
  switch l {
  | [] => []
  | [h, ...t] => rev(t) @ [h]
  };

let mk_palindrome = l => l @ rev(l);

let is_palindrome = l => l == rev(l);
