Inter Process Communication through shared memory is a concept where two or
 more process can access the common memory. And communication is done via 
 this shared memory where changes made by one process can be viewed by anther process.

The problem with pipes, fifo and message queue – is that for two process to 
exchange information. The information has to go through the kernel.

Server reads from the input file.
The server writes this data in a message using either a 
pipe, fifo or message queue.
The client reads the data from the IPC channel,again 
requiring the data to be copied from kernel’s IPC buffer to the client’s buffer.
Finally the data is copied from the client’s buffer.
A total of four copies of data are required (2 read and 2 write). 
So, shared memory provides a way by letting two or more processes 
share a memory segment. With Shared Memory the data is only copied 
twice – from input file into shared memory and from shared memory 
to the output file.
