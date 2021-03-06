# define Comm int
# define Request int
# define Status int
# define Datatype int
# define Op int

void MPI_Abort ( MPI_Comm comm, int ierror );
int MPI_Allgather ( void *sendbuf, int sendcount, MPI_Datatype sendtype,
  void *recvbuf, int recvcount, MPI_Datatype recvtype,
  MPI_Comm comm );
int MPI_Allgatherv ( void *sendbuf, int sendcount, MPI_Datatype sendtype,
  void *recvbuf, int *recvcounts, int *displs,
  MPI_Datatype recvtype, MPI_Comm comm );
int MPI_Allreduce ( void *sendbuf, void *recvbuf, int count,
  MPI_Datatype datatype, MPI_Op op, MPI_Comm comm );
int MPI_Barrier ( MPI_Comm comm );
int MPI_Bcast ( void *data, int n, MPI_Datatype datatype, int node, 
  MPI_Comm comm );
int MPI_Cart_create ( MPI_Comm comm, int ndims, int dims[], int periods[],
  int reorder, MPI_Comm *comm_cart );
int MPI_Cart_get ( MPI_Comm comm, int ndims, int dims[], int periods[], 
  int coords[] );
int MPI_Cart_shift ( MPI_Comm comm, int dir, int disp, int *source, int *dest );
int MPI_Comm_dup ( MPI_Comm comm, MPI_Comm *comm_out );
int MPI_Comm_free ( MPI_Comm *comm );
int MPI_Comm_split ( MPI_Comm comm, int icolor, int ikey, MPI_Comm *new_comm );
int mpi_copy_byte ( char *data1, char *data2, int n );
int mpi_copy_double ( double *data1, double *data2, int n );
int mpi_copy_float ( float *data1, float *data2, int n );
int mpi_copy_int ( int *data1, int *data2, int n );

int MPI_Get_count ( MPI_Status status, MPI_Datatype datatype, int icount );

int MPI_Irecv ( void *buf, int count, MPI_Datatype datatype,
  int source, int tag, MPI_Comm comm, MPI_Request *request );
int MPI_Recv ( void *buf, int count, MPI_Datatype datatype,
  int source, int tag, MPI_Comm comm, MPI_Status *status );
int MPI_Reduce ( void *data1, void *data2, int n, MPI_Datatype datatype, 
  MPI_Op operation, int receiver, MPI_Comm comm );
int mpi_reduce_double ( double *data1, double *data2, int n, 
  MPI_Op operation );
int mpi_reduce_float ( float *data1, float *data2, int n, 
  MPI_Op operation );
int mpi_reduce_int ( int *data1, int *data2, int n, 
  MPI_Op operation );
int MPI_Reduce_scatter ( void *sendbuf, void *recvbuf, int recvcounts,
  MPI_Datatype datatype, MPI_Op op, MPI_Comm comm );
int MPI_Rsend ( void *data, int n, MPI_Datatype datatype, int iproc, 
  int itag, MPI_Comm comm );
int MPI_Send ( void *buf, int count, MPI_Datatype datatype,
  int dest, int tag, MPI_Comm comm );
int MPI_Wait ( MPI_Request *request, MPI_Status *status );
int MPI_Waitall ( int icount, int irequest, MPI_Status status );
int MPI_Waitany ( int count, MPI_Request *request, int *index, 
  MPI_Status *status );



//****************************************************************************80


int MPI_Abort ( MPI_Comm comm, int error_code )



//****************************************************************************80


//

//  Purpose:

//

//    MPI_ABORT shuts down the processes in a given communicator.

//

//  Modified:

//

//    08 February 2007

//

//  Parameters:

//

//    Input, MPI_Comm COMM, the MPI communicator.

//

//    Input, int ERROR_CODE, the error code to be returned.

//

//    Output, int IERROR, is nonzero if an error occurred.

//


{

  int ierror;



  ierror = 0;



  printf ( "\n" );

  printf ( "MPI_ABORT:\n" );

  printf ( "  Shut down with error code = %d\n", errorcode );



  exit ( errorcode );

}

//****************************************************************************




int MPI_Allgather ( void *sendbuf, int sendcount, MPI_Datatype sendtype,

  void *recvbuf, int recvcount, MPI_Datatype recvtype,

  MPI_Comm comm )



//****************************************************************************


//

//  Purpose:

//

//    MPI_ALLGATHER gathers data from all the processes in a communicator.

