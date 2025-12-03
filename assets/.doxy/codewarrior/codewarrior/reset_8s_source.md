

# File reset.s

[**File List**](files.md) **>** [**CodeWarrior**](dir_5331e34b666a7435d77010d6d501c7d4.md) **>** [**PowerPC\_EABI\_Support**](dir_5715a3597842aab210f9a54cf5907db0.md) **>** [**Runtime**](dir_e69745e3285a8d4f155d29d88e1a7b6b.md) **>** [**Src**](dir_1789e36d750963f536ec280b459db2bf.md) **>** [**reset.s**](reset_8s.md)

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


