let rec member = (e, l) =>
  switch l {
  | [] => false
  | [h, ...t] => h == e || member(e, t)
  };