//

//  Discussion:

//

//    Copy values from DATA1 to DATA2.

//

//    The data to be transferred can be int, float, double, or byte.

//    In this routine, it is declared and documented as VOID.

//

//  Modified:

//

//    05 February 2007

//

//  Parameters:

//

//    Input, MPI_Comm COMM, the MPI communicator.

//

//    Output, int IERROR, is nonzero if an error occurred.

//


{

  int ierror;



  if ( sendtype == MPI_BYTE )

  {

    ierror = mpi_copy_byte ( sendbuf, recvbuf, sendcount );

  }

  else if ( sendtype == MPI_DOUBLE )

  {

    ierror = mpi_copy_double ( sendbuf, recvbuf, sendcount );

  }

  else if ( sendtype == MPI_FLOAT )

  {

    ierror = mpi_copy_float ( sendbuf, recvbuf, sendcount );

  }

  else if ( sendtype == MPI_INT )

  {

    ierror = mpi_copy_int ( sendbuf, recvbuf, sendcount );

  }

  else

  {

    ierror = 1;

  }

  return ierror;

}

//****************************************************************************




int MPI_Allgatherv ( void *sendbuf, int sendcount, MPI_Datatype sendtype,

  void *recvbuf, int *recvcounts, int *displs,

  MPI_Datatype recvtype, MPI_Comm comm )



//****************************************************************************


//

//  Purpose:

//

//    MPI_ALLGATHERV gathers data from all the processes in a communicator.

//

//  Discussion:

//

//    Copy values from DATA1 to DATA2.

//

//    The data to be transferred can be int, float, double or byte.

//    In this routine, it is declared and documented as VOID type. 

//

//  Modified:

//

//    05 February 2007

//

//  Parameters:

//

//    Input, MPI_Comm COMM, the MPI communicator.

//

//    Output, int IERROR, is nonzero if an error occurred.

//


{

  int ierror;



  if ( sendtype == MPI_BYTE )

  {

    ierror = mpi_copy_byte ( sendbuf, recvbuf, sendcount );

  }

  else if ( sendtype == MPI_DOUBLE )

  {

    ierror = mpi_copy_double ( sendbuf, recvbuf, sendcount );

  }

  else if ( sendtype == MPI_FLOAT )

  {

    ierror = mpi_copy_float ( sendbuf, recvbuf, sendcount );

  }

  else if ( sendtype == MPI_INT )

  {

    ierror = mpi_copy_int ( sendbuf, recvbuf, sendcount );

  }

  else

  {

    ierror = 1;

  }

  return ierror;

}

//****************************************************************************




int MPI_Allreduce ( void *data1, void *data2, int n,

  MPI_Datatype datatype, MPI_Op operation, MPI_Comm comm )



//****************************************************************************


//

//  Purpose:

//

//    MPI_ALLREDUCE carries out a reduction operation.

//

//  Discussion:

//

//    The reduction operations are MAXIMUM, MINIMUM, PRODUCT and SUM.

//

//    The data to be transferred can be int, float, double or byte.

//    In this routine, it is declared and documented as VOID. 

//

//  Modified:

//

//    07 February 2007

//

//  Parameters:

//

//    Input, DATATYPE *DATA1, the data to be processed.

//

//    Output, DATATYPE *DATA2, the value of the reduction operation.

//

//    Input, int N, the number of items in DATA1.

//

//    Input, MPI_Datatype DATATYPE, indicates the datatype of DATA1 and DATA2.

//

//    Input, MPI_Op OPERATION, should have the value of one of the symbolic

//    constants MPI_MAX, MPI_MIN, MPI_PRODUCT or MPI_SUM.

//

//    Input, MPI_Comm COMM, the MPI communicator.

//

//    Output, int IERROR, is nonzero if an error occurred.

//


{

  int ierror;



  if ( datatype == MPI_DOUBLE )

  {

    ierror = mpi_reduce_double ( data1, data2, n, operation );

  }

  else if ( datatype == MPI_FLOAT )

  {

    ierror = mpi_reduce_float ( data1, data2, n, operation );

  }

  else if ( datatype == MPI_INT )

  {

    ierror = mpi_reduce_int ( data1, data2, n, operation );

  }

  else

  {

    ierror = 1;

  }

  return ierror;

}

//****************************************************************************




int MPI_Barrier ( MPI_Comm comm )



//****************************************************************************


//

//  Purpose:

//

