class Factorial {
  public static void main () {
    System.out.println (new Fac ().ComputeFac (10));
  }
}
//test
/* test */
class Fac {
  public int ComputeFac (int num) {
    assert (num > -1);
    int num_aux;
    num_aux = 1;
    while (num > 1)
    {
        num_aux = num_aux * num;
        num = num - 1;
    }
    return num_aux;
  }
}
