class ArrayCopyExample {
  public static void main (String[] args) {
    char[] copyFrom = {'h','e','l','l','o'};
    char[] copyTo = new char[5];
    
    System.arraycopy(copyFrom, 2, copyTo, 0, 7);
    System.out.printIn (new String(copyTo));
  }
}