//    MPI_BARRIER forces processes within a communicator to wait together.

//

//  Modified:

//

//    05 February 2007

//

//  Parameters:

//

//    Input, MPI_Comm COMM, the MPI communicator.

//

//    Output, int IERROR, is nonzero if an error occurred.

//


{ 

  int ierror;



  ierror = 0;



  return ierror;

}

//****************************************************************************




int MPI_Bcast ( void *data, int n, MPI_Datatype datatype, int node, 

  MPI_Comm comm )



//****************************************************************************


//

//  Purpose:

//

//    MPI_BCAST broadcasts data from one process to all others.

//

//  Discussion:

//

//    The data to be transferred can be int, float, double or byte.

//    In this routine, it is declared and documented as VOID.

//

//  Modified:

//

//    05 February 2007

//

//  Parameters:

//

//    Input, datatype DATA[N], the data to be broadcast.

//

//    Input, int N, the number of items of data.

//

//    Input, MPI_Datatype DATATYPE, the MPI code for the datatype of the data.

//

//    Input, int NODE, the rank of the sending process within the

//    given communicator.

//

//    Input, MPI_Comm COMM, the MPI communicator.

//

//    Output, int IERROR, is nonzero if an error occurred.

//


{

  int ierror;



  return ierror;

}

//****************************************************************************




int mpi_bsend ( void *data, int n, MPI_Datatype datatype, int iproc, int itag,

  MPI_Comm comm )



//****************************************************************************


//

//  Purpose:

//

//    MPI_BSEND sends data from one process to another, using buffering.

//

//  Discussion:

//

//    Warn against sending message to self, since no data copy is done.

//

//    The data to be transferred can be integer, real, or double precision.

//    In this routine, it is declared and documented as INTEGER type, 

//    but using the other types should generally not cause a problem.

//

//  Modified:

//

//    06 February 2007

//

//  Parameters:

//

//    Input, void DATA[N], the data to be sent.

//

//    Input, int N, the number of data items to send.

//

//    Input, MPI_Datatype DATAYTPE, the MPI code for the datatype.

//

//    Input, int IPROC, the rank of the process within the communicator

//    that is to receive the message.

//

//    Input, int ITAG, a tag for the message.

//

//    Input, MPI_Comm COMM, the MPI communicator.

//

//    Output, int IERROR, is nonzero if an error occurred.

//


{

  int ierror;



  ierror = 1;



  printf ( "\n" );

  printf ( "MPI_BSEND - Error!\n" );

  printf ( "  Should not send message to self.\n" );



  return ierror;

}

//****************************************************************************




int MPI_Cart_create ( MPI_Comm comm, int ndims, int dims[], int periods[],

  int reorder, MPI_Comm *comm_cart )



//****************************************************************************


//

//  Purpose:

//

//    MPI_CART_CREATE creates a communicator for a Cartesian topology.

//

//  Modified:

//

//    05 February 2007

//

//  Parameters:

//

//    Input, MPI_COMM COMM, the MPI communicator.

//

//    Output, MPI_Comm *COMM_CART, the new MPI communicator.

//

//    Output, int IERROR, is nonzero if an error occurred.

//


{

  int ierror;



  ierror = 0;



  return ierror;

}

//****************************************************************************




int MPI_Cart_get ( MPI_Comm comm, int ndims, int dims[], int periods[], 

  int coords[] )



//****************************************************************************


//

//  Purpose:

//

//    MPI_CART_GET returns the "Cartesian coordinates" of the calling process.

//

//  Discussion:

//

//    Set all coordinates to 0.

//

//  Modified:

//

//    05 February 2007

//

//  Parameters:

//

//    Input, MPI_COMM COMM, the MPI communicator.

//

//    Output, int IERROR, is nonzero if an error occurred.

//


{

  int i;

  int ierror;



  ierror = 0;



  for ( i = 0; i < ndims; i++ )

  {

    coords[i] = 0;

  }



  return ierror;

}

//****************************************************************************




int MPI_Cart_shift ( MPI_Comm comm, int dir, int disp, int *source, int *dest )



//****************************************************************************


//

//  Purpose:

//

//    MPI_CART_SHIFT finds the destination and source for Cartesian shifts.

//

//  Discussion:

//

//    Set ISOURCE = IDEST = SELF = 0.

//

//  Modified:

//

//    05 February 2007

//

//  Parameters:

//

//    Input, MPI_COMM COMM, the MPI communicator.

