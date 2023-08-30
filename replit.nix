{ pkgs }: {
  deps = [
    pkgs../main
    pkgs.ls
    pkgs.gcc questao02.c -o teste
  ];
}