

# File UART.h



[**FileList**](files.md) **>** [**CodeWarrior**](dir_5331e34b666a7435d77010d6d501c7d4.md) **>** [**PowerPC\_EABI\_Support**](dir_5715a3597842aab210f9a54cf5907db0.md) **>** [**Msl**](dir_f3cdfadcca1881c964e98cde56e67e68.md) **>** [**MSL\_C**](dir_30eb297d72d9bf6e37ae97b245365a16.md) **>** [**MSL\_Common\_Embedded**](dir_862c03c3c35584d0a555c3abef6e72a9.md) **>** [**Include**](dir_49c25cd68abdb8bd8590f84f16217e65.md) **>** [**UART.h**](_u_a_r_t_8h.md)

[Go to the source code of this file](_u_a_r_t_8h_source.md)




















## Public Types

| Type | Name |
| ---: | :--- |
| enum  | [**UARTBaudRate**](#enum-uartbaudrate)  <br> |
| typedef int | [**UARTError**](#typedef-uarterror)  <br> |
| enum  | [**\_u\_a\_r\_t\_8h\_1a726ca809ffd3d67ab4b8476646f26635**](#enum-_u_a_r_t_8h_1a726ca809ffd3d67ab4b8476646f26635)  <br> |




















## Public Functions

| Type | Name |
| ---: | :--- |
|  [**UARTError**](trk_8h.md#typedef-uarterror) | [**InitializeIntDrivenUART**](#function-initializeintdrivenuart) ([**UARTBaudRate**](trk_8h.md#enum-uartbaudrate) baudRate, unsigned char intDrivenInput, unsigned char intDrivenOutput, volatile unsigned char \*\* inputPendingPtrRef) <br> |
|  [**UARTError**](trk_8h.md#typedef-uarterror) | [**InitializeUART**](#function-initializeuart) ([**UARTBaudRate**](trk_8h.md#enum-uartbaudrate) baudRate) <br> |
|  [**UARTError**](trk_8h.md#typedef-uarterror) | [**ReadUART1**](#function-readuart1) (char \* c) <br> |
|  [**UARTError**](trk_8h.md#typedef-uarterror) | [**ReadUARTN**](#function-readuartn) (void \* bytes, unsigned long length) <br> |
|  [**UARTError**](trk_8h.md#typedef-uarterror) | [**ReadUARTPoll**](#function-readuartpoll) (char \* c) <br> |
|  [**UARTError**](trk_8h.md#typedef-uarterror) | [**ReadUARTString**](#function-readuartstring) (char \* string, unsigned long limit, char terminateChar) <br> |
|  [**UARTError**](trk_8h.md#typedef-uarterror) | [**TerminateUART**](#function-terminateuart) (void) <br> |
|  void | [**UARTInterruptHandler**](#function-uartinterrupthandler) (void) <br> |
|  [**UARTError**](trk_8h.md#typedef-uarterror) | [**WriteUART1**](#function-writeuart1) (char c) <br> |
|  [**UARTError**](trk_8h.md#typedef-uarterror) | [**WriteUARTN**](#function-writeuartn) (const void \* bytes, unsigned long length) <br> |
|  [**UARTError**](trk_8h.md#typedef-uarterror) | [**WriteUARTString**](#function-writeuartstring) (const char \* string) <br> |




























## Public Types Documentation




### enum UARTBaudRate 

```C++
enum UARTBaudRate {
    kBaudHWSet = -1,
    kBaud300 = 300,
    kBaud600 = 600,
    kBaud1200 = 1200,
    kBaud1800 = 1800,
    kBaud2000 = 2000,
    kBaud2400 = 2400,
    kBaud3600 = 3600,
    kBaud4800 = 4800,
    kBaud7200 = 7200,
    kBaud9600 = 9600,
    kBaud19200 = 19200,
    kBaud38400 = 38400,
    kBaud57600 = 57600,
    kBaud115200 = 115200,
    kBaud230400 = 230400
};
```




<hr>



### typedef UARTError 

```C++
typedef int UARTError;
```




<hr>



### enum \_u\_a\_r\_t\_8h\_1a726ca809ffd3d67ab4b8476646f26635 

```C++
enum _u_a_r_t_8h_1a726ca809ffd3d67ab4b8476646f26635 {
    kUARTDataError = -1,
    kUARTNoError = 0,
    kUARTUnknownBaudRate,
    kUARTConfigurationError,
    kUARTBufferOverflow,
    kUARTNoData
};
```




<hr>
## Public Functions Documentation




### function InitializeIntDrivenUART 

```C++
UARTError InitializeIntDrivenUART (
    UARTBaudRate baudRate,
    unsigned char intDrivenInput,
    unsigned char intDrivenOutput,
    volatile unsigned char ** inputPendingPtrRef
) 
```




<hr>



### function InitializeUART 

```C++
UARTError InitializeUART (
    UARTBaudRate baudRate
) 
```




<hr>



### function ReadUART1 

```C++
UARTError ReadUART1 (
    char * c
) 
```




<hr>



### function ReadUARTN 

```C++
UARTError ReadUARTN (
    void * bytes,
    unsigned long length
) 
```




<hr>



### function ReadUARTPoll 

```C++
UARTError ReadUARTPoll (
    char * c
) 
```




<hr>



### function ReadUARTString 

```C++
UARTError ReadUARTString (
    char * string,
    unsigned long limit,
    char terminateChar
) 
```




<hr>



### function TerminateUART 

```C++
UARTError TerminateUART (
    void
) 
```




<hr>



### function UARTInterruptHandler 

```C++
void UARTInterruptHandler (
    void
) 
```




<hr>



### function WriteUART1 

```C++
UARTError WriteUART1 (
    char c
) 
```




<hr>



### function WriteUARTN 

```C++
UARTError WriteUARTN (
    const void * bytes,
    unsigned long length
) 
```




<hr>



### function WriteUARTString 

```C++
UARTError WriteUARTString (
    const char * string
) 
```




<hr>

------------------------------
The documentation for this class was generated from the following file `decomp/CodeWarrior/PowerPC_EABI_Support/Msl/MSL_C/MSL_Common_Embedded/Include/UART.h`