//

//    Output, int IERROR, is nonzero if an error occurred.

//


{

  int ierror;



  ierror = 0;

  *source = 0;

  *dest = 0;



  return ierror;

}

//****************************************************************************




int MPI_Comm_dup ( MPI_Comm comm, MPI_Comm *comm_out )



//****************************************************************************


//

//  Purpose:

//

//    MPI_COMM_DUP duplicates a communicator.

//

//  Modified:

//

//    05 February 2007

//

//  Parameters:

//

//    Input, MPI_Comm COMM, the MPI communicator.

//

//    Input, MPI_Comm *COMM_OUT, the new MPI communicator.

//

//    Output, int IERROR, is nonzero if an error occurred.

//


{

  int ierror;



  ierror = 0;

  *comm_out = comm;



  return ierror;

}

//****************************************************************************




int MPI_Comm_free ( MPI_Comm *comm )



//****************************************************************************


//

//  Purpose:

//

//    MPI_COMM_FREE frees a communicator.

//

//  Modified:

//

//    05 February 2007

//

//  Parameters:

//

//    Input, MPI_Comm COMM, the MPI communicator.

//

//    Output, int IERROR, is nonzero if an error occurred.

//


{ 

  int ierror;



  ierror = 0;



  return ierror;

}

//****************************************************************************




int MPI_Comm_rank ( MPI_Comm comm, int *me )



//****************************************************************************


//

//  Purpose:

//

//    MPI_COMM_RANK reports the rank of the calling process.

//

//  Modified:

//

//    05 February 2007

//

//  Parameters:

//

//    Input, MPI_Comm COMM, the MPI communicator.

//

//    Output, int IERROR, is nonzero if an error occurred.

//


{

  int ierror;



  ierror = 0;

  *me = 0;



  return ierror;

}

//****************************************************************************




int MPI_Comm_size ( MPI_Comm comm, int *nprocs )



//****************************************************************************


//

//  Purpose:

//

//    MPI_COMM_SIZE reports the number of processes in a communicator.

//

//  Discussion:

//

//    The routine simply returns NPROCS = 1.

//

//  Modified:

//

//    05 February 2007

//

//  Parameters:

//

//    Input, MPI_Comm COMM, the MPI communicator.

//

//    Output, int IERROR, is nonzero if an error occurred.

//


{

  int ierror;



  ierror = 0;

  *nprocs = 1;



  return ierror;

}

//****************************************************************************




int MPI_Comm_split ( MPI_Comm comm, int icolor, int ikey, MPI_Comm *comm_new )



//****************************************************************************


//

//  Purpose:

//

//    MPI_COMM_SPLIT splits up a communicator based on a key.

//

//  Modified:

//

//    05 February 2007

//

//  Parameters:

//

//    Input, MPI_Comm COMM, the MPI communicator.

//

//    Output, MPI_Comm COMM_NEW, the new MPI communicator.

//

//    Output, int IERROR, is nonzero if an error occurred.

//


{

  int ierror;



  ierror = 0;



  return ierror;

}

//****************************************************************************




int mpi_copy_byte ( char *data1, char *data2, int n )



//****************************************************************************


//

//  Purpose:

//

//    MPI_COPY_BYTE copies a byte vector.

//

//  Discussion:

//

//    This routine is not part of the MPI standard.  However, it is

//    needed by other routines which do emulate standard MPI routines.

//

//  Modified:

//

//    06 February 2007

//

//  Parameters:

//

//    Input, char *DATA1, the data to be copied.

//

//    Output, char *DATA2, the copied data.

//

//    Input, int N, the number of items of data.

//

//    Output, int IERROR, is nonzero if an error occurred.

//


{

  int i;

  int ierror;



  ierror = 0;



  for ( i = 0; i < n; i++ ) 

  {

    data2[i] = data1[i];

  }



  return ierror;

}

//****************************************************************************




int mpi_copy_double ( double *data1, double *data2, int n )



//****************************************************************************


//

//  Purpose:

//

//    MPI_COPY_DOUBLE copies a double vector.

//

//  Discussion:

//

//    This routine is not part of the MPI standard.  However, it is

//    needed by other routines which do emulate standard MPI routines.

//

//  Modified:

//

//    06 February 2007

//

//  Parameters:

//

//    Input, double *DATA1, the data to be copied.

//

//    Output, double *DATA2, the copied data.

//

//    Input, int N, the number of items of data.

