let rec even_elements = l =>
  switch l {
  | [] => []
  | [_] => []
  | [_, b, ...t] => [b, ...even_elements(t)]
  };

let rec even_elements = l =>
  switch l {
  | [_, b, ...t] => [b, ...even_elements(t)]
  | l => []
  };
