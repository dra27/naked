type t
external make_var : unit -> t = "make_var"
external int_of_var : t -> int = "int_of_var"

let x = make_var ()

let () =
  Printf.printf "The answer is %d\n%!" (int_of_var x);
  Gc.full_major ()