//

//    Output, int IERROR, is nonzero if an error occurred.

//


{

  int i;

  int ierror;



  ierror = 0;



  for ( i = 0; i < n; i++ ) 

  {

    data2[i] = data1[i];

  }



  return ierror;

}

//****************************************************************************




int mpi_copy_float ( float *data1, float *data2, int n )



//****************************************************************************


//

//  Purpose:

//

//    MPI_COPY_FLOAT copies a float vector.

//

//  Discussion:

//

//    This routine is not part of the MPI standard.  However, it is

//    needed by other routines which do emulate standard MPI routines.

//

//  Modified:

//

//    06 February 2007

//

//  Parameters:

//

//    Input, float *DATA1, the data to be copied.

//

//    Output, float *DATA2, the copied data.

//

//    Input, int N, the number of items of data.

//

//    Output, int IERROR, is nonzero if an error occurred.

//


{

  int i;

  int ierror;



  ierror = 0;



  for ( i = 0; i < n; i++ ) 

  {

    data2[i] = data1[i];

  }



  return ierror;

}

//****************************************************************************




int mpi_copy_int ( int *data1, int *data2, int n )



//****************************************************************************


//

//  Purpose:

//

//    MPI_COPY_INT copies an int vector.

//

//  Discussion:

//

//    This routine is not part of the MPI standard.  However, it is

//    needed by other routines which do emulate standard MPI routines.

//

//  Modified:

//

//    06 February 2007

//

//  Parameters:

//

//    Input, int *DATA1, the data to be copied.

//

//    Output, int *DATA2, the copied data.

//

//    Input, int N, the number of items of data.

//

//    Output, int IERROR, is nonzero if an error occurred.

//


{

  int i;

  int ierror;



  ierror = 0;



  for ( i = 0; i < n; i++ )

  {

    data2[i] = data1[i];

  }



  return ierror;

}

//****************************************************************************




int MPI_Get_count ( MPI_Status status, MPI_Datatype datatype, int icount )



//****************************************************************************


//

//  Purpose:

//

//    MPI_GET_COUNT reports the actual number of items transmitted.

//

//  Discussion:

//

//    Warn against querying message from self, since no data copy is done.

//

//  Modified:

//

//    05 February 2007

//

//  Parameters:

//

//    Output, int IERROR, is nonzero if an error occurred.

//


{

  int ierror;



  ierror = 1;



  printf ( "\n" );

  printf ( "MPI_GET_COUNT - Error!\n" );

  printf ( "  Should not query message from self.\n" );



  return ierror;

}

//****************************************************************************




int MPI_Irecv ( void *buf, int count, MPI_Datatype datatype,

  int source, int tag, MPI_Comm comm, MPI_Request *request )



//****************************************************************************


//

//  Purpose:

//

//   MPI_IRECV receives data from another process.

//

//  Discussion:

//

//    Warn against receiving message from self, since no data copy is done.

//

//    The data to be transferred can be int, float, or double.

//    In this routine, it is declared and documented as VOID.

//

//  Modified:

//

//    05 February 2007

//

//  Parameters:

//

//    Input, MPI_COMM COMM, the MPI communicator.

//

//    Output, int IERROR, is nonzero if an error occurred.

//


{

  int ierror;



  ierror = 1;



  printf ( "\n" );

  printf ( "MPI_Irecv - Error!\n" );

  printf ( "  Should not recv message from self.\n" );



  return ierror;

}

//****************************************************************************




int MPI_Recv ( void *buf, int count, MPI_Datatype datatype,

  int source, int tag, MPI_Comm comm, MPI_Status *status )



//****************************************************************************


//

//  Purpose:

//

//    MPI_RECV receives data from another process within a communicator.

//

//  Discussion:

//

//    Warn against receiving message from self, since no data copy is done.

//

//    The data to be transferred can be int, float, or double.

//    In this routine, it is declared and documented as VOID.

//

//  Modified:

//

//    05 February 2007

//

//  Parameters:

//

//    Input, MPI_COMM COMM, the MPI communicator.

//

//    Output, int IERROR, is nonzero if an error occurred.

//


{

  int ierror;



  ierror = 1;



  printf ( "\n" );

  printf ( "MPI_Recv - Error!\n" );

  printf ( "  Should not recv message from self.\n" );



  return ierror;

}

//****************************************************************************




