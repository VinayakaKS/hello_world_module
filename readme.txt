This is a simple kernel module for Hello world printing

to get which Kernel you are running do $ uname -r
 
$ make -C /lib/modules/5.4.0-144-generic/build M=$PWD modules

$ sudo insmod main.ko
$ dmesg

$ sudo rmmod main.ko
$ dmesg

