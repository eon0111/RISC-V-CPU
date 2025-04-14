#define LOOP_END 4

int add_one_recursively_until_value(int current) {
  if (current == 0)
    return 0;
  else {
   int x = add_one_recursively_until_value(current - 1) + 1;
   return x;
  }
}

int main() {
  *((volatile int *) (4)) = add_one_recursively_until_value(255);
  return 0;
}
