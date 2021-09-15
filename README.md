# add-nbo
2019330023 Hyogon Ryu

```shell
ugonfor@gongon:~/add_nbo$ ./add-nbo
[!] usage: ./add-nbo <file1> <file2>
ugonfor@gongon:~/add_nbo$ ./add-nbo 1 2
[!] fopen error
ugonfor@gongon:~/add_nbo$ echo -n -e \\x00\\x00\\x03\\xe8 > thousand.bin
ugonfor@gongon:~/add_nbo$ echo -n -e \\x00\\x00\\x01\\xf4 > five-hundred.bin
ugonfor@gongon:~/add_nbo$ ./add-nbo thousand.bin five-hundred.bin
1000(0x3e8) + 500(0x1f4) = 1500(0x5dc)
ugonfor@gongon:~/add_nbo$ echo -n -e \\x12\\x34\\x56\\x78 > 1234.bin
ugonfor@gongon:~/add_nbo$ ./add-nbo thousand.bin 1234.bin
1000(0x3e8) + 305419896(0x12345678) = 305420896(0x12345a60)
```
