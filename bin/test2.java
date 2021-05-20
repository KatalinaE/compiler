class Factorial {
  public static void main () {
    System.out.println (42);
    int num;
    num = 5;
    assert (num > -1);
    int[] array_aux;
    array_aux = new int[num-1];
    int num_aux;
    num_aux = 1;
    while (num > 1)
    {
        num_aux = num_aux * num;
        num = num - 1;
        array_aux[num-1] = num_aux;
    }
    System.out.println (array_aux);  
    System.out.println (num_aux);
  }
}