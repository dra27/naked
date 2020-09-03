#include <caml/mlvalues.h>
#include <caml/memory.h>

CAMLprim value make_var()
{
  CAMLparam0();

  int* ptr = (int*)malloc(sizeof(int));
  *ptr = 42;

  CAMLreturn((value)ptr);
}

CAMLprim value int_of_var(value ptr)
{
  CAMLparam1(ptr);

  CAMLreturn(Val_int(*(int*)ptr));
}