int MPI_Reduce ( void *data1, void *data2, int n, MPI_Datatype datatype, 

  MPI_Op operation, int receiver, MPI_Comm comm )



//****************************************************************************


//

//  Purpose:

//

//    MPI_REDUCE carries out a reduction operation.

//

//  Discussion:

//

//    The reduction operations are MAXIMUM, MINIMUM, PRODUCT and SUM.

//

//    The first two arguments must not overlap or share memory in any way.

//

//    The data to be transferred can be int, float or double.

//    In this routine, it is declared and documented as VOID. 

//

//  Modified:

//

//    06 February 2007

//

//  Parameters:

//

//    Input, DATATYPE *DATA1, the data to be processed.

//

//    Output, DATATYPE *DATA2, the value of the reduction operation.

//

//    Input, int N, the number of items in DATA1.

//

//    Input, MPI_Datatype DATATYPE, indicates the datatype of DATA1 and DATA2.

//

//    Input, MPI_Op OPERATION, should have the value of one of the symbolic

//    constants MPI_MAX, MPI_MIN, MPI_PRODUCT or MPI_SUM.

//

//    Input, int RECEIVER, the the process that is to receive the

//    result.

//

//    Input, MPI_Comm COMM, the MPI communicator.

//

//    Output, int IERROR, is nonzero if an error occurred.

//


{

  int ierror;



  if ( datatype == MPI_DOUBLE )

  {

    ierror = mpi_reduce_double ( data1, data2, n, operation );

  }

  else if ( datatype == MPI_FLOAT )

  {

    ierror = mpi_reduce_float ( data1, data2, n, operation );

  }

  else if ( datatype == MPI_INT )

  {

    ierror = mpi_reduce_int ( data1, data2, n, operation );

  }

  else

  {

    ierror = 1;

  }

  return ierror;

}

//****************************************************************************




int mpi_reduce_double ( double *data1, double *data2, int n, 

  MPI_Op operation )



//****************************************************************************


//

//  Purpose:

//

//    MPI_REDUCE_DOUBLE carries out a reduction operation on doubles.

//

//  Discussion:

//

//    The reduction operations are sum, maximum, minimum, product.

//

//  Modified:

//

//    05 February 2007

//

//  Parameters:

//

//    Input, double *DATA1, the data to be processed.

//

//    Output, double *DATA2, the value of the reduction operation.

//

//    Input, int N, the number of items in DATA1.

//

//    Input, MPI_Op OPERATION, should have the value of one of the symbolic

//    constants MPI_MAX, MPI_MIN, MPI_PRODUCT or MPI_SUM.

//

//    Output, int IERROR, is nonzero if an error occurred.

//


{

  int i;

  int ierror;



  if ( operation == MPI_MAX )

  {

    *data2 = data1[0];

    for ( i = 1; i < n; i++ )

    {

      if ( *data2 < data1[i] )

      {

        *data2 = data1[i];

      }

    }

  }

  else if ( operation == MPI_MIN )

  {

    *data2 = data1[0];

    for ( i = 1; i < n; i++ )

    {

      if ( data1[i] < *data2 )

      {

        *data2 = data1[i];

      }

    }

  }

  else if ( operation == MPI_PRODUCT )

  {

    *data2 = data1[0];

    for ( i = 1; i < n; i++ )

    {

      *data2 = *data2 * data1[i];

    }

  }

  else if ( operation == MPI_SUM )

  {

    *data2 = data1[0];

    for ( i = 1; i < n; i++ )

    {

      *data2 = *data2 + data1[i];

    }

  }

  else

  {

    ierror = 1;

  }

  return ierror;

}

//****************************************************************************




int mpi_reduce_float ( float *data1, float *data2, int n, 

  MPI_Op operation )



//****************************************************************************


//

//  Purpose:

//

//    MPI_REDUCE_FLOAT carries out a reduction operation on floats.

//

//  Discussion:

//

//    The reduction operations are sum, maximum, minimum, product.

//

//  Modified:

//

//    07 February 2007

//

//  Parameters:

//

//    Input, float *DATA1, the data to be processed.

//

//    Output, float *DATA2, the value of the reduction operation.

//

//    Input, int N, the number of items in DATA1.

//

//    Input, MPI_Op OPERATION, should have the value of one of the symbolic

//    constants MPI_MAX, MPI_MIN, MPI_PRODUCT or MPI_SUM.

//

//    Output, int IERROR, is nonzero if an error occurred.

//


