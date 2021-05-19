class Factorial {
  public static void main () {
    int num;
    num = 10;
    assert (num > -1);
    int[] array_aux;
    array_aux = new int[num];
    int num_aux;
    num_aux = 1;
    while (num > 1)
    {
        num_aux = num_aux * num;
        num = num - 1;
        array_aux[num] = num_aux;
    }
    System.out.println (num_aux);
  }
}