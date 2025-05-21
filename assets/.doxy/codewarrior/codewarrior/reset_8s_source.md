

# File reset.s

[**File List**](files.md) **>** [**CodeWarrior**](dir_c5aab8d4319c0669f4501cae4cd3ca21.md) **>** [**PowerPC\_EABI\_Support**](dir_7a6c87a887c36ca33135c86474059f07.md) **>** [**Runtime**](dir_ab14c6633277f31934f3117250613416.md) **>** [**Src**](dir_509e87e64e9810dafb4b9e7004107717.md) **>** [**reset.s**](reset_8s.md)

[Go to the documentation of this file](reset_8s.md)


```C++
#// This is an example of how to make your code boot from reset.
#// __start is the entry point, and we want to put a branch to it
#// at the reset vector.

.extern __start     #// entry point
.globl  reset

.section    .reset, 8, x

.org    0x100

reset:
b   __start
```