{

  int i;

  int ierror;



  if ( operation == MPI_MAX )

  {

    *data2 = data1[0];

    for ( i = 1; i < n; i++ )

    {

      if ( *data2 < data1[i] )

      {

        *data2 = data1[i];

      }

    }

  }

  else if ( operation == MPI_MIN )

  {

    *data2 = data1[0];

    for ( i = 1; i < n; i++ )

    {

      if ( data1[i] < *data2 )

      {

        *data2 = data1[i];

      }

    }

  }

  else if ( operation == MPI_PRODUCT )

  {

    *data2 = data1[0];

    for ( i = 1; i < n; i++ )

    {

      *data2 = *data2 * data1[i];

    }

  }

  else if ( operation == MPI_SUM )

  {

    *data2 = data1[0];

    for ( i = 1; i < n; i++ )

    {

      *data2 = *data2 + data1[i];

    }

  }

  else

  {

    ierror = 1;

  }

  return ierror;

}

//****************************************************************************




int mpi_reduce_int ( int *data1, int *data2, int n, 

  MPI_Op operation )



//****************************************************************************


//

//  Purpose:

//

//    MPI_REDUCE_INT carries out a reduction operation on ints.

//

//  Discussion:

//

//    The reduction operations are sum, maximum, minimum, product.

//

//  Modified:

//

//    05 February 2007

//

//  Parameters:

//

//    Input, int *DATA1, the data to be processed.

//

//    Output, int *DATA2, the value of the reduction operation.

//

//    Input, int N, the number of items in DATA1.

//

//    Input, MPI_Op OPERATION, should have the value of one of the symbolic

//    constants MPI_MAX, MPI_MIN, MPI_PRODUCT or MPI_SUM.

//

//    Output, int IERROR, is nonzero if an error occurred.

//


{

  int i;

  int ierror;



  if ( operation == MPI_MAX )

  {

    *data2 = data1[0];

    for ( i = 1; i < n; i++ )

    {

      if ( *data2 < data1[i] )

      {

        *data2 = data1[i];

      }

    }

  }

  else if ( operation == MPI_MIN )

  {

    *data2 = data1[0];

    for ( i = 1; i < n; i++ )

    {

      if ( data1[i] < *data2 )

      {

        *data2 = data1[i];

      }

    }

  }

  else if ( operation == MPI_PRODUCT )

  {

    *data2 = data1[0];

    for ( i = 1; i < n; i++ )

    {

      *data2 = *data2 * data1[i];

    }

  }

  else if ( operation == MPI_SUM )

  {

    *data2 = data1[0];

    for ( i = 1; i < n; i++ )

    {

      *data2 = *data2 + data1[i];

    }

  }

  else

  {

    ierror = 1;

  }

  return ierror;

}

//****************************************************************************




int MPI_Reduce_scatter ( void *data1, void *data2, int n,

  MPI_Datatype datatype, MPI_Op operation, MPI_Comm comm )



//****************************************************************************


//

//  Purpose:

//

//    MPI_REDUCE_SCATTER collects a message of the same length from each process.

//

//  Discussion:

//

//    Copy values from DATA1 to DATA2.

//

//    The data to be transferred can be int, flow, or double.

//    In this routine, it is declared and documented as VOID.

//

//  Modified:

//

//    05 February 2007

//

//  Parameters:

//

//    Input, DATATYPE *DATA1, the data to be processed.

//

//    Output, DATATYPE *DATA2, the value of the reduction operation.

//

//    Input, int N, the number of items in DATA1.

//

//    Input, MPI_Datatype DATATYPE, indicates the datatype of DATA1 and DATA2.

//

//    Input, MPI_Op OPERATION, should have the value of one of the symbolic

//    constants MPI_MAX, MPI_MIN, MPI_PRODUCT or MPI_SUM.

//

//    Input, MPI_Comm COMM, the MPI communicator.

//

//    Output, int IERROR, is nonzero if an error occurred.

//


{

  int ierror;



  if ( datatype == MPI_BYTE )

  {

    ierror = mpi_copy_byte ( data1, data2, n );

  }

  else if ( datatype == MPI_DOUBLE )

  {

    ierror = mpi_copy_double ( data1, data2, n );

  }

  else if ( datatype == MPI_FLOAT )

  {

    ierror = mpi_copy_float ( data1, data2, n );

  }

  else if ( datatype == MPI_INT )

  {

    ierror = mpi_copy_int ( data1, data2, n );

  }

  else

  {

    ierror = 1;

  }

  return ierror;

}

