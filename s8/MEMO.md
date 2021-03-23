# 疑問点

bof_8-1.cのmain関数のシグネチャを`int main()`ではなく`int main(int argc, char const *argv[])`とすると、pwn関数のアドレスが5655556dから5655559dになる。
このことは、main関数の引数が増えたことによる変化として説明できると思うが、問題は後者の場合、exploit.pyがEOFErrorを吐くのが分からない。なんで？