//****************************************************************************




int MPI_Rsend ( void *data, int n, MPI_Datatype datatype, int iproc, 

  int itag, MPI_Comm comm )



//****************************************************************************


//

//  Purpose:

//

//    MPI_RSEND "ready sends" data from one process to another.

//

//  Discussion:

//

//    Warn against sending message to self, since no data copy is done.

//

//    The data to be transferred can be int, float, double or byte.

//    In this routine, it is declared and documented as VOID.

//

//  Modified:

//

//    05 February 2007

//

//  Parameters:

//

//    Input, void *DATA[N], the data to be sent.

//

//    Input, int N, the number of data items to send.

//

//    Input, MPI_Datatype DATAYTPE, the MPI code for the datatype.

//

//    Input, int IPROC, the rank of the process within the communicator

//    that is to receive the message.

//

//    Input, int ITAG, a tag for the message.

//

//    Input, MPI_Comm COMM, the MPI communicator.

//

//    Output, int IERROR, is nonzero if an error occurred.

//


{

  int ierror;



  ierror = 1;



  printf ( "\n" );

  printf ( "MPI_Rsend - Error!\n" );

  printf ( "  Should not send message to self.\n" );



  return ierror;

}

//****************************************************************************




int MPI_Send ( void *buf, int count, MPI_Datatype datatype,

  int dest, int tag, MPI_Comm comm )



//****************************************************************************


//

//  Purpose:

//

//    MPI_SEND sends data from one process to another.

//

//  Discussion:

//

//    Warn against sending message to self, since no data copy is done.

//

//    The data to be transferred can be int, float or double.

//    In this routine, it is declared and documented as VOID.

//

//  Modified:

//

//    06 February 2007

//

//  Parameters:

//

//    Input, void *DATA[N], the data to be sent.

//

//    Input, int N, the number of data items to send.

//

//    Input, MPI_Datatype DATAYTPE, the MPI code for the datatype.

//

//    Input, int IPROC, the rank of the process within the communicator

//    that is to receive the message.

//

//    Input, int ITAG, a tag for the message.

//

//    Input, MPI_COMM COMM, the MPI communicator.

//

//    Output, int IERROR, is nonzero if an error occurred.

//


{

  int ierror;



  ierror = 1;



  printf ( "\n" );

  printf ( "MPI_Send - Error!\n" );

  printf ( "  Should not send message to self.\n" );



  return ierror;

}

//****************************************************************************




int MPI_Wait ( MPI_Request *request, MPI_Status *status )



//****************************************************************************


//

//  Purpose:

//

//    MPI_WAIT waits for an I/O request to complete.

//

//  Discussion:

//

//    Warn against waiting on message from self, since no data copy is done.

//

//  Parameters:

//

//    Output, int IERROR, is nonzero if an error occurred.

//


{

  int ierror;



  ierror = 1;



  printf ( "\n" );

  printf ( "MPI_Wait - Error!\n" );

  printf ( "  Should not wait on message from self.\n" );



  return ierror;

}

//****************************************************************************




int MPI_Waitall ( int icount, int irequest, MPI_Status status )



//****************************************************************************


//

//  Purpose:

//

//    MPI_WAITALL waits until all I/O requests have completed.

//

//  Discussion:

//

//    Warn against waiting on message from self, since no data copy is done.

//

//  Modified:

//

//    05 February 2007

//

//  Parameters:

//

//    Output, int IERROR, is nonzero if an error occurred.

//


{

  int ierror;



  ierror = 1;



  printf ( "\n" );

  printf ( "MPI_WAITALL - Error!\n" );

  printf ( "  Should not wait on message from self.\n" );



  return ierror;

}

//****************************************************************************




int MPI_Waitany ( int count, MPI_Request *request, int *index, 

  MPI_Status *status )



//****************************************************************************


//

//  Purpose:

//

//    MPI_WAITANY waits until one I/O requests has completed.

//

//  Discussion:

//

//    Warn against waiting on message from self, since no data copy is done.

//

//  Modified:

//

//    05 February 2007

//

//  Parameters:

//

//    Output, int IERROR, is nonzero if an error occurred.

//


{

  int ierror;



  ierror = 1;



  printf ( "\n" );

  printf ( "MPI_Waitany - Error!\n" );

  printf ( "  Should not wait on message from self.\n" );



  return ierror;

}

