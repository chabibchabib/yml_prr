/*
 * Original Source  : __omni_tmp__/_2f_home_2f_ymlusr_2f_local_2f_var_2f_yml_2f_dr_2f_binaries_2f_erreur_pp.c
 * Language         : C
 * Compiled Time    : 2020-08-17 16:22:14
 * Compiler Info    : XcodeML/C-FrontEnd
 * Compiler Version : 1.1.0
 */
# 1 "__omni_tmp__/_2f_home_2f_ymlusr_2f_local_2f_var_2f_yml_2f_dr_2f_binaries_2f_erreur_pp.c"
typedef unsigned long size_t;
typedef unsigned char __u_char;
typedef unsigned short __u_short;
typedef unsigned int __u_int;
typedef unsigned long __u_long;
typedef char __int8_t;
typedef unsigned char __uint8_t;
typedef short __int16_t;
typedef unsigned short __uint16_t;
typedef int __int32_t;
typedef unsigned int __uint32_t;
typedef long __int64_t;
typedef unsigned long __uint64_t;
typedef long __quad_t;
typedef unsigned long __u_quad_t;
typedef unsigned long __dev_t;
typedef unsigned int __uid_t;
typedef unsigned int __gid_t;
typedef unsigned long __ino_t;
typedef unsigned long __ino64_t;
typedef unsigned int __mode_t;
typedef unsigned long __nlink_t;
typedef long __off_t;
typedef long __off64_t;
typedef int __pid_t;
struct anon_type_1___fsid_t {
int __val[2];
};
typedef struct anon_type_1___fsid_t __fsid_t;
typedef long __clock_t;
typedef unsigned long __rlim_t;
typedef unsigned long __rlim64_t;
typedef unsigned int __id_t;
typedef long __time_t;
typedef unsigned int __useconds_t;
typedef long __suseconds_t;
typedef int __daddr_t;
typedef int __key_t;
typedef int __clockid_t;
typedef void * __timer_t;
typedef long __blksize_t;
typedef long __blkcnt_t;
typedef long __blkcnt64_t;
typedef unsigned long __fsblkcnt_t;
typedef unsigned long __fsblkcnt64_t;
typedef unsigned long __fsfilcnt_t;
typedef unsigned long __fsfilcnt64_t;
typedef long __fsword_t;
typedef long __ssize_t;
typedef long __syscall_slong_t;
typedef unsigned long __syscall_ulong_t;
typedef long __loff_t;
typedef long * __qaddr_t;
typedef char * __caddr_t;
typedef long __intptr_t;
typedef unsigned int __socklen_t;
union anon_type_3___value {
unsigned int __wch;
char __wchb[4];
};
typedef struct anon_type_2___mbstate_t __mbstate_t;
typedef __builtin_va_list __gnuc_va_list;
struct _IO_jump_t {
};
typedef void _IO_lock_t;
enum __codecvt_result {
__codecvt_ok = 0,
__codecvt_partial = 1,
__codecvt_error = 2,
__codecvt_noconv = 3
};
struct _IO_FILE_plus {
};
typedef long __io_read_fn(void * __cookie, char * __buf, unsigned long __nbytes);
typedef long __io_write_fn(void * __cookie, char const * __buf, unsigned long __n);
typedef int __io_seek_fn(void * __cookie, long * __pos, int __w);
typedef int __io_close_fn(void * __cookie);
typedef __builtin_va_list va_list;
typedef long off_t;
typedef long ssize_t;
typedef int wchar_t;
enum anon_type_6_idtype_t {
P_ALL = 0,
P_PID = 1,
P_PGID = 2
};
typedef enum anon_type_6_idtype_t idtype_t;
struct anon_type_7___wait_terminated {
unsigned int __w_termsig:7;
unsigned int __w_coredump:1;
unsigned int __w_retcode:8;
unsigned int anon_mem_1:16;
};
struct anon_type_8___wait_stopped {
unsigned int __w_stopval:8;
unsigned int __w_stopsig:8;
unsigned int anon_mem_2:16;
};
struct anon_type_10_div_t {
int quot;
int rem;
};
typedef struct anon_type_10_div_t div_t;
struct anon_type_11_ldiv_t {
long quot;
long rem;
};
typedef struct anon_type_11_ldiv_t ldiv_t;
struct anon_type_12_lldiv_t {
long long quot;
long long rem;
};
__extension__ typedef struct anon_type_12_lldiv_t lldiv_t;
typedef unsigned char u_char;
typedef unsigned short u_short;
typedef unsigned int u_int;
typedef unsigned long u_long;
typedef long quad_t;
typedef unsigned long u_quad_t;
typedef struct anon_type_1___fsid_t fsid_t;
typedef long loff_t;
typedef unsigned long ino_t;
typedef unsigned long dev_t;
typedef unsigned int gid_t;
typedef unsigned int mode_t;
typedef unsigned long nlink_t;
typedef unsigned int uid_t;
typedef int pid_t;
typedef unsigned int id_t;
typedef int daddr_t;
typedef char * caddr_t;
typedef int key_t;
typedef long clock_t;
typedef long time_t;
typedef int clockid_t;
typedef void * timer_t;
typedef unsigned long ulong;
typedef unsigned short ushort;
typedef unsigned int uint;
typedef int __attribute__((mode(__QI__))) int8_t;
typedef int __attribute__((mode(__HI__))) int16_t;
typedef int __attribute__((mode(__SI__))) int32_t;
typedef int __attribute__((mode(__DI__))) int64_t;
typedef unsigned int __attribute__((mode(__QI__))) u_int8_t;
typedef unsigned int __attribute__((mode(__HI__))) u_int16_t;
typedef unsigned int __attribute__((mode(__SI__))) u_int32_t;
typedef unsigned int __attribute__((mode(__DI__))) u_int64_t;
typedef int __attribute__((mode(__word__))) register_t;
typedef int __sig_atomic_t;
struct anon_type_13___sigset_t {
unsigned long __val[(1024) / ((8) * (sizeof(unsigned long)))];
};
typedef struct anon_type_13___sigset_t __sigset_t;
typedef struct anon_type_13___sigset_t sigset_t;
struct timespec {
long tv_sec;
long tv_nsec;
};
struct timeval {
long tv_sec;
long tv_usec;
};
typedef long suseconds_t;
typedef long __fd_mask;
struct anon_type_14_fd_set {
long __fds_bits[(1024) / ((8) * ((int)(sizeof(long))))];
};
typedef struct anon_type_14_fd_set fd_set;
typedef long fd_mask;
typedef long blksize_t;
typedef long blkcnt_t;
typedef unsigned long fsblkcnt_t;
typedef unsigned long fsfilcnt_t;
typedef unsigned long pthread_t;
union pthread_attr_t {
char __size[56];
long __align;
};
typedef union pthread_attr_t pthread_attr_t;
union anon_type_16_pthread_mutexattr_t {
char __size[4];
int __align;
};
typedef union anon_type_16_pthread_mutexattr_t pthread_mutexattr_t;
struct anon_type_18___data {
int __lock;
unsigned int __futex;
__extension__ unsigned long long __total_seq;
__extension__ unsigned long long __wakeup_seq;
__extension__ unsigned long long __woken_seq;
void * __mutex;
unsigned int __nwaiters;
unsigned int __broadcast_seq;
};
typedef union anon_type_17_pthread_cond_t pthread_cond_t;
union anon_type_19_pthread_condattr_t {
char __size[4];
int __align;
};
typedef union anon_type_19_pthread_condattr_t pthread_condattr_t;
typedef unsigned int pthread_key_t;
typedef int pthread_once_t;
struct anon_type_21___data {
int __lock;
unsigned int __nr_readers;
unsigned int __readers_wakeup;
unsigned int __writer_wakeup;
unsigned int __nr_readers_queued;
unsigned int __nr_writers_queued;
int __writer;
int __shared;
unsigned long __pad1;
unsigned long __pad2;
unsigned int __flags;
};
typedef union anon_type_20_pthread_rwlock_t pthread_rwlock_t;
union anon_type_22_pthread_rwlockattr_t {
char __size[8];
long __align;
};
typedef union anon_type_22_pthread_rwlockattr_t pthread_rwlockattr_t;
typedef int volatile pthread_spinlock_t;
union anon_type_23_pthread_barrier_t {
char __size[32];
long __align;
};
typedef union anon_type_23_pthread_barrier_t pthread_barrier_t;
union anon_type_24_pthread_barrierattr_t {
char __size[4];
int __align;
};
typedef union anon_type_24_pthread_barrierattr_t pthread_barrierattr_t;
struct random_data {
typeof(int __attribute__((mode(__SI__)))) * fptr;
typeof(int __attribute__((mode(__SI__)))) * rptr;
typeof(int __attribute__((mode(__SI__)))) * state;
int rand_type;
int rand_deg;
int rand_sep;
typeof(int __attribute__((mode(__SI__)))) * end_ptr;
};
struct drand48_data {
unsigned short __x[3];
unsigned short __old_x[3];
unsigned short __c;
unsigned short __init;
__extension__ unsigned long long __a;
};
typedef int (* __compar_fn_t)(void const * , void const * );
struct __locale_data {
};
typedef float float_t;
typedef double double_t;
enum anon_type_25 {
FP_NAN = 0,
FP_INFINITE = 1,
FP_ZERO = 2,
FP_SUBNORMAL = 3,
FP_NORMAL = 4
};
enum anon_type_26__LIB_VERSION_TYPE {
_IEEE_ = -1,
_SVID_ = 0,
_XOPEN_ = 1,
_POSIX_ = 2,
_ISOC_ = 3
};
typedef enum anon_type_26__LIB_VERSION_TYPE _LIB_VERSION_TYPE;
struct exception {
int type;
char * name;
double arg1;
double arg2;
double retval;
};
typedef long ptrdiff_t;
typedef long MPI_Aint;
typedef long long MPI_Offset;
struct ompi_communicator_t {
};
typedef struct ompi_communicator_t * MPI_Comm;
struct ompi_datatype_t {
};
typedef struct ompi_datatype_t * MPI_Datatype;
struct ompi_errhandler_t {
};
typedef struct ompi_errhandler_t * MPI_Errhandler;
struct ompi_file_t {
};
typedef struct ompi_file_t * MPI_File;
struct ompi_group_t {
};
typedef struct ompi_group_t * MPI_Group;
struct ompi_info_t {
};
typedef struct ompi_info_t * MPI_Info;
struct ompi_op_t {
};
typedef struct ompi_op_t * MPI_Op;
struct ompi_request_t {
};
typedef struct ompi_request_t * MPI_Request;
typedef struct ompi_status_public_t MPI_Status;
struct ompi_win_t {
};
typedef struct ompi_win_t * MPI_Win;
struct ompi_status_public_t {
int MPI_SOURCE;
int MPI_TAG;
int MPI_ERROR;
int _cancelled;
unsigned long _ucount;
};
typedef struct ompi_status_public_t ompi_status_public_t;
typedef int MPI_Copy_function(struct ompi_communicator_t * , int, void * , void * , void * , int * );
typedef int MPI_Delete_function(struct ompi_communicator_t * , int, void * , void * );
typedef int MPI_Datarep_extent_function(struct ompi_datatype_t * , long * , void * );
typedef int MPI_Datarep_conversion_function(void * , struct ompi_datatype_t * , int, void * , long long, void * );
typedef void MPI_Comm_errhandler_function(struct ompi_communicator_t * * , int * , ...);
typedef void MPI_Comm_errhandler_fn(struct ompi_communicator_t * * , int * , ...);
typedef void ompi_file_errhandler_fn(struct ompi_file_t * * , int * , ...);
typedef void MPI_File_errhandler_fn(struct ompi_file_t * * , int * , ...);
typedef void MPI_File_errhandler_function(struct ompi_file_t * * , int * , ...);
typedef void MPI_Win_errhandler_function(struct ompi_win_t * * , int * , ...);
typedef void MPI_Win_errhandler_fn(struct ompi_win_t * * , int * , ...);
typedef void MPI_Handler_function(struct ompi_communicator_t * * , int * , ...);
typedef void MPI_User_function(void * , void * , int * , struct ompi_datatype_t * * );
typedef int MPI_Comm_copy_attr_function(struct ompi_communicator_t * , int, void * , void * , void * , int * );
typedef int MPI_Comm_delete_attr_function(struct ompi_communicator_t * , int, void * , void * );
typedef int MPI_Type_copy_attr_function(struct ompi_datatype_t * , int, void * , void * , void * , int * );
typedef int MPI_Type_delete_attr_function(struct ompi_datatype_t * , int, void * , void * );
typedef int MPI_Win_copy_attr_function(struct ompi_win_t * , int, void * , void * , void * , int * );
typedef int MPI_Win_delete_attr_function(struct ompi_win_t * , int, void * , void * );
typedef int MPI_Grequest_query_function(void * , struct ompi_status_public_t * );
typedef int MPI_Grequest_free_function(void * );
typedef int MPI_Grequest_cancel_function(void * , int);
enum anon_type_28 {
MPI_TAG_UB = 0,
MPI_HOST = 1,
MPI_IO = 2,
MPI_WTIME_IS_GLOBAL = 3,
MPI_APPNUM = 4,
MPI_LASTUSEDCODE = 5,
MPI_UNIVERSE_SIZE = 6,
MPI_WIN_BASE = 7,
MPI_WIN_SIZE = 8,
MPI_WIN_DISP_UNIT = 9,
IMPI_CLIENT_SIZE = 10,
IMPI_CLIENT_COLOR = 11,
IMPI_HOST_SIZE = 12,
IMPI_HOST_COLOR = 13
};
enum anon_type_29 {
MPI_IDENT = 0,
MPI_CONGRUENT = 1,
MPI_SIMILAR = 2,
MPI_UNEQUAL = 3
};
enum anon_type_30 {
MPI_THREAD_SINGLE = 0,
MPI_THREAD_FUNNELED = 1,
MPI_THREAD_SERIALIZED = 2,
MPI_THREAD_MULTIPLE = 3
};
enum anon_type_31 {
MPI_COMBINER_NAMED = 0,
MPI_COMBINER_DUP = 1,
MPI_COMBINER_CONTIGUOUS = 2,
MPI_COMBINER_VECTOR = 3,
MPI_COMBINER_HVECTOR_INTEGER = 4,
MPI_COMBINER_HVECTOR = 5,
MPI_COMBINER_INDEXED = 6,
MPI_COMBINER_HINDEXED_INTEGER = 7,
MPI_COMBINER_HINDEXED = 8,
MPI_COMBINER_INDEXED_BLOCK = 9,
MPI_COMBINER_STRUCT_INTEGER = 10,
MPI_COMBINER_STRUCT = 11,
MPI_COMBINER_SUBARRAY = 12,
MPI_COMBINER_DARRAY = 13,
MPI_COMBINER_F90_REAL = 14,
MPI_COMBINER_F90_COMPLEX = 15,
MPI_COMBINER_F90_INTEGER = 16,
MPI_COMBINER_RESIZED = 17
};
struct ompi_predefined_communicator_t {
};
struct ompi_predefined_group_t {
};
struct ompi_predefined_request_t {
};
struct ompi_predefined_op_t {
};
struct ompi_predefined_datatype_t {
};
struct ompi_predefined_errhandler_t {
};
struct ompi_predefined_win_t {
};
struct ompi_predefined_file_t {
};
struct ompi_predefined_info_t {
};
typedef void * xmp_desc_t;
struct anon_type_32_Map_Info_t {
int size[4];
int dataDim;
int nodes[4];
int nodesDim;
int distribution[4];
char algn[4];
char temp[4];
};
typedef struct anon_type_32_Map_Info_t Map_Info_t;
typedef double XMP_Matrix;
typedef double * Matrix;
typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
typedef unsigned long uint64_t;
typedef char int_least8_t;
typedef short int_least16_t;
typedef int int_least32_t;
typedef long int_least64_t;
typedef unsigned char uint_least8_t;
typedef unsigned short uint_least16_t;
typedef unsigned int uint_least32_t;
typedef unsigned long uint_least64_t;
typedef char int_fast8_t;
typedef long int_fast16_t;
typedef long int_fast32_t;
typedef long int_fast64_t;
typedef unsigned char uint_fast8_t;
typedef unsigned long uint_fast16_t;
typedef unsigned long uint_fast32_t;
typedef unsigned long uint_fast64_t;
typedef long intptr_t;
typedef unsigned long uintptr_t;
typedef long intmax_t;
typedef unsigned long uintmax_t;
typedef double real;
typedef double err_type;
struct _IO_marker;
struct _IO_FILE;
typedef struct _IO_FILE FILE;
typedef struct _IO_FILE __FILE;
struct anon_type_2___mbstate_t {
int __count;
union anon_type_3___value __value;
};
struct anon_type_4__G_fpos_t {
long __pos;
struct anon_type_2___mbstate_t __state;
};
typedef struct anon_type_4__G_fpos_t _G_fpos_t;
struct anon_type_5__G_fpos64_t {
long __pos;
struct anon_type_2___mbstate_t __state;
};
typedef struct anon_type_5__G_fpos64_t _G_fpos64_t;
struct _IO_marker {
struct _IO_marker * _next;
struct _IO_FILE * _sbuf;
int _pos;
};
struct _IO_FILE {
int _flags;
char * _IO_read_ptr;
char * _IO_read_end;
char * _IO_read_base;
char * _IO_write_base;
char * _IO_write_ptr;
char * _IO_write_end;
char * _IO_buf_base;
char * _IO_buf_end;
char * _IO_save_base;
char * _IO_backup_base;
char * _IO_save_end;
struct _IO_marker * _markers;
struct _IO_FILE * _chain;
int _fileno;
int _flags2;
long _old_offset;
unsigned short _cur_column;
char _vtable_offset;
char _shortbuf[1];
void * _lock;
long _offset;
void * __pad1;
void * __pad2;
void * __pad3;
void * __pad4;
unsigned long __pad5;
int _mode;
char _unused2[(((15) * (sizeof(int))) - ((4) * (sizeof(void * )))) - (sizeof(unsigned long))];
};
typedef struct _IO_FILE _IO_FILE;
typedef struct anon_type_4__G_fpos_t fpos_t;
union wait {
int w_status;
struct anon_type_7___wait_terminated __wait_terminated;
struct anon_type_8___wait_stopped __wait_stopped;
};
union anon_type_9 {
union wait * __uptr;
int * __iptr;
};
typedef union anon_type_9 __attribute__((transparent_union)) __WAIT_STATUS;
struct __pthread_internal_list;
struct __pthread_internal_list {
struct __pthread_internal_list * __prev;
struct __pthread_internal_list * __next;
};
typedef struct __pthread_internal_list __pthread_list_t;
struct __pthread_mutex_s {
int __lock;
unsigned int __count;
int __owner;
unsigned int __nusers;
int __kind;
short __spins;
short __elision;
struct __pthread_internal_list __list;
};
typedef union anon_type_15_pthread_mutex_t pthread_mutex_t;
union anon_type_17_pthread_cond_t {
struct anon_type_18___data __data;
char __size[48];
__extension__ long long __align;
};
union anon_type_20_pthread_rwlock_t {
struct anon_type_21___data __data;
char __size[56];
long __align;
};
struct __locale_struct {
struct __locale_data * __locales[13];
unsigned short const * __ctype_b;
int const * __ctype_tolower;
int const * __ctype_toupper;
char const * __names[13];
};
typedef struct __locale_struct * __locale_t;
typedef struct __locale_struct * locale_t;
union anon_type_15_pthread_mutex_t {
struct __pthread_mutex_s __data;
char __size[40];
long __align;
};
# include "xmp_func_decl.h"
# include "xmp_index_macro.h"
# include "xmp_comm_macro.h"
static void * _XMP_DESC__XMP_default_nodes;
static int _XMP_NODES_RANK__XMP_default_nodes_0;
static int _XMP_NODES_RANK__XMP_default_nodes_1;
static void * _XMP_DESC_t;
double * _XMP_ADDR_A;
static void * _XMP_DESC_A;
static unsigned long long _XMP_GTOL_acc_A_0;
static unsigned long long _XMP_GTOL_acc_A_1;
static int _XMP_GTOL_temp0_A_0;
static int _XMP_GTOL_temp0_A_1;
double * _XMP_ADDR_vec;
static void * _XMP_DESC_vec;
static unsigned long long _XMP_GTOL_acc_vec_0;
static unsigned long long _XMP_GTOL_acc_vec_1;
static int _XMP_GTOL_temp0_vec_0;
static int _XMP_GTOL_temp0_vec_1;
double * _XMP_ADDR_res;
static void * _XMP_DESC_res;
static unsigned long long _XMP_GTOL_acc_res_0;
static unsigned long long _XMP_GTOL_acc_res_1;
static int _XMP_GTOL_temp0_res_1;
double * _XMP_ADDR_Id;
static void * _XMP_DESC_Id;
static unsigned long long _XMP_GTOL_acc_Id_0;
static unsigned long long _XMP_GTOL_acc_Id_1;
static int _XMP_GTOL_temp0_Id_0;
static int _XMP_GTOL_temp0_Id_1;
double * _XMP_ADDR_M;
static void * _XMP_DESC_M;
static unsigned long long _XMP_GTOL_acc_M_0;
static unsigned long long _XMP_GTOL_acc_M_1;
static int _XMP_GTOL_temp0_M_0;
static int _XMP_GTOL_temp0_M_1;
double * _XMP_ADDR_tmp1;
static void * _XMP_DESC_tmp1;
static unsigned long long _XMP_GTOL_acc_tmp1_0;
static int _XMP_GTOL_temp0_tmp1_0;
double * _XMP_ADDR_tmp2;
static void * _XMP_DESC_tmp2;
static unsigned long long _XMP_GTOL_acc_tmp2_0;
static int _XMP_GTOL_temp0_tmp2_0;
double * _XMP_ADDR_erreur;
static void * _XMP_DESC_erreur;
static unsigned long long _XMP_GTOL_acc_erreur_0;
static int _XMP_GTOL_temp0_erreur_0;
extern void xmpc_traverse_init_file__2f_home_2f_ymlusr_2f_local_2f_var_2f_yml_2f_dr_2f_binaries_2f_erreur_pp();
extern void xmpc_traverse_finalize_file__2f_home_2f_ymlusr_2f_local_2f_var_2f_yml_2f_dr_2f_binaries_2f_erreur_pp();
# 320 "/usr/include/libio.h"
extern struct _IO_FILE_plus _IO_2_1_stdin_;
# 321 "/usr/include/libio.h"
extern struct _IO_FILE_plus _IO_2_1_stdout_;
# 322 "/usr/include/libio.h"
extern struct _IO_FILE_plus _IO_2_1_stderr_;
extern int __underflow(struct _IO_FILE * );
extern int __uflow(struct _IO_FILE * );
extern int __overflow(struct _IO_FILE * , int);
extern int _IO_getc(struct _IO_FILE * __fp);
extern int _IO_putc(int __c, struct _IO_FILE * __fp);
extern __attribute__((nothrow, leaf)) int _IO_feof(struct _IO_FILE * __fp);
extern __attribute__((nothrow, leaf)) int _IO_ferror(struct _IO_FILE * __fp);
extern int _IO_peekc_locked(struct _IO_FILE * __fp);
extern __attribute__((nothrow, leaf)) void _IO_flockfile(struct _IO_FILE * );
extern __attribute__((nothrow, leaf)) void _IO_funlockfile(struct _IO_FILE * );
extern __attribute__((nothrow, leaf)) int _IO_ftrylockfile(struct _IO_FILE * );
extern int _IO_vfscanf(struct _IO_FILE * restrict, char const * restrict, __builtin_va_list, int * restrict);
extern int _IO_vfprintf(struct _IO_FILE * restrict, char const * restrict, __builtin_va_list);
extern long _IO_padn(struct _IO_FILE * , int, long);
extern unsigned long _IO_sgetn(struct _IO_FILE * , void * , unsigned long);
extern long _IO_seekoff(struct _IO_FILE * , long, int, int);
extern long _IO_seekpos(struct _IO_FILE * , long, int);
extern __attribute__((nothrow, leaf)) void _IO_free_backup_area(struct _IO_FILE * );
# 168 "/usr/include/stdio.h"
extern struct _IO_FILE * stdin;
# 169 "/usr/include/stdio.h"
extern struct _IO_FILE * stdout;
# 170 "/usr/include/stdio.h"
extern struct _IO_FILE * stderr;
extern __attribute__((nothrow, leaf)) int remove(char const * __filename);
extern __attribute__((nothrow, leaf)) int rename(char const * __old, char const * __new);
extern __attribute__((nothrow, leaf)) int renameat(int __oldfd, char const * __old, int __newfd, char const * __new);
extern __attribute__((warn_unused_result)) struct _IO_FILE * tmpfile(void);
extern __attribute__((nothrow, leaf, warn_unused_result)) char * tmpnam(char * __s);
extern __attribute__((nothrow, leaf, warn_unused_result)) char * tmpnam_r(char * __s);
extern __attribute__((nothrow, leaf, malloc, warn_unused_result)) char * tempnam(char const * __dir, char const * __pfx);
extern int fclose(struct _IO_FILE * __stream);
extern int fflush(struct _IO_FILE * __stream);
extern int fflush_unlocked(struct _IO_FILE * __stream);
extern __attribute__((warn_unused_result)) struct _IO_FILE * fopen(char const * restrict __filename, char const * restrict __modes);
extern __attribute__((warn_unused_result)) struct _IO_FILE * freopen(char const * restrict __filename, char const * restrict __modes, struct _IO_FILE * restrict __stream);
extern __attribute__((nothrow, leaf, warn_unused_result)) struct _IO_FILE * fdopen(int __fd, char const * __modes);
extern __attribute__((nothrow, leaf, warn_unused_result)) struct _IO_FILE * fmemopen(void * __s, unsigned long __len, char const * __modes);
extern __attribute__((nothrow, leaf, warn_unused_result)) struct _IO_FILE * open_memstream(char * * __bufloc, unsigned long * __sizeloc);
extern __attribute__((nothrow, leaf)) void setbuf(struct _IO_FILE * restrict __stream, char * restrict __buf);
extern __attribute__((nothrow, leaf)) int setvbuf(struct _IO_FILE * restrict __stream, char * restrict __buf, int __modes, unsigned long __n);
extern __attribute__((nothrow, leaf)) void setbuffer(struct _IO_FILE * restrict __stream, char * restrict __buf, unsigned long __size);
extern __attribute__((nothrow, leaf)) void setlinebuf(struct _IO_FILE * __stream);
extern inline int __attribute__((gnu_inline)) fprintf(struct _IO_FILE * restrict __stream, char const * restrict __fmt, ...);
extern inline int __attribute__((gnu_inline)) printf(char const * restrict __fmt, ...);
extern inline int __attribute__((gnu_inline)) sprintf(char * restrict __s, char const * restrict __fmt, ...);
extern inline int __attribute__((gnu_inline)) vfprintf(struct _IO_FILE * restrict __stream, char const * restrict __fmt, __builtin_va_list __ap);
extern inline int __attribute__((gnu_inline)) vprintf(char const * restrict __fmt, __builtin_va_list __ap);
extern inline int __attribute__((gnu_inline)) vsprintf(char * restrict __s, char const * restrict __fmt, __builtin_va_list __ap);
extern inline __attribute__((format(__printf__, 3, 4))) int __attribute__((gnu_inline)) snprintf(char * restrict __s, unsigned long __n, char const * restrict __fmt, ...);
extern inline __attribute__((format(__printf__, 3, 0))) int __attribute__((gnu_inline)) vsnprintf(char * restrict __s, unsigned long __n, char const * restrict __fmt, __builtin_va_list __ap);
extern inline __attribute__((format(__printf__, 2, 0))) int __attribute__((gnu_inline)) vdprintf(int __fd, char const * restrict __fmt, __builtin_va_list __ap);
extern inline __attribute__((format(__printf__, 2, 3))) int __attribute__((gnu_inline)) dprintf(int __fd, char const * restrict __fmt, ...);
extern __attribute__((warn_unused_result)) int fscanf(struct _IO_FILE * restrict __stream, char const * restrict __format, ...);
extern __attribute__((warn_unused_result)) int scanf(char const * restrict __format, ...);
extern __attribute__((nothrow, leaf)) int sscanf(char const * restrict __s, char const * restrict __format, ...);
extern __attribute__((warn_unused_result)) int fscanf(struct _IO_FILE * restrict __stream, char const * restrict __format, ...) __asm__("__isoc99_fscanf");
extern __attribute__((warn_unused_result)) int scanf(char const * restrict __format, ...) __asm__("__isoc99_scanf");
extern __attribute__((nothrow, leaf)) int sscanf(char const * restrict __s, char const * restrict __format, ...) __asm__("__isoc99_sscanf");
extern __attribute__((format(__scanf__, 2, 0), format(__scanf__, 2, 0), warn_unused_result)) int vfscanf(struct _IO_FILE * restrict __s, char const * restrict __format, __builtin_va_list __arg);
extern __attribute__((format(__scanf__, 1, 0), format(__scanf__, 1, 0), warn_unused_result)) int vscanf(char const * restrict __format, __builtin_va_list __arg);
extern __attribute__((format(__scanf__, 2, 0), nothrow, leaf, format(__scanf__, 2, 0))) int vsscanf(char const * restrict __s, char const * restrict __format, __builtin_va_list __arg);
extern __attribute__((format(__scanf__, 2, 0), format(__scanf__, 2, 0), warn_unused_result)) int vfscanf(struct _IO_FILE * restrict __s, char const * restrict __format, __builtin_va_list __arg) __asm__("__isoc99_vfscanf");
extern __attribute__((format(__scanf__, 1, 0), format(__scanf__, 1, 0), warn_unused_result)) int vscanf(char const * restrict __format, __builtin_va_list __arg) __asm__("__isoc99_vscanf");
extern __attribute__((format(__scanf__, 2, 0), nothrow, leaf, format(__scanf__, 2, 0))) int vsscanf(char const * restrict __s, char const * restrict __format, __builtin_va_list __arg) __asm__("__isoc99_vsscanf");
extern int fgetc(struct _IO_FILE * __stream);
extern int getc(struct _IO_FILE * __stream);
extern inline int __attribute__((gnu_inline)) getchar(void);
extern inline int __attribute__((gnu_inline)) getc_unlocked(struct _IO_FILE * __fp);
extern inline int __attribute__((gnu_inline)) getchar_unlocked(void);
extern inline int __attribute__((gnu_inline)) fgetc_unlocked(struct _IO_FILE * __fp);
extern int fputc(int __c, struct _IO_FILE * __stream);
extern int putc(int __c, struct _IO_FILE * __stream);
extern inline int __attribute__((gnu_inline)) putchar(int __c);
extern inline int __attribute__((gnu_inline)) fputc_unlocked(int __c, struct _IO_FILE * __stream);
extern inline int __attribute__((gnu_inline)) putc_unlocked(int __c, struct _IO_FILE * __stream);
extern inline int __attribute__((gnu_inline)) putchar_unlocked(int __c);
extern int getw(struct _IO_FILE * __stream);
extern int putw(int __w, struct _IO_FILE * __stream);
extern inline char * __attribute__((gnu_inline)) fgets(char * restrict __s, int __n, struct _IO_FILE * restrict __stream);
extern inline __attribute__((deprecated)) char * __attribute__((gnu_inline)) gets(char * __str);
extern __attribute__((warn_unused_result)) long __getdelim(char * * restrict __lineptr, unsigned long * restrict __n, int __delimiter, struct _IO_FILE * restrict __stream);
extern __attribute__((warn_unused_result)) long getdelim(char * * restrict __lineptr, unsigned long * restrict __n, int __delimiter, struct _IO_FILE * restrict __stream);
extern __attribute__((warn_unused_result)) long getline(char * * restrict __lineptr, unsigned long * restrict __n, struct _IO_FILE * restrict __stream);
extern int fputs(char const * restrict __s, struct _IO_FILE * restrict __stream);
extern int puts(char const * __s);
extern int ungetc(int __c, struct _IO_FILE * __stream);
extern inline unsigned long __attribute__((gnu_inline)) fread(void * restrict __ptr, unsigned long __size, unsigned long __n, struct _IO_FILE * restrict __stream);
extern unsigned long fwrite(void const * restrict __ptr, unsigned long __size, unsigned long __n, struct _IO_FILE * restrict __s);
extern inline unsigned long __attribute__((gnu_inline)) fread_unlocked(void * restrict __ptr, unsigned long __size, unsigned long __n, struct _IO_FILE * restrict __stream);
extern unsigned long fwrite_unlocked(void const * restrict __ptr, unsigned long __size, unsigned long __n, struct _IO_FILE * restrict __stream);
extern int fseek(struct _IO_FILE * __stream, long __off, int __whence);
extern __attribute__((warn_unused_result)) long ftell(struct _IO_FILE * __stream);
extern void rewind(struct _IO_FILE * __stream);
extern int fseeko(struct _IO_FILE * __stream, long __off, int __whence);
extern __attribute__((warn_unused_result)) long ftello(struct _IO_FILE * __stream);
extern int fgetpos(struct _IO_FILE * restrict __stream, struct anon_type_4__G_fpos_t * restrict __pos);
extern int fsetpos(struct _IO_FILE * __stream, struct anon_type_4__G_fpos_t const * __pos);
extern __attribute__((nothrow, leaf)) void clearerr(struct _IO_FILE * __stream);
extern __attribute__((nothrow, leaf, warn_unused_result)) int feof(struct _IO_FILE * __stream);
extern __attribute__((nothrow, leaf, warn_unused_result)) int ferror(struct _IO_FILE * __stream);
extern __attribute__((nothrow, leaf)) void clearerr_unlocked(struct _IO_FILE * __stream);
extern inline __attribute__((warn_unused_result)) int __attribute__((gnu_inline)) feof_unlocked(struct _IO_FILE * __stream);
extern inline __attribute__((warn_unused_result)) int __attribute__((gnu_inline)) ferror_unlocked(struct _IO_FILE * __stream);
extern void perror(char const * __s);
# 26 "/usr/include/x86_64-linux-gnu/bits/sys_errlist.h"
extern int sys_nerr;
# 27 "/usr/include/x86_64-linux-gnu/bits/sys_errlist.h"
extern char const * const sys_errlist[];
extern __attribute__((nothrow, leaf, warn_unused_result)) int fileno(struct _IO_FILE * __stream);
extern __attribute__((nothrow, leaf, warn_unused_result)) int fileno_unlocked(struct _IO_FILE * __stream);
extern __attribute__((warn_unused_result)) struct _IO_FILE * popen(char const * __command, char const * __modes);
extern int pclose(struct _IO_FILE * __stream);
extern __attribute__((nothrow, leaf)) char * ctermid(char * __s);
extern __attribute__((nothrow, leaf)) void flockfile(struct _IO_FILE * __stream);
extern __attribute__((nothrow, leaf, warn_unused_result)) int ftrylockfile(struct _IO_FILE * __stream);
extern __attribute__((nothrow, leaf)) void funlockfile(struct _IO_FILE * __stream);
# 43 "/usr/include/x86_64-linux-gnu/bits/stdio.h"
extern inline int __attribute__((gnu_inline)) getchar(void)
{
# 46 "/usr/include/x86_64-linux-gnu/bits/stdio.h"
return _IO_getc(stdin);
}
# 52 "/usr/include/x86_64-linux-gnu/bits/stdio.h"
extern inline int __attribute__((gnu_inline)) fgetc_unlocked(struct _IO_FILE * __fp)
{
# 55 "/usr/include/x86_64-linux-gnu/bits/stdio.h"
return (__builtin_expect((__fp->_IO_read_ptr) >= (__fp->_IO_read_end), 0)) ?(__uflow(__fp)) : (*((unsigned char * )((__fp->_IO_read_ptr)++)));
}
# 62 "/usr/include/x86_64-linux-gnu/bits/stdio.h"
extern inline int __attribute__((gnu_inline)) getc_unlocked(struct _IO_FILE * __fp)
{
# 65 "/usr/include/x86_64-linux-gnu/bits/stdio.h"
return (__builtin_expect((__fp->_IO_read_ptr) >= (__fp->_IO_read_end), 0)) ?(__uflow(__fp)) : (*((unsigned char * )((__fp->_IO_read_ptr)++)));
}
# 69 "/usr/include/x86_64-linux-gnu/bits/stdio.h"
extern inline int __attribute__((gnu_inline)) getchar_unlocked(void)
{
# 72 "/usr/include/x86_64-linux-gnu/bits/stdio.h"
return (__builtin_expect((stdin->_IO_read_ptr) >= (stdin->_IO_read_end), 0)) ?(__uflow(stdin)) : (*((unsigned char * )((stdin->_IO_read_ptr)++)));
}
# 78 "/usr/include/x86_64-linux-gnu/bits/stdio.h"
extern inline int __attribute__((gnu_inline)) putchar(int __c)
{
# 81 "/usr/include/x86_64-linux-gnu/bits/stdio.h"
return _IO_putc(__c, stdout);
}
# 87 "/usr/include/x86_64-linux-gnu/bits/stdio.h"
extern inline int __attribute__((gnu_inline)) fputc_unlocked(int __c, struct _IO_FILE * __stream)
{
# 90 "/usr/include/x86_64-linux-gnu/bits/stdio.h"
return (__builtin_expect((__stream->_IO_write_ptr) >= (__stream->_IO_write_end), 0)) ?(__overflow(__stream, (unsigned char)(__c))) : ((unsigned char)((*((__stream->_IO_write_ptr)++)) = __c));
}
# 97 "/usr/include/x86_64-linux-gnu/bits/stdio.h"
extern inline int __attribute__((gnu_inline)) putc_unlocked(int __c, struct _IO_FILE * __stream)
{
# 100 "/usr/include/x86_64-linux-gnu/bits/stdio.h"
return (__builtin_expect((__stream->_IO_write_ptr) >= (__stream->_IO_write_end), 0)) ?(__overflow(__stream, (unsigned char)(__c))) : ((unsigned char)((*((__stream->_IO_write_ptr)++)) = __c));
}
# 104 "/usr/include/x86_64-linux-gnu/bits/stdio.h"
extern inline int __attribute__((gnu_inline)) putchar_unlocked(int __c)
{
# 107 "/usr/include/x86_64-linux-gnu/bits/stdio.h"
return (__builtin_expect((stdout->_IO_write_ptr) >= (stdout->_IO_write_end), 0)) ?(__overflow(stdout, (unsigned char)(__c))) : ((unsigned char)((*((stdout->_IO_write_ptr)++)) = __c));
}
# 124 "/usr/include/x86_64-linux-gnu/bits/stdio.h"
extern inline __attribute__((nothrow, leaf)) int __attribute__((gnu_inline)) feof_unlocked(struct _IO_FILE * __stream)
{
# 127 "/usr/include/x86_64-linux-gnu/bits/stdio.h"
return ((__stream->_flags) & (16)) != (0);
}
# 131 "/usr/include/x86_64-linux-gnu/bits/stdio.h"
extern inline __attribute__((nothrow, leaf)) int __attribute__((gnu_inline)) ferror_unlocked(struct _IO_FILE * __stream)
{
# 134 "/usr/include/x86_64-linux-gnu/bits/stdio.h"
return ((__stream->_flags) & (32)) != (0);
}
extern __attribute__((nothrow, leaf)) int __sprintf_chk(char * restrict __s, int __flag, unsigned long __slen, char const * restrict __format, ...);
extern __attribute__((nothrow, leaf)) int __vsprintf_chk(char * restrict __s, int __flag, unsigned long __slen, char const * restrict __format, __builtin_va_list __ap);
# 30 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"
extern inline __attribute__((nothrow, leaf, always_inline, artificial)) int __attribute__((gnu_inline)) sprintf(char * restrict __s, char const * restrict __fmt, ...)
{
# 33 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"
return __builtin___sprintf_chk(__s, (2) - (1), __builtin_object_size(__s, (2) > (1)), __fmt, __builtin_va_arg_pack());
}
# 42 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"
extern inline __attribute__((nothrow, leaf, always_inline, artificial)) int __attribute__((gnu_inline)) vsprintf(char * restrict __s, char const * restrict __fmt, __builtin_va_list __ap)
{
# 46 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"
return __builtin___vsprintf_chk(__s, (2) - (1), __builtin_object_size(__s, (2) > (1)), __fmt, __ap);
}
extern __attribute__((nothrow, leaf)) int __snprintf_chk(char * restrict __s, unsigned long __n, int __flag, unsigned long __slen, char const * restrict __format, ...);
extern __attribute__((nothrow, leaf)) int __vsnprintf_chk(char * restrict __s, unsigned long __n, int __flag, unsigned long __slen, char const * restrict __format, __builtin_va_list __ap);
# 60 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"
extern inline __attribute__((nothrow, leaf, always_inline, artificial)) int __attribute__((gnu_inline)) snprintf(char * restrict __s, unsigned long __n, char const * restrict __fmt, ...)
{
# 64 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"
return __builtin___snprintf_chk(__s, __n, (2) - (1), __builtin_object_size(__s, (2) > (1)), __fmt, __builtin_va_arg_pack());
}
# 73 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"
extern inline __attribute__((nothrow, leaf, always_inline, artificial)) int __attribute__((gnu_inline)) vsnprintf(char * restrict __s, unsigned long __n, char const * restrict __fmt, __builtin_va_list __ap)
{
# 77 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"
return __builtin___vsnprintf_chk(__s, __n, (2) - (1), __builtin_object_size(__s, (2) > (1)), __fmt, __ap);
}
extern int __fprintf_chk(struct _IO_FILE * restrict __stream, int __flag, char const * restrict __format, ...);
extern int __printf_chk(int __flag, char const * restrict __format, ...);
extern int __vfprintf_chk(struct _IO_FILE * restrict __stream, int __flag, char const * restrict __format, __builtin_va_list __ap);
extern int __vprintf_chk(int __flag, char const * restrict __format, __builtin_va_list __ap);
# 94 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"
extern inline __attribute__((always_inline, artificial)) int __attribute__((gnu_inline)) fprintf(struct _IO_FILE * restrict __stream, char const * restrict __fmt, ...)
{
# 97 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"
return __fprintf_chk(__stream, (2) - (1), __fmt, __builtin_va_arg_pack());
}
# 101 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"
extern inline __attribute__((always_inline, artificial)) int __attribute__((gnu_inline)) printf(char const * restrict __fmt, ...)
{
# 104 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"
return __printf_chk((2) - (1), __fmt, __builtin_va_arg_pack());
}
# 113 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"
extern inline __attribute__((always_inline, artificial)) int __attribute__((gnu_inline)) vprintf(char const * restrict __fmt, __builtin_va_list __ap)
{
# 117 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"
return __vfprintf_chk(stdout, (2) - (1), __fmt, __ap);
}
# 123 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"
extern inline __attribute__((always_inline, artificial)) int __attribute__((gnu_inline)) vfprintf(struct _IO_FILE * restrict __stream, char const * restrict __fmt, __builtin_va_list __ap)
{
# 127 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"
return __vfprintf_chk(__stream, (2) - (1), __fmt, __ap);
}
extern __attribute__((format(__printf__, 3, 4))) int __dprintf_chk(int __fd, int __flag, char const * restrict __fmt, ...);
extern __attribute__((format(__printf__, 3, 0))) int __vdprintf_chk(int __fd, int __flag, char const * restrict __fmt, __builtin_va_list __arg);
# 138 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"
extern inline __attribute__((always_inline, artificial)) int __attribute__((gnu_inline)) dprintf(int __fd, char const * restrict __fmt, ...)
{
# 141 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"
return __dprintf_chk(__fd, (2) - (1), __fmt, __builtin_va_arg_pack());
}
# 149 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"
extern inline __attribute__((always_inline, artificial)) int __attribute__((gnu_inline)) vdprintf(int __fd, char const * restrict __fmt, __builtin_va_list __ap)
{
# 152 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"
return __vdprintf_chk(__fd, (2) - (1), __fmt, __ap);
}
extern __attribute__((warn_unused_result)) char * __gets_chk(char * __str, unsigned long);
extern __attribute__((warn_unused_result, warning("please use fgets or getline instead, gets can't specify buffer size"))) char * __gets_warn(char * __str) __asm__("gets");
# 232 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"
extern inline __attribute__((always_inline, artificial, warn_unused_result)) char * __attribute__((gnu_inline)) gets(char * __str)
{
# 235 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"
if((__builtin_object_size(__str, (2) > (1))) != ((unsigned long)(-(1)))) {
# 236 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"
return __gets_chk(__str, __builtin_object_size(__str, (2) > (1)));
}
# 237 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"
return __gets_warn(__str);
}
extern __attribute__((warn_unused_result)) char * __fgets_chk(char * restrict __s, unsigned long __size, int __n, struct _IO_FILE * restrict __stream);
extern __attribute__((warn_unused_result)) char * __fgets_alias(char * restrict __s, int __n, struct _IO_FILE * restrict __stream) __asm__("fgets");
extern __attribute__((warn_unused_result, warning("fgets called with bigger size than length of destination buffer"))) char * __fgets_chk_warn(char * restrict __s, unsigned long __size, int __n, struct _IO_FILE * restrict __stream) __asm__("__fgets_chk");
# 252 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"
extern inline __attribute__((always_inline, artificial, warn_unused_result)) char * __attribute__((gnu_inline)) fgets(char * restrict __s, int __n, struct _IO_FILE * restrict __stream)
{
# 255 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"
if((__builtin_object_size(__s, (2) > (1))) != ((unsigned long)(-(1)))) {
# 257 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"
if((!(__builtin_constant_p(__n))) || (__n <= (0))) {
# 258 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"
return __fgets_chk(__s, __builtin_object_size(__s, (2) > (1)), __n, __stream);
}
# 260 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"
if(((unsigned long)(__n)) > (__builtin_object_size(__s, (2) > (1)))) {
# 261 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"
return __fgets_chk_warn(__s, __builtin_object_size(__s, (2) > (1)), __n, __stream);
}
}
# 263 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"
return __fgets_alias(__s, __n, __stream);
}
extern __attribute__((warn_unused_result)) unsigned long __fread_chk(void * restrict __ptr, unsigned long __ptrlen, unsigned long __size, unsigned long __n, struct _IO_FILE * restrict __stream);
extern __attribute__((warn_unused_result)) unsigned long __fread_alias(void * restrict __ptr, unsigned long __size, unsigned long __n, struct _IO_FILE * restrict __stream) __asm__("fread");
extern __attribute__((warn_unused_result, warning("fread called with bigger size * nmemb than length of destination buffer"))) unsigned long __fread_chk_warn(void * restrict __ptr, unsigned long __ptrlen, unsigned long __size, unsigned long __n, struct _IO_FILE * restrict __stream) __asm__("__fread_chk");
# 281 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"
extern inline __attribute__((always_inline, artificial, warn_unused_result)) unsigned long __attribute__((gnu_inline)) fread(void * restrict __ptr, unsigned long __size, unsigned long __n, struct _IO_FILE * restrict __stream)
{
# 285 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"
if((__builtin_object_size(__ptr, 0)) != ((unsigned long)(-(1)))) {
# 287 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"
if(((!(__builtin_constant_p(__size))) || (!(__builtin_constant_p(__n)))) || ((__size | __n) >= (((unsigned long)(1)) << (((8) * (sizeof(unsigned long))) / (2))))) {
# 290 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"
return __fread_chk(__ptr, __builtin_object_size(__ptr, 0), __size, __n, __stream);
}
# 292 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"
if((__size * __n) > (__builtin_object_size(__ptr, 0))) {
# 293 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"
return __fread_chk_warn(__ptr, __builtin_object_size(__ptr, 0), __size, __n, __stream);
}
}
# 295 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"
return __fread_alias(__ptr, __size, __n, __stream);
}
extern __attribute__((warn_unused_result)) unsigned long __fread_unlocked_chk(void * restrict __ptr, unsigned long __ptrlen, unsigned long __size, unsigned long __n, struct _IO_FILE * restrict __stream);
extern __attribute__((warn_unused_result)) unsigned long __fread_unlocked_alias(void * restrict __ptr, unsigned long __size, unsigned long __n, struct _IO_FILE * restrict __stream) __asm__("fread_unlocked");
extern __attribute__((warn_unused_result, warning("fread_unlocked called with bigger size * nmemb than length of destination buffer"))) unsigned long __fread_unlocked_chk_warn(void * restrict __ptr, unsigned long __ptrlen, unsigned long __size, unsigned long __n, struct _IO_FILE * restrict __stream) __asm__("__fread_unlocked_chk");
# 342 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"
extern inline __attribute__((always_inline, artificial, warn_unused_result)) unsigned long __attribute__((gnu_inline)) fread_unlocked(void * restrict __ptr, unsigned long __size, unsigned long __n, struct _IO_FILE * restrict __stream)
{
# 346 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"
if((__builtin_object_size(__ptr, 0)) != ((unsigned long)(-(1)))) {
# 348 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"
if(((!(__builtin_constant_p(__size))) || (!(__builtin_constant_p(__n)))) || ((__size | __n) >= (((unsigned long)(1)) << (((8) * (sizeof(unsigned long))) / (2))))) {
# 351 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"
return __fread_unlocked_chk(__ptr, __builtin_object_size(__ptr, 0), __size, __n, __stream);
}
# 354 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"
if((__size * __n) > (__builtin_object_size(__ptr, 0))) {
# 355 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"
return __fread_unlocked_chk_warn(__ptr, __builtin_object_size(__ptr, 0), __size, __n, __stream);
}
}
# 360 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"
if((((__builtin_constant_p(__size)) && (__builtin_constant_p(__n))) && ((__size | __n) < (((unsigned long)(1)) << (((8) * (sizeof(unsigned long))) / (2))))) && ((__size * __n) <= (8))) {
# 365 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"
unsigned long __cnt = __size * __n;
# 366 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"
char * __cptr = (char * )(__ptr);
# 367 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"
if(__cnt == (0)) {
# 368 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"
return 0;
}
# 376 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"
for(; __cnt > (0); -- __cnt) {
{
# 372 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"
int __c = (__builtin_expect((__stream->_IO_read_ptr) >= (__stream->_IO_read_end), 0)) ?(__uflow(__stream)) : (*((unsigned char * )((__stream->_IO_read_ptr)++)));
# 373 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"
if(__c == (-(1))) {
# 374 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"
break;
}
# 375 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"
(*(__cptr++)) = __c;
}
}
# 377 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"
return (__cptr - ((char * )(__ptr))) / __size;
}
# 380 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"
return __fread_unlocked_alias(__ptr, __size, __n, __stream);
}
# 44 "/usr/include/x86_64-linux-gnu/bits/byteswap.h"
static inline unsigned int __bswap_32(unsigned int __bsx)
{
# 47 "/usr/include/x86_64-linux-gnu/bits/byteswap.h"
return __builtin_bswap32(__bsx);
}
# 108 "/usr/include/x86_64-linux-gnu/bits/byteswap.h"
static inline unsigned long __bswap_64(unsigned long __bsx)
{
# 111 "/usr/include/x86_64-linux-gnu/bits/byteswap.h"
return __builtin_bswap64(__bsx);
}
extern __attribute__((nothrow, leaf, warn_unused_result)) unsigned long __ctype_get_mb_cur_max(void);
extern inline __attribute__((pure, nonnull(1), warn_unused_result)) double __attribute__((gnu_inline)) atof(char const * __nptr);
extern inline __attribute__((pure, nonnull(1), warn_unused_result)) int __attribute__((gnu_inline)) atoi(char const * __nptr);
extern inline __attribute__((pure, nonnull(1), warn_unused_result)) long __attribute__((gnu_inline)) atol(char const * __nptr);
extern inline __attribute__((pure, nonnull(1), warn_unused_result)) long long __attribute__((gnu_inline)) atoll(char const * __nptr);
extern __attribute__((nothrow, leaf, nonnull(1))) double strtod(char const * restrict __nptr, char * * restrict __endptr);
extern __attribute__((nothrow, leaf, nonnull(1))) float strtof(char const * restrict __nptr, char * * restrict __endptr);
extern __attribute__((nothrow, leaf, nonnull(1))) long double strtold(char const * restrict __nptr, char * * restrict __endptr);
extern __attribute__((nothrow, leaf, nonnull(1))) long strtol(char const * restrict __nptr, char * * restrict __endptr, int __base);
extern __attribute__((nothrow, leaf, nonnull(1))) unsigned long strtoul(char const * restrict __nptr, char * * restrict __endptr, int __base);
__extension__ extern __attribute__((nothrow, leaf, nonnull(1))) long long strtoq(char const * restrict __nptr, char * * restrict __endptr, int __base);
__extension__ extern __attribute__((nothrow, leaf, nonnull(1))) unsigned long long strtouq(char const * restrict __nptr, char * * restrict __endptr, int __base);
__extension__ extern __attribute__((nothrow, leaf, nonnull(1))) long long strtoll(char const * restrict __nptr, char * * restrict __endptr, int __base);
__extension__ extern __attribute__((nothrow, leaf, nonnull(1))) unsigned long long strtoull(char const * restrict __nptr, char * * restrict __endptr, int __base);
# 277 "/usr/include/stdlib.h"
extern inline __attribute__((nothrow, leaf)) int __attribute__((gnu_inline)) atoi(char const * __nptr)
{
# 280 "/usr/include/stdlib.h"
return (int)(strtol(__nptr, (char * * )((void * )(0)), 10));
}
# 282 "/usr/include/stdlib.h"
extern inline __attribute__((nothrow, leaf)) long __attribute__((gnu_inline)) atol(char const * __nptr)
{
# 285 "/usr/include/stdlib.h"
return strtol(__nptr, (char * * )((void * )(0)), 10);
}
# 291 "/usr/include/stdlib.h"
extern inline __attribute__((nothrow, leaf)) long long __attribute__((gnu_inline)) atoll(char const * __nptr)
{
# 294 "/usr/include/stdlib.h"
return strtoll(__nptr, (char * * )((void * )(0)), 10);
}
extern __attribute__((nothrow, leaf, warn_unused_result)) char * l64a(long __n);
extern __attribute__((nothrow, leaf, pure, nonnull(1), warn_unused_result)) long a64l(char const * __s);
extern int select(int __nfds, struct anon_type_14_fd_set * restrict __readfds, struct anon_type_14_fd_set * restrict __writefds, struct anon_type_14_fd_set * restrict __exceptfds, struct timeval * restrict __timeout);
extern int pselect(int __nfds, struct anon_type_14_fd_set * restrict __readfds, struct anon_type_14_fd_set * restrict __writefds, struct anon_type_14_fd_set * restrict __exceptfds, struct timespec const * restrict __timeout, struct anon_type_13___sigset_t const * restrict __sigmask);
extern long __fdelt_chk(long __d);
extern __attribute__((warning("bit outside of fd_set selected"))) long __fdelt_warn(long __d);
extern inline unsigned int __attribute__((gnu_inline)) gnu_dev_major(unsigned long long __dev);
extern inline unsigned int __attribute__((gnu_inline)) gnu_dev_minor(unsigned long long __dev);
extern inline unsigned long long __attribute__((gnu_inline)) gnu_dev_makedev(unsigned int __major, unsigned int __minor);
# 38 "/usr/include/x86_64-linux-gnu/sys/sysmacros.h"
extern inline __attribute__((nothrow, leaf, const)) unsigned int __attribute__((gnu_inline)) gnu_dev_major(unsigned long long __dev)
{
# 41 "/usr/include/x86_64-linux-gnu/sys/sysmacros.h"
return ((__dev >> (8)) & (4095)) | (((unsigned int)(__dev >> (32))) & (~(4095)));
}
# 44 "/usr/include/x86_64-linux-gnu/sys/sysmacros.h"
extern inline __attribute__((nothrow, leaf, const)) unsigned int __attribute__((gnu_inline)) gnu_dev_minor(unsigned long long __dev)
{
# 47 "/usr/include/x86_64-linux-gnu/sys/sysmacros.h"
return (__dev & (255)) | (((unsigned int)(__dev >> (12))) & (~(255)));
}
# 50 "/usr/include/x86_64-linux-gnu/sys/sysmacros.h"
extern inline __attribute__((nothrow, leaf, const)) unsigned long long __attribute__((gnu_inline)) gnu_dev_makedev(unsigned int __major, unsigned int __minor)
{
# 53 "/usr/include/x86_64-linux-gnu/sys/sysmacros.h"
return (((__minor & (255)) | ((__major & (4095)) << (8))) | (((unsigned long long)(__minor & (~(255)))) << (12))) | (((unsigned long long)(__major & (~(4095)))) << (32));
}
extern __attribute__((nothrow, leaf)) long random(void);
extern __attribute__((nothrow, leaf)) void srandom(unsigned int __seed);
extern __attribute__((nothrow, leaf, nonnull(2))) char * initstate(unsigned int __seed, char * __statebuf, unsigned long __statelen);
extern __attribute__((nothrow, leaf, nonnull(1))) char * setstate(char * __statebuf);
extern __attribute__((nothrow, leaf, nonnull(1, 2))) int random_r(struct random_data * restrict __buf, typeof(int __attribute__((mode(__SI__)))) * restrict __result);
extern __attribute__((nothrow, leaf, nonnull(2))) int srandom_r(unsigned int __seed, struct random_data * __buf);
extern __attribute__((nothrow, leaf, nonnull(2, 4))) int initstate_r(unsigned int __seed, char * restrict __statebuf, unsigned long __statelen, struct random_data * restrict __buf);
extern __attribute__((nothrow, leaf, nonnull(1, 2))) int setstate_r(char * restrict __statebuf, struct random_data * restrict __buf);
extern __attribute__((nothrow, leaf)) int rand(void);
extern __attribute__((nothrow, leaf)) void srand(unsigned int __seed);
extern __attribute__((nothrow, leaf)) int rand_r(unsigned int * __seed);
extern __attribute__((nothrow, leaf)) double drand48(void);
extern __attribute__((nothrow, leaf, nonnull(1))) double erand48(unsigned short __xsubi[3]);
extern __attribute__((nothrow, leaf)) long lrand48(void);
extern __attribute__((nothrow, leaf, nonnull(1))) long nrand48(unsigned short __xsubi[3]);
extern __attribute__((nothrow, leaf)) long mrand48(void);
extern __attribute__((nothrow, leaf, nonnull(1))) long jrand48(unsigned short __xsubi[3]);
extern __attribute__((nothrow, leaf)) void srand48(long __seedval);
extern __attribute__((nothrow, leaf, nonnull(1))) unsigned short * seed48(unsigned short __seed16v[3]);
extern __attribute__((nothrow, leaf, nonnull(1))) void lcong48(unsigned short __param[7]);
extern __attribute__((nothrow, leaf, nonnull(1, 2))) int drand48_r(struct drand48_data * restrict __buffer, double * restrict __result);
extern __attribute__((nothrow, leaf, nonnull(1, 2))) int erand48_r(unsigned short __xsubi[3], struct drand48_data * restrict __buffer, double * restrict __result);
extern __attribute__((nothrow, leaf, nonnull(1, 2))) int lrand48_r(struct drand48_data * restrict __buffer, long * restrict __result);
extern __attribute__((nothrow, leaf, nonnull(1, 2))) int nrand48_r(unsigned short __xsubi[3], struct drand48_data * restrict __buffer, long * restrict __result);
extern __attribute__((nothrow, leaf, nonnull(1, 2))) int mrand48_r(struct drand48_data * restrict __buffer, long * restrict __result);
extern __attribute__((nothrow, leaf, nonnull(1, 2))) int jrand48_r(unsigned short __xsubi[3], struct drand48_data * restrict __buffer, long * restrict __result);
extern __attribute__((nothrow, leaf, nonnull(2))) int srand48_r(long __seedval, struct drand48_data * __buffer);
extern __attribute__((nothrow, leaf, nonnull(1, 2))) int seed48_r(unsigned short __seed16v[3], struct drand48_data * __buffer);
extern __attribute__((nothrow, leaf, nonnull(1, 2))) int lcong48_r(unsigned short __param[7], struct drand48_data * __buffer);
extern __attribute__((nothrow, leaf, malloc, warn_unused_result)) void * malloc(unsigned long __size);
extern __attribute__((nothrow, leaf, malloc, warn_unused_result)) void * calloc(unsigned long __nmemb, unsigned long __size);
extern __attribute__((nothrow, leaf, warn_unused_result)) void * realloc(void * __ptr, unsigned long __size);
extern __attribute__((nothrow, leaf)) void free(void * __ptr);
extern __attribute__((nothrow, leaf)) void cfree(void * __ptr);
extern __attribute__((nothrow, leaf)) void * alloca(unsigned long __size);
extern __attribute__((nothrow, leaf, malloc, warn_unused_result)) void * valloc(unsigned long __size);
extern __attribute__((nothrow, leaf, nonnull(1), warn_unused_result)) int posix_memalign(void * * __memptr, unsigned long __alignment, unsigned long __size);
extern __attribute__((nothrow, leaf, noreturn)) void abort(void);
extern __attribute__((nothrow, leaf, nonnull(1))) int atexit(void (* __func)(void));
extern __attribute__((nothrow, leaf, nonnull(1))) int on_exit(void (* __func)(int, void * ), void * __arg);
extern __attribute__((nothrow, leaf, noreturn)) void exit(int __status);
extern __attribute__((nothrow, leaf, noreturn)) void _Exit(int __status);
extern __attribute__((nothrow, leaf, nonnull(1), warn_unused_result)) char * getenv(char const * __name);
extern __attribute__((nothrow, leaf, nonnull(1))) int putenv(char * __string);
extern __attribute__((nothrow, leaf, nonnull(2))) int setenv(char const * __name, char const * __value, int __replace);
extern __attribute__((nothrow, leaf, nonnull(1))) int unsetenv(char const * __name);
extern __attribute__((nothrow, leaf)) int clearenv(void);
extern __attribute__((nothrow, leaf, nonnull(1))) char * mktemp(char * __template);
extern __attribute__((nonnull(1), warn_unused_result)) int mkstemp(char * __template);
extern __attribute__((nonnull(1), warn_unused_result)) int mkstemps(char * __template, int __suffixlen);
extern __attribute__((nothrow, leaf, nonnull(1), warn_unused_result)) char * mkdtemp(char * __template);
extern __attribute__((warn_unused_result)) int system(char const * __command);
extern inline char * __attribute__((gnu_inline)) realpath(char const * restrict __name, char * restrict __resolved);
extern inline __attribute__((nonnull(1, 2, 5), warn_unused_result)) void * __attribute__((gnu_inline)) bsearch(void const * __key, void const * __base, unsigned long __nmemb, unsigned long __size, int (* __compar)(void const * , void const * ));
# 19 "/usr/include/x86_64-linux-gnu/bits/stdlib-bsearch.h"
extern inline void * __attribute__((gnu_inline)) bsearch(void const * __key, void const * __base, unsigned long __nmemb, unsigned long __size, int (* __compar)(void const * , void const * ))
{
# 23 "/usr/include/x86_64-linux-gnu/bits/stdlib-bsearch.h"
unsigned long __l;
# 23 "/usr/include/x86_64-linux-gnu/bits/stdlib-bsearch.h"
unsigned long __u;
# 23 "/usr/include/x86_64-linux-gnu/bits/stdlib-bsearch.h"
unsigned long __idx;
# 24 "/usr/include/x86_64-linux-gnu/bits/stdlib-bsearch.h"
void const * __p;
# 25 "/usr/include/x86_64-linux-gnu/bits/stdlib-bsearch.h"
int __comparison;
# 27 "/usr/include/x86_64-linux-gnu/bits/stdlib-bsearch.h"
__l = (0);
# 28 "/usr/include/x86_64-linux-gnu/bits/stdlib-bsearch.h"
__u = __nmemb;
# 29 "/usr/include/x86_64-linux-gnu/bits/stdlib-bsearch.h"
while(__l < __u) {
{
# 31 "/usr/include/x86_64-linux-gnu/bits/stdlib-bsearch.h"
__idx = ((__l + __u) / (2));
# 32 "/usr/include/x86_64-linux-gnu/bits/stdlib-bsearch.h"
__p = ((void * )(((char const * )(__base)) + (__idx * __size)));
# 33 "/usr/include/x86_64-linux-gnu/bits/stdlib-bsearch.h"
__comparison = ((*(__compar))(__key, __p));
# 34 "/usr/include/x86_64-linux-gnu/bits/stdlib-bsearch.h"
if(__comparison < (0)) {
# 35 "/usr/include/x86_64-linux-gnu/bits/stdlib-bsearch.h"
__u = __idx;
}
else {
# 36 "/usr/include/x86_64-linux-gnu/bits/stdlib-bsearch.h"
if(__comparison > (0)) {
# 37 "/usr/include/x86_64-linux-gnu/bits/stdlib-bsearch.h"
__l = (__idx + (1));
}
else {
# 39 "/usr/include/x86_64-linux-gnu/bits/stdlib-bsearch.h"
return (void * )(__p);
}
}
}
}
# 42 "/usr/include/x86_64-linux-gnu/bits/stdlib-bsearch.h"
return (void * )(0);
}
extern __attribute__((nonnull(1, 4))) void qsort(void * __base, unsigned long __nmemb, unsigned long __size, int (* __compar)(void const * , void const * ));
extern __attribute__((nothrow, leaf, const, warn_unused_result)) int abs(int __x);
extern __attribute__((nothrow, leaf, const, warn_unused_result)) long labs(long __x);
__extension__ extern __attribute__((nothrow, leaf, const, warn_unused_result)) long long llabs(long long __x);
extern __attribute__((nothrow, leaf, const, warn_unused_result)) struct anon_type_10_div_t div(int __numer, int __denom);
extern __attribute__((nothrow, leaf, const, warn_unused_result)) struct anon_type_11_ldiv_t ldiv(long __numer, long __denom);
__extension__ extern __attribute__((nothrow, leaf, const, warn_unused_result)) struct anon_type_12_lldiv_t lldiv(long long __numer, long long __denom);
extern __attribute__((nothrow, leaf, nonnull(3, 4), warn_unused_result)) char * ecvt(double __value, int __ndigit, int * restrict __decpt, int * restrict __sign);
extern __attribute__((nothrow, leaf, nonnull(3, 4), warn_unused_result)) char * fcvt(double __value, int __ndigit, int * restrict __decpt, int * restrict __sign);
extern __attribute__((nothrow, leaf, nonnull(3), warn_unused_result)) char * gcvt(double __value, int __ndigit, char * __buf);
extern __attribute__((nothrow, leaf, nonnull(3, 4), warn_unused_result)) char * qecvt(long double __value, int __ndigit, int * restrict __decpt, int * restrict __sign);
extern __attribute__((nothrow, leaf, nonnull(3, 4), warn_unused_result)) char * qfcvt(long double __value, int __ndigit, int * restrict __decpt, int * restrict __sign);
extern __attribute__((nothrow, leaf, nonnull(3), warn_unused_result)) char * qgcvt(long double __value, int __ndigit, char * __buf);
extern __attribute__((nothrow, leaf, nonnull(3, 4, 5))) int ecvt_r(double __value, int __ndigit, int * restrict __decpt, int * restrict __sign, char * restrict __buf, unsigned long __len);
extern __attribute__((nothrow, leaf, nonnull(3, 4, 5))) int fcvt_r(double __value, int __ndigit, int * restrict __decpt, int * restrict __sign, char * restrict __buf, unsigned long __len);
extern __attribute__((nothrow, leaf, nonnull(3, 4, 5))) int qecvt_r(long double __value, int __ndigit, int * restrict __decpt, int * restrict __sign, char * restrict __buf, unsigned long __len);
extern __attribute__((nothrow, leaf, nonnull(3, 4, 5))) int qfcvt_r(long double __value, int __ndigit, int * restrict __decpt, int * restrict __sign, char * restrict __buf, unsigned long __len);
extern __attribute__((nothrow, leaf)) int mblen(char const * __s, unsigned long __n);
extern __attribute__((nothrow, leaf)) int mbtowc(int * restrict __pwc, char const * restrict __s, unsigned long __n);
extern inline int __attribute__((gnu_inline)) wctomb(char * __s, int __wchar);
extern inline unsigned long __attribute__((gnu_inline)) mbstowcs(int * restrict __dst, char const * restrict __src, unsigned long __len);
extern inline unsigned long __attribute__((gnu_inline)) wcstombs(char * restrict __dst, int const * restrict __src, unsigned long __len);
extern __attribute__((nothrow, leaf, nonnull(1), warn_unused_result)) int rpmatch(char const * __response);
extern __attribute__((nothrow, leaf, nonnull(1, 2, 3), warn_unused_result)) int getsubopt(char * * restrict __optionp, char * const * restrict __tokens, char * * restrict __valuep);
extern __attribute__((nothrow, leaf, nonnull(1))) int getloadavg(double __loadavg[], int __nelem);
# 25 "/usr/include/x86_64-linux-gnu/bits/stdlib-float.h"
extern inline __attribute__((nothrow, leaf)) double __attribute__((gnu_inline)) atof(char const * __nptr)
{
# 28 "/usr/include/x86_64-linux-gnu/bits/stdlib-float.h"
return strtod(__nptr, (char * * )((void * )(0)));
}
extern __attribute__((nothrow, leaf, warn_unused_result)) char * __realpath_chk(char const * restrict __name, char * restrict __resolved, unsigned long __resolvedlen);
extern __attribute__((nothrow, leaf, warn_unused_result)) char * __realpath_alias(char const * restrict __name, char * restrict __resolved) __asm__("realpath");
extern __attribute__((nothrow, leaf, warn_unused_result, warning("second argument of realpath must be either NULL or at least PATH_MAX bytes long buffer"))) char * __realpath_chk_warn(char const * restrict __name, char * restrict __resolved, unsigned long __resolvedlen) __asm__("__realpath_chk");
# 36 "/usr/include/x86_64-linux-gnu/bits/stdlib.h"
extern inline __attribute__((nothrow, leaf, always_inline, artificial, warn_unused_result)) char * __attribute__((gnu_inline)) realpath(char const * restrict __name, char * restrict __resolved)
{
# 39 "/usr/include/x86_64-linux-gnu/bits/stdlib.h"
if((__builtin_object_size(__resolved, (2) > (1))) != ((unsigned long)(-(1)))) {
# 45 "/usr/include/x86_64-linux-gnu/bits/stdlib.h"
return __realpath_chk(__name, __resolved, __builtin_object_size(__resolved, (2) > (1)));
}
# 48 "/usr/include/x86_64-linux-gnu/bits/stdlib.h"
return __realpath_alias(__name, __resolved);
}
extern __attribute__((nothrow, leaf, nonnull(2))) int __ptsname_r_chk(int __fd, char * __buf, unsigned long __buflen, unsigned long __nreal);
extern __attribute__((nothrow, leaf, nonnull(2))) int __ptsname_r_alias(int __fd, char * __buf, unsigned long __buflen) __asm__("ptsname_r");
extern __attribute__((nothrow, leaf, nonnull(2), warning("ptsname_r called with buflen bigger than size of buf"))) int __ptsname_r_chk_warn(int __fd, char * __buf, unsigned long __buflen, unsigned long __nreal) __asm__("__ptsname_r_chk");
# 63 "/usr/include/x86_64-linux-gnu/bits/stdlib.h"
extern inline __attribute__((nothrow, leaf, always_inline, artificial)) int __attribute__((gnu_inline)) ptsname_r(int __fd, char * __buf, unsigned long __buflen)
{
# 66 "/usr/include/x86_64-linux-gnu/bits/stdlib.h"
if((__builtin_object_size(__buf, (2) > (1))) != ((unsigned long)(-(1)))) {
# 68 "/usr/include/x86_64-linux-gnu/bits/stdlib.h"
if(!(__builtin_constant_p(__buflen))) {
# 69 "/usr/include/x86_64-linux-gnu/bits/stdlib.h"
return __ptsname_r_chk(__fd, __buf, __buflen, __builtin_object_size(__buf, (2) > (1)));
}
# 70 "/usr/include/x86_64-linux-gnu/bits/stdlib.h"
if(__buflen > (__builtin_object_size(__buf, (2) > (1)))) {
# 71 "/usr/include/x86_64-linux-gnu/bits/stdlib.h"
return __ptsname_r_chk_warn(__fd, __buf, __buflen, __builtin_object_size(__buf, (2) > (1)));
}
}
# 73 "/usr/include/x86_64-linux-gnu/bits/stdlib.h"
return __ptsname_r_alias(__fd, __buf, __buflen);
}
extern __attribute__((nothrow, leaf, warn_unused_result)) int __wctomb_chk(char * __s, int __wchar, unsigned long __buflen);
extern __attribute__((nothrow, leaf, warn_unused_result)) int __wctomb_alias(char * __s, int __wchar) __asm__("wctomb");
# 82 "/usr/include/x86_64-linux-gnu/bits/stdlib.h"
extern inline __attribute__((nothrow, leaf, always_inline, artificial, warn_unused_result)) int __attribute__((gnu_inline)) wctomb(char * __s, int __wchar)
{
# 92 "/usr/include/x86_64-linux-gnu/bits/stdlib.h"
if(((__builtin_object_size(__s, (2) > (1))) != ((unsigned long)(-(1)))) && ((16) > (__builtin_object_size(__s, (2) > (1))))) {
# 93 "/usr/include/x86_64-linux-gnu/bits/stdlib.h"
return __wctomb_chk(__s, __wchar, __builtin_object_size(__s, (2) > (1)));
}
# 94 "/usr/include/x86_64-linux-gnu/bits/stdlib.h"
return __wctomb_alias(__s, __wchar);
}
extern __attribute__((nothrow, leaf)) unsigned long __mbstowcs_chk(int * restrict __dst, char const * restrict __src, unsigned long __len, unsigned long __dstlen);
extern __attribute__((nothrow, leaf)) unsigned long __mbstowcs_alias(int * restrict __dst, char const * restrict __src, unsigned long __len) __asm__("mbstowcs");
extern __attribute__((nothrow, leaf, warning("mbstowcs called with dst buffer smaller than len * sizeof (wchar_t)"))) unsigned long __mbstowcs_chk_warn(int * restrict __dst, char const * restrict __src, unsigned long __len, unsigned long __dstlen) __asm__("__mbstowcs_chk");
# 112 "/usr/include/x86_64-linux-gnu/bits/stdlib.h"
extern inline __attribute__((nothrow, leaf, always_inline, artificial)) unsigned long __attribute__((gnu_inline)) mbstowcs(int * restrict __dst, char const * restrict __src, unsigned long __len)
{
# 116 "/usr/include/x86_64-linux-gnu/bits/stdlib.h"
if((__builtin_object_size(__dst, (2) > (1))) != ((unsigned long)(-(1)))) {
# 118 "/usr/include/x86_64-linux-gnu/bits/stdlib.h"
if(!(__builtin_constant_p(__len))) {
# 119 "/usr/include/x86_64-linux-gnu/bits/stdlib.h"
return __mbstowcs_chk(__dst, __src, __len, (__builtin_object_size(__dst, (2) > (1))) / (sizeof(int)));
}
# 122 "/usr/include/x86_64-linux-gnu/bits/stdlib.h"
if(__len > ((__builtin_object_size(__dst, (2) > (1))) / (sizeof(int)))) {
# 123 "/usr/include/x86_64-linux-gnu/bits/stdlib.h"
return __mbstowcs_chk_warn(__dst, __src, __len, (__builtin_object_size(__dst, (2) > (1))) / (sizeof(int)));
}
}
# 126 "/usr/include/x86_64-linux-gnu/bits/stdlib.h"
return __mbstowcs_alias(__dst, __src, __len);
}
extern __attribute__((nothrow, leaf)) unsigned long __wcstombs_chk(char * restrict __dst, int const * restrict __src, unsigned long __len, unsigned long __dstlen);
extern __attribute__((nothrow, leaf)) unsigned long __wcstombs_alias(char * restrict __dst, int const * restrict __src, unsigned long __len) __asm__("wcstombs");
extern __attribute__((nothrow, leaf, warning("wcstombs called with dst buffer smaller than len"))) unsigned long __wcstombs_chk_warn(char * restrict __dst, int const * restrict __src, unsigned long __len, unsigned long __dstlen) __asm__("__wcstombs_chk");
# 143 "/usr/include/x86_64-linux-gnu/bits/stdlib.h"
extern inline __attribute__((nothrow, leaf, always_inline, artificial)) unsigned long __attribute__((gnu_inline)) wcstombs(char * restrict __dst, int const * restrict __src, unsigned long __len)
{
# 147 "/usr/include/x86_64-linux-gnu/bits/stdlib.h"
if((__builtin_object_size(__dst, (2) > (1))) != ((unsigned long)(-(1)))) {
# 149 "/usr/include/x86_64-linux-gnu/bits/stdlib.h"
if(!(__builtin_constant_p(__len))) {
# 150 "/usr/include/x86_64-linux-gnu/bits/stdlib.h"
return __wcstombs_chk(__dst, __src, __len, __builtin_object_size(__dst, (2) > (1)));
}
# 151 "/usr/include/x86_64-linux-gnu/bits/stdlib.h"
if(__len > (__builtin_object_size(__dst, (2) > (1)))) {
# 152 "/usr/include/x86_64-linux-gnu/bits/stdlib.h"
return __wcstombs_chk_warn(__dst, __src, __len, __builtin_object_size(__dst, (2) > (1)));
}
}
# 154 "/usr/include/x86_64-linux-gnu/bits/stdlib.h"
return __wcstombs_alias(__dst, __src, __len);
}
extern inline __attribute__((nonnull(1, 2))) void * __attribute__((gnu_inline)) memcpy(void * restrict __dest, void const * restrict __src, unsigned long __len);
extern inline __attribute__((nonnull(1, 2))) void * __attribute__((gnu_inline)) memmove(void * __dest, void const * __src, unsigned long __len);
extern __attribute__((nothrow, leaf, nonnull(1, 2))) void * memccpy(void * restrict __dest, void const * restrict __src, int __c, unsigned long __n);
extern inline __attribute__((nonnull(1))) void * __attribute__((gnu_inline)) memset(void * __dest, int __ch, unsigned long __len);
extern __attribute__((nothrow, leaf, pure, nonnull(1, 2))) int memcmp(void const * __s1, void const * __s2, unsigned long __n);
extern __attribute__((nothrow, leaf, pure, nonnull(1))) void * memchr(void const * __s, int __c, unsigned long __n);
extern inline __attribute__((nonnull(1, 2))) char * __attribute__((gnu_inline)) strcpy(char * restrict __dest, char const * restrict __src);
extern inline __attribute__((nonnull(1, 2))) char * __attribute__((gnu_inline)) strncpy(char * restrict __dest, char const * restrict __src, unsigned long __len);
extern inline __attribute__((nonnull(1, 2))) char * __attribute__((gnu_inline)) strcat(char * restrict __dest, char const * restrict __src);
extern inline __attribute__((nonnull(1, 2))) char * __attribute__((gnu_inline)) strncat(char * restrict __dest, char const * restrict __src, unsigned long __len);
extern __attribute__((nothrow, leaf, pure, nonnull(1, 2))) int strcmp(char const * __s1, char const * __s2);
extern __attribute__((nothrow, leaf, pure, nonnull(1, 2))) int strncmp(char const * __s1, char const * __s2, unsigned long __n);
extern __attribute__((nothrow, leaf, pure, nonnull(1, 2))) int strcoll(char const * __s1, char const * __s2);
extern __attribute__((nothrow, leaf, nonnull(2))) unsigned long strxfrm(char * restrict __dest, char const * restrict __src, unsigned long __n);
extern __attribute__((nothrow, leaf, pure, nonnull(1, 2, 3))) int strcoll_l(char const * __s1, char const * __s2, struct __locale_struct * __l);
extern __attribute__((nothrow, leaf, nonnull(2, 4))) unsigned long strxfrm_l(char * __dest, char const * __src, unsigned long __n, struct __locale_struct * __l);
extern __attribute__((nothrow, leaf, malloc, nonnull(1))) char * strdup(char const * __s);
extern __attribute__((nothrow, leaf, malloc, nonnull(1))) char * strndup(char const * __string, unsigned long __n);
extern __attribute__((nothrow, leaf, pure, nonnull(1))) char * strchr(char const * __s, int __c);
extern __attribute__((nothrow, leaf, pure, nonnull(1))) char * strrchr(char const * __s, int __c);
extern __attribute__((nothrow, leaf, pure, nonnull(1, 2))) unsigned long strcspn(char const * __s, char const * __reject);
extern __attribute__((nothrow, leaf, pure, nonnull(1, 2))) unsigned long strspn(char const * __s, char const * __accept);
extern __attribute__((nothrow, leaf, pure, nonnull(1, 2))) char * strpbrk(char const * __s, char const * __accept);
extern __attribute__((nothrow, leaf, pure, nonnull(1, 2))) char * strstr(char const * __haystack, char const * __needle);
extern __attribute__((nothrow, leaf, nonnull(2))) char * strtok(char * restrict __s, char const * restrict __delim);
extern __attribute__((nothrow, leaf, nonnull(2, 3))) char * __strtok_r(char * restrict __s, char const * restrict __delim, char * * restrict __save_ptr);
extern __attribute__((nothrow, leaf, nonnull(2, 3))) char * strtok_r(char * restrict __s, char const * restrict __delim, char * * restrict __save_ptr);
extern __attribute__((nothrow, leaf, pure, nonnull(1))) unsigned long strlen(char const * __s);
extern __attribute__((nothrow, leaf, pure, nonnull(1))) unsigned long strnlen(char const * __string, unsigned long __maxlen);
extern __attribute__((nothrow, leaf)) char * strerror(int __errnum);
extern __attribute__((nothrow, leaf, nonnull(2))) int strerror_r(int __errnum, char * __buf, unsigned long __buflen) __asm__("__xpg_strerror_r");
extern __attribute__((nothrow, leaf)) char * strerror_l(int __errnum, struct __locale_struct * __l);
extern __attribute__((nothrow, leaf, nonnull(1))) void __bzero(void * __s, unsigned long __n);
extern inline __attribute__((nonnull(1, 2))) void __attribute__((gnu_inline)) bcopy(void const * __src, void * __dest, unsigned long __len);
extern inline __attribute__((nonnull(1))) void __attribute__((gnu_inline)) bzero(void * __dest, unsigned long __len);
extern __attribute__((nothrow, leaf, pure, nonnull(1, 2))) int bcmp(void const * __s1, void const * __s2, unsigned long __n);
extern __attribute__((nothrow, leaf, pure, nonnull(1))) char * index(char const * __s, int __c);
extern __attribute__((nothrow, leaf, pure, nonnull(1))) char * rindex(char const * __s, int __c);
extern __attribute__((nothrow, leaf, const)) int ffs(int __i);
extern __attribute__((nothrow, leaf, pure, nonnull(1, 2))) int strcasecmp(char const * __s1, char const * __s2);
extern __attribute__((nothrow, leaf, pure, nonnull(1, 2))) int strncasecmp(char const * __s1, char const * __s2, unsigned long __n);
extern __attribute__((nothrow, leaf, nonnull(1, 2))) char * strsep(char * * restrict __stringp, char const * restrict __delim);
extern __attribute__((nothrow, leaf)) char * strsignal(int __sig);
extern __attribute__((nothrow, leaf, nonnull(1, 2))) char * __stpcpy(char * restrict __dest, char const * restrict __src);
extern __attribute__((nothrow, leaf, nonnull(1, 2))) char * stpcpy(char * restrict __dest, char const * restrict __src);
extern __attribute__((nothrow, leaf, nonnull(1, 2))) char * __stpncpy(char * restrict __dest, char const * restrict __src, unsigned long __n);
extern inline __attribute__((nonnull(1, 2))) char * __attribute__((gnu_inline)) stpncpy(char * __dest, char const * __src, unsigned long __n);
extern void * __rawmemchr(void const * __s, int __c);
extern inline unsigned long __attribute__((gnu_inline)) __strcspn_c1(char const * __s, int __reject);
# 946 "/usr/include/x86_64-linux-gnu/bits/string2.h"
extern inline unsigned long __attribute__((gnu_inline)) __strcspn_c1(char const * __s, int __reject)
{
# 949 "/usr/include/x86_64-linux-gnu/bits/string2.h"
unsigned long __result = 0;
# 950 "/usr/include/x86_64-linux-gnu/bits/string2.h"
while(((*(__s + __result)) != ((char)0)) && ((*(__s + __result)) != __reject)) {
{
# 951 "/usr/include/x86_64-linux-gnu/bits/string2.h"
++ __result;
}
}
# 952 "/usr/include/x86_64-linux-gnu/bits/string2.h"
return __result;
}
extern inline unsigned long __attribute__((gnu_inline)) __strcspn_c2(char const * __s, int __reject1, int __reject2);
# 957 "/usr/include/x86_64-linux-gnu/bits/string2.h"
extern inline unsigned long __attribute__((gnu_inline)) __strcspn_c2(char const * __s, int __reject1, int __reject2)
{
# 960 "/usr/include/x86_64-linux-gnu/bits/string2.h"
unsigned long __result = 0;
# 961 "/usr/include/x86_64-linux-gnu/bits/string2.h"
while((((*(__s + __result)) != ((char)0)) && ((*(__s + __result)) != __reject1)) && ((*(__s + __result)) != __reject2)) {
{
# 963 "/usr/include/x86_64-linux-gnu/bits/string2.h"
++ __result;
}
}
# 964 "/usr/include/x86_64-linux-gnu/bits/string2.h"
return __result;
}
extern inline unsigned long __attribute__((gnu_inline)) __strcspn_c3(char const * __s, int __reject1, int __reject2, int __reject3);
# 969 "/usr/include/x86_64-linux-gnu/bits/string2.h"
extern inline unsigned long __attribute__((gnu_inline)) __strcspn_c3(char const * __s, int __reject1, int __reject2, int __reject3)
{
# 973 "/usr/include/x86_64-linux-gnu/bits/string2.h"
unsigned long __result = 0;
# 974 "/usr/include/x86_64-linux-gnu/bits/string2.h"
while(((((*(__s + __result)) != ((char)0)) && ((*(__s + __result)) != __reject1)) && ((*(__s + __result)) != __reject2)) && ((*(__s + __result)) != __reject3)) {
{
# 976 "/usr/include/x86_64-linux-gnu/bits/string2.h"
++ __result;
}
}
# 977 "/usr/include/x86_64-linux-gnu/bits/string2.h"
return __result;
}
extern inline unsigned long __attribute__((gnu_inline)) __strspn_c1(char const * __s, int __accept);
# 1022 "/usr/include/x86_64-linux-gnu/bits/string2.h"
extern inline unsigned long __attribute__((gnu_inline)) __strspn_c1(char const * __s, int __accept)
{
# 1025 "/usr/include/x86_64-linux-gnu/bits/string2.h"
unsigned long __result = 0;
# 1027 "/usr/include/x86_64-linux-gnu/bits/string2.h"
while((*(__s + __result)) == __accept) {
{
# 1028 "/usr/include/x86_64-linux-gnu/bits/string2.h"
++ __result;
}
}
# 1029 "/usr/include/x86_64-linux-gnu/bits/string2.h"
return __result;
}
extern inline unsigned long __attribute__((gnu_inline)) __strspn_c2(char const * __s, int __accept1, int __accept2);
# 1034 "/usr/include/x86_64-linux-gnu/bits/string2.h"
extern inline unsigned long __attribute__((gnu_inline)) __strspn_c2(char const * __s, int __accept1, int __accept2)
{
# 1037 "/usr/include/x86_64-linux-gnu/bits/string2.h"
unsigned long __result = 0;
# 1039 "/usr/include/x86_64-linux-gnu/bits/string2.h"
while(((*(__s + __result)) == __accept1) || ((*(__s + __result)) == __accept2)) {
{
# 1040 "/usr/include/x86_64-linux-gnu/bits/string2.h"
++ __result;
}
}
# 1041 "/usr/include/x86_64-linux-gnu/bits/string2.h"
return __result;
}
extern inline unsigned long __attribute__((gnu_inline)) __strspn_c3(char const * __s, int __accept1, int __accept2, int __accept3);
# 1046 "/usr/include/x86_64-linux-gnu/bits/string2.h"
extern inline unsigned long __attribute__((gnu_inline)) __strspn_c3(char const * __s, int __accept1, int __accept2, int __accept3)
{
# 1049 "/usr/include/x86_64-linux-gnu/bits/string2.h"
unsigned long __result = 0;
# 1051 "/usr/include/x86_64-linux-gnu/bits/string2.h"
while((((*(__s + __result)) == __accept1) || ((*(__s + __result)) == __accept2)) || ((*(__s + __result)) == __accept3)) {
{
# 1053 "/usr/include/x86_64-linux-gnu/bits/string2.h"
++ __result;
}
}
# 1054 "/usr/include/x86_64-linux-gnu/bits/string2.h"
return __result;
}
extern inline char * __attribute__((gnu_inline)) __strpbrk_c2(char const * __s, int __accept1, int __accept2);
# 1099 "/usr/include/x86_64-linux-gnu/bits/string2.h"
extern inline char * __attribute__((gnu_inline)) __strpbrk_c2(char const * __s, int __accept1, int __accept2)
{
# 1103 "/usr/include/x86_64-linux-gnu/bits/string2.h"
while((((*(__s)) != ((char)0)) && ((*(__s)) != __accept1)) && ((*(__s)) != __accept2)) {
{
# 1104 "/usr/include/x86_64-linux-gnu/bits/string2.h"
++ __s;
}
}
# 1105 "/usr/include/x86_64-linux-gnu/bits/string2.h"
return ((*(__s)) == ((char)0)) ?((void * )(0)) : ((char * )((unsigned long)(__s)));
}
extern inline char * __attribute__((gnu_inline)) __strpbrk_c3(char const * __s, int __accept1, int __accept2, int __accept3);
# 1110 "/usr/include/x86_64-linux-gnu/bits/string2.h"
extern inline char * __attribute__((gnu_inline)) __strpbrk_c3(char const * __s, int __accept1, int __accept2, int __accept3)
{
# 1114 "/usr/include/x86_64-linux-gnu/bits/string2.h"
while(((((*(__s)) != ((char)0)) && ((*(__s)) != __accept1)) && ((*(__s)) != __accept2)) && ((*(__s)) != __accept3)) {
{
# 1116 "/usr/include/x86_64-linux-gnu/bits/string2.h"
++ __s;
}
}
# 1117 "/usr/include/x86_64-linux-gnu/bits/string2.h"
return ((*(__s)) == ((char)0)) ?((void * )(0)) : ((char * )((unsigned long)(__s)));
}
extern inline char * __attribute__((gnu_inline)) __strtok_r_1c(char * __s, char __sep, char * * __nextp);
# 1148 "/usr/include/x86_64-linux-gnu/bits/string2.h"
extern inline char * __attribute__((gnu_inline)) __strtok_r_1c(char * __s, char __sep, char * * __nextp)
{
# 1151 "/usr/include/x86_64-linux-gnu/bits/string2.h"
char * __result;
# 1152 "/usr/include/x86_64-linux-gnu/bits/string2.h"
if(__s == ((void * )(0))) {
# 1153 "/usr/include/x86_64-linux-gnu/bits/string2.h"
__s = (*(__nextp));
}
# 1154 "/usr/include/x86_64-linux-gnu/bits/string2.h"
while((*(__s)) == __sep) {
{
# 1155 "/usr/include/x86_64-linux-gnu/bits/string2.h"
++ __s;
}
}
# 1156 "/usr/include/x86_64-linux-gnu/bits/string2.h"
__result = ((void * )(0));
# 1157 "/usr/include/x86_64-linux-gnu/bits/string2.h"
if((*(__s)) != ((char)0)) {
# 1159 "/usr/include/x86_64-linux-gnu/bits/string2.h"
__result = (__s++);
# 1160 "/usr/include/x86_64-linux-gnu/bits/string2.h"
while((*(__s)) != ((char)0)) {
{
# 1161 "/usr/include/x86_64-linux-gnu/bits/string2.h"
if((*(__s++)) == __sep) {
# 1163 "/usr/include/x86_64-linux-gnu/bits/string2.h"
(*(__s + (-(1)))) = ((char)0);
# 1164 "/usr/include/x86_64-linux-gnu/bits/string2.h"
break;
}
}
}
}
# 1167 "/usr/include/x86_64-linux-gnu/bits/string2.h"
(*(__nextp)) = __s;
# 1168 "/usr/include/x86_64-linux-gnu/bits/string2.h"
return __result;
}
extern char * __strsep_g(char * * __stringp, char const * __delim);
extern inline char * __attribute__((gnu_inline)) __strsep_1c(char * * __s, char __reject);
# 1198 "/usr/include/x86_64-linux-gnu/bits/string2.h"
extern inline char * __attribute__((gnu_inline)) __strsep_1c(char * * __s, char __reject)
{
# 1201 "/usr/include/x86_64-linux-gnu/bits/string2.h"
char * __retval = *(__s);
# 1202 "/usr/include/x86_64-linux-gnu/bits/string2.h"
if((__retval != ((void * )(0))) && (((*(__s)) = ((((__builtin_constant_p(__reject)) && (!(__builtin_constant_p(__retval)))) && (__reject == ((char)0))) ?((char * )(__rawmemchr(__retval, __reject))) : (__builtin_strchr(__retval, __reject)))) != ((void * )(0)))) {
# 1203 "/usr/include/x86_64-linux-gnu/bits/string2.h"
(*((*(__s))++)) = ((char)0);
}
# 1204 "/usr/include/x86_64-linux-gnu/bits/string2.h"
return __retval;
}
extern inline char * __attribute__((gnu_inline)) __strsep_2c(char * * __s, char __reject1, char __reject2);
# 1208 "/usr/include/x86_64-linux-gnu/bits/string2.h"
extern inline char * __attribute__((gnu_inline)) __strsep_2c(char * * __s, char __reject1, char __reject2)
{
# 1211 "/usr/include/x86_64-linux-gnu/bits/string2.h"
char * __retval = *(__s);
# 1212 "/usr/include/x86_64-linux-gnu/bits/string2.h"
if(__retval != ((void * )(0))) {
# 1214 "/usr/include/x86_64-linux-gnu/bits/string2.h"
char * __cp = __retval;
# 1215 "/usr/include/x86_64-linux-gnu/bits/string2.h"
while(1) {
{
# 1217 "/usr/include/x86_64-linux-gnu/bits/string2.h"
if((*(__cp)) == ((char)0)) {
# 1219 "/usr/include/x86_64-linux-gnu/bits/string2.h"
__cp = ((void * )(0));
# 1220 "/usr/include/x86_64-linux-gnu/bits/string2.h"
break;
}
# 1222 "/usr/include/x86_64-linux-gnu/bits/string2.h"
if(((*(__cp)) == __reject1) || ((*(__cp)) == __reject2)) {
# 1224 "/usr/include/x86_64-linux-gnu/bits/string2.h"
(*(__cp++)) = ((char)0);
# 1225 "/usr/include/x86_64-linux-gnu/bits/string2.h"
break;
}
# 1227 "/usr/include/x86_64-linux-gnu/bits/string2.h"
++ __cp;
}
}
# 1229 "/usr/include/x86_64-linux-gnu/bits/string2.h"
(*(__s)) = __cp;
}
# 1231 "/usr/include/x86_64-linux-gnu/bits/string2.h"
return __retval;
}
extern inline char * __attribute__((gnu_inline)) __strsep_3c(char * * __s, char __reject1, char __reject2, char __reject3);
# 1236 "/usr/include/x86_64-linux-gnu/bits/string2.h"
extern inline char * __attribute__((gnu_inline)) __strsep_3c(char * * __s, char __reject1, char __reject2, char __reject3)
{
# 1239 "/usr/include/x86_64-linux-gnu/bits/string2.h"
char * __retval = *(__s);
# 1240 "/usr/include/x86_64-linux-gnu/bits/string2.h"
if(__retval != ((void * )(0))) {
# 1242 "/usr/include/x86_64-linux-gnu/bits/string2.h"
char * __cp = __retval;
# 1243 "/usr/include/x86_64-linux-gnu/bits/string2.h"
while(1) {
{
# 1245 "/usr/include/x86_64-linux-gnu/bits/string2.h"
if((*(__cp)) == ((char)0)) {
# 1247 "/usr/include/x86_64-linux-gnu/bits/string2.h"
__cp = ((void * )(0));
# 1248 "/usr/include/x86_64-linux-gnu/bits/string2.h"
break;
}
# 1250 "/usr/include/x86_64-linux-gnu/bits/string2.h"
if((((*(__cp)) == __reject1) || ((*(__cp)) == __reject2)) || ((*(__cp)) == __reject3)) {
# 1252 "/usr/include/x86_64-linux-gnu/bits/string2.h"
(*(__cp++)) = ((char)0);
# 1253 "/usr/include/x86_64-linux-gnu/bits/string2.h"
break;
}
# 1255 "/usr/include/x86_64-linux-gnu/bits/string2.h"
++ __cp;
}
}
# 1257 "/usr/include/x86_64-linux-gnu/bits/string2.h"
(*(__s)) = __cp;
}
# 1259 "/usr/include/x86_64-linux-gnu/bits/string2.h"
return __retval;
}
extern __attribute__((nothrow, leaf, malloc)) char * __strdup(char const * __string);
extern __attribute__((nothrow, leaf, malloc)) char * __strndup(char const * __string, unsigned long __n);
extern __attribute__((warning("memset used with constant zero length parameter; this could be due to transposed parameters"))) void __warn_memset_zero_len(void);
# 47 "/usr/include/x86_64-linux-gnu/bits/string3.h"
extern inline __attribute__((nothrow, leaf, always_inline, artificial)) void * __attribute__((gnu_inline)) memcpy(void * restrict __dest, void const * restrict __src, unsigned long __len)
{
# 51 "/usr/include/x86_64-linux-gnu/bits/string3.h"
return __builtin___memcpy_chk(__dest, __src, __len, __builtin_object_size(__dest, 0));
}
# 54 "/usr/include/x86_64-linux-gnu/bits/string3.h"
extern inline __attribute__((nothrow, leaf, always_inline, artificial)) void * __attribute__((gnu_inline)) memmove(void * __dest, void const * __src, unsigned long __len)
{
# 57 "/usr/include/x86_64-linux-gnu/bits/string3.h"
return __builtin___memmove_chk(__dest, __src, __len, __builtin_object_size(__dest, 0));
}
# 75 "/usr/include/x86_64-linux-gnu/bits/string3.h"
extern inline __attribute__((nothrow, leaf, always_inline, artificial)) void * __attribute__((gnu_inline)) memset(void * __dest, int __ch, unsigned long __len)
{
# 78 "/usr/include/x86_64-linux-gnu/bits/string3.h"
if(((__builtin_constant_p(__len)) && (__len == (0))) && ((!(__builtin_constant_p(__ch))) || (__ch != (0)))) {
# 81 "/usr/include/x86_64-linux-gnu/bits/string3.h"
__warn_memset_zero_len();
# 82 "/usr/include/x86_64-linux-gnu/bits/string3.h"
return __dest;
}
# 84 "/usr/include/x86_64-linux-gnu/bits/string3.h"
return __builtin___memset_chk(__dest, __ch, __len, __builtin_object_size(__dest, 0));
}
# 88 "/usr/include/x86_64-linux-gnu/bits/string3.h"
extern inline __attribute__((nothrow, leaf, always_inline, artificial)) void __attribute__((gnu_inline)) bcopy(void const * __src, void * __dest, unsigned long __len)
{
# 91 "/usr/include/x86_64-linux-gnu/bits/string3.h"
(void)(__builtin___memmove_chk(__dest, __src, __len, __builtin_object_size(__dest, 0)));
}
# 94 "/usr/include/x86_64-linux-gnu/bits/string3.h"
extern inline __attribute__((nothrow, leaf, always_inline, artificial)) void __attribute__((gnu_inline)) bzero(void * __dest, unsigned long __len)
{
# 97 "/usr/include/x86_64-linux-gnu/bits/string3.h"
(void)(__builtin___memset_chk(__dest, (char)0, __len, __builtin_object_size(__dest, 0)));
}
# 101 "/usr/include/x86_64-linux-gnu/bits/string3.h"
extern inline __attribute__((nothrow, leaf, always_inline, artificial)) char * __attribute__((gnu_inline)) strcpy(char * restrict __dest, char const * restrict __src)
{
# 104 "/usr/include/x86_64-linux-gnu/bits/string3.h"
return __builtin___strcpy_chk(__dest, __src, __builtin_object_size(__dest, (2) > (1)));
}
# 116 "/usr/include/x86_64-linux-gnu/bits/string3.h"
extern inline __attribute__((nothrow, leaf, always_inline, artificial)) char * __attribute__((gnu_inline)) strncpy(char * restrict __dest, char const * restrict __src, unsigned long __len)
{
# 120 "/usr/include/x86_64-linux-gnu/bits/string3.h"
return __builtin___strncpy_chk(__dest, __src, __len, __builtin_object_size(__dest, (2) > (1)));
}
extern __attribute__((nothrow, leaf)) char * __stpncpy_chk(char * __dest, char const * __src, unsigned long __n, unsigned long __destlen);
extern __attribute__((nothrow, leaf)) char * __stpncpy_alias(char * __dest, char const * __src, unsigned long __n) __asm__("stpncpy");
# 129 "/usr/include/x86_64-linux-gnu/bits/string3.h"
extern inline __attribute__((nothrow, leaf, always_inline, artificial)) char * __attribute__((gnu_inline)) stpncpy(char * __dest, char const * __src, unsigned long __n)
{
# 132 "/usr/include/x86_64-linux-gnu/bits/string3.h"
if(((__builtin_object_size(__dest, (2) > (1))) != ((unsigned long)(-(1)))) && ((!(__builtin_constant_p(__n))) || (__n <= (__builtin_object_size(__dest, (2) > (1)))))) {
# 134 "/usr/include/x86_64-linux-gnu/bits/string3.h"
return __stpncpy_chk(__dest, __src, __n, __builtin_object_size(__dest, (2) > (1)));
}
# 135 "/usr/include/x86_64-linux-gnu/bits/string3.h"
return __stpncpy_alias(__dest, __src, __n);
}
# 139 "/usr/include/x86_64-linux-gnu/bits/string3.h"
extern inline __attribute__((nothrow, leaf, always_inline, artificial)) char * __attribute__((gnu_inline)) strcat(char * restrict __dest, char const * restrict __src)
{
# 142 "/usr/include/x86_64-linux-gnu/bits/string3.h"
return __builtin___strcat_chk(__dest, __src, __builtin_object_size(__dest, (2) > (1)));
}
# 146 "/usr/include/x86_64-linux-gnu/bits/string3.h"
extern inline __attribute__((nothrow, leaf, always_inline, artificial)) char * __attribute__((gnu_inline)) strncat(char * restrict __dest, char const * restrict __src, unsigned long __len)
{
# 150 "/usr/include/x86_64-linux-gnu/bits/string3.h"
return __builtin___strncat_chk(__dest, __src, __len, __builtin_object_size(__dest, (2) > (1)));
}
extern __attribute__((nothrow, leaf)) double acos(double __x);
extern __attribute__((nothrow, leaf)) double __acos(double __x);
extern __attribute__((nothrow, leaf)) double asin(double __x);
extern __attribute__((nothrow, leaf)) double __asin(double __x);
extern __attribute__((nothrow, leaf)) double atan(double __x);
extern __attribute__((nothrow, leaf)) double __atan(double __x);
extern __attribute__((nothrow, leaf)) double atan2(double __y, double __x);
extern __attribute__((nothrow, leaf)) double __atan2(double __y, double __x);
extern __attribute__((nothrow, leaf)) double cos(double __x);
extern __attribute__((nothrow, leaf)) double __cos(double __x);
extern __attribute__((nothrow, leaf)) double sin(double __x);
extern __attribute__((nothrow, leaf)) double __sin(double __x);
extern __attribute__((nothrow, leaf)) double tan(double __x);
extern __attribute__((nothrow, leaf)) double __tan(double __x);
extern __attribute__((nothrow, leaf)) double cosh(double __x);
extern __attribute__((nothrow, leaf)) double __cosh(double __x);
extern __attribute__((nothrow, leaf)) double sinh(double __x);
extern __attribute__((nothrow, leaf)) double __sinh(double __x);
extern __attribute__((nothrow, leaf)) double tanh(double __x);
extern __attribute__((nothrow, leaf)) double __tanh(double __x);
extern __attribute__((nothrow, leaf)) double acosh(double __x);
extern __attribute__((nothrow, leaf)) double __acosh(double __x);
extern __attribute__((nothrow, leaf)) double asinh(double __x);
extern __attribute__((nothrow, leaf)) double __asinh(double __x);
extern __attribute__((nothrow, leaf)) double atanh(double __x);
extern __attribute__((nothrow, leaf)) double __atanh(double __x);
extern __attribute__((nothrow, leaf)) double exp(double __x);
extern __attribute__((nothrow, leaf)) double __exp(double __x);
extern __attribute__((nothrow, leaf)) double frexp(double __x, int * __exponent);
extern __attribute__((nothrow, leaf)) double __frexp(double __x, int * __exponent);
extern __attribute__((nothrow, leaf)) double ldexp(double __x, int __exponent);
extern __attribute__((nothrow, leaf)) double __ldexp(double __x, int __exponent);
extern __attribute__((nothrow, leaf)) double log(double __x);
extern __attribute__((nothrow, leaf)) double __log(double __x);
extern __attribute__((nothrow, leaf)) double log10(double __x);
extern __attribute__((nothrow, leaf)) double __log10(double __x);
extern __attribute__((nothrow, leaf)) double modf(double __x, double * __iptr);
extern __attribute__((nothrow, leaf, nonnull(2))) double __modf(double __x, double * __iptr);
extern __attribute__((nothrow, leaf)) double expm1(double __x);
extern __attribute__((nothrow, leaf)) double __expm1(double __x);
extern __attribute__((nothrow, leaf)) double log1p(double __x);
extern __attribute__((nothrow, leaf)) double __log1p(double __x);
extern __attribute__((nothrow, leaf)) double logb(double __x);
extern __attribute__((nothrow, leaf)) double __logb(double __x);
extern __attribute__((nothrow, leaf)) double exp2(double __x);
extern __attribute__((nothrow, leaf)) double __exp2(double __x);
extern __attribute__((nothrow, leaf)) double log2(double __x);
extern __attribute__((nothrow, leaf)) double __log2(double __x);
extern __attribute__((nothrow, leaf)) double pow(double __x, double __y);
extern __attribute__((nothrow, leaf)) double __pow(double __x, double __y);
extern __attribute__((nothrow, leaf)) double sqrt(double __x);
extern __attribute__((nothrow, leaf)) double __sqrt(double __x);
extern __attribute__((nothrow, leaf)) double hypot(double __x, double __y);
extern __attribute__((nothrow, leaf)) double __hypot(double __x, double __y);
extern __attribute__((nothrow, leaf)) double cbrt(double __x);
extern __attribute__((nothrow, leaf)) double __cbrt(double __x);
extern __attribute__((nothrow, leaf, const)) double ceil(double __x);
extern __attribute__((nothrow, leaf, const)) double __ceil(double __x);
extern __attribute__((nothrow, leaf, const)) double fabs(double __x);
extern __attribute__((nothrow, leaf, const)) double __fabs(double __x);
extern __attribute__((nothrow, leaf, const)) double floor(double __x);
extern __attribute__((nothrow, leaf, const)) double __floor(double __x);
extern __attribute__((nothrow, leaf)) double fmod(double __x, double __y);
extern __attribute__((nothrow, leaf)) double __fmod(double __x, double __y);
extern __attribute__((nothrow, leaf, const)) int __isinf(double __value);
extern __attribute__((nothrow, leaf, const)) int __finite(double __value);
extern __attribute__((nothrow, leaf, const)) int isinf(double __value);
extern __attribute__((nothrow, leaf, const)) int finite(double __value);
extern __attribute__((nothrow, leaf)) double drem(double __x, double __y);
extern __attribute__((nothrow, leaf)) double __drem(double __x, double __y);
extern __attribute__((nothrow, leaf)) double significand(double __x);
extern __attribute__((nothrow, leaf)) double __significand(double __x);
extern __attribute__((nothrow, leaf, const)) double copysign(double __x, double __y);
extern __attribute__((nothrow, leaf, const)) double __copysign(double __x, double __y);
extern __attribute__((nothrow, leaf, const)) double nan(char const * __tagb);
extern __attribute__((nothrow, leaf, const)) double __nan(char const * __tagb);
extern __attribute__((nothrow, leaf, const)) int __isnan(double __value);
extern __attribute__((nothrow, leaf, const)) int isnan(double __value);
extern __attribute__((nothrow, leaf)) double j0(double);
extern __attribute__((nothrow, leaf)) double __j0(double);
extern __attribute__((nothrow, leaf)) double j1(double);
extern __attribute__((nothrow, leaf)) double __j1(double);
extern __attribute__((nothrow, leaf)) double jn(int, double);
extern __attribute__((nothrow, leaf)) double __jn(int, double);
extern __attribute__((nothrow, leaf)) double y0(double);
extern __attribute__((nothrow, leaf)) double __y0(double);
extern __attribute__((nothrow, leaf)) double y1(double);
extern __attribute__((nothrow, leaf)) double __y1(double);
extern __attribute__((nothrow, leaf)) double yn(int, double);
extern __attribute__((nothrow, leaf)) double __yn(int, double);
extern __attribute__((nothrow, leaf)) double erf(double);
extern __attribute__((nothrow, leaf)) double __erf(double);
extern __attribute__((nothrow, leaf)) double erfc(double);
extern __attribute__((nothrow, leaf)) double __erfc(double);
extern __attribute__((nothrow, leaf)) double lgamma(double);
extern __attribute__((nothrow, leaf)) double __lgamma(double);
extern __attribute__((nothrow, leaf)) double tgamma(double);
extern __attribute__((nothrow, leaf)) double __tgamma(double);
extern __attribute__((nothrow, leaf)) double gamma(double);
extern __attribute__((nothrow, leaf)) double __gamma(double);
extern __attribute__((nothrow, leaf)) double lgamma_r(double, int * __signgamp);
extern __attribute__((nothrow, leaf)) double __lgamma_r(double, int * __signgamp);
extern __attribute__((nothrow, leaf)) double rint(double __x);
extern __attribute__((nothrow, leaf)) double __rint(double __x);
extern __attribute__((nothrow, leaf, const)) double nextafter(double __x, double __y);
extern __attribute__((nothrow, leaf, const)) double __nextafter(double __x, double __y);
extern __attribute__((nothrow, leaf, const)) double nexttoward(double __x, long double __y);
extern __attribute__((nothrow, leaf, const)) double __nexttoward(double __x, long double __y);
extern __attribute__((nothrow, leaf)) double remainder(double __x, double __y);
extern __attribute__((nothrow, leaf)) double __remainder(double __x, double __y);
extern __attribute__((nothrow, leaf)) double scalbn(double __x, int __n);
extern __attribute__((nothrow, leaf)) double __scalbn(double __x, int __n);
extern __attribute__((nothrow, leaf)) int ilogb(double __x);
extern __attribute__((nothrow, leaf)) int __ilogb(double __x);
extern __attribute__((nothrow, leaf)) double scalbln(double __x, long __n);
extern __attribute__((nothrow, leaf)) double __scalbln(double __x, long __n);
extern __attribute__((nothrow, leaf)) double nearbyint(double __x);
extern __attribute__((nothrow, leaf)) double __nearbyint(double __x);
extern __attribute__((nothrow, leaf, const)) double round(double __x);
extern __attribute__((nothrow, leaf, const)) double __round(double __x);
extern __attribute__((nothrow, leaf, const)) double trunc(double __x);
extern __attribute__((nothrow, leaf, const)) double __trunc(double __x);
extern __attribute__((nothrow, leaf)) double remquo(double __x, double __y, int * __quo);
extern __attribute__((nothrow, leaf)) double __remquo(double __x, double __y, int * __quo);
extern __attribute__((nothrow, leaf)) long lrint(double __x);
extern __attribute__((nothrow, leaf)) long __lrint(double __x);
__extension__ extern __attribute__((nothrow, leaf)) long long llrint(double __x);
extern __attribute__((nothrow, leaf)) long long __llrint(double __x);
extern __attribute__((nothrow, leaf)) long lround(double __x);
extern __attribute__((nothrow, leaf)) long __lround(double __x);
__extension__ extern __attribute__((nothrow, leaf)) long long llround(double __x);
extern __attribute__((nothrow, leaf)) long long __llround(double __x);
extern __attribute__((nothrow, leaf)) double fdim(double __x, double __y);
extern __attribute__((nothrow, leaf)) double __fdim(double __x, double __y);
extern __attribute__((nothrow, leaf, const)) double fmax(double __x, double __y);
extern __attribute__((nothrow, leaf, const)) double __fmax(double __x, double __y);
extern __attribute__((nothrow, leaf, const)) double fmin(double __x, double __y);
extern __attribute__((nothrow, leaf, const)) double __fmin(double __x, double __y);
extern __attribute__((nothrow, leaf, const)) int __fpclassify(double __value);
extern inline __attribute__((const)) int __attribute__((gnu_inline)) __signbit(double __x);
extern __attribute__((nothrow, leaf)) double fma(double __x, double __y, double __z);
extern __attribute__((nothrow, leaf)) double __fma(double __x, double __y, double __z);
extern __attribute__((nothrow, leaf)) double scalb(double __x, double __n);
extern __attribute__((nothrow, leaf)) double __scalb(double __x, double __n);
extern __attribute__((nothrow, leaf)) float acosf(float __x);
extern __attribute__((nothrow, leaf)) float __acosf(float __x);
extern __attribute__((nothrow, leaf)) float asinf(float __x);
extern __attribute__((nothrow, leaf)) float __asinf(float __x);
extern __attribute__((nothrow, leaf)) float atanf(float __x);
extern __attribute__((nothrow, leaf)) float __atanf(float __x);
extern __attribute__((nothrow, leaf)) float atan2f(float __y, float __x);
extern __attribute__((nothrow, leaf)) float __atan2f(float __y, float __x);
extern __attribute__((nothrow, leaf)) float cosf(float __x);
extern __attribute__((nothrow, leaf)) float __cosf(float __x);
extern __attribute__((nothrow, leaf)) float sinf(float __x);
extern __attribute__((nothrow, leaf)) float __sinf(float __x);
extern __attribute__((nothrow, leaf)) float tanf(float __x);
extern __attribute__((nothrow, leaf)) float __tanf(float __x);
extern __attribute__((nothrow, leaf)) float coshf(float __x);
extern __attribute__((nothrow, leaf)) float __coshf(float __x);
extern __attribute__((nothrow, leaf)) float sinhf(float __x);
extern __attribute__((nothrow, leaf)) float __sinhf(float __x);
extern __attribute__((nothrow, leaf)) float tanhf(float __x);
extern __attribute__((nothrow, leaf)) float __tanhf(float __x);
extern __attribute__((nothrow, leaf)) float acoshf(float __x);
extern __attribute__((nothrow, leaf)) float __acoshf(float __x);
extern __attribute__((nothrow, leaf)) float asinhf(float __x);
extern __attribute__((nothrow, leaf)) float __asinhf(float __x);
extern __attribute__((nothrow, leaf)) float atanhf(float __x);
extern __attribute__((nothrow, leaf)) float __atanhf(float __x);
extern __attribute__((nothrow, leaf)) float expf(float __x);
extern __attribute__((nothrow, leaf)) float __expf(float __x);
extern __attribute__((nothrow, leaf)) float frexpf(float __x, int * __exponent);
extern __attribute__((nothrow, leaf)) float __frexpf(float __x, int * __exponent);
extern __attribute__((nothrow, leaf)) float ldexpf(float __x, int __exponent);
extern __attribute__((nothrow, leaf)) float __ldexpf(float __x, int __exponent);
extern __attribute__((nothrow, leaf)) float logf(float __x);
extern __attribute__((nothrow, leaf)) float __logf(float __x);
extern __attribute__((nothrow, leaf)) float log10f(float __x);
extern __attribute__((nothrow, leaf)) float __log10f(float __x);
extern __attribute__((nothrow, leaf)) float modff(float __x, float * __iptr);
extern __attribute__((nothrow, leaf, nonnull(2))) float __modff(float __x, float * __iptr);
extern __attribute__((nothrow, leaf)) float expm1f(float __x);
extern __attribute__((nothrow, leaf)) float __expm1f(float __x);
extern __attribute__((nothrow, leaf)) float log1pf(float __x);
extern __attribute__((nothrow, leaf)) float __log1pf(float __x);
extern __attribute__((nothrow, leaf)) float logbf(float __x);
extern __attribute__((nothrow, leaf)) float __logbf(float __x);
extern __attribute__((nothrow, leaf)) float exp2f(float __x);
extern __attribute__((nothrow, leaf)) float __exp2f(float __x);
extern __attribute__((nothrow, leaf)) float log2f(float __x);
extern __attribute__((nothrow, leaf)) float __log2f(float __x);
extern __attribute__((nothrow, leaf)) float powf(float __x, float __y);
extern __attribute__((nothrow, leaf)) float __powf(float __x, float __y);
extern __attribute__((nothrow, leaf)) float sqrtf(float __x);
extern __attribute__((nothrow, leaf)) float __sqrtf(float __x);
extern __attribute__((nothrow, leaf)) float hypotf(float __x, float __y);
extern __attribute__((nothrow, leaf)) float __hypotf(float __x, float __y);
extern __attribute__((nothrow, leaf)) float cbrtf(float __x);
extern __attribute__((nothrow, leaf)) float __cbrtf(float __x);
extern __attribute__((nothrow, leaf, const)) float ceilf(float __x);
extern __attribute__((nothrow, leaf, const)) float __ceilf(float __x);
extern __attribute__((nothrow, leaf, const)) float fabsf(float __x);
extern __attribute__((nothrow, leaf, const)) float __fabsf(float __x);
extern __attribute__((nothrow, leaf, const)) float floorf(float __x);
extern __attribute__((nothrow, leaf, const)) float __floorf(float __x);
extern __attribute__((nothrow, leaf)) float fmodf(float __x, float __y);
extern __attribute__((nothrow, leaf)) float __fmodf(float __x, float __y);
extern __attribute__((nothrow, leaf, const)) int __isinff(float __value);
extern __attribute__((nothrow, leaf, const)) int __finitef(float __value);
extern __attribute__((nothrow, leaf, const)) int isinff(float __value);
extern __attribute__((nothrow, leaf, const)) int finitef(float __value);
extern __attribute__((nothrow, leaf)) float dremf(float __x, float __y);
extern __attribute__((nothrow, leaf)) float __dremf(float __x, float __y);
extern __attribute__((nothrow, leaf)) float significandf(float __x);
extern __attribute__((nothrow, leaf)) float __significandf(float __x);
extern __attribute__((nothrow, leaf, const)) float copysignf(float __x, float __y);
extern __attribute__((nothrow, leaf, const)) float __copysignf(float __x, float __y);
extern __attribute__((nothrow, leaf, const)) float nanf(char const * __tagb);
extern __attribute__((nothrow, leaf, const)) float __nanf(char const * __tagb);
extern __attribute__((nothrow, leaf, const)) int __isnanf(float __value);
extern __attribute__((nothrow, leaf, const)) int isnanf(float __value);
extern __attribute__((nothrow, leaf)) float j0f(float);
extern __attribute__((nothrow, leaf)) float __j0f(float);
extern __attribute__((nothrow, leaf)) float j1f(float);
extern __attribute__((nothrow, leaf)) float __j1f(float);
extern __attribute__((nothrow, leaf)) float jnf(int, float);
extern __attribute__((nothrow, leaf)) float __jnf(int, float);
extern __attribute__((nothrow, leaf)) float y0f(float);
extern __attribute__((nothrow, leaf)) float __y0f(float);
extern __attribute__((nothrow, leaf)) float y1f(float);
extern __attribute__((nothrow, leaf)) float __y1f(float);
extern __attribute__((nothrow, leaf)) float ynf(int, float);
extern __attribute__((nothrow, leaf)) float __ynf(int, float);
extern __attribute__((nothrow, leaf)) float erff(float);
extern __attribute__((nothrow, leaf)) float __erff(float);
extern __attribute__((nothrow, leaf)) float erfcf(float);
extern __attribute__((nothrow, leaf)) float __erfcf(float);
extern __attribute__((nothrow, leaf)) float lgammaf(float);
extern __attribute__((nothrow, leaf)) float __lgammaf(float);
extern __attribute__((nothrow, leaf)) float tgammaf(float);
extern __attribute__((nothrow, leaf)) float __tgammaf(float);
extern __attribute__((nothrow, leaf)) float gammaf(float);
extern __attribute__((nothrow, leaf)) float __gammaf(float);
extern __attribute__((nothrow, leaf)) float lgammaf_r(float, int * __signgamp);
extern __attribute__((nothrow, leaf)) float __lgammaf_r(float, int * __signgamp);
extern __attribute__((nothrow, leaf)) float rintf(float __x);
extern __attribute__((nothrow, leaf)) float __rintf(float __x);
extern __attribute__((nothrow, leaf, const)) float nextafterf(float __x, float __y);
extern __attribute__((nothrow, leaf, const)) float __nextafterf(float __x, float __y);
extern __attribute__((nothrow, leaf, const)) float nexttowardf(float __x, long double __y);
extern __attribute__((nothrow, leaf, const)) float __nexttowardf(float __x, long double __y);
extern __attribute__((nothrow, leaf)) float remainderf(float __x, float __y);
extern __attribute__((nothrow, leaf)) float __remainderf(float __x, float __y);
extern __attribute__((nothrow, leaf)) float scalbnf(float __x, int __n);
extern __attribute__((nothrow, leaf)) float __scalbnf(float __x, int __n);
extern __attribute__((nothrow, leaf)) int ilogbf(float __x);
extern __attribute__((nothrow, leaf)) int __ilogbf(float __x);
extern __attribute__((nothrow, leaf)) float scalblnf(float __x, long __n);
extern __attribute__((nothrow, leaf)) float __scalblnf(float __x, long __n);
extern __attribute__((nothrow, leaf)) float nearbyintf(float __x);
extern __attribute__((nothrow, leaf)) float __nearbyintf(float __x);
extern __attribute__((nothrow, leaf, const)) float roundf(float __x);
extern __attribute__((nothrow, leaf, const)) float __roundf(float __x);
extern __attribute__((nothrow, leaf, const)) float truncf(float __x);
extern __attribute__((nothrow, leaf, const)) float __truncf(float __x);
extern __attribute__((nothrow, leaf)) float remquof(float __x, float __y, int * __quo);
extern __attribute__((nothrow, leaf)) float __remquof(float __x, float __y, int * __quo);
extern __attribute__((nothrow, leaf)) long lrintf(float __x);
extern __attribute__((nothrow, leaf)) long __lrintf(float __x);
__extension__ extern __attribute__((nothrow, leaf)) long long llrintf(float __x);
extern __attribute__((nothrow, leaf)) long long __llrintf(float __x);
extern __attribute__((nothrow, leaf)) long lroundf(float __x);
extern __attribute__((nothrow, leaf)) long __lroundf(float __x);
__extension__ extern __attribute__((nothrow, leaf)) long long llroundf(float __x);
extern __attribute__((nothrow, leaf)) long long __llroundf(float __x);
extern __attribute__((nothrow, leaf)) float fdimf(float __x, float __y);
extern __attribute__((nothrow, leaf)) float __fdimf(float __x, float __y);
extern __attribute__((nothrow, leaf, const)) float fmaxf(float __x, float __y);
extern __attribute__((nothrow, leaf, const)) float __fmaxf(float __x, float __y);
extern __attribute__((nothrow, leaf, const)) float fminf(float __x, float __y);
extern __attribute__((nothrow, leaf, const)) float __fminf(float __x, float __y);
extern __attribute__((nothrow, leaf, const)) int __fpclassifyf(float __value);
extern inline __attribute__((const)) int __attribute__((gnu_inline)) __signbitf(float __x);
extern __attribute__((nothrow, leaf)) float fmaf(float __x, float __y, float __z);
extern __attribute__((nothrow, leaf)) float __fmaf(float __x, float __y, float __z);
extern __attribute__((nothrow, leaf)) float scalbf(float __x, float __n);
extern __attribute__((nothrow, leaf)) float __scalbf(float __x, float __n);
extern __attribute__((nothrow, leaf)) long double acosl(long double __x);
extern __attribute__((nothrow, leaf)) long double __acosl(long double __x);
extern __attribute__((nothrow, leaf)) long double asinl(long double __x);
extern __attribute__((nothrow, leaf)) long double __asinl(long double __x);
extern __attribute__((nothrow, leaf)) long double atanl(long double __x);
extern __attribute__((nothrow, leaf)) long double __atanl(long double __x);
extern __attribute__((nothrow, leaf)) long double atan2l(long double __y, long double __x);
extern __attribute__((nothrow, leaf)) long double __atan2l(long double __y, long double __x);
extern __attribute__((nothrow, leaf)) long double cosl(long double __x);
extern __attribute__((nothrow, leaf)) long double __cosl(long double __x);
extern __attribute__((nothrow, leaf)) long double sinl(long double __x);
extern __attribute__((nothrow, leaf)) long double __sinl(long double __x);
extern __attribute__((nothrow, leaf)) long double tanl(long double __x);
extern __attribute__((nothrow, leaf)) long double __tanl(long double __x);
extern __attribute__((nothrow, leaf)) long double coshl(long double __x);
extern __attribute__((nothrow, leaf)) long double __coshl(long double __x);
extern __attribute__((nothrow, leaf)) long double sinhl(long double __x);
extern __attribute__((nothrow, leaf)) long double __sinhl(long double __x);
extern __attribute__((nothrow, leaf)) long double tanhl(long double __x);
extern __attribute__((nothrow, leaf)) long double __tanhl(long double __x);
extern __attribute__((nothrow, leaf)) long double acoshl(long double __x);
extern __attribute__((nothrow, leaf)) long double __acoshl(long double __x);
extern __attribute__((nothrow, leaf)) long double asinhl(long double __x);
extern __attribute__((nothrow, leaf)) long double __asinhl(long double __x);
extern __attribute__((nothrow, leaf)) long double atanhl(long double __x);
extern __attribute__((nothrow, leaf)) long double __atanhl(long double __x);
extern __attribute__((nothrow, leaf)) long double expl(long double __x);
extern __attribute__((nothrow, leaf)) long double __expl(long double __x);
extern __attribute__((nothrow, leaf)) long double frexpl(long double __x, int * __exponent);
extern __attribute__((nothrow, leaf)) long double __frexpl(long double __x, int * __exponent);
extern __attribute__((nothrow, leaf)) long double ldexpl(long double __x, int __exponent);
extern __attribute__((nothrow, leaf)) long double __ldexpl(long double __x, int __exponent);
extern __attribute__((nothrow, leaf)) long double logl(long double __x);
extern __attribute__((nothrow, leaf)) long double __logl(long double __x);
extern __attribute__((nothrow, leaf)) long double log10l(long double __x);
extern __attribute__((nothrow, leaf)) long double __log10l(long double __x);
extern __attribute__((nothrow, leaf)) long double modfl(long double __x, long double * __iptr);
extern __attribute__((nothrow, leaf, nonnull(2))) long double __modfl(long double __x, long double * __iptr);
extern __attribute__((nothrow, leaf)) long double expm1l(long double __x);
extern __attribute__((nothrow, leaf)) long double __expm1l(long double __x);
extern __attribute__((nothrow, leaf)) long double log1pl(long double __x);
extern __attribute__((nothrow, leaf)) long double __log1pl(long double __x);
extern __attribute__((nothrow, leaf)) long double logbl(long double __x);
extern __attribute__((nothrow, leaf)) long double __logbl(long double __x);
extern __attribute__((nothrow, leaf)) long double exp2l(long double __x);
extern __attribute__((nothrow, leaf)) long double __exp2l(long double __x);
extern __attribute__((nothrow, leaf)) long double log2l(long double __x);
extern __attribute__((nothrow, leaf)) long double __log2l(long double __x);
extern __attribute__((nothrow, leaf)) long double powl(long double __x, long double __y);
extern __attribute__((nothrow, leaf)) long double __powl(long double __x, long double __y);
extern __attribute__((nothrow, leaf)) long double sqrtl(long double __x);
extern __attribute__((nothrow, leaf)) long double __sqrtl(long double __x);
extern __attribute__((nothrow, leaf)) long double hypotl(long double __x, long double __y);
extern __attribute__((nothrow, leaf)) long double __hypotl(long double __x, long double __y);
extern __attribute__((nothrow, leaf)) long double cbrtl(long double __x);
extern __attribute__((nothrow, leaf)) long double __cbrtl(long double __x);
extern __attribute__((nothrow, leaf, const)) long double ceill(long double __x);
extern __attribute__((nothrow, leaf, const)) long double __ceill(long double __x);
extern __attribute__((nothrow, leaf, const)) long double fabsl(long double __x);
extern __attribute__((nothrow, leaf, const)) long double __fabsl(long double __x);
extern __attribute__((nothrow, leaf, const)) long double floorl(long double __x);
extern __attribute__((nothrow, leaf, const)) long double __floorl(long double __x);
extern __attribute__((nothrow, leaf)) long double fmodl(long double __x, long double __y);
extern __attribute__((nothrow, leaf)) long double __fmodl(long double __x, long double __y);
extern __attribute__((nothrow, leaf, const)) int __isinfl(long double __value);
extern __attribute__((nothrow, leaf, const)) int __finitel(long double __value);
extern __attribute__((nothrow, leaf, const)) int isinfl(long double __value);
extern __attribute__((nothrow, leaf, const)) int finitel(long double __value);
extern __attribute__((nothrow, leaf)) long double dreml(long double __x, long double __y);
extern __attribute__((nothrow, leaf)) long double __dreml(long double __x, long double __y);
extern __attribute__((nothrow, leaf)) long double significandl(long double __x);
extern __attribute__((nothrow, leaf)) long double __significandl(long double __x);
extern __attribute__((nothrow, leaf, const)) long double copysignl(long double __x, long double __y);
extern __attribute__((nothrow, leaf, const)) long double __copysignl(long double __x, long double __y);
extern __attribute__((nothrow, leaf, const)) long double nanl(char const * __tagb);
extern __attribute__((nothrow, leaf, const)) long double __nanl(char const * __tagb);
extern __attribute__((nothrow, leaf, const)) int __isnanl(long double __value);
extern __attribute__((nothrow, leaf, const)) int isnanl(long double __value);
extern __attribute__((nothrow, leaf)) long double j0l(long double);
extern __attribute__((nothrow, leaf)) long double __j0l(long double);
extern __attribute__((nothrow, leaf)) long double j1l(long double);
extern __attribute__((nothrow, leaf)) long double __j1l(long double);
extern __attribute__((nothrow, leaf)) long double jnl(int, long double);
extern __attribute__((nothrow, leaf)) long double __jnl(int, long double);
extern __attribute__((nothrow, leaf)) long double y0l(long double);
extern __attribute__((nothrow, leaf)) long double __y0l(long double);
extern __attribute__((nothrow, leaf)) long double y1l(long double);
extern __attribute__((nothrow, leaf)) long double __y1l(long double);
extern __attribute__((nothrow, leaf)) long double ynl(int, long double);
extern __attribute__((nothrow, leaf)) long double __ynl(int, long double);
extern __attribute__((nothrow, leaf)) long double erfl(long double);
extern __attribute__((nothrow, leaf)) long double __erfl(long double);
extern __attribute__((nothrow, leaf)) long double erfcl(long double);
extern __attribute__((nothrow, leaf)) long double __erfcl(long double);
extern __attribute__((nothrow, leaf)) long double lgammal(long double);
extern __attribute__((nothrow, leaf)) long double __lgammal(long double);
extern __attribute__((nothrow, leaf)) long double tgammal(long double);
extern __attribute__((nothrow, leaf)) long double __tgammal(long double);
extern __attribute__((nothrow, leaf)) long double gammal(long double);
extern __attribute__((nothrow, leaf)) long double __gammal(long double);
extern __attribute__((nothrow, leaf)) long double lgammal_r(long double, int * __signgamp);
extern __attribute__((nothrow, leaf)) long double __lgammal_r(long double, int * __signgamp);
extern __attribute__((nothrow, leaf)) long double rintl(long double __x);
extern __attribute__((nothrow, leaf)) long double __rintl(long double __x);
extern __attribute__((nothrow, leaf, const)) long double nextafterl(long double __x, long double __y);
extern __attribute__((nothrow, leaf, const)) long double __nextafterl(long double __x, long double __y);
extern __attribute__((nothrow, leaf, const)) long double nexttowardl(long double __x, long double __y);
extern __attribute__((nothrow, leaf, const)) long double __nexttowardl(long double __x, long double __y);
extern __attribute__((nothrow, leaf)) long double remainderl(long double __x, long double __y);
extern __attribute__((nothrow, leaf)) long double __remainderl(long double __x, long double __y);
extern __attribute__((nothrow, leaf)) long double scalbnl(long double __x, int __n);
extern __attribute__((nothrow, leaf)) long double __scalbnl(long double __x, int __n);
extern __attribute__((nothrow, leaf)) int ilogbl(long double __x);
extern __attribute__((nothrow, leaf)) int __ilogbl(long double __x);
extern __attribute__((nothrow, leaf)) long double scalblnl(long double __x, long __n);
extern __attribute__((nothrow, leaf)) long double __scalblnl(long double __x, long __n);
extern __attribute__((nothrow, leaf)) long double nearbyintl(long double __x);
extern __attribute__((nothrow, leaf)) long double __nearbyintl(long double __x);
extern __attribute__((nothrow, leaf, const)) long double roundl(long double __x);
extern __attribute__((nothrow, leaf, const)) long double __roundl(long double __x);
extern __attribute__((nothrow, leaf, const)) long double truncl(long double __x);
extern __attribute__((nothrow, leaf, const)) long double __truncl(long double __x);
extern __attribute__((nothrow, leaf)) long double remquol(long double __x, long double __y, int * __quo);
extern __attribute__((nothrow, leaf)) long double __remquol(long double __x, long double __y, int * __quo);
extern __attribute__((nothrow, leaf)) long lrintl(long double __x);
extern __attribute__((nothrow, leaf)) long __lrintl(long double __x);
__extension__ extern __attribute__((nothrow, leaf)) long long llrintl(long double __x);
extern __attribute__((nothrow, leaf)) long long __llrintl(long double __x);
extern __attribute__((nothrow, leaf)) long lroundl(long double __x);
extern __attribute__((nothrow, leaf)) long __lroundl(long double __x);
__extension__ extern __attribute__((nothrow, leaf)) long long llroundl(long double __x);
extern __attribute__((nothrow, leaf)) long long __llroundl(long double __x);
extern __attribute__((nothrow, leaf)) long double fdiml(long double __x, long double __y);
extern __attribute__((nothrow, leaf)) long double __fdiml(long double __x, long double __y);
extern __attribute__((nothrow, leaf, const)) long double fmaxl(long double __x, long double __y);
extern __attribute__((nothrow, leaf, const)) long double __fmaxl(long double __x, long double __y);
extern __attribute__((nothrow, leaf, const)) long double fminl(long double __x, long double __y);
extern __attribute__((nothrow, leaf, const)) long double __fminl(long double __x, long double __y);
extern __attribute__((nothrow, leaf, const)) int __fpclassifyl(long double __value);
extern inline __attribute__((const)) int __attribute__((gnu_inline)) __signbitl(long double __x);
extern __attribute__((nothrow, leaf)) long double fmal(long double __x, long double __y, long double __z);
extern __attribute__((nothrow, leaf)) long double __fmal(long double __x, long double __y, long double __z);
extern __attribute__((nothrow, leaf)) long double scalbl(long double __x, long double __n);
extern __attribute__((nothrow, leaf)) long double __scalbl(long double __x, long double __n);
# 148 "/usr/include/math.h"
extern int signgam;
# 313 "/usr/include/math.h"
extern enum anon_type_26__LIB_VERSION_TYPE _LIB_VERSION;
extern int matherr(struct exception * __exc);
# 126 "/usr/include/x86_64-linux-gnu/bits/mathinline.h"
extern inline __attribute__((nothrow, leaf, always_inline)) int __attribute__((gnu_inline)) __signbitf(float __x)
{
# 130 "/usr/include/x86_64-linux-gnu/bits/mathinline.h"
int __m;
# 131 "/usr/include/x86_64-linux-gnu/bits/mathinline.h"
__asm__("pmovmskb %1, %0" : "=r"(__m) : "x"(__x));
# 132 "/usr/include/x86_64-linux-gnu/bits/mathinline.h"
return (__m & (8)) != (0);
}
# 138 "/usr/include/x86_64-linux-gnu/bits/mathinline.h"
extern inline __attribute__((nothrow, leaf, always_inline)) int __attribute__((gnu_inline)) __signbit(double __x)
{
# 142 "/usr/include/x86_64-linux-gnu/bits/mathinline.h"
int __m;
# 143 "/usr/include/x86_64-linux-gnu/bits/mathinline.h"
__asm__("pmovmskb %1, %0" : "=r"(__m) : "x"(__x));
# 144 "/usr/include/x86_64-linux-gnu/bits/mathinline.h"
return (__m & (128)) != (0);
}
# 150 "/usr/include/x86_64-linux-gnu/bits/mathinline.h"
extern inline __attribute__((nothrow, leaf, always_inline)) int __attribute__((gnu_inline)) __signbitl(long double __x)
{
union anon_type_27___u {
long double __l;
int __i[3];
};
# 153 "/usr/include/x86_64-linux-gnu/bits/mathinline.h"
__extension__ union anon_type_27___u __u = {__x};
# 154 "/usr/include/x86_64-linux-gnu/bits/mathinline.h"
return ((*(((&(__u))->__i) + (2))) & (32768)) != (0);
}
__attribute__((visibility("default"))) int OMPI_C_MPI_TYPE_NULL_DELETE_FN(struct ompi_datatype_t * datatype, int type_keyval, void * attribute_val_out, void * extra_state);
__attribute__((visibility("default"))) int OMPI_C_MPI_TYPE_NULL_COPY_FN(struct ompi_datatype_t * datatype, int type_keyval, void * extra_state, void * attribute_val_in, void * attribute_val_out, int * flag);
__attribute__((visibility("default"))) int OMPI_C_MPI_TYPE_DUP_FN(struct ompi_datatype_t * datatype, int type_keyval, void * extra_state, void * attribute_val_in, void * attribute_val_out, int * flag);
__attribute__((visibility("default"))) int OMPI_C_MPI_COMM_NULL_DELETE_FN(struct ompi_communicator_t * comm, int comm_keyval, void * attribute_val_out, void * extra_state);
__attribute__((visibility("default"))) int OMPI_C_MPI_COMM_NULL_COPY_FN(struct ompi_communicator_t * comm, int comm_keyval, void * extra_state, void * attribute_val_in, void * attribute_val_out, int * flag);
__attribute__((visibility("default"))) int OMPI_C_MPI_COMM_DUP_FN(struct ompi_communicator_t * comm, int comm_keyval, void * extra_state, void * attribute_val_in, void * attribute_val_out, int * flag);
__attribute__((visibility("default"))) int OMPI_C_MPI_NULL_DELETE_FN(struct ompi_communicator_t * comm, int comm_keyval, void * attribute_val_out, void * extra_state);
__attribute__((visibility("default"))) int OMPI_C_MPI_NULL_COPY_FN(struct ompi_communicator_t * comm, int comm_keyval, void * extra_state, void * attribute_val_in, void * attribute_val_out, int * flag);
__attribute__((visibility("default"))) int OMPI_C_MPI_DUP_FN(struct ompi_communicator_t * comm, int comm_keyval, void * extra_state, void * attribute_val_in, void * attribute_val_out, int * flag);
__attribute__((visibility("default"))) int OMPI_C_MPI_WIN_NULL_DELETE_FN(struct ompi_win_t * window, int win_keyval, void * attribute_val_out, void * extra_state);
__attribute__((visibility("default"))) int OMPI_C_MPI_WIN_NULL_COPY_FN(struct ompi_win_t * window, int win_keyval, void * extra_state, void * attribute_val_in, void * attribute_val_out, int * flag);
__attribute__((visibility("default"))) int OMPI_C_MPI_WIN_DUP_FN(struct ompi_win_t * window, int win_keyval, void * extra_state, void * attribute_val_in, void * attribute_val_out, int * flag);
# 748 "/usr/lib/openmpi/include/mpi.h"
extern __attribute__((visibility("default"))) struct ompi_predefined_communicator_t ompi_mpi_comm_world;
# 749 "/usr/lib/openmpi/include/mpi.h"
extern __attribute__((visibility("default"))) struct ompi_predefined_communicator_t ompi_mpi_comm_self;
# 750 "/usr/lib/openmpi/include/mpi.h"
extern __attribute__((visibility("default"))) struct ompi_predefined_communicator_t ompi_mpi_comm_null;
# 752 "/usr/lib/openmpi/include/mpi.h"
extern __attribute__((visibility("default"))) struct ompi_predefined_group_t ompi_mpi_group_empty;
# 753 "/usr/lib/openmpi/include/mpi.h"
extern __attribute__((visibility("default"))) struct ompi_predefined_group_t ompi_mpi_group_null;
# 755 "/usr/lib/openmpi/include/mpi.h"
extern __attribute__((visibility("default"))) struct ompi_predefined_request_t ompi_request_null;
# 757 "/usr/lib/openmpi/include/mpi.h"
extern __attribute__((visibility("default"))) struct ompi_predefined_op_t ompi_mpi_op_null;
# 758 "/usr/lib/openmpi/include/mpi.h"
extern __attribute__((visibility("default"))) struct ompi_predefined_op_t ompi_mpi_op_min;
# 759 "/usr/lib/openmpi/include/mpi.h"
extern __attribute__((visibility("default"))) struct ompi_predefined_op_t ompi_mpi_op_max;
# 760 "/usr/lib/openmpi/include/mpi.h"
extern __attribute__((visibility("default"))) struct ompi_predefined_op_t ompi_mpi_op_sum;
# 761 "/usr/lib/openmpi/include/mpi.h"
extern __attribute__((visibility("default"))) struct ompi_predefined_op_t ompi_mpi_op_prod;
# 762 "/usr/lib/openmpi/include/mpi.h"
extern __attribute__((visibility("default"))) struct ompi_predefined_op_t ompi_mpi_op_land;
# 763 "/usr/lib/openmpi/include/mpi.h"
extern __attribute__((visibility("default"))) struct ompi_predefined_op_t ompi_mpi_op_band;
# 764 "/usr/lib/openmpi/include/mpi.h"
extern __attribute__((visibility("default"))) struct ompi_predefined_op_t ompi_mpi_op_lor;
# 765 "/usr/lib/openmpi/include/mpi.h"
extern __attribute__((visibility("default"))) struct ompi_predefined_op_t ompi_mpi_op_bor;
# 766 "/usr/lib/openmpi/include/mpi.h"
extern __attribute__((visibility("default"))) struct ompi_predefined_op_t ompi_mpi_op_lxor;
# 767 "/usr/lib/openmpi/include/mpi.h"
extern __attribute__((visibility("default"))) struct ompi_predefined_op_t ompi_mpi_op_bxor;
# 768 "/usr/lib/openmpi/include/mpi.h"
extern __attribute__((visibility("default"))) struct ompi_predefined_op_t ompi_mpi_op_maxloc;
# 769 "/usr/lib/openmpi/include/mpi.h"
extern __attribute__((visibility("default"))) struct ompi_predefined_op_t ompi_mpi_op_minloc;
# 770 "/usr/lib/openmpi/include/mpi.h"
extern __attribute__((visibility("default"))) struct ompi_predefined_op_t ompi_mpi_op_replace;
# 773 "/usr/lib/openmpi/include/mpi.h"
extern __attribute__((visibility("default"))) struct ompi_predefined_datatype_t ompi_mpi_datatype_null;
# 775 "/usr/lib/openmpi/include/mpi.h"
extern __attribute__((visibility("default"))) struct ompi_predefined_datatype_t ompi_mpi_lb;
# 776 "/usr/lib/openmpi/include/mpi.h"
extern __attribute__((visibility("default"))) struct ompi_predefined_datatype_t ompi_mpi_ub;
# 777 "/usr/lib/openmpi/include/mpi.h"
extern __attribute__((visibility("default"))) struct ompi_predefined_datatype_t ompi_mpi_char;
# 778 "/usr/lib/openmpi/include/mpi.h"
extern __attribute__((visibility("default"))) struct ompi_predefined_datatype_t ompi_mpi_signed_char;
# 779 "/usr/lib/openmpi/include/mpi.h"
extern __attribute__((visibility("default"))) struct ompi_predefined_datatype_t ompi_mpi_unsigned_char;
# 780 "/usr/lib/openmpi/include/mpi.h"
extern __attribute__((visibility("default"))) struct ompi_predefined_datatype_t ompi_mpi_byte;
# 781 "/usr/lib/openmpi/include/mpi.h"
extern __attribute__((visibility("default"))) struct ompi_predefined_datatype_t ompi_mpi_short;
# 782 "/usr/lib/openmpi/include/mpi.h"
extern __attribute__((visibility("default"))) struct ompi_predefined_datatype_t ompi_mpi_unsigned_short;
# 783 "/usr/lib/openmpi/include/mpi.h"
extern __attribute__((visibility("default"))) struct ompi_predefined_datatype_t ompi_mpi_int;
# 784 "/usr/lib/openmpi/include/mpi.h"
extern __attribute__((visibility("default"))) struct ompi_predefined_datatype_t ompi_mpi_unsigned;
# 785 "/usr/lib/openmpi/include/mpi.h"
extern __attribute__((visibility("default"))) struct ompi_predefined_datatype_t ompi_mpi_long;
# 786 "/usr/lib/openmpi/include/mpi.h"
extern __attribute__((visibility("default"))) struct ompi_predefined_datatype_t ompi_mpi_unsigned_long;
# 787 "/usr/lib/openmpi/include/mpi.h"
extern __attribute__((visibility("default"))) struct ompi_predefined_datatype_t ompi_mpi_long_long_int;
# 788 "/usr/lib/openmpi/include/mpi.h"
extern __attribute__((visibility("default"))) struct ompi_predefined_datatype_t ompi_mpi_unsigned_long_long;
# 789 "/usr/lib/openmpi/include/mpi.h"
extern __attribute__((visibility("default"))) struct ompi_predefined_datatype_t ompi_mpi_float;
# 790 "/usr/lib/openmpi/include/mpi.h"
extern __attribute__((visibility("default"))) struct ompi_predefined_datatype_t ompi_mpi_double;
# 791 "/usr/lib/openmpi/include/mpi.h"
extern __attribute__((visibility("default"))) struct ompi_predefined_datatype_t ompi_mpi_long_double;
# 792 "/usr/lib/openmpi/include/mpi.h"
extern __attribute__((visibility("default"))) struct ompi_predefined_datatype_t ompi_mpi_wchar;
# 793 "/usr/lib/openmpi/include/mpi.h"
extern __attribute__((visibility("default"))) struct ompi_predefined_datatype_t ompi_mpi_packed;
# 798 "/usr/lib/openmpi/include/mpi.h"
extern __attribute__((visibility("default"))) struct ompi_predefined_datatype_t ompi_mpi_cxx_bool;
# 799 "/usr/lib/openmpi/include/mpi.h"
extern __attribute__((visibility("default"))) struct ompi_predefined_datatype_t ompi_mpi_cxx_cplex;
# 800 "/usr/lib/openmpi/include/mpi.h"
extern __attribute__((visibility("default"))) struct ompi_predefined_datatype_t ompi_mpi_cxx_dblcplex;
# 801 "/usr/lib/openmpi/include/mpi.h"
extern __attribute__((visibility("default"))) struct ompi_predefined_datatype_t ompi_mpi_cxx_ldblcplex;
# 806 "/usr/lib/openmpi/include/mpi.h"
extern __attribute__((visibility("default"))) struct ompi_predefined_datatype_t ompi_mpi_logical;
# 807 "/usr/lib/openmpi/include/mpi.h"
extern __attribute__((visibility("default"))) struct ompi_predefined_datatype_t ompi_mpi_character;
# 808 "/usr/lib/openmpi/include/mpi.h"
extern __attribute__((visibility("default"))) struct ompi_predefined_datatype_t ompi_mpi_integer;
# 809 "/usr/lib/openmpi/include/mpi.h"
extern __attribute__((visibility("default"))) struct ompi_predefined_datatype_t ompi_mpi_real;
# 810 "/usr/lib/openmpi/include/mpi.h"
extern __attribute__((visibility("default"))) struct ompi_predefined_datatype_t ompi_mpi_dblprec;
# 811 "/usr/lib/openmpi/include/mpi.h"
extern __attribute__((visibility("default"))) struct ompi_predefined_datatype_t ompi_mpi_cplex;
# 812 "/usr/lib/openmpi/include/mpi.h"
extern __attribute__((visibility("default"))) struct ompi_predefined_datatype_t ompi_mpi_dblcplex;
# 813 "/usr/lib/openmpi/include/mpi.h"
extern __attribute__((visibility("default"))) struct ompi_predefined_datatype_t ompi_mpi_ldblcplex;
# 816 "/usr/lib/openmpi/include/mpi.h"
extern __attribute__((visibility("default"))) struct ompi_predefined_datatype_t ompi_mpi_2int;
# 817 "/usr/lib/openmpi/include/mpi.h"
extern __attribute__((visibility("default"))) struct ompi_predefined_datatype_t ompi_mpi_2integer;
# 818 "/usr/lib/openmpi/include/mpi.h"
extern __attribute__((visibility("default"))) struct ompi_predefined_datatype_t ompi_mpi_2real;
# 819 "/usr/lib/openmpi/include/mpi.h"
extern __attribute__((visibility("default"))) struct ompi_predefined_datatype_t ompi_mpi_2dblprec;
# 820 "/usr/lib/openmpi/include/mpi.h"
extern __attribute__((visibility("default"))) struct ompi_predefined_datatype_t ompi_mpi_2cplex;
# 821 "/usr/lib/openmpi/include/mpi.h"
extern __attribute__((visibility("default"))) struct ompi_predefined_datatype_t ompi_mpi_2dblcplex;
# 823 "/usr/lib/openmpi/include/mpi.h"
extern __attribute__((visibility("default"))) struct ompi_predefined_datatype_t ompi_mpi_float_int;
# 824 "/usr/lib/openmpi/include/mpi.h"
extern __attribute__((visibility("default"))) struct ompi_predefined_datatype_t ompi_mpi_double_int;
# 825 "/usr/lib/openmpi/include/mpi.h"
extern __attribute__((visibility("default"))) struct ompi_predefined_datatype_t ompi_mpi_longdbl_int;
# 826 "/usr/lib/openmpi/include/mpi.h"
extern __attribute__((visibility("default"))) struct ompi_predefined_datatype_t ompi_mpi_short_int;
# 827 "/usr/lib/openmpi/include/mpi.h"
extern __attribute__((visibility("default"))) struct ompi_predefined_datatype_t ompi_mpi_long_int;
# 830 "/usr/lib/openmpi/include/mpi.h"
extern __attribute__((visibility("default"))) struct ompi_predefined_datatype_t ompi_mpi_logical1;
# 831 "/usr/lib/openmpi/include/mpi.h"
extern __attribute__((visibility("default"))) struct ompi_predefined_datatype_t ompi_mpi_logical2;
# 832 "/usr/lib/openmpi/include/mpi.h"
extern __attribute__((visibility("default"))) struct ompi_predefined_datatype_t ompi_mpi_logical4;
# 833 "/usr/lib/openmpi/include/mpi.h"
extern __attribute__((visibility("default"))) struct ompi_predefined_datatype_t ompi_mpi_logical8;
# 834 "/usr/lib/openmpi/include/mpi.h"
extern __attribute__((visibility("default"))) struct ompi_predefined_datatype_t ompi_mpi_integer1;
# 835 "/usr/lib/openmpi/include/mpi.h"
extern __attribute__((visibility("default"))) struct ompi_predefined_datatype_t ompi_mpi_integer2;
# 836 "/usr/lib/openmpi/include/mpi.h"
extern __attribute__((visibility("default"))) struct ompi_predefined_datatype_t ompi_mpi_integer4;
# 837 "/usr/lib/openmpi/include/mpi.h"
extern __attribute__((visibility("default"))) struct ompi_predefined_datatype_t ompi_mpi_integer8;
# 838 "/usr/lib/openmpi/include/mpi.h"
extern __attribute__((visibility("default"))) struct ompi_predefined_datatype_t ompi_mpi_integer16;
# 839 "/usr/lib/openmpi/include/mpi.h"
extern __attribute__((visibility("default"))) struct ompi_predefined_datatype_t ompi_mpi_real2;
# 840 "/usr/lib/openmpi/include/mpi.h"
extern __attribute__((visibility("default"))) struct ompi_predefined_datatype_t ompi_mpi_real4;
# 841 "/usr/lib/openmpi/include/mpi.h"
extern __attribute__((visibility("default"))) struct ompi_predefined_datatype_t ompi_mpi_real8;
# 842 "/usr/lib/openmpi/include/mpi.h"
extern __attribute__((visibility("default"))) struct ompi_predefined_datatype_t ompi_mpi_real16;
# 843 "/usr/lib/openmpi/include/mpi.h"
extern __attribute__((visibility("default"))) struct ompi_predefined_datatype_t ompi_mpi_complex8;
# 844 "/usr/lib/openmpi/include/mpi.h"
extern __attribute__((visibility("default"))) struct ompi_predefined_datatype_t ompi_mpi_complex16;
# 845 "/usr/lib/openmpi/include/mpi.h"
extern __attribute__((visibility("default"))) struct ompi_predefined_datatype_t ompi_mpi_complex32;
# 848 "/usr/lib/openmpi/include/mpi.h"
extern __attribute__((visibility("default"))) struct ompi_predefined_datatype_t ompi_mpi_int8_t;
# 849 "/usr/lib/openmpi/include/mpi.h"
extern __attribute__((visibility("default"))) struct ompi_predefined_datatype_t ompi_mpi_uint8_t;
# 850 "/usr/lib/openmpi/include/mpi.h"
extern __attribute__((visibility("default"))) struct ompi_predefined_datatype_t ompi_mpi_int16_t;
# 851 "/usr/lib/openmpi/include/mpi.h"
extern __attribute__((visibility("default"))) struct ompi_predefined_datatype_t ompi_mpi_uint16_t;
# 852 "/usr/lib/openmpi/include/mpi.h"
extern __attribute__((visibility("default"))) struct ompi_predefined_datatype_t ompi_mpi_int32_t;
# 853 "/usr/lib/openmpi/include/mpi.h"
extern __attribute__((visibility("default"))) struct ompi_predefined_datatype_t ompi_mpi_uint32_t;
# 854 "/usr/lib/openmpi/include/mpi.h"
extern __attribute__((visibility("default"))) struct ompi_predefined_datatype_t ompi_mpi_int64_t;
# 855 "/usr/lib/openmpi/include/mpi.h"
extern __attribute__((visibility("default"))) struct ompi_predefined_datatype_t ompi_mpi_uint64_t;
# 856 "/usr/lib/openmpi/include/mpi.h"
extern __attribute__((visibility("default"))) struct ompi_predefined_datatype_t ompi_mpi_aint;
# 857 "/usr/lib/openmpi/include/mpi.h"
extern __attribute__((visibility("default"))) struct ompi_predefined_datatype_t ompi_mpi_offset;
# 858 "/usr/lib/openmpi/include/mpi.h"
extern __attribute__((visibility("default"))) struct ompi_predefined_datatype_t ompi_mpi_c_bool;
# 859 "/usr/lib/openmpi/include/mpi.h"
extern __attribute__((visibility("default"))) struct ompi_predefined_datatype_t ompi_mpi_c_complex;
# 860 "/usr/lib/openmpi/include/mpi.h"
extern __attribute__((visibility("default"))) struct ompi_predefined_datatype_t ompi_mpi_c_float_complex;
# 861 "/usr/lib/openmpi/include/mpi.h"
extern __attribute__((visibility("default"))) struct ompi_predefined_datatype_t ompi_mpi_c_double_complex;
# 862 "/usr/lib/openmpi/include/mpi.h"
extern __attribute__((visibility("default"))) struct ompi_predefined_datatype_t ompi_mpi_c_long_double_complex;
# 864 "/usr/lib/openmpi/include/mpi.h"
extern __attribute__((visibility("default"))) struct ompi_predefined_errhandler_t ompi_mpi_errhandler_null;
# 865 "/usr/lib/openmpi/include/mpi.h"
extern __attribute__((visibility("default"))) struct ompi_predefined_errhandler_t ompi_mpi_errors_are_fatal;
# 866 "/usr/lib/openmpi/include/mpi.h"
extern __attribute__((visibility("default"))) struct ompi_predefined_errhandler_t ompi_mpi_errors_return;
# 868 "/usr/lib/openmpi/include/mpi.h"
extern __attribute__((visibility("default"))) struct ompi_predefined_win_t ompi_mpi_win_null;
# 869 "/usr/lib/openmpi/include/mpi.h"
extern __attribute__((visibility("default"))) struct ompi_predefined_file_t ompi_mpi_file_null;
# 871 "/usr/lib/openmpi/include/mpi.h"
extern __attribute__((visibility("default"))) struct ompi_predefined_info_t ompi_mpi_info_null;
# 873 "/usr/lib/openmpi/include/mpi.h"
extern __attribute__((visibility("default"))) int * MPI_F_STATUS_IGNORE;
# 874 "/usr/lib/openmpi/include/mpi.h"
extern __attribute__((visibility("default"))) int * MPI_F_STATUSES_IGNORE;
__attribute__((visibility("default"))) int MPI_Abort(struct ompi_communicator_t * comm, int errorcode);
__attribute__((visibility("default"))) int MPI_Accumulate(void * origin_addr, int origin_count, struct ompi_datatype_t * origin_datatype, int target_rank, long target_disp, int target_count, struct ompi_datatype_t * target_datatype, struct ompi_op_t * op, struct ompi_win_t * win);
__attribute__((visibility("default"))) int MPI_Add_error_class(int * errorclass);
__attribute__((visibility("default"))) int MPI_Add_error_code(int errorclass, int * errorcode);
__attribute__((visibility("default"))) int MPI_Add_error_string(int errorcode, char * string);
__attribute__((visibility("default"))) int MPI_Address(void * location, long * address);
__attribute__((visibility("default"))) int MPI_Allgather(void * sendbuf, int sendcount, struct ompi_datatype_t * sendtype, void * recvbuf, int recvcount, struct ompi_datatype_t * recvtype, struct ompi_communicator_t * comm);
__attribute__((visibility("default"))) int MPI_Allgatherv(void * sendbuf, int sendcount, struct ompi_datatype_t * sendtype, void * recvbuf, int * recvcounts, int * displs, struct ompi_datatype_t * recvtype, struct ompi_communicator_t * comm);
__attribute__((visibility("default"))) int MPI_Alloc_mem(long size, struct ompi_info_t * info, void * baseptr);
__attribute__((visibility("default"))) int MPI_Allreduce(void * sendbuf, void * recvbuf, int count, struct ompi_datatype_t * datatype, struct ompi_op_t * op, struct ompi_communicator_t * comm);
__attribute__((visibility("default"))) int MPI_Alltoall(void * sendbuf, int sendcount, struct ompi_datatype_t * sendtype, void * recvbuf, int recvcount, struct ompi_datatype_t * recvtype, struct ompi_communicator_t * comm);
__attribute__((visibility("default"))) int MPI_Alltoallv(void * sendbuf, int * sendcounts, int * sdispls, struct ompi_datatype_t * sendtype, void * recvbuf, int * recvcounts, int * rdispls, struct ompi_datatype_t * recvtype, struct ompi_communicator_t * comm);
__attribute__((visibility("default"))) int MPI_Alltoallw(void * sendbuf, int * sendcounts, int * sdispls, struct ompi_datatype_t * * sendtypes, void * recvbuf, int * recvcounts, int * rdispls, struct ompi_datatype_t * * recvtypes, struct ompi_communicator_t * comm);
__attribute__((visibility("default"))) int MPI_Attr_delete(struct ompi_communicator_t * comm, int keyval);
__attribute__((visibility("default"))) int MPI_Attr_get(struct ompi_communicator_t * comm, int keyval, void * attribute_val, int * flag);
__attribute__((visibility("default"))) int MPI_Attr_put(struct ompi_communicator_t * comm, int keyval, void * attribute_val);
__attribute__((visibility("default"))) int MPI_Barrier(struct ompi_communicator_t * comm);
__attribute__((visibility("default"))) int MPI_Bcast(void * buffer, int count, struct ompi_datatype_t * datatype, int root, struct ompi_communicator_t * comm);
__attribute__((visibility("default"))) int MPI_Bsend(void * buf, int count, struct ompi_datatype_t * datatype, int dest, int tag, struct ompi_communicator_t * comm);
__attribute__((visibility("default"))) int MPI_Bsend_init(void * buf, int count, struct ompi_datatype_t * datatype, int dest, int tag, struct ompi_communicator_t * comm, struct ompi_request_t * * request);
__attribute__((visibility("default"))) int MPI_Buffer_attach(void * buffer, int size);
__attribute__((visibility("default"))) int MPI_Buffer_detach(void * buffer, int * size);
__attribute__((visibility("default"))) int MPI_Cancel(struct ompi_request_t * * request);
__attribute__((visibility("default"))) int MPI_Cart_coords(struct ompi_communicator_t * comm, int rank, int maxdims, int * coords);
__attribute__((visibility("default"))) int MPI_Cart_create(struct ompi_communicator_t * old_comm, int ndims, int * dims, int * periods, int reorder, struct ompi_communicator_t * * comm_cart);
__attribute__((visibility("default"))) int MPI_Cart_get(struct ompi_communicator_t * comm, int maxdims, int * dims, int * periods, int * coords);
__attribute__((visibility("default"))) int MPI_Cart_map(struct ompi_communicator_t * comm, int ndims, int * dims, int * periods, int * newrank);
__attribute__((visibility("default"))) int MPI_Cart_rank(struct ompi_communicator_t * comm, int * coords, int * rank);
__attribute__((visibility("default"))) int MPI_Cart_shift(struct ompi_communicator_t * comm, int direction, int disp, int * rank_source, int * rank_dest);
__attribute__((visibility("default"))) int MPI_Cart_sub(struct ompi_communicator_t * comm, int * remain_dims, struct ompi_communicator_t * * new_comm);
__attribute__((visibility("default"))) int MPI_Cartdim_get(struct ompi_communicator_t * comm, int * ndims);
__attribute__((visibility("default"))) int MPI_Close_port(char * port_name);
__attribute__((visibility("default"))) int MPI_Comm_accept(char * port_name, struct ompi_info_t * info, int root, struct ompi_communicator_t * comm, struct ompi_communicator_t * * newcomm);
__attribute__((visibility("default"))) int MPI_Comm_c2f(struct ompi_communicator_t * comm);
__attribute__((visibility("default"))) int MPI_Comm_call_errhandler(struct ompi_communicator_t * comm, int errorcode);
__attribute__((visibility("default"))) int MPI_Comm_compare(struct ompi_communicator_t * comm1, struct ompi_communicator_t * comm2, int * result);
__attribute__((visibility("default"))) int MPI_Comm_connect(char * port_name, struct ompi_info_t * info, int root, struct ompi_communicator_t * comm, struct ompi_communicator_t * * newcomm);
__attribute__((visibility("default"))) int MPI_Comm_create_errhandler(void (* function)(struct ompi_communicator_t * * , int * , ...), struct ompi_errhandler_t * * errhandler);
__attribute__((visibility("default"))) int MPI_Comm_create_keyval(int (* comm_copy_attr_fn)(struct ompi_communicator_t * , int, void * , void * , void * , int * ), int (* comm_delete_attr_fn)(struct ompi_communicator_t * , int, void * , void * ), int * comm_keyval, void * extra_state);
__attribute__((visibility("default"))) int MPI_Comm_create(struct ompi_communicator_t * comm, struct ompi_group_t * group, struct ompi_communicator_t * * newcomm);
__attribute__((visibility("default"))) int MPI_Comm_delete_attr(struct ompi_communicator_t * comm, int comm_keyval);
__attribute__((visibility("default"))) int MPI_Comm_disconnect(struct ompi_communicator_t * * comm);
__attribute__((visibility("default"))) int MPI_Comm_dup(struct ompi_communicator_t * comm, struct ompi_communicator_t * * newcomm);
__attribute__((visibility("default"))) struct ompi_communicator_t * MPI_Comm_f2c(int comm);
__attribute__((visibility("default"))) int MPI_Comm_free_keyval(int * comm_keyval);
__attribute__((visibility("default"))) int MPI_Comm_free(struct ompi_communicator_t * * comm);
__attribute__((visibility("default"))) int MPI_Comm_get_attr(struct ompi_communicator_t * comm, int comm_keyval, void * attribute_val, int * flag);
__attribute__((visibility("default"))) int MPI_Comm_get_errhandler(struct ompi_communicator_t * comm, struct ompi_errhandler_t * * erhandler);
__attribute__((visibility("default"))) int MPI_Comm_get_name(struct ompi_communicator_t * comm, char * comm_name, int * resultlen);
__attribute__((visibility("default"))) int MPI_Comm_get_parent(struct ompi_communicator_t * * parent);
__attribute__((visibility("default"))) int MPI_Comm_group(struct ompi_communicator_t * comm, struct ompi_group_t * * group);
__attribute__((visibility("default"))) int MPI_Comm_join(int fd, struct ompi_communicator_t * * intercomm);
__attribute__((visibility("default"))) int MPI_Comm_rank(struct ompi_communicator_t * comm, int * rank);
__attribute__((visibility("default"))) int MPI_Comm_remote_group(struct ompi_communicator_t * comm, struct ompi_group_t * * group);
__attribute__((visibility("default"))) int MPI_Comm_remote_size(struct ompi_communicator_t * comm, int * size);
__attribute__((visibility("default"))) int MPI_Comm_set_attr(struct ompi_communicator_t * comm, int comm_keyval, void * attribute_val);
__attribute__((visibility("default"))) int MPI_Comm_set_errhandler(struct ompi_communicator_t * comm, struct ompi_errhandler_t * errhandler);
__attribute__((visibility("default"))) int MPI_Comm_set_name(struct ompi_communicator_t * comm, char * comm_name);
__attribute__((visibility("default"))) int MPI_Comm_size(struct ompi_communicator_t * comm, int * size);
__attribute__((visibility("default"))) int MPI_Comm_spawn(char * command, char * * argv, int maxprocs, struct ompi_info_t * info, int root, struct ompi_communicator_t * comm, struct ompi_communicator_t * * intercomm, int * array_of_errcodes);
__attribute__((visibility("default"))) int MPI_Comm_spawn_multiple(int count, char * * array_of_commands, char * * * array_of_argv, int * array_of_maxprocs, struct ompi_info_t * * array_of_info, int root, struct ompi_communicator_t * comm, struct ompi_communicator_t * * intercomm, int * array_of_errcodes);
__attribute__((visibility("default"))) int MPI_Comm_split(struct ompi_communicator_t * comm, int color, int key, struct ompi_communicator_t * * newcomm);
__attribute__((visibility("default"))) int MPI_Comm_test_inter(struct ompi_communicator_t * comm, int * flag);
__attribute__((visibility("default"))) int MPI_Dims_create(int nnodes, int ndims, int * dims);
__attribute__((visibility("default"))) int MPI_Errhandler_c2f(struct ompi_errhandler_t * errhandler);
__attribute__((visibility("default"))) int MPI_Errhandler_create(void (* function)(struct ompi_communicator_t * * , int * , ...), struct ompi_errhandler_t * * errhandler);
__attribute__((visibility("default"))) struct ompi_errhandler_t * MPI_Errhandler_f2c(int errhandler);
__attribute__((visibility("default"))) int MPI_Errhandler_free(struct ompi_errhandler_t * * errhandler);
__attribute__((visibility("default"))) int MPI_Errhandler_get(struct ompi_communicator_t * comm, struct ompi_errhandler_t * * errhandler);
__attribute__((visibility("default"))) int MPI_Errhandler_set(struct ompi_communicator_t * comm, struct ompi_errhandler_t * errhandler);
__attribute__((visibility("default"))) int MPI_Error_class(int errorcode, int * errorclass);
__attribute__((visibility("default"))) int MPI_Error_string(int errorcode, char * string, int * resultlen);
__attribute__((visibility("default"))) int MPI_Exscan(void * sendbuf, void * recvbuf, int count, struct ompi_datatype_t * datatype, struct ompi_op_t * op, struct ompi_communicator_t * comm);
__attribute__((visibility("default"))) int MPI_File_c2f(struct ompi_file_t * file);
__attribute__((visibility("default"))) struct ompi_file_t * MPI_File_f2c(int file);
__attribute__((visibility("default"))) int MPI_File_call_errhandler(struct ompi_file_t * fh, int errorcode);
__attribute__((visibility("default"))) int MPI_File_create_errhandler(void (* function)(struct ompi_file_t * * , int * , ...), struct ompi_errhandler_t * * errhandler);
__attribute__((visibility("default"))) int MPI_File_set_errhandler(struct ompi_file_t * file, struct ompi_errhandler_t * errhandler);
__attribute__((visibility("default"))) int MPI_File_get_errhandler(struct ompi_file_t * file, struct ompi_errhandler_t * * errhandler);
__attribute__((visibility("default"))) int MPI_File_open(struct ompi_communicator_t * comm, char * filename, int amode, struct ompi_info_t * info, struct ompi_file_t * * fh);
__attribute__((visibility("default"))) int MPI_File_close(struct ompi_file_t * * fh);
__attribute__((visibility("default"))) int MPI_File_delete(char * filename, struct ompi_info_t * info);
__attribute__((visibility("default"))) int MPI_File_set_size(struct ompi_file_t * fh, long long size);
__attribute__((visibility("default"))) int MPI_File_preallocate(struct ompi_file_t * fh, long long size);
__attribute__((visibility("default"))) int MPI_File_get_size(struct ompi_file_t * fh, long long * size);
__attribute__((visibility("default"))) int MPI_File_get_group(struct ompi_file_t * fh, struct ompi_group_t * * group);
__attribute__((visibility("default"))) int MPI_File_get_amode(struct ompi_file_t * fh, int * amode);
__attribute__((visibility("default"))) int MPI_File_set_info(struct ompi_file_t * fh, struct ompi_info_t * info);
__attribute__((visibility("default"))) int MPI_File_get_info(struct ompi_file_t * fh, struct ompi_info_t * * info_used);
__attribute__((visibility("default"))) int MPI_File_set_view(struct ompi_file_t * fh, long long disp, struct ompi_datatype_t * etype, struct ompi_datatype_t * filetype, char * datarep, struct ompi_info_t * info);
__attribute__((visibility("default"))) int MPI_File_get_view(struct ompi_file_t * fh, long long * disp, struct ompi_datatype_t * * etype, struct ompi_datatype_t * * filetype, char * datarep);
__attribute__((visibility("default"))) int MPI_File_read_at(struct ompi_file_t * fh, long long offset, void * buf, int count, struct ompi_datatype_t * datatype, struct ompi_status_public_t * status);
__attribute__((visibility("default"))) int MPI_File_read_at_all(struct ompi_file_t * fh, long long offset, void * buf, int count, struct ompi_datatype_t * datatype, struct ompi_status_public_t * status);
__attribute__((visibility("default"))) int MPI_File_write_at(struct ompi_file_t * fh, long long offset, void * buf, int count, struct ompi_datatype_t * datatype, struct ompi_status_public_t * status);
__attribute__((visibility("default"))) int MPI_File_write_at_all(struct ompi_file_t * fh, long long offset, void * buf, int count, struct ompi_datatype_t * datatype, struct ompi_status_public_t * status);
__attribute__((visibility("default"))) int MPI_File_iread_at(struct ompi_file_t * fh, long long offset, void * buf, int count, struct ompi_datatype_t * datatype, struct ompi_request_t * * request);
__attribute__((visibility("default"))) int MPI_File_iwrite_at(struct ompi_file_t * fh, long long offset, void * buf, int count, struct ompi_datatype_t * datatype, struct ompi_request_t * * request);
__attribute__((visibility("default"))) int MPI_File_read(struct ompi_file_t * fh, void * buf, int count, struct ompi_datatype_t * datatype, struct ompi_status_public_t * status);
__attribute__((visibility("default"))) int MPI_File_read_all(struct ompi_file_t * fh, void * buf, int count, struct ompi_datatype_t * datatype, struct ompi_status_public_t * status);
__attribute__((visibility("default"))) int MPI_File_write(struct ompi_file_t * fh, void * buf, int count, struct ompi_datatype_t * datatype, struct ompi_status_public_t * status);
__attribute__((visibility("default"))) int MPI_File_write_all(struct ompi_file_t * fh, void * buf, int count, struct ompi_datatype_t * datatype, struct ompi_status_public_t * status);
__attribute__((visibility("default"))) int MPI_File_iread(struct ompi_file_t * fh, void * buf, int count, struct ompi_datatype_t * datatype, struct ompi_request_t * * request);
__attribute__((visibility("default"))) int MPI_File_iwrite(struct ompi_file_t * fh, void * buf, int count, struct ompi_datatype_t * datatype, struct ompi_request_t * * request);
__attribute__((visibility("default"))) int MPI_File_seek(struct ompi_file_t * fh, long long offset, int whence);
__attribute__((visibility("default"))) int MPI_File_get_position(struct ompi_file_t * fh, long long * offset);
__attribute__((visibility("default"))) int MPI_File_get_byte_offset(struct ompi_file_t * fh, long long offset, long long * disp);
__attribute__((visibility("default"))) int MPI_File_read_shared(struct ompi_file_t * fh, void * buf, int count, struct ompi_datatype_t * datatype, struct ompi_status_public_t * status);
__attribute__((visibility("default"))) int MPI_File_write_shared(struct ompi_file_t * fh, void * buf, int count, struct ompi_datatype_t * datatype, struct ompi_status_public_t * status);
__attribute__((visibility("default"))) int MPI_File_iread_shared(struct ompi_file_t * fh, void * buf, int count, struct ompi_datatype_t * datatype, struct ompi_request_t * * request);
__attribute__((visibility("default"))) int MPI_File_iwrite_shared(struct ompi_file_t * fh, void * buf, int count, struct ompi_datatype_t * datatype, struct ompi_request_t * * request);
__attribute__((visibility("default"))) int MPI_File_read_ordered(struct ompi_file_t * fh, void * buf, int count, struct ompi_datatype_t * datatype, struct ompi_status_public_t * status);
__attribute__((visibility("default"))) int MPI_File_write_ordered(struct ompi_file_t * fh, void * buf, int count, struct ompi_datatype_t * datatype, struct ompi_status_public_t * status);
__attribute__((visibility("default"))) int MPI_File_seek_shared(struct ompi_file_t * fh, long long offset, int whence);
__attribute__((visibility("default"))) int MPI_File_get_position_shared(struct ompi_file_t * fh, long long * offset);
__attribute__((visibility("default"))) int MPI_File_read_at_all_begin(struct ompi_file_t * fh, long long offset, void * buf, int count, struct ompi_datatype_t * datatype);
__attribute__((visibility("default"))) int MPI_File_read_at_all_end(struct ompi_file_t * fh, void * buf, struct ompi_status_public_t * status);
__attribute__((visibility("default"))) int MPI_File_write_at_all_begin(struct ompi_file_t * fh, long long offset, void * buf, int count, struct ompi_datatype_t * datatype);
__attribute__((visibility("default"))) int MPI_File_write_at_all_end(struct ompi_file_t * fh, void * buf, struct ompi_status_public_t * status);
__attribute__((visibility("default"))) int MPI_File_read_all_begin(struct ompi_file_t * fh, void * buf, int count, struct ompi_datatype_t * datatype);
__attribute__((visibility("default"))) int MPI_File_read_all_end(struct ompi_file_t * fh, void * buf, struct ompi_status_public_t * status);
__attribute__((visibility("default"))) int MPI_File_write_all_begin(struct ompi_file_t * fh, void * buf, int count, struct ompi_datatype_t * datatype);
__attribute__((visibility("default"))) int MPI_File_write_all_end(struct ompi_file_t * fh, void * buf, struct ompi_status_public_t * status);
__attribute__((visibility("default"))) int MPI_File_read_ordered_begin(struct ompi_file_t * fh, void * buf, int count, struct ompi_datatype_t * datatype);
__attribute__((visibility("default"))) int MPI_File_read_ordered_end(struct ompi_file_t * fh, void * buf, struct ompi_status_public_t * status);
__attribute__((visibility("default"))) int MPI_File_write_ordered_begin(struct ompi_file_t * fh, void * buf, int count, struct ompi_datatype_t * datatype);
__attribute__((visibility("default"))) int MPI_File_write_ordered_end(struct ompi_file_t * fh, void * buf, struct ompi_status_public_t * status);
__attribute__((visibility("default"))) int MPI_File_get_type_extent(struct ompi_file_t * fh, struct ompi_datatype_t * datatype, long * extent);
__attribute__((visibility("default"))) int MPI_File_set_atomicity(struct ompi_file_t * fh, int flag);
__attribute__((visibility("default"))) int MPI_File_get_atomicity(struct ompi_file_t * fh, int * flag);
__attribute__((visibility("default"))) int MPI_File_sync(struct ompi_file_t * fh);
__attribute__((visibility("default"))) int MPI_Finalize(void);
__attribute__((visibility("default"))) int MPI_Finalized(int * flag);
__attribute__((visibility("default"))) int MPI_Free_mem(void * base);
__attribute__((visibility("default"))) int MPI_Gather(void * sendbuf, int sendcount, struct ompi_datatype_t * sendtype, void * recvbuf, int recvcount, struct ompi_datatype_t * recvtype, int root, struct ompi_communicator_t * comm);
__attribute__((visibility("default"))) int MPI_Gatherv(void * sendbuf, int sendcount, struct ompi_datatype_t * sendtype, void * recvbuf, int * recvcounts, int * displs, struct ompi_datatype_t * recvtype, int root, struct ompi_communicator_t * comm);
__attribute__((visibility("default"))) int MPI_Get_address(void * location, long * address);
__attribute__((visibility("default"))) int MPI_Get_count(struct ompi_status_public_t * status, struct ompi_datatype_t * datatype, int * count);
__attribute__((visibility("default"))) int MPI_Get_elements(struct ompi_status_public_t * status, struct ompi_datatype_t * datatype, int * count);
__attribute__((visibility("default"))) int MPI_Get(void * origin_addr, int origin_count, struct ompi_datatype_t * origin_datatype, int target_rank, long target_disp, int target_count, struct ompi_datatype_t * target_datatype, struct ompi_win_t * win);
__attribute__((visibility("default"))) int MPI_Get_processor_name(char * name, int * resultlen);
__attribute__((visibility("default"))) int MPI_Get_version(int * version, int * subversion);
__attribute__((visibility("default"))) int MPI_Graph_create(struct ompi_communicator_t * comm_old, int nnodes, int * index, int * edges, int reorder, struct ompi_communicator_t * * comm_graph);
__attribute__((visibility("default"))) int MPI_Graph_get(struct ompi_communicator_t * comm, int maxindex, int maxedges, int * index, int * edges);
__attribute__((visibility("default"))) int MPI_Graph_map(struct ompi_communicator_t * comm, int nnodes, int * index, int * edges, int * newrank);
__attribute__((visibility("default"))) int MPI_Graph_neighbors_count(struct ompi_communicator_t * comm, int rank, int * nneighbors);
__attribute__((visibility("default"))) int MPI_Graph_neighbors(struct ompi_communicator_t * comm, int rank, int maxneighbors, int * neighbors);
__attribute__((visibility("default"))) int MPI_Graphdims_get(struct ompi_communicator_t * comm, int * nnodes, int * nedges);
__attribute__((visibility("default"))) int MPI_Grequest_complete(struct ompi_request_t * request);
__attribute__((visibility("default"))) int MPI_Grequest_start(int (* query_fn)(void * , struct ompi_status_public_t * ), int (* free_fn)(void * ), int (* cancel_fn)(void * , int), void * extra_state, struct ompi_request_t * * request);
__attribute__((visibility("default"))) int MPI_Group_c2f(struct ompi_group_t * group);
__attribute__((visibility("default"))) int MPI_Group_compare(struct ompi_group_t * group1, struct ompi_group_t * group2, int * result);
__attribute__((visibility("default"))) int MPI_Group_difference(struct ompi_group_t * group1, struct ompi_group_t * group2, struct ompi_group_t * * newgroup);
__attribute__((visibility("default"))) int MPI_Group_excl(struct ompi_group_t * group, int n, int * ranks, struct ompi_group_t * * newgroup);
__attribute__((visibility("default"))) struct ompi_group_t * MPI_Group_f2c(int group);
__attribute__((visibility("default"))) int MPI_Group_free(struct ompi_group_t * * group);
__attribute__((visibility("default"))) int MPI_Group_incl(struct ompi_group_t * group, int n, int * ranks, struct ompi_group_t * * newgroup);
__attribute__((visibility("default"))) int MPI_Group_intersection(struct ompi_group_t * group1, struct ompi_group_t * group2, struct ompi_group_t * * newgroup);
__attribute__((visibility("default"))) int MPI_Group_range_excl(struct ompi_group_t * group, int n, int ranges[][3], struct ompi_group_t * * newgroup);
__attribute__((visibility("default"))) int MPI_Group_range_incl(struct ompi_group_t * group, int n, int ranges[][3], struct ompi_group_t * * newgroup);
__attribute__((visibility("default"))) int MPI_Group_rank(struct ompi_group_t * group, int * rank);
__attribute__((visibility("default"))) int MPI_Group_size(struct ompi_group_t * group, int * size);
__attribute__((visibility("default"))) int MPI_Group_translate_ranks(struct ompi_group_t * group1, int n, int * ranks1, struct ompi_group_t * group2, int * ranks2);
__attribute__((visibility("default"))) int MPI_Group_union(struct ompi_group_t * group1, struct ompi_group_t * group2, struct ompi_group_t * * newgroup);
__attribute__((visibility("default"))) int MPI_Ibsend(void * buf, int count, struct ompi_datatype_t * datatype, int dest, int tag, struct ompi_communicator_t * comm, struct ompi_request_t * * request);
__attribute__((visibility("default"))) int MPI_Info_c2f(struct ompi_info_t * info);
__attribute__((visibility("default"))) int MPI_Info_create(struct ompi_info_t * * info);
__attribute__((visibility("default"))) int MPI_Info_delete(struct ompi_info_t * info, char * key);
__attribute__((visibility("default"))) int MPI_Info_dup(struct ompi_info_t * info, struct ompi_info_t * * newinfo);
__attribute__((visibility("default"))) struct ompi_info_t * MPI_Info_f2c(int info);
__attribute__((visibility("default"))) int MPI_Info_free(struct ompi_info_t * * info);
__attribute__((visibility("default"))) int MPI_Info_get(struct ompi_info_t * info, char * key, int valuelen, char * value, int * flag);
__attribute__((visibility("default"))) int MPI_Info_get_nkeys(struct ompi_info_t * info, int * nkeys);
__attribute__((visibility("default"))) int MPI_Info_get_nthkey(struct ompi_info_t * info, int n, char * key);
__attribute__((visibility("default"))) int MPI_Info_get_valuelen(struct ompi_info_t * info, char * key, int * valuelen, int * flag);
__attribute__((visibility("default"))) int MPI_Info_set(struct ompi_info_t * info, char * key, char * value);
__attribute__((visibility("default"))) int MPI_Init(int * argc, char * * * argv);
__attribute__((visibility("default"))) int MPI_Initialized(int * flag);
__attribute__((visibility("default"))) int MPI_Init_thread(int * argc, char * * * argv, int required, int * provided);
__attribute__((visibility("default"))) int MPI_Intercomm_create(struct ompi_communicator_t * local_comm, int local_leader, struct ompi_communicator_t * bridge_comm, int remote_leader, int tag, struct ompi_communicator_t * * newintercomm);
__attribute__((visibility("default"))) int MPI_Intercomm_merge(struct ompi_communicator_t * intercomm, int high, struct ompi_communicator_t * * newintercomm);
__attribute__((visibility("default"))) int MPI_Iprobe(int source, int tag, struct ompi_communicator_t * comm, int * flag, struct ompi_status_public_t * status);
__attribute__((visibility("default"))) int MPI_Irecv(void * buf, int count, struct ompi_datatype_t * datatype, int source, int tag, struct ompi_communicator_t * comm, struct ompi_request_t * * request);
__attribute__((visibility("default"))) int MPI_Irsend(void * buf, int count, struct ompi_datatype_t * datatype, int dest, int tag, struct ompi_communicator_t * comm, struct ompi_request_t * * request);
__attribute__((visibility("default"))) int MPI_Isend(void * buf, int count, struct ompi_datatype_t * datatype, int dest, int tag, struct ompi_communicator_t * comm, struct ompi_request_t * * request);
__attribute__((visibility("default"))) int MPI_Issend(void * buf, int count, struct ompi_datatype_t * datatype, int dest, int tag, struct ompi_communicator_t * comm, struct ompi_request_t * * request);
__attribute__((visibility("default"))) int MPI_Is_thread_main(int * flag);
__attribute__((visibility("default"))) int MPI_Keyval_create(int (* copy_fn)(struct ompi_communicator_t * , int, void * , void * , void * , int * ), int (* delete_fn)(struct ompi_communicator_t * , int, void * , void * ), int * keyval, void * extra_state);
__attribute__((visibility("default"))) int MPI_Keyval_free(int * keyval);
__attribute__((visibility("default"))) int MPI_Lookup_name(char * service_name, struct ompi_info_t * info, char * port_name);
__attribute__((visibility("default"))) int MPI_Op_c2f(struct ompi_op_t * op);
__attribute__((visibility("default"))) int MPI_Op_commutative(struct ompi_op_t * op, int * commute);
__attribute__((visibility("default"))) int MPI_Op_create(void (* function)(void * , void * , int * , struct ompi_datatype_t * * ), int commute, struct ompi_op_t * * op);
__attribute__((visibility("default"))) int MPI_Open_port(struct ompi_info_t * info, char * port_name);
__attribute__((visibility("default"))) struct ompi_op_t * MPI_Op_f2c(int op);
__attribute__((visibility("default"))) int MPI_Op_free(struct ompi_op_t * * op);
__attribute__((visibility("default"))) int MPI_Pack_external(char * datarep, void * inbuf, int incount, struct ompi_datatype_t * datatype, void * outbuf, long outsize, long * position);
__attribute__((visibility("default"))) int MPI_Pack_external_size(char * datarep, int incount, struct ompi_datatype_t * datatype, long * size);
__attribute__((visibility("default"))) int MPI_Pack(void * inbuf, int incount, struct ompi_datatype_t * datatype, void * outbuf, int outsize, int * position, struct ompi_communicator_t * comm);
__attribute__((visibility("default"))) int MPI_Pack_size(int incount, struct ompi_datatype_t * datatype, struct ompi_communicator_t * comm, int * size);
__attribute__((visibility("default"))) int MPI_Pcontrol(int const level, ...);
__attribute__((visibility("default"))) int MPI_Probe(int source, int tag, struct ompi_communicator_t * comm, struct ompi_status_public_t * status);
__attribute__((visibility("default"))) int MPI_Publish_name(char * service_name, struct ompi_info_t * info, char * port_name);
__attribute__((visibility("default"))) int MPI_Put(void * origin_addr, int origin_count, struct ompi_datatype_t * origin_datatype, int target_rank, long target_disp, int target_count, struct ompi_datatype_t * target_datatype, struct ompi_win_t * win);
__attribute__((visibility("default"))) int MPI_Query_thread(int * provided);
__attribute__((visibility("default"))) int MPI_Recv_init(void * buf, int count, struct ompi_datatype_t * datatype, int source, int tag, struct ompi_communicator_t * comm, struct ompi_request_t * * request);
__attribute__((visibility("default"))) int MPI_Recv(void * buf, int count, struct ompi_datatype_t * datatype, int source, int tag, struct ompi_communicator_t * comm, struct ompi_status_public_t * status);
__attribute__((visibility("default"))) int MPI_Reduce(void * sendbuf, void * recvbuf, int count, struct ompi_datatype_t * datatype, struct ompi_op_t * op, int root, struct ompi_communicator_t * comm);
__attribute__((visibility("default"))) int MPI_Reduce_local(void * inbuf, void * inoutbuf, int count, struct ompi_datatype_t * datatype, struct ompi_op_t * op);
__attribute__((visibility("default"))) int MPI_Reduce_scatter(void * sendbuf, void * recvbuf, int * recvcounts, struct ompi_datatype_t * datatype, struct ompi_op_t * op, struct ompi_communicator_t * comm);
__attribute__((visibility("default"))) int MPI_Register_datarep(char * datarep, int (* read_conversion_fn)(void * , struct ompi_datatype_t * , int, void * , long long, void * ), int (* write_conversion_fn)(void * , struct ompi_datatype_t * , int, void * , long long, void * ), int (* dtype_file_extent_fn)(struct ompi_datatype_t * , long * , void * ), void * extra_state);
__attribute__((visibility("default"))) int MPI_Request_c2f(struct ompi_request_t * request);
__attribute__((visibility("default"))) struct ompi_request_t * MPI_Request_f2c(int request);
__attribute__((visibility("default"))) int MPI_Request_free(struct ompi_request_t * * request);
__attribute__((visibility("default"))) int MPI_Request_get_status(struct ompi_request_t * request, int * flag, struct ompi_status_public_t * status);
__attribute__((visibility("default"))) int MPI_Rsend(void * ibuf, int count, struct ompi_datatype_t * datatype, int dest, int tag, struct ompi_communicator_t * comm);
__attribute__((visibility("default"))) int MPI_Rsend_init(void * buf, int count, struct ompi_datatype_t * datatype, int dest, int tag, struct ompi_communicator_t * comm, struct ompi_request_t * * request);
__attribute__((visibility("default"))) int MPI_Scan(void * sendbuf, void * recvbuf, int count, struct ompi_datatype_t * datatype, struct ompi_op_t * op, struct ompi_communicator_t * comm);
__attribute__((visibility("default"))) int MPI_Scatter(void * sendbuf, int sendcount, struct ompi_datatype_t * sendtype, void * recvbuf, int recvcount, struct ompi_datatype_t * recvtype, int root, struct ompi_communicator_t * comm);
__attribute__((visibility("default"))) int MPI_Scatterv(void * sendbuf, int * sendcounts, int * displs, struct ompi_datatype_t * sendtype, void * recvbuf, int recvcount, struct ompi_datatype_t * recvtype, int root, struct ompi_communicator_t * comm);
__attribute__((visibility("default"))) int MPI_Send_init(void * buf, int count, struct ompi_datatype_t * datatype, int dest, int tag, struct ompi_communicator_t * comm, struct ompi_request_t * * request);
__attribute__((visibility("default"))) int MPI_Send(void * buf, int count, struct ompi_datatype_t * datatype, int dest, int tag, struct ompi_communicator_t * comm);
__attribute__((visibility("default"))) int MPI_Sendrecv(void * sendbuf, int sendcount, struct ompi_datatype_t * sendtype, int dest, int sendtag, void * recvbuf, int recvcount, struct ompi_datatype_t * recvtype, int source, int recvtag, struct ompi_communicator_t * comm, struct ompi_status_public_t * status);
__attribute__((visibility("default"))) int MPI_Sendrecv_replace(void * buf, int count, struct ompi_datatype_t * datatype, int dest, int sendtag, int source, int recvtag, struct ompi_communicator_t * comm, struct ompi_status_public_t * status);
__attribute__((visibility("default"))) int MPI_Ssend_init(void * buf, int count, struct ompi_datatype_t * datatype, int dest, int tag, struct ompi_communicator_t * comm, struct ompi_request_t * * request);
__attribute__((visibility("default"))) int MPI_Ssend(void * buf, int count, struct ompi_datatype_t * datatype, int dest, int tag, struct ompi_communicator_t * comm);
__attribute__((visibility("default"))) int MPI_Start(struct ompi_request_t * * request);
__attribute__((visibility("default"))) int MPI_Startall(int count, struct ompi_request_t * * array_of_requests);
__attribute__((visibility("default"))) int MPI_Status_c2f(struct ompi_status_public_t * c_status, int * f_status);
__attribute__((visibility("default"))) int MPI_Status_f2c(int * f_status, struct ompi_status_public_t * c_status);
__attribute__((visibility("default"))) int MPI_Status_set_cancelled(struct ompi_status_public_t * status, int flag);
__attribute__((visibility("default"))) int MPI_Status_set_elements(struct ompi_status_public_t * status, struct ompi_datatype_t * datatype, int count);
__attribute__((visibility("default"))) int MPI_Testall(int count, struct ompi_request_t * array_of_requests[], int * flag, struct ompi_status_public_t array_of_statuses[]);
__attribute__((visibility("default"))) int MPI_Testany(int count, struct ompi_request_t * array_of_requests[], int * index, int * flag, struct ompi_status_public_t * status);
__attribute__((visibility("default"))) int MPI_Test(struct ompi_request_t * * request, int * flag, struct ompi_status_public_t * status);
__attribute__((visibility("default"))) int MPI_Test_cancelled(struct ompi_status_public_t * status, int * flag);
__attribute__((visibility("default"))) int MPI_Testsome(int incount, struct ompi_request_t * array_of_requests[], int * outcount, int array_of_indices[], struct ompi_status_public_t array_of_statuses[]);
__attribute__((visibility("default"))) int MPI_Topo_test(struct ompi_communicator_t * comm, int * status);
__attribute__((visibility("default"))) int MPI_Type_c2f(struct ompi_datatype_t * datatype);
__attribute__((visibility("default"))) int MPI_Type_commit(struct ompi_datatype_t * * type);
__attribute__((visibility("default"))) int MPI_Type_contiguous(int count, struct ompi_datatype_t * oldtype, struct ompi_datatype_t * * newtype);
__attribute__((visibility("default"))) int MPI_Type_create_darray(int size, int rank, int ndims, int gsize_array[], int distrib_array[], int darg_array[], int psize_array[], int order, struct ompi_datatype_t * oldtype, struct ompi_datatype_t * * newtype);
__attribute__((visibility("default"))) int MPI_Type_create_f90_complex(int p, int r, struct ompi_datatype_t * * newtype);
__attribute__((visibility("default"))) int MPI_Type_create_f90_integer(int r, struct ompi_datatype_t * * newtype);
__attribute__((visibility("default"))) int MPI_Type_create_f90_real(int p, int r, struct ompi_datatype_t * * newtype);
__attribute__((visibility("default"))) int MPI_Type_create_hindexed(int count, int array_of_blocklengths[], long array_of_displacements[], struct ompi_datatype_t * oldtype, struct ompi_datatype_t * * newtype);
__attribute__((visibility("default"))) int MPI_Type_create_hvector(int count, int blocklength, long stride, struct ompi_datatype_t * oldtype, struct ompi_datatype_t * * newtype);
__attribute__((visibility("default"))) int MPI_Type_create_keyval(int (* type_copy_attr_fn)(struct ompi_datatype_t * , int, void * , void * , void * , int * ), int (* type_delete_attr_fn)(struct ompi_datatype_t * , int, void * , void * ), int * type_keyval, void * extra_state);
__attribute__((visibility("default"))) int MPI_Type_create_indexed_block(int count, int blocklength, int array_of_displacements[], struct ompi_datatype_t * oldtype, struct ompi_datatype_t * * newtype);
__attribute__((visibility("default"))) int MPI_Type_create_struct(int count, int array_of_block_lengths[], long array_of_displacements[], struct ompi_datatype_t * array_of_types[], struct ompi_datatype_t * * newtype);
__attribute__((visibility("default"))) int MPI_Type_create_subarray(int ndims, int size_array[], int subsize_array[], int start_array[], int order, struct ompi_datatype_t * oldtype, struct ompi_datatype_t * * newtype);
__attribute__((visibility("default"))) int MPI_Type_create_resized(struct ompi_datatype_t * oldtype, long lb, long extent, struct ompi_datatype_t * * newtype);
__attribute__((visibility("default"))) int MPI_Type_delete_attr(struct ompi_datatype_t * type, int type_keyval);
__attribute__((visibility("default"))) int MPI_Type_dup(struct ompi_datatype_t * type, struct ompi_datatype_t * * newtype);
__attribute__((visibility("default"))) int MPI_Type_extent(struct ompi_datatype_t * type, long * extent);
__attribute__((visibility("default"))) int MPI_Type_free(struct ompi_datatype_t * * type);
__attribute__((visibility("default"))) int MPI_Type_free_keyval(int * type_keyval);
__attribute__((visibility("default"))) struct ompi_datatype_t * MPI_Type_f2c(int datatype);
__attribute__((visibility("default"))) int MPI_Type_get_attr(struct ompi_datatype_t * type, int type_keyval, void * attribute_val, int * flag);
__attribute__((visibility("default"))) int MPI_Type_get_contents(struct ompi_datatype_t * mtype, int max_integers, int max_addresses, int max_datatypes, int array_of_integers[], long array_of_addresses[], struct ompi_datatype_t * array_of_datatypes[]);
__attribute__((visibility("default"))) int MPI_Type_get_envelope(struct ompi_datatype_t * type, int * num_integers, int * num_addresses, int * num_datatypes, int * combiner);
__attribute__((visibility("default"))) int MPI_Type_get_extent(struct ompi_datatype_t * type, long * lb, long * extent);
__attribute__((visibility("default"))) int MPI_Type_get_name(struct ompi_datatype_t * type, char * type_name, int * resultlen);
__attribute__((visibility("default"))) int MPI_Type_get_true_extent(struct ompi_datatype_t * datatype, long * true_lb, long * true_extent);
__attribute__((visibility("default"))) int MPI_Type_hindexed(int count, int array_of_blocklengths[], long array_of_displacements[], struct ompi_datatype_t * oldtype, struct ompi_datatype_t * * newtype);
__attribute__((visibility("default"))) int MPI_Type_hvector(int count, int blocklength, long stride, struct ompi_datatype_t * oldtype, struct ompi_datatype_t * * newtype);
__attribute__((visibility("default"))) int MPI_Type_indexed(int count, int array_of_blocklengths[], int array_of_displacements[], struct ompi_datatype_t * oldtype, struct ompi_datatype_t * * newtype);
__attribute__((visibility("default"))) int MPI_Type_lb(struct ompi_datatype_t * type, long * lb);
__attribute__((visibility("default"))) int MPI_Type_match_size(int typeclass, int size, struct ompi_datatype_t * * type);
__attribute__((visibility("default"))) int MPI_Type_set_attr(struct ompi_datatype_t * type, int type_keyval, void * attr_val);
__attribute__((visibility("default"))) int MPI_Type_set_name(struct ompi_datatype_t * type, char * type_name);
__attribute__((visibility("default"))) int MPI_Type_size(struct ompi_datatype_t * type, int * size);
__attribute__((visibility("default"))) int MPI_Type_struct(int count, int array_of_blocklengths[], long array_of_displacements[], struct ompi_datatype_t * array_of_types[], struct ompi_datatype_t * * newtype);
__attribute__((visibility("default"))) int MPI_Type_ub(struct ompi_datatype_t * mtype, long * ub);
__attribute__((visibility("default"))) int MPI_Type_vector(int count, int blocklength, int stride, struct ompi_datatype_t * oldtype, struct ompi_datatype_t * * newtype);
__attribute__((visibility("default"))) int MPI_Unpack(void * inbuf, int insize, int * position, void * outbuf, int outcount, struct ompi_datatype_t * datatype, struct ompi_communicator_t * comm);
__attribute__((visibility("default"))) int MPI_Unpublish_name(char * service_name, struct ompi_info_t * info, char * port_name);
__attribute__((visibility("default"))) int MPI_Unpack_external(char * datarep, void * inbuf, long insize, long * position, void * outbuf, int outcount, struct ompi_datatype_t * datatype);
__attribute__((visibility("default"))) int MPI_Waitall(int count, struct ompi_request_t * * array_of_requests, struct ompi_status_public_t * array_of_statuses);
__attribute__((visibility("default"))) int MPI_Waitany(int count, struct ompi_request_t * * array_of_requests, int * index, struct ompi_status_public_t * status);
__attribute__((visibility("default"))) int MPI_Wait(struct ompi_request_t * * request, struct ompi_status_public_t * status);
__attribute__((visibility("default"))) int MPI_Waitsome(int incount, struct ompi_request_t * * array_of_requests, int * outcount, int * array_of_indices, struct ompi_status_public_t * array_of_statuses);
__attribute__((visibility("default"))) int MPI_Win_c2f(struct ompi_win_t * win);
__attribute__((visibility("default"))) int MPI_Win_call_errhandler(struct ompi_win_t * win, int errorcode);
__attribute__((visibility("default"))) int MPI_Win_complete(struct ompi_win_t * win);
__attribute__((visibility("default"))) int MPI_Win_create(void * base, long size, int disp_unit, struct ompi_info_t * info, struct ompi_communicator_t * comm, struct ompi_win_t * * win);
__attribute__((visibility("default"))) int MPI_Win_create_errhandler(void (* function)(struct ompi_win_t * * , int * , ...), struct ompi_errhandler_t * * errhandler);
__attribute__((visibility("default"))) int MPI_Win_create_keyval(int (* win_copy_attr_fn)(struct ompi_win_t * , int, void * , void * , void * , int * ), int (* win_delete_attr_fn)(struct ompi_win_t * , int, void * , void * ), int * win_keyval, void * extra_state);
__attribute__((visibility("default"))) int MPI_Win_delete_attr(struct ompi_win_t * win, int win_keyval);
__attribute__((visibility("default"))) struct ompi_win_t * MPI_Win_f2c(int win);
__attribute__((visibility("default"))) int MPI_Win_fence(int assert, struct ompi_win_t * win);
__attribute__((visibility("default"))) int MPI_Win_free(struct ompi_win_t * * win);
__attribute__((visibility("default"))) int MPI_Win_free_keyval(int * win_keyval);
__attribute__((visibility("default"))) int MPI_Win_get_attr(struct ompi_win_t * win, int win_keyval, void * attribute_val, int * flag);
__attribute__((visibility("default"))) int MPI_Win_get_errhandler(struct ompi_win_t * win, struct ompi_errhandler_t * * errhandler);
__attribute__((visibility("default"))) int MPI_Win_get_group(struct ompi_win_t * win, struct ompi_group_t * * group);
__attribute__((visibility("default"))) int MPI_Win_get_name(struct ompi_win_t * win, char * win_name, int * resultlen);
__attribute__((visibility("default"))) int MPI_Win_lock(int lock_type, int rank, int assert, struct ompi_win_t * win);
__attribute__((visibility("default"))) int MPI_Win_post(struct ompi_group_t * group, int assert, struct ompi_win_t * win);
__attribute__((visibility("default"))) int MPI_Win_set_attr(struct ompi_win_t * win, int win_keyval, void * attribute_val);
__attribute__((visibility("default"))) int MPI_Win_set_errhandler(struct ompi_win_t * win, struct ompi_errhandler_t * errhandler);
__attribute__((visibility("default"))) int MPI_Win_set_name(struct ompi_win_t * win, char * win_name);
__attribute__((visibility("default"))) int MPI_Win_start(struct ompi_group_t * group, int assert, struct ompi_win_t * win);
__attribute__((visibility("default"))) int MPI_Win_test(struct ompi_win_t * win, int * flag);
__attribute__((visibility("default"))) int MPI_Win_unlock(int rank, struct ompi_win_t * win);
__attribute__((visibility("default"))) int MPI_Win_wait(struct ompi_win_t * win);
__attribute__((visibility("default"))) double MPI_Wtick(void);
__attribute__((visibility("default"))) double MPI_Wtime(void);
__attribute__((visibility("default"))) int PMPI_Abort(struct ompi_communicator_t * comm, int errorcode);
__attribute__((visibility("default"))) int PMPI_Accumulate(void * origin_addr, int origin_count, struct ompi_datatype_t * origin_datatype, int target_rank, long target_disp, int target_count, struct ompi_datatype_t * target_datatype, struct ompi_op_t * op, struct ompi_win_t * win);
__attribute__((visibility("default"))) int PMPI_Add_error_class(int * errorclass);
__attribute__((visibility("default"))) int PMPI_Add_error_code(int errorclass, int * errorcode);
__attribute__((visibility("default"))) int PMPI_Add_error_string(int errorcode, char * string);
__attribute__((visibility("default"))) int PMPI_Address(void * location, long * address);
__attribute__((visibility("default"))) int PMPI_Allgather(void * sendbuf, int sendcount, struct ompi_datatype_t * sendtype, void * recvbuf, int recvcount, struct ompi_datatype_t * recvtype, struct ompi_communicator_t * comm);
__attribute__((visibility("default"))) int PMPI_Allgatherv(void * sendbuf, int sendcount, struct ompi_datatype_t * sendtype, void * recvbuf, int * recvcounts, int * displs, struct ompi_datatype_t * recvtype, struct ompi_communicator_t * comm);
__attribute__((visibility("default"))) int PMPI_Alloc_mem(long size, struct ompi_info_t * info, void * baseptr);
__attribute__((visibility("default"))) int PMPI_Allreduce(void * sendbuf, void * recvbuf, int count, struct ompi_datatype_t * datatype, struct ompi_op_t * op, struct ompi_communicator_t * comm);
__attribute__((visibility("default"))) int PMPI_Alltoall(void * sendbuf, int sendcount, struct ompi_datatype_t * sendtype, void * recvbuf, int recvcount, struct ompi_datatype_t * recvtype, struct ompi_communicator_t * comm);
__attribute__((visibility("default"))) int PMPI_Alltoallv(void * sendbuf, int * sendcounts, int * sdispls, struct ompi_datatype_t * sendtype, void * recvbuf, int * recvcounts, int * rdispls, struct ompi_datatype_t * recvtype, struct ompi_communicator_t * comm);
__attribute__((visibility("default"))) int PMPI_Alltoallw(void * sendbuf, int * sendcounts, int * sdispls, struct ompi_datatype_t * * sendtypes, void * recvbuf, int * recvcounts, int * rdispls, struct ompi_datatype_t * * recvtypes, struct ompi_communicator_t * comm);
__attribute__((visibility("default"))) int PMPI_Attr_delete(struct ompi_communicator_t * comm, int keyval);
__attribute__((visibility("default"))) int PMPI_Attr_get(struct ompi_communicator_t * comm, int keyval, void * attribute_val, int * flag);
__attribute__((visibility("default"))) int PMPI_Attr_put(struct ompi_communicator_t * comm, int keyval, void * attribute_val);
__attribute__((visibility("default"))) int PMPI_Barrier(struct ompi_communicator_t * comm);
__attribute__((visibility("default"))) int PMPI_Bcast(void * buffer, int count, struct ompi_datatype_t * datatype, int root, struct ompi_communicator_t * comm);
__attribute__((visibility("default"))) int PMPI_Bsend(void * buf, int count, struct ompi_datatype_t * datatype, int dest, int tag, struct ompi_communicator_t * comm);
__attribute__((visibility("default"))) int PMPI_Bsend_init(void * buf, int count, struct ompi_datatype_t * datatype, int dest, int tag, struct ompi_communicator_t * comm, struct ompi_request_t * * request);
__attribute__((visibility("default"))) int PMPI_Buffer_attach(void * buffer, int size);
__attribute__((visibility("default"))) int PMPI_Buffer_detach(void * buffer, int * size);
__attribute__((visibility("default"))) int PMPI_Cancel(struct ompi_request_t * * request);
__attribute__((visibility("default"))) int PMPI_Cart_coords(struct ompi_communicator_t * comm, int rank, int maxdims, int * coords);
__attribute__((visibility("default"))) int PMPI_Cart_create(struct ompi_communicator_t * old_comm, int ndims, int * dims, int * periods, int reorder, struct ompi_communicator_t * * comm_cart);
__attribute__((visibility("default"))) int PMPI_Cart_get(struct ompi_communicator_t * comm, int maxdims, int * dims, int * periods, int * coords);
__attribute__((visibility("default"))) int PMPI_Cart_map(struct ompi_communicator_t * comm, int ndims, int * dims, int * periods, int * newrank);
__attribute__((visibility("default"))) int PMPI_Cart_rank(struct ompi_communicator_t * comm, int * coords, int * rank);
__attribute__((visibility("default"))) int PMPI_Cart_shift(struct ompi_communicator_t * comm, int direction, int disp, int * rank_source, int * rank_dest);
__attribute__((visibility("default"))) int PMPI_Cart_sub(struct ompi_communicator_t * comm, int * remain_dims, struct ompi_communicator_t * * new_comm);
__attribute__((visibility("default"))) int PMPI_Cartdim_get(struct ompi_communicator_t * comm, int * ndims);
__attribute__((visibility("default"))) int PMPI_Close_port(char * port_name);
__attribute__((visibility("default"))) int PMPI_Comm_accept(char * port_name, struct ompi_info_t * info, int root, struct ompi_communicator_t * comm, struct ompi_communicator_t * * newcomm);
__attribute__((visibility("default"))) int PMPI_Comm_c2f(struct ompi_communicator_t * comm);
__attribute__((visibility("default"))) int PMPI_Comm_call_errhandler(struct ompi_communicator_t * comm, int errorcode);
__attribute__((visibility("default"))) int PMPI_Comm_compare(struct ompi_communicator_t * comm1, struct ompi_communicator_t * comm2, int * result);
__attribute__((visibility("default"))) int PMPI_Comm_connect(char * port_name, struct ompi_info_t * info, int root, struct ompi_communicator_t * comm, struct ompi_communicator_t * * newcomm);
__attribute__((visibility("default"))) int PMPI_Comm_create_errhandler(void (* function)(struct ompi_communicator_t * * , int * , ...), struct ompi_errhandler_t * * errhandler);
__attribute__((visibility("default"))) int PMPI_Comm_create_keyval(int (* comm_copy_attr_fn)(struct ompi_communicator_t * , int, void * , void * , void * , int * ), int (* comm_delete_attr_fn)(struct ompi_communicator_t * , int, void * , void * ), int * comm_keyval, void * extra_state);
__attribute__((visibility("default"))) int PMPI_Comm_create(struct ompi_communicator_t * comm, struct ompi_group_t * group, struct ompi_communicator_t * * newcomm);
__attribute__((visibility("default"))) int PMPI_Comm_delete_attr(struct ompi_communicator_t * comm, int comm_keyval);
__attribute__((visibility("default"))) int PMPI_Comm_disconnect(struct ompi_communicator_t * * comm);
__attribute__((visibility("default"))) int PMPI_Comm_dup(struct ompi_communicator_t * comm, struct ompi_communicator_t * * newcomm);
__attribute__((visibility("default"))) struct ompi_communicator_t * PMPI_Comm_f2c(int comm);
__attribute__((visibility("default"))) int PMPI_Comm_free_keyval(int * comm_keyval);
__attribute__((visibility("default"))) int PMPI_Comm_free(struct ompi_communicator_t * * comm);
__attribute__((visibility("default"))) int PMPI_Comm_get_attr(struct ompi_communicator_t * comm, int comm_keyval, void * attribute_val, int * flag);
__attribute__((visibility("default"))) int PMPI_Comm_get_errhandler(struct ompi_communicator_t * comm, struct ompi_errhandler_t * * erhandler);
__attribute__((visibility("default"))) int PMPI_Comm_get_name(struct ompi_communicator_t * comm, char * comm_name, int * resultlen);
__attribute__((visibility("default"))) int PMPI_Comm_get_parent(struct ompi_communicator_t * * parent);
__attribute__((visibility("default"))) int PMPI_Comm_group(struct ompi_communicator_t * comm, struct ompi_group_t * * group);
__attribute__((visibility("default"))) int PMPI_Comm_join(int fd, struct ompi_communicator_t * * intercomm);
__attribute__((visibility("default"))) int PMPI_Comm_rank(struct ompi_communicator_t * comm, int * rank);
__attribute__((visibility("default"))) int PMPI_Comm_remote_group(struct ompi_communicator_t * comm, struct ompi_group_t * * group);
__attribute__((visibility("default"))) int PMPI_Comm_remote_size(struct ompi_communicator_t * comm, int * size);
__attribute__((visibility("default"))) int PMPI_Comm_set_attr(struct ompi_communicator_t * comm, int comm_keyval, void * attribute_val);
__attribute__((visibility("default"))) int PMPI_Comm_set_errhandler(struct ompi_communicator_t * comm, struct ompi_errhandler_t * errhandler);
__attribute__((visibility("default"))) int PMPI_Comm_set_name(struct ompi_communicator_t * comm, char * comm_name);
__attribute__((visibility("default"))) int PMPI_Comm_size(struct ompi_communicator_t * comm, int * size);
__attribute__((visibility("default"))) int PMPI_Comm_spawn(char * command, char * * argv, int maxprocs, struct ompi_info_t * info, int root, struct ompi_communicator_t * comm, struct ompi_communicator_t * * intercomm, int * array_of_errcodes);
__attribute__((visibility("default"))) int PMPI_Comm_spawn_multiple(int count, char * * array_of_commands, char * * * array_of_argv, int * array_of_maxprocs, struct ompi_info_t * * array_of_info, int root, struct ompi_communicator_t * comm, struct ompi_communicator_t * * intercomm, int * array_of_errcodes);
__attribute__((visibility("default"))) int PMPI_Comm_split(struct ompi_communicator_t * comm, int color, int key, struct ompi_communicator_t * * newcomm);
__attribute__((visibility("default"))) int PMPI_Comm_test_inter(struct ompi_communicator_t * comm, int * flag);
__attribute__((visibility("default"))) int PMPI_Dims_create(int nnodes, int ndims, int * dims);
__attribute__((visibility("default"))) int PMPI_Errhandler_c2f(struct ompi_errhandler_t * errhandler);
__attribute__((visibility("default"))) int PMPI_Errhandler_create(void (* function)(struct ompi_communicator_t * * , int * , ...), struct ompi_errhandler_t * * errhandler);
__attribute__((visibility("default"))) struct ompi_errhandler_t * PMPI_Errhandler_f2c(int errhandler);
__attribute__((visibility("default"))) int PMPI_Errhandler_free(struct ompi_errhandler_t * * errhandler);
__attribute__((visibility("default"))) int PMPI_Errhandler_get(struct ompi_communicator_t * comm, struct ompi_errhandler_t * * errhandler);
__attribute__((visibility("default"))) int PMPI_Errhandler_set(struct ompi_communicator_t * comm, struct ompi_errhandler_t * errhandler);
__attribute__((visibility("default"))) int PMPI_Error_class(int errorcode, int * errorclass);
__attribute__((visibility("default"))) int PMPI_Error_string(int errorcode, char * string, int * resultlen);
__attribute__((visibility("default"))) int PMPI_Exscan(void * sendbuf, void * recvbuf, int count, struct ompi_datatype_t * datatype, struct ompi_op_t * op, struct ompi_communicator_t * comm);
__attribute__((visibility("default"))) int PMPI_File_c2f(struct ompi_file_t * file);
__attribute__((visibility("default"))) struct ompi_file_t * PMPI_File_f2c(int file);
__attribute__((visibility("default"))) int PMPI_File_call_errhandler(struct ompi_file_t * fh, int errorcode);
__attribute__((visibility("default"))) int PMPI_File_create_errhandler(void (* function)(struct ompi_file_t * * , int * , ...), struct ompi_errhandler_t * * errhandler);
__attribute__((visibility("default"))) int PMPI_File_set_errhandler(struct ompi_file_t * file, struct ompi_errhandler_t * errhandler);
__attribute__((visibility("default"))) int PMPI_File_get_errhandler(struct ompi_file_t * file, struct ompi_errhandler_t * * errhandler);
__attribute__((visibility("default"))) int PMPI_File_open(struct ompi_communicator_t * comm, char * filename, int amode, struct ompi_info_t * info, struct ompi_file_t * * fh);
__attribute__((visibility("default"))) int PMPI_File_close(struct ompi_file_t * * fh);
__attribute__((visibility("default"))) int PMPI_File_delete(char * filename, struct ompi_info_t * info);
__attribute__((visibility("default"))) int PMPI_File_set_size(struct ompi_file_t * fh, long long size);
__attribute__((visibility("default"))) int PMPI_File_preallocate(struct ompi_file_t * fh, long long size);
__attribute__((visibility("default"))) int PMPI_File_get_size(struct ompi_file_t * fh, long long * size);
__attribute__((visibility("default"))) int PMPI_File_get_group(struct ompi_file_t * fh, struct ompi_group_t * * group);
__attribute__((visibility("default"))) int PMPI_File_get_amode(struct ompi_file_t * fh, int * amode);
__attribute__((visibility("default"))) int PMPI_File_set_info(struct ompi_file_t * fh, struct ompi_info_t * info);
__attribute__((visibility("default"))) int PMPI_File_get_info(struct ompi_file_t * fh, struct ompi_info_t * * info_used);
__attribute__((visibility("default"))) int PMPI_File_set_view(struct ompi_file_t * fh, long long disp, struct ompi_datatype_t * etype, struct ompi_datatype_t * filetype, char * datarep, struct ompi_info_t * info);
__attribute__((visibility("default"))) int PMPI_File_get_view(struct ompi_file_t * fh, long long * disp, struct ompi_datatype_t * * etype, struct ompi_datatype_t * * filetype, char * datarep);
__attribute__((visibility("default"))) int PMPI_File_read_at(struct ompi_file_t * fh, long long offset, void * buf, int count, struct ompi_datatype_t * datatype, struct ompi_status_public_t * status);
__attribute__((visibility("default"))) int PMPI_File_read_at_all(struct ompi_file_t * fh, long long offset, void * buf, int count, struct ompi_datatype_t * datatype, struct ompi_status_public_t * status);
__attribute__((visibility("default"))) int PMPI_File_write_at(struct ompi_file_t * fh, long long offset, void * buf, int count, struct ompi_datatype_t * datatype, struct ompi_status_public_t * status);
__attribute__((visibility("default"))) int PMPI_File_write_at_all(struct ompi_file_t * fh, long long offset, void * buf, int count, struct ompi_datatype_t * datatype, struct ompi_status_public_t * status);
__attribute__((visibility("default"))) int PMPI_File_iread_at(struct ompi_file_t * fh, long long offset, void * buf, int count, struct ompi_datatype_t * datatype, struct ompi_request_t * * request);
__attribute__((visibility("default"))) int PMPI_File_iwrite_at(struct ompi_file_t * fh, long long offset, void * buf, int count, struct ompi_datatype_t * datatype, struct ompi_request_t * * request);
__attribute__((visibility("default"))) int PMPI_File_read(struct ompi_file_t * fh, void * buf, int count, struct ompi_datatype_t * datatype, struct ompi_status_public_t * status);
__attribute__((visibility("default"))) int PMPI_File_read_all(struct ompi_file_t * fh, void * buf, int count, struct ompi_datatype_t * datatype, struct ompi_status_public_t * status);
__attribute__((visibility("default"))) int PMPI_File_write(struct ompi_file_t * fh, void * buf, int count, struct ompi_datatype_t * datatype, struct ompi_status_public_t * status);
__attribute__((visibility("default"))) int PMPI_File_write_all(struct ompi_file_t * fh, void * buf, int count, struct ompi_datatype_t * datatype, struct ompi_status_public_t * status);
__attribute__((visibility("default"))) int PMPI_File_iread(struct ompi_file_t * fh, void * buf, int count, struct ompi_datatype_t * datatype, struct ompi_request_t * * request);
__attribute__((visibility("default"))) int PMPI_File_iwrite(struct ompi_file_t * fh, void * buf, int count, struct ompi_datatype_t * datatype, struct ompi_request_t * * request);
__attribute__((visibility("default"))) int PMPI_File_seek(struct ompi_file_t * fh, long long offset, int whence);
__attribute__((visibility("default"))) int PMPI_File_get_position(struct ompi_file_t * fh, long long * offset);
__attribute__((visibility("default"))) int PMPI_File_get_byte_offset(struct ompi_file_t * fh, long long offset, long long * disp);
__attribute__((visibility("default"))) int PMPI_File_read_shared(struct ompi_file_t * fh, void * buf, int count, struct ompi_datatype_t * datatype, struct ompi_status_public_t * status);
__attribute__((visibility("default"))) int PMPI_File_write_shared(struct ompi_file_t * fh, void * buf, int count, struct ompi_datatype_t * datatype, struct ompi_status_public_t * status);
__attribute__((visibility("default"))) int PMPI_File_iread_shared(struct ompi_file_t * fh, void * buf, int count, struct ompi_datatype_t * datatype, struct ompi_request_t * * request);
__attribute__((visibility("default"))) int PMPI_File_iwrite_shared(struct ompi_file_t * fh, void * buf, int count, struct ompi_datatype_t * datatype, struct ompi_request_t * * request);
__attribute__((visibility("default"))) int PMPI_File_read_ordered(struct ompi_file_t * fh, void * buf, int count, struct ompi_datatype_t * datatype, struct ompi_status_public_t * status);
__attribute__((visibility("default"))) int PMPI_File_write_ordered(struct ompi_file_t * fh, void * buf, int count, struct ompi_datatype_t * datatype, struct ompi_status_public_t * status);
__attribute__((visibility("default"))) int PMPI_File_seek_shared(struct ompi_file_t * fh, long long offset, int whence);
__attribute__((visibility("default"))) int PMPI_File_get_position_shared(struct ompi_file_t * fh, long long * offset);
__attribute__((visibility("default"))) int PMPI_File_read_at_all_begin(struct ompi_file_t * fh, long long offset, void * buf, int count, struct ompi_datatype_t * datatype);
__attribute__((visibility("default"))) int PMPI_File_read_at_all_end(struct ompi_file_t * fh, void * buf, struct ompi_status_public_t * status);
__attribute__((visibility("default"))) int PMPI_File_write_at_all_begin(struct ompi_file_t * fh, long long offset, void * buf, int count, struct ompi_datatype_t * datatype);
__attribute__((visibility("default"))) int PMPI_File_write_at_all_end(struct ompi_file_t * fh, void * buf, struct ompi_status_public_t * status);
__attribute__((visibility("default"))) int PMPI_File_read_all_begin(struct ompi_file_t * fh, void * buf, int count, struct ompi_datatype_t * datatype);
__attribute__((visibility("default"))) int PMPI_File_read_all_end(struct ompi_file_t * fh, void * buf, struct ompi_status_public_t * status);
__attribute__((visibility("default"))) int PMPI_File_write_all_begin(struct ompi_file_t * fh, void * buf, int count, struct ompi_datatype_t * datatype);
__attribute__((visibility("default"))) int PMPI_File_write_all_end(struct ompi_file_t * fh, void * buf, struct ompi_status_public_t * status);
__attribute__((visibility("default"))) int PMPI_File_read_ordered_begin(struct ompi_file_t * fh, void * buf, int count, struct ompi_datatype_t * datatype);
__attribute__((visibility("default"))) int PMPI_File_read_ordered_end(struct ompi_file_t * fh, void * buf, struct ompi_status_public_t * status);
__attribute__((visibility("default"))) int PMPI_File_write_ordered_begin(struct ompi_file_t * fh, void * buf, int count, struct ompi_datatype_t * datatype);
__attribute__((visibility("default"))) int PMPI_File_write_ordered_end(struct ompi_file_t * fh, void * buf, struct ompi_status_public_t * status);
__attribute__((visibility("default"))) int PMPI_File_get_type_extent(struct ompi_file_t * fh, struct ompi_datatype_t * datatype, long * extent);
__attribute__((visibility("default"))) int PMPI_File_set_atomicity(struct ompi_file_t * fh, int flag);
__attribute__((visibility("default"))) int PMPI_File_get_atomicity(struct ompi_file_t * fh, int * flag);
__attribute__((visibility("default"))) int PMPI_File_sync(struct ompi_file_t * fh);
__attribute__((visibility("default"))) int PMPI_Finalize(void);
__attribute__((visibility("default"))) int PMPI_Finalized(int * flag);
__attribute__((visibility("default"))) int PMPI_Free_mem(void * base);
__attribute__((visibility("default"))) int PMPI_Gather(void * sendbuf, int sendcount, struct ompi_datatype_t * sendtype, void * recvbuf, int recvcount, struct ompi_datatype_t * recvtype, int root, struct ompi_communicator_t * comm);
__attribute__((visibility("default"))) int PMPI_Gatherv(void * sendbuf, int sendcount, struct ompi_datatype_t * sendtype, void * recvbuf, int * recvcounts, int * displs, struct ompi_datatype_t * recvtype, int root, struct ompi_communicator_t * comm);
__attribute__((visibility("default"))) int PMPI_Get_address(void * location, long * address);
__attribute__((visibility("default"))) int PMPI_Get_count(struct ompi_status_public_t * status, struct ompi_datatype_t * datatype, int * count);
__attribute__((visibility("default"))) int PMPI_Get_elements(struct ompi_status_public_t * status, struct ompi_datatype_t * datatype, int * count);
__attribute__((visibility("default"))) int PMPI_Get(void * origin_addr, int origin_count, struct ompi_datatype_t * origin_datatype, int target_rank, long target_disp, int target_count, struct ompi_datatype_t * target_datatype, struct ompi_win_t * win);
__attribute__((visibility("default"))) int PMPI_Get_processor_name(char * name, int * resultlen);
__attribute__((visibility("default"))) int PMPI_Get_version(int * version, int * subversion);
__attribute__((visibility("default"))) int PMPI_Graph_create(struct ompi_communicator_t * comm_old, int nnodes, int * index, int * edges, int reorder, struct ompi_communicator_t * * comm_graph);
__attribute__((visibility("default"))) int PMPI_Graph_get(struct ompi_communicator_t * comm, int maxindex, int maxedges, int * index, int * edges);
__attribute__((visibility("default"))) int PMPI_Graph_map(struct ompi_communicator_t * comm, int nnodes, int * index, int * edges, int * newrank);
__attribute__((visibility("default"))) int PMPI_Graph_neighbors_count(struct ompi_communicator_t * comm, int rank, int * nneighbors);
__attribute__((visibility("default"))) int PMPI_Graph_neighbors(struct ompi_communicator_t * comm, int rank, int maxneighbors, int * neighbors);
__attribute__((visibility("default"))) int PMPI_Graphdims_get(struct ompi_communicator_t * comm, int * nnodes, int * nedges);
__attribute__((visibility("default"))) int PMPI_Grequest_complete(struct ompi_request_t * request);
__attribute__((visibility("default"))) int PMPI_Grequest_start(int (* query_fn)(void * , struct ompi_status_public_t * ), int (* free_fn)(void * ), int (* cancel_fn)(void * , int), void * extra_state, struct ompi_request_t * * request);
__attribute__((visibility("default"))) int PMPI_Group_c2f(struct ompi_group_t * group);
__attribute__((visibility("default"))) int PMPI_Group_compare(struct ompi_group_t * group1, struct ompi_group_t * group2, int * result);
__attribute__((visibility("default"))) int PMPI_Group_difference(struct ompi_group_t * group1, struct ompi_group_t * group2, struct ompi_group_t * * newgroup);
__attribute__((visibility("default"))) int PMPI_Group_excl(struct ompi_group_t * group, int n, int * ranks, struct ompi_group_t * * newgroup);
__attribute__((visibility("default"))) struct ompi_group_t * PMPI_Group_f2c(int group);
__attribute__((visibility("default"))) int PMPI_Group_free(struct ompi_group_t * * group);
__attribute__((visibility("default"))) int PMPI_Group_incl(struct ompi_group_t * group, int n, int * ranks, struct ompi_group_t * * newgroup);
__attribute__((visibility("default"))) int PMPI_Group_intersection(struct ompi_group_t * group1, struct ompi_group_t * group2, struct ompi_group_t * * newgroup);
__attribute__((visibility("default"))) int PMPI_Group_range_excl(struct ompi_group_t * group, int n, int ranges[][3], struct ompi_group_t * * newgroup);
__attribute__((visibility("default"))) int PMPI_Group_range_incl(struct ompi_group_t * group, int n, int ranges[][3], struct ompi_group_t * * newgroup);
__attribute__((visibility("default"))) int PMPI_Group_rank(struct ompi_group_t * group, int * rank);
__attribute__((visibility("default"))) int PMPI_Group_size(struct ompi_group_t * group, int * size);
__attribute__((visibility("default"))) int PMPI_Group_translate_ranks(struct ompi_group_t * group1, int n, int * ranks1, struct ompi_group_t * group2, int * ranks2);
__attribute__((visibility("default"))) int PMPI_Group_union(struct ompi_group_t * group1, struct ompi_group_t * group2, struct ompi_group_t * * newgroup);
__attribute__((visibility("default"))) int PMPI_Ibsend(void * buf, int count, struct ompi_datatype_t * datatype, int dest, int tag, struct ompi_communicator_t * comm, struct ompi_request_t * * request);
__attribute__((visibility("default"))) int PMPI_Info_c2f(struct ompi_info_t * info);
__attribute__((visibility("default"))) int PMPI_Info_create(struct ompi_info_t * * info);
__attribute__((visibility("default"))) int PMPI_Info_delete(struct ompi_info_t * info, char * key);
__attribute__((visibility("default"))) int PMPI_Info_dup(struct ompi_info_t * info, struct ompi_info_t * * newinfo);
__attribute__((visibility("default"))) struct ompi_info_t * PMPI_Info_f2c(int info);
__attribute__((visibility("default"))) int PMPI_Info_free(struct ompi_info_t * * info);
__attribute__((visibility("default"))) int PMPI_Info_get(struct ompi_info_t * info, char * key, int valuelen, char * value, int * flag);
__attribute__((visibility("default"))) int PMPI_Info_get_nkeys(struct ompi_info_t * info, int * nkeys);
__attribute__((visibility("default"))) int PMPI_Info_get_nthkey(struct ompi_info_t * info, int n, char * key);
__attribute__((visibility("default"))) int PMPI_Info_get_valuelen(struct ompi_info_t * info, char * key, int * valuelen, int * flag);
__attribute__((visibility("default"))) int PMPI_Info_set(struct ompi_info_t * info, char * key, char * value);
__attribute__((visibility("default"))) int PMPI_Init(int * argc, char * * * argv);
__attribute__((visibility("default"))) int PMPI_Initialized(int * flag);
__attribute__((visibility("default"))) int PMPI_Init_thread(int * argc, char * * * argv, int required, int * provided);
__attribute__((visibility("default"))) int PMPI_Intercomm_create(struct ompi_communicator_t * local_comm, int local_leader, struct ompi_communicator_t * bridge_comm, int remote_leader, int tag, struct ompi_communicator_t * * newintercomm);
__attribute__((visibility("default"))) int PMPI_Intercomm_merge(struct ompi_communicator_t * intercomm, int high, struct ompi_communicator_t * * newintercomm);
__attribute__((visibility("default"))) int PMPI_Iprobe(int source, int tag, struct ompi_communicator_t * comm, int * flag, struct ompi_status_public_t * status);
__attribute__((visibility("default"))) int PMPI_Irecv(void * buf, int count, struct ompi_datatype_t * datatype, int source, int tag, struct ompi_communicator_t * comm, struct ompi_request_t * * request);
__attribute__((visibility("default"))) int PMPI_Irsend(void * buf, int count, struct ompi_datatype_t * datatype, int dest, int tag, struct ompi_communicator_t * comm, struct ompi_request_t * * request);
__attribute__((visibility("default"))) int PMPI_Isend(void * buf, int count, struct ompi_datatype_t * datatype, int dest, int tag, struct ompi_communicator_t * comm, struct ompi_request_t * * request);
__attribute__((visibility("default"))) int PMPI_Issend(void * buf, int count, struct ompi_datatype_t * datatype, int dest, int tag, struct ompi_communicator_t * comm, struct ompi_request_t * * request);
__attribute__((visibility("default"))) int PMPI_Is_thread_main(int * flag);
__attribute__((visibility("default"))) int PMPI_Keyval_create(int (* copy_fn)(struct ompi_communicator_t * , int, void * , void * , void * , int * ), int (* delete_fn)(struct ompi_communicator_t * , int, void * , void * ), int * keyval, void * extra_state);
__attribute__((visibility("default"))) int PMPI_Keyval_free(int * keyval);
__attribute__((visibility("default"))) int PMPI_Lookup_name(char * service_name, struct ompi_info_t * info, char * port_name);
__attribute__((visibility("default"))) int PMPI_Op_c2f(struct ompi_op_t * op);
__attribute__((visibility("default"))) int PMPI_Op_commutative(struct ompi_op_t * op, int * commute);
__attribute__((visibility("default"))) int PMPI_Op_create(void (* function)(void * , void * , int * , struct ompi_datatype_t * * ), int commute, struct ompi_op_t * * op);
__attribute__((visibility("default"))) int PMPI_Open_port(struct ompi_info_t * info, char * port_name);
__attribute__((visibility("default"))) struct ompi_op_t * PMPI_Op_f2c(int op);
__attribute__((visibility("default"))) int PMPI_Op_free(struct ompi_op_t * * op);
__attribute__((visibility("default"))) int PMPI_Pack_external(char * datarep, void * inbuf, int incount, struct ompi_datatype_t * datatype, void * outbuf, long outsize, long * position);
__attribute__((visibility("default"))) int PMPI_Pack_external_size(char * datarep, int incount, struct ompi_datatype_t * datatype, long * size);
__attribute__((visibility("default"))) int PMPI_Pack(void * inbuf, int incount, struct ompi_datatype_t * datatype, void * outbuf, int outsize, int * position, struct ompi_communicator_t * comm);
__attribute__((visibility("default"))) int PMPI_Pack_size(int incount, struct ompi_datatype_t * datatype, struct ompi_communicator_t * comm, int * size);
__attribute__((visibility("default"))) int PMPI_Pcontrol(int const level, ...);
__attribute__((visibility("default"))) int PMPI_Probe(int source, int tag, struct ompi_communicator_t * comm, struct ompi_status_public_t * status);
__attribute__((visibility("default"))) int PMPI_Publish_name(char * service_name, struct ompi_info_t * info, char * port_name);
__attribute__((visibility("default"))) int PMPI_Put(void * origin_addr, int origin_count, struct ompi_datatype_t * origin_datatype, int target_rank, long target_disp, int target_count, struct ompi_datatype_t * target_datatype, struct ompi_win_t * win);
__attribute__((visibility("default"))) int PMPI_Query_thread(int * provided);
__attribute__((visibility("default"))) int PMPI_Recv_init(void * buf, int count, struct ompi_datatype_t * datatype, int source, int tag, struct ompi_communicator_t * comm, struct ompi_request_t * * request);
__attribute__((visibility("default"))) int PMPI_Recv(void * buf, int count, struct ompi_datatype_t * datatype, int source, int tag, struct ompi_communicator_t * comm, struct ompi_status_public_t * status);
__attribute__((visibility("default"))) int PMPI_Reduce(void * sendbuf, void * recvbuf, int count, struct ompi_datatype_t * datatype, struct ompi_op_t * op, int root, struct ompi_communicator_t * comm);
__attribute__((visibility("default"))) int PMPI_Reduce_local(void * inbuf, void * inoutbuf, int count, struct ompi_datatype_t * datatype, struct ompi_op_t * );
__attribute__((visibility("default"))) int PMPI_Reduce_scatter(void * sendbuf, void * recvbuf, int * recvcounts, struct ompi_datatype_t * datatype, struct ompi_op_t * op, struct ompi_communicator_t * comm);
__attribute__((visibility("default"))) int PMPI_Register_datarep(char * datarep, int (* read_conversion_fn)(void * , struct ompi_datatype_t * , int, void * , long long, void * ), int (* write_conversion_fn)(void * , struct ompi_datatype_t * , int, void * , long long, void * ), int (* dtype_file_extent_fn)(struct ompi_datatype_t * , long * , void * ), void * extra_state);
__attribute__((visibility("default"))) int PMPI_Request_c2f(struct ompi_request_t * request);
__attribute__((visibility("default"))) struct ompi_request_t * PMPI_Request_f2c(int request);
__attribute__((visibility("default"))) int PMPI_Request_free(struct ompi_request_t * * request);
__attribute__((visibility("default"))) int PMPI_Request_get_status(struct ompi_request_t * request, int * flag, struct ompi_status_public_t * status);
__attribute__((visibility("default"))) int PMPI_Rsend(void * ibuf, int count, struct ompi_datatype_t * datatype, int dest, int tag, struct ompi_communicator_t * comm);
__attribute__((visibility("default"))) int PMPI_Rsend_init(void * buf, int count, struct ompi_datatype_t * datatype, int dest, int tag, struct ompi_communicator_t * comm, struct ompi_request_t * * request);
__attribute__((visibility("default"))) int PMPI_Scan(void * sendbuf, void * recvbuf, int count, struct ompi_datatype_t * datatype, struct ompi_op_t * op, struct ompi_communicator_t * comm);
__attribute__((visibility("default"))) int PMPI_Scatter(void * sendbuf, int sendcount, struct ompi_datatype_t * sendtype, void * recvbuf, int recvcount, struct ompi_datatype_t * recvtype, int root, struct ompi_communicator_t * comm);
__attribute__((visibility("default"))) int PMPI_Scatterv(void * sendbuf, int * sendcounts, int * displs, struct ompi_datatype_t * sendtype, void * recvbuf, int recvcount, struct ompi_datatype_t * recvtype, int root, struct ompi_communicator_t * comm);
__attribute__((visibility("default"))) int PMPI_Send_init(void * buf, int count, struct ompi_datatype_t * datatype, int dest, int tag, struct ompi_communicator_t * comm, struct ompi_request_t * * request);
__attribute__((visibility("default"))) int PMPI_Send(void * buf, int count, struct ompi_datatype_t * datatype, int dest, int tag, struct ompi_communicator_t * comm);
__attribute__((visibility("default"))) int PMPI_Sendrecv(void * sendbuf, int sendcount, struct ompi_datatype_t * sendtype, int dest, int sendtag, void * recvbuf, int recvcount, struct ompi_datatype_t * recvtype, int source, int recvtag, struct ompi_communicator_t * comm, struct ompi_status_public_t * status);
__attribute__((visibility("default"))) int PMPI_Sendrecv_replace(void * buf, int count, struct ompi_datatype_t * datatype, int dest, int sendtag, int source, int recvtag, struct ompi_communicator_t * comm, struct ompi_status_public_t * status);
__attribute__((visibility("default"))) int PMPI_Ssend_init(void * buf, int count, struct ompi_datatype_t * datatype, int dest, int tag, struct ompi_communicator_t * comm, struct ompi_request_t * * request);
__attribute__((visibility("default"))) int PMPI_Ssend(void * buf, int count, struct ompi_datatype_t * datatype, int dest, int tag, struct ompi_communicator_t * comm);
__attribute__((visibility("default"))) int PMPI_Start(struct ompi_request_t * * request);
__attribute__((visibility("default"))) int PMPI_Startall(int count, struct ompi_request_t * * array_of_requests);
__attribute__((visibility("default"))) int PMPI_Status_c2f(struct ompi_status_public_t * c_status, int * f_status);
__attribute__((visibility("default"))) int PMPI_Status_f2c(int * f_status, struct ompi_status_public_t * c_status);
__attribute__((visibility("default"))) int PMPI_Status_set_cancelled(struct ompi_status_public_t * status, int flag);
__attribute__((visibility("default"))) int PMPI_Status_set_elements(struct ompi_status_public_t * status, struct ompi_datatype_t * datatype, int count);
__attribute__((visibility("default"))) int PMPI_Testall(int count, struct ompi_request_t * array_of_requests[], int * flag, struct ompi_status_public_t array_of_statuses[]);
__attribute__((visibility("default"))) int PMPI_Testany(int count, struct ompi_request_t * array_of_requests[], int * index, int * flag, struct ompi_status_public_t * status);
__attribute__((visibility("default"))) int PMPI_Test(struct ompi_request_t * * request, int * flag, struct ompi_status_public_t * status);
__attribute__((visibility("default"))) int PMPI_Test_cancelled(struct ompi_status_public_t * status, int * flag);
__attribute__((visibility("default"))) int PMPI_Testsome(int incount, struct ompi_request_t * array_of_requests[], int * outcount, int array_of_indices[], struct ompi_status_public_t array_of_statuses[]);
__attribute__((visibility("default"))) int PMPI_Topo_test(struct ompi_communicator_t * comm, int * status);
__attribute__((visibility("default"))) int PMPI_Type_c2f(struct ompi_datatype_t * datatype);
__attribute__((visibility("default"))) int PMPI_Type_commit(struct ompi_datatype_t * * type);
__attribute__((visibility("default"))) int PMPI_Type_contiguous(int count, struct ompi_datatype_t * oldtype, struct ompi_datatype_t * * newtype);
__attribute__((visibility("default"))) int PMPI_Type_create_darray(int size, int rank, int ndims, int gsize_array[], int distrib_array[], int darg_array[], int psize_array[], int order, struct ompi_datatype_t * oldtype, struct ompi_datatype_t * * newtype);
__attribute__((visibility("default"))) int PMPI_Type_create_f90_complex(int p, int r, struct ompi_datatype_t * * newtype);
__attribute__((visibility("default"))) int PMPI_Type_create_f90_integer(int r, struct ompi_datatype_t * * newtype);
__attribute__((visibility("default"))) int PMPI_Type_create_f90_real(int p, int r, struct ompi_datatype_t * * newtype);
__attribute__((visibility("default"))) int PMPI_Type_create_hindexed(int count, int array_of_blocklengths[], long array_of_displacements[], struct ompi_datatype_t * oldtype, struct ompi_datatype_t * * newtype);
__attribute__((visibility("default"))) int PMPI_Type_create_hvector(int count, int blocklength, long stride, struct ompi_datatype_t * oldtype, struct ompi_datatype_t * * newtype);
__attribute__((visibility("default"))) int PMPI_Type_create_keyval(int (* type_copy_attr_fn)(struct ompi_datatype_t * , int, void * , void * , void * , int * ), int (* type_delete_attr_fn)(struct ompi_datatype_t * , int, void * , void * ), int * type_keyval, void * extra_state);
__attribute__((visibility("default"))) int PMPI_Type_create_indexed_block(int count, int blocklength, int array_of_displacements[], struct ompi_datatype_t * oldtype, struct ompi_datatype_t * * newtype);
__attribute__((visibility("default"))) int PMPI_Type_create_struct(int count, int array_of_block_lengths[], long array_of_displacements[], struct ompi_datatype_t * array_of_types[], struct ompi_datatype_t * * newtype);
__attribute__((visibility("default"))) int PMPI_Type_create_subarray(int ndims, int size_array[], int subsize_array[], int start_array[], int order, struct ompi_datatype_t * oldtype, struct ompi_datatype_t * * newtype);
__attribute__((visibility("default"))) int PMPI_Type_create_resized(struct ompi_datatype_t * oldtype, long lb, long extent, struct ompi_datatype_t * * newtype);
__attribute__((visibility("default"))) int PMPI_Type_delete_attr(struct ompi_datatype_t * type, int type_keyval);
__attribute__((visibility("default"))) int PMPI_Type_dup(struct ompi_datatype_t * type, struct ompi_datatype_t * * newtype);
__attribute__((visibility("default"))) int PMPI_Type_extent(struct ompi_datatype_t * type, long * extent);
__attribute__((visibility("default"))) int PMPI_Type_free(struct ompi_datatype_t * * type);
__attribute__((visibility("default"))) int PMPI_Type_free_keyval(int * type_keyval);
__attribute__((visibility("default"))) struct ompi_datatype_t * PMPI_Type_f2c(int datatype);
__attribute__((visibility("default"))) int PMPI_Type_get_attr(struct ompi_datatype_t * type, int type_keyval, void * attribute_val, int * flag);
__attribute__((visibility("default"))) int PMPI_Type_get_contents(struct ompi_datatype_t * mtype, int max_integers, int max_addresses, int max_datatypes, int array_of_integers[], long array_of_addresses[], struct ompi_datatype_t * array_of_datatypes[]);
__attribute__((visibility("default"))) int PMPI_Type_get_envelope(struct ompi_datatype_t * type, int * num_integers, int * num_addresses, int * num_datatypes, int * combiner);
__attribute__((visibility("default"))) int PMPI_Type_get_extent(struct ompi_datatype_t * type, long * lb, long * extent);
__attribute__((visibility("default"))) int PMPI_Type_get_name(struct ompi_datatype_t * type, char * type_name, int * resultlen);
__attribute__((visibility("default"))) int PMPI_Type_get_true_extent(struct ompi_datatype_t * datatype, long * true_lb, long * true_extent);
__attribute__((visibility("default"))) int PMPI_Type_hindexed(int count, int array_of_blocklengths[], long array_of_displacements[], struct ompi_datatype_t * oldtype, struct ompi_datatype_t * * newtype);
__attribute__((visibility("default"))) int PMPI_Type_hvector(int count, int blocklength, long stride, struct ompi_datatype_t * oldtype, struct ompi_datatype_t * * newtype);
__attribute__((visibility("default"))) int PMPI_Type_indexed(int count, int array_of_blocklengths[], int array_of_displacements[], struct ompi_datatype_t * oldtype, struct ompi_datatype_t * * newtype);
__attribute__((visibility("default"))) int PMPI_Type_lb(struct ompi_datatype_t * type, long * lb);
__attribute__((visibility("default"))) int PMPI_Type_match_size(int typeclass, int size, struct ompi_datatype_t * * type);
__attribute__((visibility("default"))) int PMPI_Type_set_attr(struct ompi_datatype_t * type, int type_keyval, void * attr_val);
__attribute__((visibility("default"))) int PMPI_Type_set_name(struct ompi_datatype_t * type, char * type_name);
__attribute__((visibility("default"))) int PMPI_Type_size(struct ompi_datatype_t * type, int * size);
__attribute__((visibility("default"))) int PMPI_Type_struct(int count, int array_of_blocklengths[], long array_of_displacements[], struct ompi_datatype_t * array_of_types[], struct ompi_datatype_t * * newtype);
__attribute__((visibility("default"))) int PMPI_Type_ub(struct ompi_datatype_t * mtype, long * ub);
__attribute__((visibility("default"))) int PMPI_Type_vector(int count, int blocklength, int stride, struct ompi_datatype_t * oldtype, struct ompi_datatype_t * * newtype);
__attribute__((visibility("default"))) int PMPI_Unpack(void * inbuf, int insize, int * position, void * outbuf, int outcount, struct ompi_datatype_t * datatype, struct ompi_communicator_t * comm);
__attribute__((visibility("default"))) int PMPI_Unpublish_name(char * service_name, struct ompi_info_t * info, char * port_name);
__attribute__((visibility("default"))) int PMPI_Unpack_external(char * datarep, void * inbuf, long insize, long * position, void * outbuf, int outcount, struct ompi_datatype_t * datatype);
__attribute__((visibility("default"))) int PMPI_Waitall(int count, struct ompi_request_t * * array_of_requests, struct ompi_status_public_t * array_of_statuses);
__attribute__((visibility("default"))) int PMPI_Waitany(int count, struct ompi_request_t * * array_of_requests, int * index, struct ompi_status_public_t * status);
__attribute__((visibility("default"))) int PMPI_Wait(struct ompi_request_t * * request, struct ompi_status_public_t * status);
__attribute__((visibility("default"))) int PMPI_Waitsome(int incount, struct ompi_request_t * * array_of_requests, int * outcount, int * array_of_indices, struct ompi_status_public_t * array_of_statuses);
__attribute__((visibility("default"))) int PMPI_Win_c2f(struct ompi_win_t * win);
__attribute__((visibility("default"))) int PMPI_Win_call_errhandler(struct ompi_win_t * win, int errorcode);
__attribute__((visibility("default"))) int PMPI_Win_complete(struct ompi_win_t * win);
__attribute__((visibility("default"))) int PMPI_Win_create(void * base, long size, int disp_unit, struct ompi_info_t * info, struct ompi_communicator_t * comm, struct ompi_win_t * * win);
__attribute__((visibility("default"))) int PMPI_Win_create_errhandler(void (* function)(struct ompi_win_t * * , int * , ...), struct ompi_errhandler_t * * errhandler);
__attribute__((visibility("default"))) int PMPI_Win_create_keyval(int (* win_copy_attr_fn)(struct ompi_win_t * , int, void * , void * , void * , int * ), int (* win_delete_attr_fn)(struct ompi_win_t * , int, void * , void * ), int * win_keyval, void * extra_state);
__attribute__((visibility("default"))) int PMPI_Win_delete_attr(struct ompi_win_t * win, int win_keyval);
__attribute__((visibility("default"))) struct ompi_win_t * PMPI_Win_f2c(int win);
__attribute__((visibility("default"))) int PMPI_Win_fence(int assert, struct ompi_win_t * win);
__attribute__((visibility("default"))) int PMPI_Win_free(struct ompi_win_t * * win);
__attribute__((visibility("default"))) int PMPI_Win_free_keyval(int * win_keyval);
__attribute__((visibility("default"))) int PMPI_Win_get_attr(struct ompi_win_t * win, int win_keyval, void * attribute_val, int * flag);
__attribute__((visibility("default"))) int PMPI_Win_get_errhandler(struct ompi_win_t * win, struct ompi_errhandler_t * * errhandler);
__attribute__((visibility("default"))) int PMPI_Win_get_group(struct ompi_win_t * win, struct ompi_group_t * * group);
__attribute__((visibility("default"))) int PMPI_Win_get_name(struct ompi_win_t * win, char * win_name, int * resultlen);
__attribute__((visibility("default"))) int PMPI_Win_lock(int lock_type, int rank, int assert, struct ompi_win_t * win);
__attribute__((visibility("default"))) int PMPI_Win_post(struct ompi_group_t * group, int assert, struct ompi_win_t * win);
__attribute__((visibility("default"))) int PMPI_Win_set_attr(struct ompi_win_t * win, int win_keyval, void * attribute_val);
__attribute__((visibility("default"))) int PMPI_Win_set_errhandler(struct ompi_win_t * win, struct ompi_errhandler_t * errhandler);
__attribute__((visibility("default"))) int PMPI_Win_set_name(struct ompi_win_t * win, char * win_name);
__attribute__((visibility("default"))) int PMPI_Win_start(struct ompi_group_t * group, int assert, struct ompi_win_t * win);
__attribute__((visibility("default"))) int PMPI_Win_test(struct ompi_win_t * win, int * flag);
__attribute__((visibility("default"))) int PMPI_Win_unlock(int rank, struct ompi_win_t * win);
__attribute__((visibility("default"))) int PMPI_Win_wait(struct ompi_win_t * win);
__attribute__((visibility("default"))) double PMPI_Wtick(void);
__attribute__((visibility("default"))) double PMPI_Wtime(void);
extern struct ompi_communicator_t * xmp_get_mpi_comm(void);
extern void xmp_init_mpi(int * argc, char * * * argv);
extern void xmp_finalize_mpi(void);
extern void xmp_init(int * argc, char * * * argv);
extern void xmp_finalize(void);
extern int xmp_num_nodes(void);
extern int xmp_desc_kind(void * d, int * kind);
extern int xmp_node_num(void);
extern void xmp_barrier(void);
extern int xmp_all_num_nodes(void);
extern int xmp_all_node_num(void);
extern double xmp_wtime(void);
extern double xmp_wtick(void);
extern int xmp_array_ndims(void * d, int * ndims);
extern int xmp_array_lbound(void * d, int dim, int * lbound);
extern int xmp_array_ubound(void * d, int dim, int * ubound);
extern unsigned long xmp_array_type_size(void * d);
extern int xmp_array_gsize(void * d, int dim);
extern int xmp_array_lsize(void * d, int dim, int * lsize);
extern int xmp_array_gcllbound(void * d, int dim);
extern int xmp_array_gclubound(void * d, int dim);
extern int xmp_array_lcllbound(void * d, int dim);
extern int xmp_array_lclubound(void * d, int dim);
extern int xmp_array_gcglbound(void * d, int dim);
extern int xmp_array_gcgubound(void * d, int dim);
extern int xmp_array_laddr(void * d, void * * laddr);
extern int xmp_array_lshadow(void * d, int dim, int * lshadow);
extern int xmp_array_ushadow(void * d, int dim, int * ushadow);
extern int xmp_array_owner(void * d, int ndims, int index[], int dim);
extern int xmp_array_lead_dim(void * d, int size[]);
extern int xmp_array_gtol(void * d, int g_idx[], int lidx[]);
extern int xmp_align_axis(void * d, int dim, int * axis);
extern int xmp_align_offset(void * d, int dim, int * offset);
extern int xmp_align_format(void * d, int dim);
extern int xmp_align_size(void * d, int dim);
extern int xmp_align_replicated(void * d, int dim, int * replicated);
extern int xmp_align_template(void * d, void * * dt);
extern int xmp_template_fixed(void * d, int * fixed);
extern int xmp_template_ndims(void * d, int * ndims);
extern int xmp_template_lbound(void * d, int dim, int * lbound);
extern int xmp_template_ubound(void * d, int dim, int * ubound);
extern int xmp_template_gsize(void * d, int dim);
extern int xmp_template_lsize(void * d, int dim);
extern int xmp_dist_format(void * d, int dim, int * format);
extern int xmp_dist_blocksize(void * d, int dim, int * blocksize);
extern int xmp_dist_stride(void * d, int dim);
extern int xmp_dist_nodes(void * d, void * * dn);
extern int xmp_dist_axis(void * d, int dim, int * axis);
extern int xmp_dist_gblockmap(void * d, int dim, int * map);
extern int xmp_nodes_ndims(void * d, int * ndims);
extern int xmp_nodes_index(void * d, int dim, int * index);
extern int xmp_nodes_size(void * d, int dim, int * size);
extern int xmp_nodes_rank(void * d, int * rank);
extern int xmp_nodes_comm(void * d, void * * comm);
extern int xmp_nodes_equiv(void * d, void * * dn, int lb[], int ub[], int st[]);
extern void xmp_sched_template_index(int * local_start_index, int * local_end_index, int const global_start_index, int const global_end_index, int const step, void * const template, int const template_dim);
extern void xmp_sync_memory(int const * status);
extern void xmp_sync_all(int const * status);
extern void xmp_sync_image(int const image, int * status);
extern void xmp_sync_images(int const num, int * image_set, int * status);
extern void xmp_sync_images_all(int * status);
extern void xmp_sort_up(void * a_desc, void * b_desc);
extern void xmp_sort_down(void * a_desc, void * b_desc);
extern void * xmp_malloc(void * d, ...);
extern void xmp_free(void * d);
extern void xmp_exit(int status);
extern void xmp_atomic_define(int, int);
extern void xmp_atomic_ref(int * , int);
# 77 "/home/ymlusr/local/var/yml/DefaultExecutionCatalog/generators/XMP/include/yml_xmp_component_base.hh"
static void parse_align(char * desc, char * algn, char * temp)
{
# 79 "/home/ymlusr/local/var/yml/DefaultExecutionCatalog/generators/XMP/include/yml_xmp_component_base.hh"
int i;
# 79 "/home/ymlusr/local/var/yml/DefaultExecutionCatalog/generators/XMP/include/yml_xmp_component_base.hh"
int n;
# 80 "/home/ymlusr/local/var/yml/DefaultExecutionCatalog/generators/XMP/include/yml_xmp_component_base.hh"
char * tok;
# 80 "/home/ymlusr/local/var/yml/DefaultExecutionCatalog/generators/XMP/include/yml_xmp_component_base.hh"
char * saveptr1 = (void * )(0);
# 80 "/home/ymlusr/local/var/yml/DefaultExecutionCatalog/generators/XMP/include/yml_xmp_component_base.hh"
char * saveptr2 = (void * )(0);
# 82 "/home/ymlusr/local/var/yml/DefaultExecutionCatalog/generators/XMP/include/yml_xmp_component_base.hh"
tok = (((((__builtin_constant_p(":")) && ((((unsigned long)((void const * )((":") + (1)))) - ((unsigned long)((void const * )(":")))) == (1))) && ((*(((char const * )(":")) + (0))) != ((char)0))) && ((*(((char const * )(":")) + (1))) == ((char)0))) ?(__strtok_r_1c(desc, *(((char const * )(":")) + (0)), &(saveptr1))) : (__strtok_r(desc, ":", &(saveptr1))));
# 85 "/home/ymlusr/local/var/yml/DefaultExecutionCatalog/generators/XMP/include/yml_xmp_component_base.hh"
if((*(tok + (0))) == ((char)40)) {
# 86 "/home/ymlusr/local/var/yml/DefaultExecutionCatalog/generators/XMP/include/yml_xmp_component_base.hh"
for((tok = (((((__builtin_constant_p("(,)")) && ((((unsigned long)((void const * )(("(,)") + (1)))) - ((unsigned long)((void const * )("(,)")))) == (1))) && ((*(((char const * )("(,)")) + (0))) != ((char)0))) && ((*(((char const * )("(,)")) + (1))) == ((char)0))) ?(__strtok_r_1c(tok, *(((char const * )("(,)")) + (0)), &(saveptr2))) : (__strtok_r(tok, "(,)", &(saveptr2)))), i = (0)); tok; (tok = (((((__builtin_constant_p("(,)")) && ((((unsigned long)((void const * )(("(,)") + (1)))) - ((unsigned long)((void const * )("(,)")))) == (1))) && ((*(((char const * )("(,)")) + (0))) != ((char)0))) && ((*(((char const * )("(,)")) + (1))) == ((char)0))) ?(__strtok_r_1c((void * )(0), *(((char const * )("(,)")) + (0)), &(saveptr2))) : (__strtok_r((void * )(0), "(,)", &(saveptr2)))), i++)) {
{
# 87 "/home/ymlusr/local/var/yml/DefaultExecutionCatalog/generators/XMP/include/yml_xmp_component_base.hh"
(*(algn + i)) = (*(tok + (0)));
}
}
# 89 "/home/ymlusr/local/var/yml/DefaultExecutionCatalog/generators/XMP/include/yml_xmp_component_base.hh"
n = i;
# 90 "/home/ymlusr/local/var/yml/DefaultExecutionCatalog/generators/XMP/include/yml_xmp_component_base.hh"
for(i = (0); i < n; i++) {
{
# 90 "/home/ymlusr/local/var/yml/DefaultExecutionCatalog/generators/XMP/include/yml_xmp_component_base.hh"
(*(temp + ((n - i) - (1)))) = (*(algn + i));
}
}
# 91 "/home/ymlusr/local/var/yml/DefaultExecutionCatalog/generators/XMP/include/yml_xmp_component_base.hh"
for(i = (0); i < n; i++) {
{
# 91 "/home/ymlusr/local/var/yml/DefaultExecutionCatalog/generators/XMP/include/yml_xmp_component_base.hh"
(*(algn + i)) = (*(temp + i));
}
}
}
else {
# 93 "/home/ymlusr/local/var/yml/DefaultExecutionCatalog/generators/XMP/include/yml_xmp_component_base.hh"
for((tok = (((((__builtin_constant_p("[]")) && ((((unsigned long)((void const * )(("[]") + (1)))) - ((unsigned long)((void const * )("[]")))) == (1))) && ((*(((char const * )("[]")) + (0))) != ((char)0))) && ((*(((char const * )("[]")) + (1))) == ((char)0))) ?(__strtok_r_1c(desc, *(((char const * )("[]")) + (0)), &(saveptr2))) : (__strtok_r(desc, "[]", &(saveptr2)))), i = (0)); tok; (tok = (((((__builtin_constant_p("[]")) && ((((unsigned long)((void const * )(("[]") + (1)))) - ((unsigned long)((void const * )("[]")))) == (1))) && ((*(((char const * )("[]")) + (0))) != ((char)0))) && ((*(((char const * )("[]")) + (1))) == ((char)0))) ?(__strtok_r_1c((void * )(0), *(((char const * )("[]")) + (0)), &(saveptr2))) : (__strtok_r((void * )(0), "[]", &(saveptr2)))), i++)) {
{
# 94 "/home/ymlusr/local/var/yml/DefaultExecutionCatalog/generators/XMP/include/yml_xmp_component_base.hh"
(*(algn + i)) = (*(tok + (0)));
}
}
}
# 98 "/home/ymlusr/local/var/yml/DefaultExecutionCatalog/generators/XMP/include/yml_xmp_component_base.hh"
tok = (((((__builtin_constant_p(":")) && ((((unsigned long)((void const * )((":") + (1)))) - ((unsigned long)((void const * )(":")))) == (1))) && ((*(((char const * )(":")) + (0))) != ((char)0))) && ((*(((char const * )(":")) + (1))) == ((char)0))) ?(__strtok_r_1c((void * )(0), *(((char const * )(":")) + (0)), &(saveptr1))) : (__strtok_r((void * )(0), ":", &(saveptr1))));
# 101 "/home/ymlusr/local/var/yml/DefaultExecutionCatalog/generators/XMP/include/yml_xmp_component_base.hh"
for((tok = (((((__builtin_constant_p("(,)")) && ((((unsigned long)((void const * )(("(,)") + (1)))) - ((unsigned long)((void const * )("(,)")))) == (1))) && ((*(((char const * )("(,)")) + (0))) != ((char)0))) && ((*(((char const * )("(,)")) + (1))) == ((char)0))) ?(__strtok_r_1c(tok, *(((char const * )("(,)")) + (0)), &(saveptr2))) : (__strtok_r(tok, "(,)", &(saveptr2)))), i = (0)); tok; (tok = (((((__builtin_constant_p("(,)")) && ((((unsigned long)((void const * )(("(,)") + (1)))) - ((unsigned long)((void const * )("(,)")))) == (1))) && ((*(((char const * )("(,)")) + (0))) != ((char)0))) && ((*(((char const * )("(,)")) + (1))) == ((char)0))) ?(__strtok_r_1c((void * )(0), *(((char const * )("(,)")) + (0)), &(saveptr2))) : (__strtok_r((void * )(0), "(,)", &(saveptr2)))), i++)) {
{
# 102 "/home/ymlusr/local/var/yml/DefaultExecutionCatalog/generators/XMP/include/yml_xmp_component_base.hh"
(*(temp + i)) = (*(tok + (0)));
}
}
# 106 "/home/ymlusr/local/var/yml/DefaultExecutionCatalog/generators/XMP/include/yml_xmp_component_base.hh"
return ;
}
# 109 "/home/ymlusr/local/var/yml/DefaultExecutionCatalog/generators/XMP/include/yml_xmp_component_base.hh"
static void parse_mapping(struct anon_type_32_Map_Info_t * mapping, char * mapping_description)
{
# 111 "/home/ymlusr/local/var/yml/DefaultExecutionCatalog/generators/XMP/include/yml_xmp_component_base.hh"
int i;
# 111 "/home/ymlusr/local/var/yml/DefaultExecutionCatalog/generators/XMP/include/yml_xmp_component_base.hh"
int j;
# 111 "/home/ymlusr/local/var/yml/DefaultExecutionCatalog/generators/XMP/include/yml_xmp_component_base.hh"
int len;
# 112 "/home/ymlusr/local/var/yml/DefaultExecutionCatalog/generators/XMP/include/yml_xmp_component_base.hh"
char * tok1;
# 112 "/home/ymlusr/local/var/yml/DefaultExecutionCatalog/generators/XMP/include/yml_xmp_component_base.hh"
char * saveptr1;
# 112 "/home/ymlusr/local/var/yml/DefaultExecutionCatalog/generators/XMP/include/yml_xmp_component_base.hh"
char * str1;
# 113 "/home/ymlusr/local/var/yml/DefaultExecutionCatalog/generators/XMP/include/yml_xmp_component_base.hh"
char * tok2;
# 113 "/home/ymlusr/local/var/yml/DefaultExecutionCatalog/generators/XMP/include/yml_xmp_component_base.hh"
char * saveptr2;
# 115 "/home/ymlusr/local/var/yml/DefaultExecutionCatalog/generators/XMP/include/yml_xmp_component_base.hh"
memset(mapping, 0, sizeof(struct anon_type_32_Map_Info_t));
# 118 "/home/ymlusr/local/var/yml/DefaultExecutionCatalog/generators/XMP/include/yml_xmp_component_base.hh"
for(i = (0); i < (4); i++) {
{
# 119 "/home/ymlusr/local/var/yml/DefaultExecutionCatalog/generators/XMP/include/yml_xmp_component_base.hh"
(*((mapping->nodes) + i)) = (1);
}
}
# 122 "/home/ymlusr/local/var/yml/DefaultExecutionCatalog/generators/XMP/include/yml_xmp_component_base.hh"
len = ((strlen(mapping_description)) + (1));
# 123 "/home/ymlusr/local/var/yml/DefaultExecutionCatalog/generators/XMP/include/yml_xmp_component_base.hh"
str1 = ((char * )(calloc(len, sizeof(char))));
# 124 "/home/ymlusr/local/var/yml/DefaultExecutionCatalog/generators/XMP/include/yml_xmp_component_base.hh"
memcpy(str1, mapping_description, len);
# 126 "/home/ymlusr/local/var/yml/DefaultExecutionCatalog/generators/XMP/include/yml_xmp_component_base.hh"
for((tok1 = (((((__builtin_constant_p(";")) && ((((unsigned long)((void const * )((";") + (1)))) - ((unsigned long)((void const * )(";")))) == (1))) && ((*(((char const * )(";")) + (0))) != ((char)0))) && ((*(((char const * )(";")) + (1))) == ((char)0))) ?(__strtok_r_1c(str1, *(((char const * )(";")) + (0)), &(saveptr1))) : (__strtok_r(str1, ";", &(saveptr1)))), j = (0)); tok1; (tok1 = (((((__builtin_constant_p(";")) && ((((unsigned long)((void const * )((";") + (1)))) - ((unsigned long)((void const * )(";")))) == (1))) && ((*(((char const * )(";")) + (0))) != ((char)0))) && ((*(((char const * )(";")) + (1))) == ((char)0))) ?(__strtok_r_1c((void * )(0), *(((char const * )(";")) + (0)), &(saveptr1))) : (__strtok_r((void * )(0), ";", &(saveptr1)))), j++)) {
{
# 127 "/home/ymlusr/local/var/yml/DefaultExecutionCatalog/generators/XMP/include/yml_xmp_component_base.hh"
switch(j){
{
# 128 "/home/ymlusr/local/var/yml/DefaultExecutionCatalog/generators/XMP/include/yml_xmp_component_base.hh"
case 0:
# 129 "/home/ymlusr/local/var/yml/DefaultExecutionCatalog/generators/XMP/include/yml_xmp_component_base.hh"
for((tok2 = (((((__builtin_constant_p(",")) && ((((unsigned long)((void const * )((",") + (1)))) - ((unsigned long)((void const * )(",")))) == (1))) && ((*(((char const * )(",")) + (0))) != ((char)0))) && ((*(((char const * )(",")) + (1))) == ((char)0))) ?(__strtok_r_1c(tok1, *(((char const * )(",")) + (0)), &(saveptr2))) : (__strtok_r(tok1, ",", &(saveptr2)))), i = (0)); tok2; (tok2 = (((((__builtin_constant_p(",")) && ((((unsigned long)((void const * )((",") + (1)))) - ((unsigned long)((void const * )(",")))) == (1))) && ((*(((char const * )(",")) + (0))) != ((char)0))) && ((*(((char const * )(",")) + (1))) == ((char)0))) ?(__strtok_r_1c((void * )(0), *(((char const * )(",")) + (0)), &(saveptr2))) : (__strtok_r((void * )(0), ",", &(saveptr2)))), i++)) {
{
# 130 "/home/ymlusr/local/var/yml/DefaultExecutionCatalog/generators/XMP/include/yml_xmp_component_base.hh"
(*((mapping->size) + i)) = (strtol(tok2, (void * )(0), 0));
}
}
# 132 "/home/ymlusr/local/var/yml/DefaultExecutionCatalog/generators/XMP/include/yml_xmp_component_base.hh"
(mapping->dataDim) = i;
# 133 "/home/ymlusr/local/var/yml/DefaultExecutionCatalog/generators/XMP/include/yml_xmp_component_base.hh"
break;
# 134 "/home/ymlusr/local/var/yml/DefaultExecutionCatalog/generators/XMP/include/yml_xmp_component_base.hh"
case 1:
# 135 "/home/ymlusr/local/var/yml/DefaultExecutionCatalog/generators/XMP/include/yml_xmp_component_base.hh"
for((tok2 = (((((__builtin_constant_p(",")) && ((((unsigned long)((void const * )((",") + (1)))) - ((unsigned long)((void const * )(",")))) == (1))) && ((*(((char const * )(",")) + (0))) != ((char)0))) && ((*(((char const * )(",")) + (1))) == ((char)0))) ?(__strtok_r_1c(tok1, *(((char const * )(",")) + (0)), &(saveptr2))) : (__strtok_r(tok1, ",", &(saveptr2)))), i = (0)); tok2; (tok2 = (((((__builtin_constant_p(",")) && ((((unsigned long)((void const * )((",") + (1)))) - ((unsigned long)((void const * )(",")))) == (1))) && ((*(((char const * )(",")) + (0))) != ((char)0))) && ((*(((char const * )(",")) + (1))) == ((char)0))) ?(__strtok_r_1c((void * )(0), *(((char const * )(",")) + (0)), &(saveptr2))) : (__strtok_r((void * )(0), ",", &(saveptr2)))), i++)) {
{
# 136 "/home/ymlusr/local/var/yml/DefaultExecutionCatalog/generators/XMP/include/yml_xmp_component_base.hh"
(*((mapping->nodes) + i)) = (strtol(tok2, (void * )(0), 0));
}
}
# 138 "/home/ymlusr/local/var/yml/DefaultExecutionCatalog/generators/XMP/include/yml_xmp_component_base.hh"
(mapping->nodesDim) = i;
# 139 "/home/ymlusr/local/var/yml/DefaultExecutionCatalog/generators/XMP/include/yml_xmp_component_base.hh"
break;
# 140 "/home/ymlusr/local/var/yml/DefaultExecutionCatalog/generators/XMP/include/yml_xmp_component_base.hh"
case 2:
# 141 "/home/ymlusr/local/var/yml/DefaultExecutionCatalog/generators/XMP/include/yml_xmp_component_base.hh"
for((tok2 = (((((__builtin_constant_p(",")) && ((((unsigned long)((void const * )((",") + (1)))) - ((unsigned long)((void const * )(",")))) == (1))) && ((*(((char const * )(",")) + (0))) != ((char)0))) && ((*(((char const * )(",")) + (1))) == ((char)0))) ?(__strtok_r_1c(tok1, *(((char const * )(",")) + (0)), &(saveptr2))) : (__strtok_r(tok1, ",", &(saveptr2)))), i = (0)); tok2; (tok2 = (((((__builtin_constant_p(",")) && ((((unsigned long)((void const * )((",") + (1)))) - ((unsigned long)((void const * )(",")))) == (1))) && ((*(((char const * )(",")) + (0))) != ((char)0))) && ((*(((char const * )(",")) + (1))) == ((char)0))) ?(__strtok_r_1c((void * )(0), *(((char const * )(",")) + (0)), &(saveptr2))) : (__strtok_r((void * )(0), ",", &(saveptr2)))), i++)) {
{
# 142 "/home/ymlusr/local/var/yml/DefaultExecutionCatalog/generators/XMP/include/yml_xmp_component_base.hh"
(*((mapping->distribution) + i)) = (strtol(tok2, (void * )(0), 0));
}
}
# 144 "/home/ymlusr/local/var/yml/DefaultExecutionCatalog/generators/XMP/include/yml_xmp_component_base.hh"
break;
# 145 "/home/ymlusr/local/var/yml/DefaultExecutionCatalog/generators/XMP/include/yml_xmp_component_base.hh"
case 3:
# 146 "/home/ymlusr/local/var/yml/DefaultExecutionCatalog/generators/XMP/include/yml_xmp_component_base.hh"
parse_align(tok1, mapping->algn, mapping->temp);
# 147 "/home/ymlusr/local/var/yml/DefaultExecutionCatalog/generators/XMP/include/yml_xmp_component_base.hh"
break;
# 148 "/home/ymlusr/local/var/yml/DefaultExecutionCatalog/generators/XMP/include/yml_xmp_component_base.hh"
default:
# 149 "/home/ymlusr/local/var/yml/DefaultExecutionCatalog/generators/XMP/include/yml_xmp_component_base.hh"
break;
}
}
}
}
# 153 "/home/ymlusr/local/var/yml/DefaultExecutionCatalog/generators/XMP/include/yml_xmp_component_base.hh"
free(str1);
# 154 "/home/ymlusr/local/var/yml/DefaultExecutionCatalog/generators/XMP/include/yml_xmp_component_base.hh"
return ;
}
# 158 "/home/ymlusr/local/var/yml/DefaultExecutionCatalog/generators/XMP/include/yml_xmp_component_base.hh"
static int align_with(char * temp, char c, int n)
{
# 160 "/home/ymlusr/local/var/yml/DefaultExecutionCatalog/generators/XMP/include/yml_xmp_component_base.hh"
int i;
# 161 "/home/ymlusr/local/var/yml/DefaultExecutionCatalog/generators/XMP/include/yml_xmp_component_base.hh"
int j;
# 163 "/home/ymlusr/local/var/yml/DefaultExecutionCatalog/generators/XMP/include/yml_xmp_component_base.hh"
for(i = (0); i < n; i++) {
{
# 164 "/home/ymlusr/local/var/yml/DefaultExecutionCatalog/generators/XMP/include/yml_xmp_component_base.hh"
if((*(temp + i)) == c) {
# 164 "/home/ymlusr/local/var/yml/DefaultExecutionCatalog/generators/XMP/include/yml_xmp_component_base.hh"
return i;
}
}
}
# 166 "/home/ymlusr/local/var/yml/DefaultExecutionCatalog/generators/XMP/include/yml_xmp_component_base.hh"
return -(1);
}
# 169 "/home/ymlusr/local/var/yml/DefaultExecutionCatalog/generators/XMP/include/yml_xmp_component_base.hh"
static void create_type(struct anon_type_32_Map_Info_t mapping, _Bool * exclude, int * color, int * ndims, int * size, int * array_of_sizes, int * array_of_subsizes, int * array_of_starts)
{
# 171 "/home/ymlusr/local/var/yml/DefaultExecutionCatalog/generators/XMP/include/yml_xmp_component_base.hh"
int myrank;
# 171 "/home/ymlusr/local/var/yml/DefaultExecutionCatalog/generators/XMP/include/yml_xmp_component_base.hh"
int nprocs;
# 172 "/home/ymlusr/local/var/yml/DefaultExecutionCatalog/generators/XMP/include/yml_xmp_component_base.hh"
int i;
# 172 "/home/ymlusr/local/var/yml/DefaultExecutionCatalog/generators/XMP/include/yml_xmp_component_base.hh"
int j;
# 172 "/home/ymlusr/local/var/yml/DefaultExecutionCatalog/generators/XMP/include/yml_xmp_component_base.hh"
int id = 0;
# 172 "/home/ymlusr/local/var/yml/DefaultExecutionCatalog/generators/XMP/include/yml_xmp_component_base.hh"
int n;
# 172 "/home/ymlusr/local/var/yml/DefaultExecutionCatalog/generators/XMP/include/yml_xmp_component_base.hh"
int m;
# 173 "/home/ymlusr/local/var/yml/DefaultExecutionCatalog/generators/XMP/include/yml_xmp_component_base.hh"
int n1;
# 173 "/home/ymlusr/local/var/yml/DefaultExecutionCatalog/generators/XMP/include/yml_xmp_component_base.hh"
int n2;
# 174 "/home/ymlusr/local/var/yml/DefaultExecutionCatalog/generators/XMP/include/yml_xmp_component_base.hh"
int odr[4];
# 176 "/home/ymlusr/local/var/yml/DefaultExecutionCatalog/generators/XMP/include/yml_xmp_component_base.hh"
memset(odr, 0, (4) * (sizeof(int)));
# 177 "/home/ymlusr/local/var/yml/DefaultExecutionCatalog/generators/XMP/include/yml_xmp_component_base.hh"
MPI_Comm_rank((struct ompi_communicator_t * )((void * )(&(ompi_mpi_comm_world))), &(myrank));
# 178 "/home/ymlusr/local/var/yml/DefaultExecutionCatalog/generators/XMP/include/yml_xmp_component_base.hh"
MPI_Comm_size((struct ompi_communicator_t * )((void * )(&(ompi_mpi_comm_world))), &(nprocs));
# 180 "/home/ymlusr/local/var/yml/DefaultExecutionCatalog/generators/XMP/include/yml_xmp_component_base.hh"
if(((&(mapping))->dataDim) > ((&(mapping))->nodesDim)) {
# 181 "/home/ymlusr/local/var/yml/DefaultExecutionCatalog/generators/XMP/include/yml_xmp_component_base.hh"
(*(ndims)) = ((&(mapping))->dataDim);
# 183 "/home/ymlusr/local/var/yml/DefaultExecutionCatalog/generators/XMP/include/yml_xmp_component_base.hh"
for(i = (0); i < ((&(mapping))->nodesDim); i++) {
{
# 184 "/home/ymlusr/local/var/yml/DefaultExecutionCatalog/generators/XMP/include/yml_xmp_component_base.hh"
(odr[i]) = (align_with((&(mapping))->temp, *(((&(mapping))->algn) + i), (&(mapping))->dataDim));
}
}
# 187 "/home/ymlusr/local/var/yml/DefaultExecutionCatalog/generators/XMP/include/yml_xmp_component_base.hh"
for(i = ((&(mapping))->nodesDim); i < ((&(mapping))->dataDim); i++) {
{
# 188 "/home/ymlusr/local/var/yml/DefaultExecutionCatalog/generators/XMP/include/yml_xmp_component_base.hh"
(odr[i]) = i;
}
}
# 190 "/home/ymlusr/local/var/yml/DefaultExecutionCatalog/generators/XMP/include/yml_xmp_component_base.hh"
(*(size)) = (1);
# 191 "/home/ymlusr/local/var/yml/DefaultExecutionCatalog/generators/XMP/include/yml_xmp_component_base.hh"
for(i = (0); i < ((&(mapping))->dataDim); i++) {
{
# 192 "/home/ymlusr/local/var/yml/DefaultExecutionCatalog/generators/XMP/include/yml_xmp_component_base.hh"
n = (*(((&(mapping))->nodes) + (odr[i])));
# 193 "/home/ymlusr/local/var/yml/DefaultExecutionCatalog/generators/XMP/include/yml_xmp_component_base.hh"
(*(array_of_sizes + i)) = (*(((&(mapping))->size) + i));
# 194 "/home/ymlusr/local/var/yml/DefaultExecutionCatalog/generators/XMP/include/yml_xmp_component_base.hh"
(*(array_of_subsizes + i)) = ((((*(array_of_sizes + i)) + n) - (1)) / n);
# 195 "/home/ymlusr/local/var/yml/DefaultExecutionCatalog/generators/XMP/include/yml_xmp_component_base.hh"
n2 = (1);
# 196 "/home/ymlusr/local/var/yml/DefaultExecutionCatalog/generators/XMP/include/yml_xmp_component_base.hh"
for(j = (0); j < (odr[i]); j++) {
{
# 197 "/home/ymlusr/local/var/yml/DefaultExecutionCatalog/generators/XMP/include/yml_xmp_component_base.hh"
n2 *= (*(((&(mapping))->nodes) + j));
}
}
# 199 "/home/ymlusr/local/var/yml/DefaultExecutionCatalog/generators/XMP/include/yml_xmp_component_base.hh"
n1 = (n2 * (*(((&(mapping))->nodes) + (odr[i]))));
# 200 "/home/ymlusr/local/var/yml/DefaultExecutionCatalog/generators/XMP/include/yml_xmp_component_base.hh"
id = ((myrank % n1) / n2);
# 201 "/home/ymlusr/local/var/yml/DefaultExecutionCatalog/generators/XMP/include/yml_xmp_component_base.hh"
(*(array_of_starts + i)) = (id * (*(array_of_subsizes + i)));
# 202 "/home/ymlusr/local/var/yml/DefaultExecutionCatalog/generators/XMP/include/yml_xmp_component_base.hh"
if(id == (n - (1))) {
# 203 "/home/ymlusr/local/var/yml/DefaultExecutionCatalog/generators/XMP/include/yml_xmp_component_base.hh"
(*(array_of_subsizes + i)) = ((*(array_of_sizes + i)) - (*(array_of_starts + i)));
}
# 205 "/home/ymlusr/local/var/yml/DefaultExecutionCatalog/generators/XMP/include/yml_xmp_component_base.hh"
(*(size)) *= (*(array_of_subsizes + i));
}
}
}
else {
# 207 "/home/ymlusr/local/var/yml/DefaultExecutionCatalog/generators/XMP/include/yml_xmp_component_base.hh"
if(((&(mapping))->dataDim) == ((&(mapping))->nodesDim)) {
# 208 "/home/ymlusr/local/var/yml/DefaultExecutionCatalog/generators/XMP/include/yml_xmp_component_base.hh"
(*(ndims)) = ((&(mapping))->nodesDim);
# 209 "/home/ymlusr/local/var/yml/DefaultExecutionCatalog/generators/XMP/include/yml_xmp_component_base.hh"
for(i = (0); i < ((&(mapping))->dataDim); i++) {
{
# 210 "/home/ymlusr/local/var/yml/DefaultExecutionCatalog/generators/XMP/include/yml_xmp_component_base.hh"
(odr[i]) = (align_with((&(mapping))->temp, *(((&(mapping))->algn) + i), (&(mapping))->dataDim));
}
}
# 212 "/home/ymlusr/local/var/yml/DefaultExecutionCatalog/generators/XMP/include/yml_xmp_component_base.hh"
(*(size)) = (1);
# 213 "/home/ymlusr/local/var/yml/DefaultExecutionCatalog/generators/XMP/include/yml_xmp_component_base.hh"
for(i = (0); i < ((&(mapping))->dataDim); i++) {
{
# 214 "/home/ymlusr/local/var/yml/DefaultExecutionCatalog/generators/XMP/include/yml_xmp_component_base.hh"
n = (*(((&(mapping))->nodes) + (odr[i])));
# 215 "/home/ymlusr/local/var/yml/DefaultExecutionCatalog/generators/XMP/include/yml_xmp_component_base.hh"
(*(array_of_sizes + i)) = (*(((&(mapping))->size) + i));
# 216 "/home/ymlusr/local/var/yml/DefaultExecutionCatalog/generators/XMP/include/yml_xmp_component_base.hh"
(*(array_of_subsizes + i)) = ((((*(array_of_sizes + i)) + n) - (1)) / n);
# 218 "/home/ymlusr/local/var/yml/DefaultExecutionCatalog/generators/XMP/include/yml_xmp_component_base.hh"
n2 = (1);
# 219 "/home/ymlusr/local/var/yml/DefaultExecutionCatalog/generators/XMP/include/yml_xmp_component_base.hh"
for(j = (0); j < (odr[i]); j++) {
{
# 220 "/home/ymlusr/local/var/yml/DefaultExecutionCatalog/generators/XMP/include/yml_xmp_component_base.hh"
n2 *= (*(((&(mapping))->nodes) + j));
}
}
# 222 "/home/ymlusr/local/var/yml/DefaultExecutionCatalog/generators/XMP/include/yml_xmp_component_base.hh"
n1 = (n2 * (*(((&(mapping))->nodes) + (odr[i]))));
# 223 "/home/ymlusr/local/var/yml/DefaultExecutionCatalog/generators/XMP/include/yml_xmp_component_base.hh"
id = ((myrank % n1) / n2);
# 233 "/home/ymlusr/local/var/yml/DefaultExecutionCatalog/generators/XMP/include/yml_xmp_component_base.hh"
(*(array_of_starts + i)) = (id * (*(array_of_subsizes + i)));
# 234 "/home/ymlusr/local/var/yml/DefaultExecutionCatalog/generators/XMP/include/yml_xmp_component_base.hh"
if(id == (n - (1))) {
# 235 "/home/ymlusr/local/var/yml/DefaultExecutionCatalog/generators/XMP/include/yml_xmp_component_base.hh"
(*(array_of_subsizes + i)) = ((*(array_of_sizes + i)) - (*(array_of_starts + i)));
}
# 237 "/home/ymlusr/local/var/yml/DefaultExecutionCatalog/generators/XMP/include/yml_xmp_component_base.hh"
(*(size)) *= (*(array_of_subsizes + i));
}
}
}
else {
# 239 "/home/ymlusr/local/var/yml/DefaultExecutionCatalog/generators/XMP/include/yml_xmp_component_base.hh"
if(((&(mapping))->dataDim) < ((&(mapping))->nodesDim)) {
# 242 "/home/ymlusr/local/var/yml/DefaultExecutionCatalog/generators/XMP/include/yml_xmp_component_base.hh"
(*(ndims)) = ((&(mapping))->dataDim);
# 243 "/home/ymlusr/local/var/yml/DefaultExecutionCatalog/generators/XMP/include/yml_xmp_component_base.hh"
(*(exclude)) = (1);
# 245 "/home/ymlusr/local/var/yml/DefaultExecutionCatalog/generators/XMP/include/yml_xmp_component_base.hh"
for(i = (0); i < ((&(mapping))->dataDim); i++) {
{
# 246 "/home/ymlusr/local/var/yml/DefaultExecutionCatalog/generators/XMP/include/yml_xmp_component_base.hh"
(odr[i]) = (align_with((&(mapping))->temp, *(((&(mapping))->algn) + i), (&(mapping))->nodesDim));
}
}
# 248 "/home/ymlusr/local/var/yml/DefaultExecutionCatalog/generators/XMP/include/yml_xmp_component_base.hh"
for(i = ((&(mapping))->dataDim); i < ((&(mapping))->nodesDim); i++) {
{
# 249 "/home/ymlusr/local/var/yml/DefaultExecutionCatalog/generators/XMP/include/yml_xmp_component_base.hh"
(odr[i]) = (align_with((&(mapping))->temp, (char)42, (&(mapping))->nodesDim));
}
}
# 252 "/home/ymlusr/local/var/yml/DefaultExecutionCatalog/generators/XMP/include/yml_xmp_component_base.hh"
(*(size)) = (1);
# 253 "/home/ymlusr/local/var/yml/DefaultExecutionCatalog/generators/XMP/include/yml_xmp_component_base.hh"
for(i = (0); i <= ((&(mapping))->dataDim); i++) {
{
# 254 "/home/ymlusr/local/var/yml/DefaultExecutionCatalog/generators/XMP/include/yml_xmp_component_base.hh"
n = (*(((&(mapping))->nodes) + (odr[i])));
# 255 "/home/ymlusr/local/var/yml/DefaultExecutionCatalog/generators/XMP/include/yml_xmp_component_base.hh"
(*(array_of_sizes + i)) = (*(((&(mapping))->size) + i));
# 256 "/home/ymlusr/local/var/yml/DefaultExecutionCatalog/generators/XMP/include/yml_xmp_component_base.hh"
(*(array_of_subsizes + i)) = ((((*(array_of_sizes + i)) + n) - (1)) / n);
# 257 "/home/ymlusr/local/var/yml/DefaultExecutionCatalog/generators/XMP/include/yml_xmp_component_base.hh"
n2 = (1);
# 258 "/home/ymlusr/local/var/yml/DefaultExecutionCatalog/generators/XMP/include/yml_xmp_component_base.hh"
for(j = (0); j < (odr[i]); j++) {
{
# 259 "/home/ymlusr/local/var/yml/DefaultExecutionCatalog/generators/XMP/include/yml_xmp_component_base.hh"
n2 *= (*(((&(mapping))->nodes) + j));
}
}
# 261 "/home/ymlusr/local/var/yml/DefaultExecutionCatalog/generators/XMP/include/yml_xmp_component_base.hh"
n1 = (n2 * (*(((&(mapping))->nodes) + (odr[i]))));
# 262 "/home/ymlusr/local/var/yml/DefaultExecutionCatalog/generators/XMP/include/yml_xmp_component_base.hh"
id = ((myrank % n1) / n2);
# 263 "/home/ymlusr/local/var/yml/DefaultExecutionCatalog/generators/XMP/include/yml_xmp_component_base.hh"
if(i == ((&(mapping))->dataDim)) {
# 264 "/home/ymlusr/local/var/yml/DefaultExecutionCatalog/generators/XMP/include/yml_xmp_component_base.hh"
(*(color)) = id;
# 265 "/home/ymlusr/local/var/yml/DefaultExecutionCatalog/generators/XMP/include/yml_xmp_component_base.hh"
break;
}
# 267 "/home/ymlusr/local/var/yml/DefaultExecutionCatalog/generators/XMP/include/yml_xmp_component_base.hh"
(*(array_of_starts + i)) = (id * (*(array_of_subsizes + i)));
# 268 "/home/ymlusr/local/var/yml/DefaultExecutionCatalog/generators/XMP/include/yml_xmp_component_base.hh"
if(id == (n - (1))) {
# 269 "/home/ymlusr/local/var/yml/DefaultExecutionCatalog/generators/XMP/include/yml_xmp_component_base.hh"
(*(array_of_subsizes + i)) = ((*(array_of_sizes + i)) - (*(array_of_starts + i)));
}
# 271 "/home/ymlusr/local/var/yml/DefaultExecutionCatalog/generators/XMP/include/yml_xmp_component_base.hh"
(*(size)) *= (*(array_of_subsizes + i));
}
}
}
}
}
}
# 288 "/home/ymlusr/local/var/yml/DefaultExecutionCatalog/generators/XMP/include/yml_xmp_component_base.hh"
static _Bool type_import(void * param, char * filename, struct ompi_datatype_t * (* ptFuncType)(void), _Bool (* ptFuncImport)(void * , char const * , struct ompi_datatype_t * const, int const), char * mapping_description)
{
# 290 "/home/ymlusr/local/var/yml/DefaultExecutionCatalog/generators/XMP/include/yml_xmp_component_base.hh"
int myrank;
# 290 "/home/ymlusr/local/var/yml/DefaultExecutionCatalog/generators/XMP/include/yml_xmp_component_base.hh"
int nprocs;
# 290 "/home/ymlusr/local/var/yml/DefaultExecutionCatalog/generators/XMP/include/yml_xmp_component_base.hh"
int color;
# 291 "/home/ymlusr/local/var/yml/DefaultExecutionCatalog/generators/XMP/include/yml_xmp_component_base.hh"
int size;
# 291 "/home/ymlusr/local/var/yml/DefaultExecutionCatalog/generators/XMP/include/yml_xmp_component_base.hh"
int ndims;
# 292 "/home/ymlusr/local/var/yml/DefaultExecutionCatalog/generators/XMP/include/yml_xmp_component_base.hh"
int array_of_sizes[4];
# 293 "/home/ymlusr/local/var/yml/DefaultExecutionCatalog/generators/XMP/include/yml_xmp_component_base.hh"
int array_of_subsizes[4];
# 294 "/home/ymlusr/local/var/yml/DefaultExecutionCatalog/generators/XMP/include/yml_xmp_component_base.hh"
int array_of_starts[4];
# 295 "/home/ymlusr/local/var/yml/DefaultExecutionCatalog/generators/XMP/include/yml_xmp_component_base.hh"
char fullpath[256];
# 296 "/home/ymlusr/local/var/yml/DefaultExecutionCatalog/generators/XMP/include/yml_xmp_component_base.hh"
_Bool status;
# 296 "/home/ymlusr/local/var/yml/DefaultExecutionCatalog/generators/XMP/include/yml_xmp_component_base.hh"
_Bool exclude;
# 297 "/home/ymlusr/local/var/yml/DefaultExecutionCatalog/generators/XMP/include/yml_xmp_component_base.hh"
struct _IO_FILE * fp;
# 298 "/home/ymlusr/local/var/yml/DefaultExecutionCatalog/generators/XMP/include/yml_xmp_component_base.hh"
struct anon_type_32_Map_Info_t mapping;
# 299 "/home/ymlusr/local/var/yml/DefaultExecutionCatalog/generators/XMP/include/yml_xmp_component_base.hh"
struct ompi_datatype_t * motif;
# 300 "/home/ymlusr/local/var/yml/DefaultExecutionCatalog/generators/XMP/include/yml_xmp_component_base.hh"
struct ompi_communicator_t * CommExport;
# 302 "/home/ymlusr/local/var/yml/DefaultExecutionCatalog/generators/XMP/include/yml_xmp_component_base.hh"
MPI_Comm_rank((struct ompi_communicator_t * )((void * )(&(ompi_mpi_comm_world))), &(myrank));
# 303 "/home/ymlusr/local/var/yml/DefaultExecutionCatalog/generators/XMP/include/yml_xmp_component_base.hh"
MPI_Comm_size((struct ompi_communicator_t * )((void * )(&(ompi_mpi_comm_world))), &(nprocs));
# 304 "/home/ymlusr/local/var/yml/DefaultExecutionCatalog/generators/XMP/include/yml_xmp_component_base.hh"
status = (1);
# 305 "/home/ymlusr/local/var/yml/DefaultExecutionCatalog/generators/XMP/include/yml_xmp_component_base.hh"
exclude = (0);
# 306 "/home/ymlusr/local/var/yml/DefaultExecutionCatalog/generators/XMP/include/yml_xmp_component_base.hh"
color = (0);
# 307 "/home/ymlusr/local/var/yml/DefaultExecutionCatalog/generators/XMP/include/yml_xmp_component_base.hh"
CommExport = ((struct ompi_communicator_t * )((void * )(&(ompi_mpi_comm_world))));
# 309 "/home/ymlusr/local/var/yml/DefaultExecutionCatalog/generators/XMP/include/yml_xmp_component_base.hh"
parse_mapping(&(mapping), mapping_description);
# 311 "/home/ymlusr/local/var/yml/DefaultExecutionCatalog/generators/XMP/include/yml_xmp_component_base.hh"
create_type(mapping, &(exclude), &(color), &(ndims), &(size), array_of_sizes, array_of_subsizes, array_of_starts);
# 313 "/home/ymlusr/local/var/yml/DefaultExecutionCatalog/generators/XMP/include/yml_xmp_component_base.hh"
if(exclude) {
# 313 "/home/ymlusr/local/var/yml/DefaultExecutionCatalog/generators/XMP/include/yml_xmp_component_base.hh"
MPI_Comm_split((struct ompi_communicator_t * )((void * )(&(ompi_mpi_comm_world))), color, myrank, &(CommExport));
}
# 315 "/home/ymlusr/local/var/yml/DefaultExecutionCatalog/generators/XMP/include/yml_xmp_component_base.hh"
MPI_Type_create_subarray(ndims, array_of_sizes, array_of_subsizes, array_of_starts, 0, ptFuncType(), &(motif));
# 316 "/home/ymlusr/local/var/yml/DefaultExecutionCatalog/generators/XMP/include/yml_xmp_component_base.hh"
MPI_Type_commit(&(motif));
# 319 "/home/ymlusr/local/var/yml/DefaultExecutionCatalog/generators/XMP/include/yml_xmp_component_base.hh"
if(myrank == (0)) {
# 320 "/home/ymlusr/local/var/yml/DefaultExecutionCatalog/generators/XMP/include/yml_xmp_component_base.hh"
fp = (fopen(filename, "r"));
# 321 "/home/ymlusr/local/var/yml/DefaultExecutionCatalog/generators/XMP/include/yml_xmp_component_base.hh"
fscanf(fp, "%s", fullpath);
# 322 "/home/ymlusr/local/var/yml/DefaultExecutionCatalog/generators/XMP/include/yml_xmp_component_base.hh"
fclose(fp);
}
# 324 "/home/ymlusr/local/var/yml/DefaultExecutionCatalog/generators/XMP/include/yml_xmp_component_base.hh"
MPI_Bcast(fullpath, 256, (struct ompi_datatype_t * )((void * )(&(ompi_mpi_char))), 0, (struct ompi_communicator_t * )((void * )(&(ompi_mpi_comm_world))));
# 325 "/home/ymlusr/local/var/yml/DefaultExecutionCatalog/generators/XMP/include/yml_xmp_component_base.hh"
status = ((*(ptFuncImport))(param, fullpath, motif, size));
# 327 "/home/ymlusr/local/var/yml/DefaultExecutionCatalog/generators/XMP/include/yml_xmp_component_base.hh"
MPI_Type_free(&(motif));
# 329 "/home/ymlusr/local/var/yml/DefaultExecutionCatalog/generators/XMP/include/yml_xmp_component_base.hh"
if(exclude == (1)) {
# 329 "/home/ymlusr/local/var/yml/DefaultExecutionCatalog/generators/XMP/include/yml_xmp_component_base.hh"
MPI_Comm_free(&(CommExport));
}
# 331 "/home/ymlusr/local/var/yml/DefaultExecutionCatalog/generators/XMP/include/yml_xmp_component_base.hh"
return status;
}
# 334 "/home/ymlusr/local/var/yml/DefaultExecutionCatalog/generators/XMP/include/yml_xmp_component_base.hh"
static _Bool type_export(void * param, char * filename, struct ompi_datatype_t * (* ptFuncType)(void), _Bool (* ptFuncExport)(void const * , char * , struct ompi_datatype_t * const, int const, struct ompi_communicator_t * ), char * mapping_description)
{
# 336 "/home/ymlusr/local/var/yml/DefaultExecutionCatalog/generators/XMP/include/yml_xmp_component_base.hh"
int myrank;
# 336 "/home/ymlusr/local/var/yml/DefaultExecutionCatalog/generators/XMP/include/yml_xmp_component_base.hh"
int nprocs;
# 336 "/home/ymlusr/local/var/yml/DefaultExecutionCatalog/generators/XMP/include/yml_xmp_component_base.hh"
int color;
# 337 "/home/ymlusr/local/var/yml/DefaultExecutionCatalog/generators/XMP/include/yml_xmp_component_base.hh"
int size = 1;
# 338 "/home/ymlusr/local/var/yml/DefaultExecutionCatalog/generators/XMP/include/yml_xmp_component_base.hh"
int ndims;
# 339 "/home/ymlusr/local/var/yml/DefaultExecutionCatalog/generators/XMP/include/yml_xmp_component_base.hh"
int array_of_sizes[4];
# 340 "/home/ymlusr/local/var/yml/DefaultExecutionCatalog/generators/XMP/include/yml_xmp_component_base.hh"
int array_of_subsizes[4];
# 341 "/home/ymlusr/local/var/yml/DefaultExecutionCatalog/generators/XMP/include/yml_xmp_component_base.hh"
int array_of_starts[4];
# 342 "/home/ymlusr/local/var/yml/DefaultExecutionCatalog/generators/XMP/include/yml_xmp_component_base.hh"
char fullpath[256];
# 343 "/home/ymlusr/local/var/yml/DefaultExecutionCatalog/generators/XMP/include/yml_xmp_component_base.hh"
_Bool status;
# 343 "/home/ymlusr/local/var/yml/DefaultExecutionCatalog/generators/XMP/include/yml_xmp_component_base.hh"
_Bool exclude;
# 344 "/home/ymlusr/local/var/yml/DefaultExecutionCatalog/generators/XMP/include/yml_xmp_component_base.hh"
struct _IO_FILE * fp;
# 345 "/home/ymlusr/local/var/yml/DefaultExecutionCatalog/generators/XMP/include/yml_xmp_component_base.hh"
struct anon_type_32_Map_Info_t mapping;
# 346 "/home/ymlusr/local/var/yml/DefaultExecutionCatalog/generators/XMP/include/yml_xmp_component_base.hh"
struct ompi_datatype_t * motif;
# 347 "/home/ymlusr/local/var/yml/DefaultExecutionCatalog/generators/XMP/include/yml_xmp_component_base.hh"
struct ompi_communicator_t * CommExport;
# 349 "/home/ymlusr/local/var/yml/DefaultExecutionCatalog/generators/XMP/include/yml_xmp_component_base.hh"
MPI_Comm_rank((struct ompi_communicator_t * )((void * )(&(ompi_mpi_comm_world))), &(myrank));
# 350 "/home/ymlusr/local/var/yml/DefaultExecutionCatalog/generators/XMP/include/yml_xmp_component_base.hh"
MPI_Comm_size((struct ompi_communicator_t * )((void * )(&(ompi_mpi_comm_world))), &(nprocs));
# 351 "/home/ymlusr/local/var/yml/DefaultExecutionCatalog/generators/XMP/include/yml_xmp_component_base.hh"
status = (1);
# 352 "/home/ymlusr/local/var/yml/DefaultExecutionCatalog/generators/XMP/include/yml_xmp_component_base.hh"
exclude = (0);
# 353 "/home/ymlusr/local/var/yml/DefaultExecutionCatalog/generators/XMP/include/yml_xmp_component_base.hh"
color = (0);
# 354 "/home/ymlusr/local/var/yml/DefaultExecutionCatalog/generators/XMP/include/yml_xmp_component_base.hh"
CommExport = ((struct ompi_communicator_t * )((void * )(&(ompi_mpi_comm_world))));
# 356 "/home/ymlusr/local/var/yml/DefaultExecutionCatalog/generators/XMP/include/yml_xmp_component_base.hh"
parse_mapping(&(mapping), mapping_description);
# 358 "/home/ymlusr/local/var/yml/DefaultExecutionCatalog/generators/XMP/include/yml_xmp_component_base.hh"
create_type(mapping, &(exclude), &(color), &(ndims), &(size), array_of_sizes, array_of_subsizes, array_of_starts);
# 359 "/home/ymlusr/local/var/yml/DefaultExecutionCatalog/generators/XMP/include/yml_xmp_component_base.hh"
MPI_Type_create_subarray(ndims, array_of_sizes, array_of_subsizes, array_of_starts, 0, ptFuncType(), &(motif));
# 360 "/home/ymlusr/local/var/yml/DefaultExecutionCatalog/generators/XMP/include/yml_xmp_component_base.hh"
MPI_Type_commit(&(motif));
# 363 "/home/ymlusr/local/var/yml/DefaultExecutionCatalog/generators/XMP/include/yml_xmp_component_base.hh"
if(exclude) {
# 363 "/home/ymlusr/local/var/yml/DefaultExecutionCatalog/generators/XMP/include/yml_xmp_component_base.hh"
MPI_Comm_split((struct ompi_communicator_t * )((void * )(&(ompi_mpi_comm_world))), color, myrank, &(CommExport));
}
# 366 "/home/ymlusr/local/var/yml/DefaultExecutionCatalog/generators/XMP/include/yml_xmp_component_base.hh"
if(myrank == (0)) {
# 367 "/home/ymlusr/local/var/yml/DefaultExecutionCatalog/generators/XMP/include/yml_xmp_component_base.hh"
memset(fullpath, 0, 256);
# 368 "/home/ymlusr/local/var/yml/DefaultExecutionCatalog/generators/XMP/include/yml_xmp_component_base.hh"
fp = (fopen("data_dir.txt", "r"));
# 369 "/home/ymlusr/local/var/yml/DefaultExecutionCatalog/generators/XMP/include/yml_xmp_component_base.hh"
fscanf(fp, "%s", fullpath);
# 370 "/home/ymlusr/local/var/yml/DefaultExecutionCatalog/generators/XMP/include/yml_xmp_component_base.hh"
strcat(fullpath, filename);
# 371 "/home/ymlusr/local/var/yml/DefaultExecutionCatalog/generators/XMP/include/yml_xmp_component_base.hh"
fclose(fp);
}
# 373 "/home/ymlusr/local/var/yml/DefaultExecutionCatalog/generators/XMP/include/yml_xmp_component_base.hh"
MPI_Bcast(fullpath, 256, (struct ompi_datatype_t * )((void * )(&(ompi_mpi_char))), 0, (struct ompi_communicator_t * )((void * )(&(ompi_mpi_comm_world))));
# 375 "/home/ymlusr/local/var/yml/DefaultExecutionCatalog/generators/XMP/include/yml_xmp_component_base.hh"
if(color == (0)) {
# 376 "/home/ymlusr/local/var/yml/DefaultExecutionCatalog/generators/XMP/include/yml_xmp_component_base.hh"
status = ((*(ptFuncExport))(param, fullpath, motif, size, CommExport));
}
# 379 "/home/ymlusr/local/var/yml/DefaultExecutionCatalog/generators/XMP/include/yml_xmp_component_base.hh"
if(exclude == (1)) {
# 379 "/home/ymlusr/local/var/yml/DefaultExecutionCatalog/generators/XMP/include/yml_xmp_component_base.hh"
MPI_Comm_free(&(CommExport));
}
# 381 "/home/ymlusr/local/var/yml/DefaultExecutionCatalog/generators/XMP/include/yml_xmp_component_base.hh"
if(myrank == (0)) {
# 382 "/home/ymlusr/local/var/yml/DefaultExecutionCatalog/generators/XMP/include/yml_xmp_component_base.hh"
fp = (fopen("output.txt", "a"));
# 383 "/home/ymlusr/local/var/yml/DefaultExecutionCatalog/generators/XMP/include/yml_xmp_component_base.hh"
fprintf(fp, "0,%s\n", filename);
# 384 "/home/ymlusr/local/var/yml/DefaultExecutionCatalog/generators/XMP/include/yml_xmp_component_base.hh"
fclose(fp);
}
# 387 "/home/ymlusr/local/var/yml/DefaultExecutionCatalog/generators/XMP/include/yml_xmp_component_base.hh"
MPI_Type_free(&(motif));
# 389 "/home/ymlusr/local/var/yml/DefaultExecutionCatalog/generators/XMP/include/yml_xmp_component_base.hh"
return status;
}
# 22 "/home/ymlusr/local/var/yml/DefaultExecutionCatalog/generators/XMP/include/Matrix.xmptype.h"
static struct ompi_datatype_t * Matrix_MPI_Type()
{
# 25 "/home/ymlusr/local/var/yml/DefaultExecutionCatalog/generators/XMP/include/Matrix.xmptype.h"
return (struct ompi_datatype_t * )((void * )(&(ompi_mpi_double)));
}
# 30 "/home/ymlusr/local/var/yml/DefaultExecutionCatalog/generators/XMP/include/Matrix.xmptype.h"
static _Bool Matrix_import(double * param, char * filename, struct ompi_datatype_t * const motif, int const size)
{
# 32 "/home/ymlusr/local/var/yml/DefaultExecutionCatalog/generators/XMP/include/Matrix.xmptype.h"
int ack;
# 33 "/home/ymlusr/local/var/yml/DefaultExecutionCatalog/generators/XMP/include/Matrix.xmptype.h"
struct ompi_file_t * fh;
# 34 "/home/ymlusr/local/var/yml/DefaultExecutionCatalog/generators/XMP/include/Matrix.xmptype.h"
struct ompi_status_public_t status;
# 37 "/home/ymlusr/local/var/yml/DefaultExecutionCatalog/generators/XMP/include/Matrix.xmptype.h"
ack = (MPI_File_open((struct ompi_communicator_t * )((void * )(&(ompi_mpi_comm_world))), filename, 2, (struct ompi_info_t * )((void * )(&(ompi_mpi_info_null))), &(fh)));
# 39 "/home/ymlusr/local/var/yml/DefaultExecutionCatalog/generators/XMP/include/Matrix.xmptype.h"
if(ack != (42)) {
# 41 "/home/ymlusr/local/var/yml/DefaultExecutionCatalog/generators/XMP/include/Matrix.xmptype.h"
MPI_File_set_view(fh, 0, (struct ompi_datatype_t * )((void * )(&(ompi_mpi_double))), motif, "native", (struct ompi_info_t * )((void * )(&(ompi_mpi_info_null))));
# 42 "/home/ymlusr/local/var/yml/DefaultExecutionCatalog/generators/XMP/include/Matrix.xmptype.h"
MPI_File_read_all(fh, param, size, (struct ompi_datatype_t * )((void * )(&(ompi_mpi_double))), &(status));
# 43 "/home/ymlusr/local/var/yml/DefaultExecutionCatalog/generators/XMP/include/Matrix.xmptype.h"
MPI_File_close(&(fh));
# 44 "/home/ymlusr/local/var/yml/DefaultExecutionCatalog/generators/XMP/include/Matrix.xmptype.h"
return 1;
}
# 47 "/home/ymlusr/local/var/yml/DefaultExecutionCatalog/generators/XMP/include/Matrix.xmptype.h"
MPI_File_close(&(fh));
# 48 "/home/ymlusr/local/var/yml/DefaultExecutionCatalog/generators/XMP/include/Matrix.xmptype.h"
return 0;
}
# 51 "/home/ymlusr/local/var/yml/DefaultExecutionCatalog/generators/XMP/include/Matrix.xmptype.h"
static _Bool Matrix_export(double * const param, char * filename, struct ompi_datatype_t * const motif, int const size, struct ompi_communicator_t * Communicator)
{
# 53 "/home/ymlusr/local/var/yml/DefaultExecutionCatalog/generators/XMP/include/Matrix.xmptype.h"
int ack;
# 54 "/home/ymlusr/local/var/yml/DefaultExecutionCatalog/generators/XMP/include/Matrix.xmptype.h"
struct ompi_file_t * fh;
# 55 "/home/ymlusr/local/var/yml/DefaultExecutionCatalog/generators/XMP/include/Matrix.xmptype.h"
struct ompi_status_public_t status;
# 57 "/home/ymlusr/local/var/yml/DefaultExecutionCatalog/generators/XMP/include/Matrix.xmptype.h"
ack = (MPI_File_open(Communicator, filename, (4) | (1), (struct ompi_info_t * )((void * )(&(ompi_mpi_info_null))), &(fh)));
# 59 "/home/ymlusr/local/var/yml/DefaultExecutionCatalog/generators/XMP/include/Matrix.xmptype.h"
if(ack != (42)) {
# 61 "/home/ymlusr/local/var/yml/DefaultExecutionCatalog/generators/XMP/include/Matrix.xmptype.h"
MPI_File_set_view(fh, 0, (struct ompi_datatype_t * )((void * )(&(ompi_mpi_double))), motif, "native", (struct ompi_info_t * )((void * )(&(ompi_mpi_info_null))));
# 62 "/home/ymlusr/local/var/yml/DefaultExecutionCatalog/generators/XMP/include/Matrix.xmptype.h"
MPI_File_write_all(fh, param, size, (struct ompi_datatype_t * )((void * )(&(ompi_mpi_double))), &(status));
# 63 "/home/ymlusr/local/var/yml/DefaultExecutionCatalog/generators/XMP/include/Matrix.xmptype.h"
MPI_File_close(&(fh));
# 64 "/home/ymlusr/local/var/yml/DefaultExecutionCatalog/generators/XMP/include/Matrix.xmptype.h"
return 1;
}
# 67 "/home/ymlusr/local/var/yml/DefaultExecutionCatalog/generators/XMP/include/Matrix.xmptype.h"
MPI_File_close(&(fh));
# 68 "/home/ymlusr/local/var/yml/DefaultExecutionCatalog/generators/XMP/include/Matrix.xmptype.h"
return 0;
}
# 20 "/home/ymlusr/local/var/yml/DefaultExecutionCatalog/generators/XMP/include/real.xmptype.h"
static _Bool real_import(double * param, char * filename)
{
# 21 "/home/ymlusr/local/var/yml/DefaultExecutionCatalog/generators/XMP/include/real.xmptype.h"
int ack;
# 22 "/home/ymlusr/local/var/yml/DefaultExecutionCatalog/generators/XMP/include/real.xmptype.h"
char path[256];
# 23 "/home/ymlusr/local/var/yml/DefaultExecutionCatalog/generators/XMP/include/real.xmptype.h"
struct _IO_FILE * fp;
# 24 "/home/ymlusr/local/var/yml/DefaultExecutionCatalog/generators/XMP/include/real.xmptype.h"
struct ompi_file_t * fh;
# 25 "/home/ymlusr/local/var/yml/DefaultExecutionCatalog/generators/XMP/include/real.xmptype.h"
struct ompi_status_public_t status;
# 27 "/home/ymlusr/local/var/yml/DefaultExecutionCatalog/generators/XMP/include/real.xmptype.h"
static int myrank = -(1);
# 27 "/home/ymlusr/local/var/yml/DefaultExecutionCatalog/generators/XMP/include/real.xmptype.h"
static int nprocs;
# 28 "/home/ymlusr/local/var/yml/DefaultExecutionCatalog/generators/XMP/include/real.xmptype.h"
static char dir[256];
# 30 "/home/ymlusr/local/var/yml/DefaultExecutionCatalog/generators/XMP/include/real.xmptype.h"
if(myrank == (-(1))) {
# 31 "/home/ymlusr/local/var/yml/DefaultExecutionCatalog/generators/XMP/include/real.xmptype.h"
MPI_Comm_rank((struct ompi_communicator_t * )((void * )(&(ompi_mpi_comm_world))), &(myrank));
# 32 "/home/ymlusr/local/var/yml/DefaultExecutionCatalog/generators/XMP/include/real.xmptype.h"
MPI_Comm_size((struct ompi_communicator_t * )((void * )(&(ompi_mpi_comm_world))), &(nprocs));
# 35 "/home/ymlusr/local/var/yml/DefaultExecutionCatalog/generators/XMP/include/real.xmptype.h"
if(myrank == (0)) {
# 36 "/home/ymlusr/local/var/yml/DefaultExecutionCatalog/generators/XMP/include/real.xmptype.h"
fp = (fopen("data_dir.txt", "r"));
# 37 "/home/ymlusr/local/var/yml/DefaultExecutionCatalog/generators/XMP/include/real.xmptype.h"
fscanf(fp, "%s", dir);
}
# 39 "/home/ymlusr/local/var/yml/DefaultExecutionCatalog/generators/XMP/include/real.xmptype.h"
MPI_Bcast(dir, 256, (struct ompi_datatype_t * )((void * )(&(ompi_mpi_char))), 0, (struct ompi_communicator_t * )((void * )(&(ompi_mpi_comm_world))));
}
# 41 "/home/ymlusr/local/var/yml/DefaultExecutionCatalog/generators/XMP/include/real.xmptype.h"
sprintf(path, "%s%s\0", dir, filename);
# 43 "/home/ymlusr/local/var/yml/DefaultExecutionCatalog/generators/XMP/include/real.xmptype.h"
ack = (MPI_File_open((struct ompi_communicator_t * )((void * )(&(ompi_mpi_comm_world))), path, 2, (struct ompi_info_t * )((void * )(&(ompi_mpi_info_null))), &(fh)));
# 44 "/home/ymlusr/local/var/yml/DefaultExecutionCatalog/generators/XMP/include/real.xmptype.h"
if(ack != (42)) {
# 45 "/home/ymlusr/local/var/yml/DefaultExecutionCatalog/generators/XMP/include/real.xmptype.h"
MPI_File_read_all(fh, param, 1, (struct ompi_datatype_t * )((void * )(&(ompi_mpi_double))), &(status));
# 46 "/home/ymlusr/local/var/yml/DefaultExecutionCatalog/generators/XMP/include/real.xmptype.h"
MPI_File_close(&(fh));
# 47 "/home/ymlusr/local/var/yml/DefaultExecutionCatalog/generators/XMP/include/real.xmptype.h"
return 1;
}
# 50 "/home/ymlusr/local/var/yml/DefaultExecutionCatalog/generators/XMP/include/real.xmptype.h"
MPI_File_close(&(fh));
# 51 "/home/ymlusr/local/var/yml/DefaultExecutionCatalog/generators/XMP/include/real.xmptype.h"
return 0;
}
# 54 "/home/ymlusr/local/var/yml/DefaultExecutionCatalog/generators/XMP/include/real.xmptype.h"
static _Bool real_export(double * param, char * filename)
{
# 56 "/home/ymlusr/local/var/yml/DefaultExecutionCatalog/generators/XMP/include/real.xmptype.h"
int ack;
# 57 "/home/ymlusr/local/var/yml/DefaultExecutionCatalog/generators/XMP/include/real.xmptype.h"
char path[256];
# 58 "/home/ymlusr/local/var/yml/DefaultExecutionCatalog/generators/XMP/include/real.xmptype.h"
struct _IO_FILE * fp;
# 59 "/home/ymlusr/local/var/yml/DefaultExecutionCatalog/generators/XMP/include/real.xmptype.h"
struct ompi_file_t * fh;
# 60 "/home/ymlusr/local/var/yml/DefaultExecutionCatalog/generators/XMP/include/real.xmptype.h"
struct ompi_status_public_t status;
# 62 "/home/ymlusr/local/var/yml/DefaultExecutionCatalog/generators/XMP/include/real.xmptype.h"
static int myrank = -(1);
# 62 "/home/ymlusr/local/var/yml/DefaultExecutionCatalog/generators/XMP/include/real.xmptype.h"
static int nprocs;
# 63 "/home/ymlusr/local/var/yml/DefaultExecutionCatalog/generators/XMP/include/real.xmptype.h"
static char dir[256];
# 65 "/home/ymlusr/local/var/yml/DefaultExecutionCatalog/generators/XMP/include/real.xmptype.h"
if(myrank == (-(1))) {
# 66 "/home/ymlusr/local/var/yml/DefaultExecutionCatalog/generators/XMP/include/real.xmptype.h"
MPI_Comm_rank((struct ompi_communicator_t * )((void * )(&(ompi_mpi_comm_world))), &(myrank));
# 67 "/home/ymlusr/local/var/yml/DefaultExecutionCatalog/generators/XMP/include/real.xmptype.h"
MPI_Comm_size((struct ompi_communicator_t * )((void * )(&(ompi_mpi_comm_world))), &(nprocs));
# 70 "/home/ymlusr/local/var/yml/DefaultExecutionCatalog/generators/XMP/include/real.xmptype.h"
if(myrank == (0)) {
# 71 "/home/ymlusr/local/var/yml/DefaultExecutionCatalog/generators/XMP/include/real.xmptype.h"
fp = (fopen("data_dir.txt", "r"));
# 72 "/home/ymlusr/local/var/yml/DefaultExecutionCatalog/generators/XMP/include/real.xmptype.h"
fscanf(fp, "%s", dir);
}
# 74 "/home/ymlusr/local/var/yml/DefaultExecutionCatalog/generators/XMP/include/real.xmptype.h"
MPI_Bcast(dir, 256, (struct ompi_datatype_t * )((void * )(&(ompi_mpi_char))), 0, (struct ompi_communicator_t * )((void * )(&(ompi_mpi_comm_world))));
}
# 76 "/home/ymlusr/local/var/yml/DefaultExecutionCatalog/generators/XMP/include/real.xmptype.h"
sprintf(path, "%s%s\0", dir, filename);
# 78 "/home/ymlusr/local/var/yml/DefaultExecutionCatalog/generators/XMP/include/real.xmptype.h"
ack = (MPI_File_open((struct ompi_communicator_t * )((void * )(&(ompi_mpi_comm_world))), path, (4) | (1), (struct ompi_info_t * )((void * )(&(ompi_mpi_info_null))), &(fh)));
# 81 "/home/ymlusr/local/var/yml/DefaultExecutionCatalog/generators/XMP/include/real.xmptype.h"
if(ack != (42)) {
# 82 "/home/ymlusr/local/var/yml/DefaultExecutionCatalog/generators/XMP/include/real.xmptype.h"
MPI_File_write_all(fh, param, 1, (struct ompi_datatype_t * )((void * )(&(ompi_mpi_double))), &(status));
# 83 "/home/ymlusr/local/var/yml/DefaultExecutionCatalog/generators/XMP/include/real.xmptype.h"
MPI_File_close(&(fh));
# 85 "/home/ymlusr/local/var/yml/DefaultExecutionCatalog/generators/XMP/include/real.xmptype.h"
if(myrank == (0)) {
# 86 "/home/ymlusr/local/var/yml/DefaultExecutionCatalog/generators/XMP/include/real.xmptype.h"
fp = (fopen("output.txt", "a"));
# 87 "/home/ymlusr/local/var/yml/DefaultExecutionCatalog/generators/XMP/include/real.xmptype.h"
fprintf(fp, "0,%s\n", path);
# 88 "/home/ymlusr/local/var/yml/DefaultExecutionCatalog/generators/XMP/include/real.xmptype.h"
fclose(fp);
}
# 90 "/home/ymlusr/local/var/yml/DefaultExecutionCatalog/generators/XMP/include/real.xmptype.h"
return 1;
}
# 93 "/home/ymlusr/local/var/yml/DefaultExecutionCatalog/generators/XMP/include/real.xmptype.h"
MPI_File_close(&(fh));
# 95 "/home/ymlusr/local/var/yml/DefaultExecutionCatalog/generators/XMP/include/real.xmptype.h"
return 0;
}
# 14 "/home/ymlusr/local/var/yml/dr/binaries/erreur.c"
/* ignored Xcode.XMP_PRAGMA */
# 16 "/home/ymlusr/local/var/yml/dr/binaries/erreur.c"
/* ignored Xcode.XMP_PRAGMA */
# 17 "/home/ymlusr/local/var/yml/dr/binaries/erreur.c"
/* ignored Xcode.XMP_PRAGMA */
/* array 'A' is removed by XcalableMP align directive */
# 20 "/home/ymlusr/local/var/yml/dr/binaries/erreur.c"
/* ignored Xcode.XMP_PRAGMA */
/* array 'vec' is removed by XcalableMP align directive */
# 23 "/home/ymlusr/local/var/yml/dr/binaries/erreur.c"
/* ignored Xcode.XMP_PRAGMA */
/* array 'res' is removed by XcalableMP align directive */
# 26 "/home/ymlusr/local/var/yml/dr/binaries/erreur.c"
/* ignored Xcode.XMP_PRAGMA */
/* array 'Id' is removed by XcalableMP align directive */
# 33 "/home/ymlusr/local/var/yml/dr/binaries/erreur.c"
/* ignored Xcode.XMP_PRAGMA */
/* array 'M' is removed by XcalableMP align directive */
# 35 "/home/ymlusr/local/var/yml/dr/binaries/erreur.c"
/* ignored Xcode.XMP_PRAGMA */
/* array 'tmp1' is removed by XcalableMP align directive */
# 37 "/home/ymlusr/local/var/yml/dr/binaries/erreur.c"
/* ignored Xcode.XMP_PRAGMA */
/* array 'tmp2' is removed by XcalableMP align directive */
# 40 "/home/ymlusr/local/var/yml/dr/binaries/erreur.c"
/* ignored Xcode.XMP_PRAGMA */
/* array 'erreur' is removed by XcalableMP align directive */
# 42 "/home/ymlusr/local/var/yml/dr/binaries/erreur.c"
/* ignored Xcode.XMP_PRAGMA */
# 47 "/home/ymlusr/local/var/yml/dr/binaries/erreur.c"
int main_erreur(int argc, char * * argv)
{
# 49 "/home/ymlusr/local/var/yml/dr/binaries/erreur.c"
double err;
{
# 52 "/home/ymlusr/local/var/yml/dr/binaries/erreur.c"
extern double * _XMP_ADDR_A;
# 53 "/home/ymlusr/local/var/yml/dr/binaries/erreur.c"
type_import((void * )(_XMP_ADDR_A), *(argv + (1)), Matrix_MPI_Type, Matrix_import, "6,6;1,2;1,1;[i][j]:(j,i)");
{
# 54 "/home/ymlusr/local/var/yml/dr/binaries/erreur.c"
extern double * _XMP_ADDR_vec;
# 55 "/home/ymlusr/local/var/yml/dr/binaries/erreur.c"
type_import((void * )(_XMP_ADDR_vec), *(argv + (2)), Matrix_MPI_Type, Matrix_import, "6,6;1,2;1,1;[i][j]:(j,i)");
{
# 56 "/home/ymlusr/local/var/yml/dr/binaries/erreur.c"
extern double * _XMP_ADDR_res;
# 57 "/home/ymlusr/local/var/yml/dr/binaries/erreur.c"
type_import((void * )(_XMP_ADDR_res), *(argv + (3)), Matrix_MPI_Type, Matrix_import, "4,6;1,2;1,1;[*][j]:(j,*)");
}
}
}
{
extern double gettimeofday_sec();
# 61 "/home/ymlusr/local/var/yml/dr/binaries/erreur.c"
extern double _xmp_etime_body;
# 62 "/home/ymlusr/local/var/yml/dr/binaries/erreur.c"
double _xmp_t0;
# 63 "/home/ymlusr/local/var/yml/dr/binaries/erreur.c"
MPI_Barrier((struct ompi_communicator_t * )((void * )(&(ompi_mpi_comm_world))));
# 64 "/home/ymlusr/local/var/yml/dr/binaries/erreur.c"
_xmp_t0 = (gettimeofday_sec());
{
# 67 "/home/ymlusr/local/var/yml/dr/binaries/erreur.c"
int n = 6;
# 67 "/home/ymlusr/local/var/yml/dr/binaries/erreur.c"
int m = 3;
# 67 "/home/ymlusr/local/var/yml/dr/binaries/erreur.c"
int r = 1;
# 68 "/home/ymlusr/local/var/yml/dr/binaries/erreur.c"
double sum = 0;
{
int _XMP_loop_init_i;
int _XMP_loop_cond_i;
int _XMP_loop_step_i;
int _XMP_loop_init_j;
int _XMP_loop_cond_j;
int _XMP_loop_step_j;
# 72 "/home/ymlusr/local/var/yml/dr/binaries/erreur.c"
int i;
_XMP_sched_loop_template_BLOCK(0, n, 1, &(_XMP_loop_init_i), &(_XMP_loop_cond_i), &(_XMP_loop_step_i), _XMP_DESC_t, 1);
_XMP_sched_loop_template_BLOCK(0, n, 1, &(_XMP_loop_init_j), &(_XMP_loop_cond_j), &(_XMP_loop_step_j), _XMP_DESC_t, 0);
# 72 "/home/ymlusr/local/var/yml/dr/binaries/erreur.c"
for(i = _XMP_loop_init_i; i < _XMP_loop_cond_i; i += _XMP_loop_step_i) {
{
{
# 73 "/home/ymlusr/local/var/yml/dr/binaries/erreur.c"
int j;
# 73 "/home/ymlusr/local/var/yml/dr/binaries/erreur.c"
for(j = _XMP_loop_init_j; j < _XMP_loop_cond_j; j += _XMP_loop_step_j) {
{
# 74 "/home/ymlusr/local/var/yml/dr/binaries/erreur.c"
(*(_XMP_M_GET_ADDR_E_2(_XMP_ADDR_Id, i, j, _XMP_GTOL_acc_Id_0))) = (0);
# 75 "/home/ymlusr/local/var/yml/dr/binaries/erreur.c"
if((_XMP_M_LTOG_TEMPLATE_BLOCK(i, 0, 6, 2, _XMP_NODES_RANK__XMP_default_nodes_1)) == (_XMP_M_LTOG_TEMPLATE_BLOCK(j, 0, 6, 1, _XMP_NODES_RANK__XMP_default_nodes_0))) {
# 75 "/home/ymlusr/local/var/yml/dr/binaries/erreur.c"
(*(_XMP_M_GET_ADDR_E_2(_XMP_ADDR_Id, i, j, _XMP_GTOL_acc_Id_0))) = (1);
}
}
}
}
}
}
}
{
# 81 "/home/ymlusr/local/var/yml/dr/binaries/erreur.c"
int k;
# 81 "/home/ymlusr/local/var/yml/dr/binaries/erreur.c"
for(k = (0); k < m; k++) {
{
void * gmv0;
void * gmv1;
{
xmpc_gmv_g_alloc(&(gmv0), _XMP_DESC_tmp2);
xmpc_gmv_g_dim_info(gmv0, 0, 2, 0, 0x000000006ll, 1);
xmpc_gmv_g_alloc(&(gmv1), _XMP_DESC_vec);
xmpc_gmv_g_dim_info(gmv1, 0, 2, 0, 0x000000006ll, 1);
xmpc_gmv_g_dim_info(gmv1, 1, 1, k, 0, 0);
xmpc_gmv_do(gmv0, gmv1, 400);
xmpc_gmv_dealloc(gmv0);
xmpc_gmv_dealloc(gmv1);
}
{
int _XMP_loop_init_i;
int _XMP_loop_cond_i;
int _XMP_loop_step_i;
int _XMP_loop_init_j;
int _XMP_loop_cond_j;
int _XMP_loop_step_j;
# 86 "/home/ymlusr/local/var/yml/dr/binaries/erreur.c"
int i;
_XMP_sched_loop_template_BLOCK(0, n, 1, &(_XMP_loop_init_i), &(_XMP_loop_cond_i), &(_XMP_loop_step_i), _XMP_DESC_t, 1);
_XMP_sched_loop_template_BLOCK(0, n, 1, &(_XMP_loop_init_j), &(_XMP_loop_cond_j), &(_XMP_loop_step_j), _XMP_DESC_t, 0);
# 86 "/home/ymlusr/local/var/yml/dr/binaries/erreur.c"
for(i = _XMP_loop_init_i; i < _XMP_loop_cond_i; i += _XMP_loop_step_i) {
{
{
# 87 "/home/ymlusr/local/var/yml/dr/binaries/erreur.c"
int j;
# 87 "/home/ymlusr/local/var/yml/dr/binaries/erreur.c"
for(j = _XMP_loop_init_j; j < _XMP_loop_cond_j; j += _XMP_loop_step_j) {
{
# 88 "/home/ymlusr/local/var/yml/dr/binaries/erreur.c"
(*(_XMP_M_GET_ADDR_E_2(_XMP_ADDR_M, i, j, _XMP_GTOL_acc_M_0))) = ((*(_XMP_M_GET_ADDR_E_2(_XMP_ADDR_A, i, j, _XMP_GTOL_acc_A_0))) - ((*(_XMP_M_GET_ADDR_E_2(_XMP_ADDR_res, 0, k, _XMP_GTOL_acc_res_0))) * (*(_XMP_M_GET_ADDR_E_2(_XMP_ADDR_Id, i, j, _XMP_GTOL_acc_Id_0)))));
}
}
}
}
}
}
{
int _XMP_loop_init_i;
int _XMP_loop_cond_i;
int _XMP_loop_step_i;
int _XMP_loop_init_j;
int _XMP_loop_cond_j;
int _XMP_loop_step_j;
# 91 "/home/ymlusr/local/var/yml/dr/binaries/erreur.c"
int i;
_XMP_sched_loop_template_BLOCK(0, n, 1, &(_XMP_loop_init_i), &(_XMP_loop_cond_i), &(_XMP_loop_step_i), _XMP_DESC_t, 1);
_XMP_sched_loop_template_BLOCK(0, n, 1, &(_XMP_loop_init_j), &(_XMP_loop_cond_j), &(_XMP_loop_step_j), _XMP_DESC_t, 0);
if((_XMP_get_execution_nodes_rank()) != (0)) sum = (0);
# 91 "/home/ymlusr/local/var/yml/dr/binaries/erreur.c"
for(i = _XMP_loop_init_i; i < _XMP_loop_cond_i; i += _XMP_loop_step_i) {
{
{
# 92 "/home/ymlusr/local/var/yml/dr/binaries/erreur.c"
int j;
# 92 "/home/ymlusr/local/var/yml/dr/binaries/erreur.c"
for(j = _XMP_loop_init_j; j < _XMP_loop_cond_j; j += _XMP_loop_step_j) {
{
# 93 "/home/ymlusr/local/var/yml/dr/binaries/erreur.c"
sum = (sum + ((*(_XMP_M_GET_ADDR_E_2(_XMP_ADDR_M, i, j, _XMP_GTOL_acc_M_0))) * (*(_XMP_M_GET_ADDR_E_1(_XMP_ADDR_tmp2, j)))));
}
}
}
# 96 "/home/ymlusr/local/var/yml/dr/binaries/erreur.c"
(*(_XMP_M_GET_ADDR_E_1(_XMP_ADDR_tmp1, i))) = sum;
# 97 "/home/ymlusr/local/var/yml/dr/binaries/erreur.c"
sum = (0.0);
}
}
_XMP_reduce_CLAUSE(&(sum), 0x000000001ll, 514, 300);
}
# 99 "/home/ymlusr/local/var/yml/dr/binaries/erreur.c"
sum = (0.0);
{
int _XMP_loop_init_i;
int _XMP_loop_cond_i;
int _XMP_loop_step_i;
# 101 "/home/ymlusr/local/var/yml/dr/binaries/erreur.c"
int i;
_XMP_sched_loop_template_BLOCK(0, n, 1, &(_XMP_loop_init_i), &(_XMP_loop_cond_i), &(_XMP_loop_step_i), _XMP_DESC_t, 1);
if((_XMP_get_execution_nodes_rank()) != (0)) sum = (0);
# 101 "/home/ymlusr/local/var/yml/dr/binaries/erreur.c"
for(i = _XMP_loop_init_i; i < _XMP_loop_cond_i; i += _XMP_loop_step_i) {
{
# 102 "/home/ymlusr/local/var/yml/dr/binaries/erreur.c"
sum = (sum + ((*(_XMP_M_GET_ADDR_E_1(_XMP_ADDR_tmp1, i))) * (*(_XMP_M_GET_ADDR_E_1(_XMP_ADDR_tmp1, i)))));
}
}
if(_XMP_init_reduce_comm_TEMPLATE(_XMP_DESC_t, (int)(1), (int)(0))) {
_XMP_reduce_CLAUSE(&(sum), 0x000000001ll, 514, 300);
_XMP_pop_n_free_nodes();
}
}
# 106 "/home/ymlusr/local/var/yml/dr/binaries/erreur.c"
(*(_XMP_M_GET_ADDR_E_1(_XMP_ADDR_erreur, _XMP_M_CALC_INDEX_BLOCK(k, _XMP_GTOL_temp0_erreur_0)))) = (sqrt(sum));
# 107 "/home/ymlusr/local/var/yml/dr/binaries/erreur.c"
sum = (0.0);
}
}
}
{
void * _XMP_TASK_desc2 = (void * )(0);
if(_XMP_exec_task_NODES_PART(&(_XMP_TASK_desc2), _XMP_DESC__XMP_default_nodes, (int)(0), (int)(1), (int)(1), (int)(1), (int)(0), (int)(1), (int)(1), (int)(1))) {
{
# 112 "/home/ymlusr/local/var/yml/dr/binaries/erreur.c"
int i;
# 112 "/home/ymlusr/local/var/yml/dr/binaries/erreur.c"
for(i = (0); i < m; i++) {
{
# 112 "/home/ymlusr/local/var/yml/dr/binaries/erreur.c"
printf("%f\t", *(_XMP_M_GET_ADDR_E_1(_XMP_ADDR_erreur, _XMP_M_CALC_INDEX_BLOCK(i, _XMP_GTOL_temp0_erreur_0))));
}
}
}
# 113 "/home/ymlusr/local/var/yml/dr/binaries/erreur.c"
printf("\n");
_XMP_pop_nodes();
}
_XMP_exec_task_NODES_FINALIZE(_XMP_TASK_desc2);
}
{
# 116 "/home/ymlusr/local/var/yml/dr/binaries/erreur.c"
double norme_A = 0.0;
{
int _XMP_loop_init_i;
int _XMP_loop_cond_i;
int _XMP_loop_step_i;
int _XMP_loop_init_j;
int _XMP_loop_cond_j;
int _XMP_loop_step_j;
# 118 "/home/ymlusr/local/var/yml/dr/binaries/erreur.c"
int i;
_XMP_sched_loop_template_BLOCK(0, n, 1, &(_XMP_loop_init_i), &(_XMP_loop_cond_i), &(_XMP_loop_step_i), _XMP_DESC_t, 1);
_XMP_sched_loop_template_BLOCK(0, n, 1, &(_XMP_loop_init_j), &(_XMP_loop_cond_j), &(_XMP_loop_step_j), _XMP_DESC_t, 0);
if((_XMP_get_execution_nodes_rank()) != (0)) norme_A = (0);
# 118 "/home/ymlusr/local/var/yml/dr/binaries/erreur.c"
for(i = _XMP_loop_init_i; i < _XMP_loop_cond_i; i += _XMP_loop_step_i) {
{
{
# 119 "/home/ymlusr/local/var/yml/dr/binaries/erreur.c"
int j;
# 119 "/home/ymlusr/local/var/yml/dr/binaries/erreur.c"
for(j = _XMP_loop_init_j; j < _XMP_loop_cond_j; j += _XMP_loop_step_j) {
{
# 120 "/home/ymlusr/local/var/yml/dr/binaries/erreur.c"
norme_A = (norme_A + ((*(_XMP_M_GET_ADDR_E_2(_XMP_ADDR_A, i, j, _XMP_GTOL_acc_A_0))) * (*(_XMP_M_GET_ADDR_E_2(_XMP_ADDR_A, i, j, _XMP_GTOL_acc_A_0)))));
}
}
}
}
}
_XMP_reduce_CLAUSE(&(norme_A), 0x000000001ll, 514, 300);
}
# 122 "/home/ymlusr/local/var/yml/dr/binaries/erreur.c"
norme_A = (sqrt(norme_A));
{
# 123 "/home/ymlusr/local/var/yml/dr/binaries/erreur.c"
int i;
# 123 "/home/ymlusr/local/var/yml/dr/binaries/erreur.c"
for(i = (0); i < m; i++) {
{
# 124 "/home/ymlusr/local/var/yml/dr/binaries/erreur.c"
(*(_XMP_M_GET_ADDR_E_1(_XMP_ADDR_erreur, _XMP_M_CALC_INDEX_BLOCK(i, _XMP_GTOL_temp0_erreur_0)))) = ((*(_XMP_M_GET_ADDR_E_1(_XMP_ADDR_erreur, _XMP_M_CALC_INDEX_BLOCK(i, _XMP_GTOL_temp0_erreur_0)))) / norme_A);
}
}
}
{
void * _XMP_TASK_desc3 = (void * )(0);
if(_XMP_exec_task_NODES_PART(&(_XMP_TASK_desc3), _XMP_DESC__XMP_default_nodes, (int)(0), (int)(1), (int)(1), (int)(1), (int)(0), (int)(1), (int)(1), (int)(1))) {
{
# 129 "/home/ymlusr/local/var/yml/dr/binaries/erreur.c"
int i;
# 129 "/home/ymlusr/local/var/yml/dr/binaries/erreur.c"
for(i = (0); i < m; i++) {
{
# 129 "/home/ymlusr/local/var/yml/dr/binaries/erreur.c"
printf("%f\t", *(_XMP_M_GET_ADDR_E_1(_XMP_ADDR_erreur, _XMP_M_CALC_INDEX_BLOCK(i, _XMP_GTOL_temp0_erreur_0))));
}
}
}
# 130 "/home/ymlusr/local/var/yml/dr/binaries/erreur.c"
printf("\n norme: %f\n", norme_A);
# 131 "/home/ymlusr/local/var/yml/dr/binaries/erreur.c"
printf("\n");
_XMP_pop_nodes();
}
_XMP_exec_task_NODES_FINALIZE(_XMP_TASK_desc3);
}
{
# 133 "/home/ymlusr/local/var/yml/dr/binaries/erreur.c"
int PMAX;
# 133 "/home/ymlusr/local/var/yml/dr/binaries/erreur.c"
double aide;
{
# 134 "/home/ymlusr/local/var/yml/dr/binaries/erreur.c"
int i;
# 134 "/home/ymlusr/local/var/yml/dr/binaries/erreur.c"
for(i = (0); i < (m - (1)); i++) {
{
# 136 "/home/ymlusr/local/var/yml/dr/binaries/erreur.c"
PMAX = i;
{
# 137 "/home/ymlusr/local/var/yml/dr/binaries/erreur.c"
int j;
# 137 "/home/ymlusr/local/var/yml/dr/binaries/erreur.c"
for(j = (i + (1)); j < m; j++) {
{
# 138 "/home/ymlusr/local/var/yml/dr/binaries/erreur.c"
if((fabs(*(_XMP_M_GET_ADDR_E_1(_XMP_ADDR_erreur, _XMP_M_CALC_INDEX_BLOCK(j, _XMP_GTOL_temp0_erreur_0))))) > (fabs(*(_XMP_M_GET_ADDR_E_1(_XMP_ADDR_erreur, _XMP_M_CALC_INDEX_BLOCK(PMAX, _XMP_GTOL_temp0_erreur_0)))))) {
# 138 "/home/ymlusr/local/var/yml/dr/binaries/erreur.c"
PMAX = j;
}
}
}
}
# 140 "/home/ymlusr/local/var/yml/dr/binaries/erreur.c"
aide = (*(_XMP_M_GET_ADDR_E_1(_XMP_ADDR_erreur, _XMP_M_CALC_INDEX_BLOCK(i, _XMP_GTOL_temp0_erreur_0))));
# 141 "/home/ymlusr/local/var/yml/dr/binaries/erreur.c"
(*(_XMP_M_GET_ADDR_E_1(_XMP_ADDR_erreur, _XMP_M_CALC_INDEX_BLOCK(i, _XMP_GTOL_temp0_erreur_0)))) = (*(_XMP_M_GET_ADDR_E_1(_XMP_ADDR_erreur, _XMP_M_CALC_INDEX_BLOCK(PMAX, _XMP_GTOL_temp0_erreur_0))));
# 142 "/home/ymlusr/local/var/yml/dr/binaries/erreur.c"
(*(_XMP_M_GET_ADDR_E_1(_XMP_ADDR_erreur, _XMP_M_CALC_INDEX_BLOCK(PMAX, _XMP_GTOL_temp0_erreur_0)))) = aide;
}
}
}
{
void * _XMP_TASK_desc4 = (void * )(0);
if(_XMP_exec_task_NODES_PART(&(_XMP_TASK_desc4), _XMP_DESC__XMP_default_nodes, (int)(0), (int)(1), (int)(1), (int)(1), (int)(0), (int)(1), (int)(1), (int)(1))) {
{
# 147 "/home/ymlusr/local/var/yml/dr/binaries/erreur.c"
int i;
# 147 "/home/ymlusr/local/var/yml/dr/binaries/erreur.c"
for(i = (0); i < m; i++) {
{
# 147 "/home/ymlusr/local/var/yml/dr/binaries/erreur.c"
printf("%f\t", *(_XMP_M_GET_ADDR_E_1(_XMP_ADDR_erreur, _XMP_M_CALC_INDEX_BLOCK(i, _XMP_GTOL_temp0_erreur_0))));
}
}
}
# 149 "/home/ymlusr/local/var/yml/dr/binaries/erreur.c"
printf("\n");
_XMP_pop_nodes();
}
_XMP_exec_task_NODES_FINALIZE(_XMP_TASK_desc4);
}
# 151 "/home/ymlusr/local/var/yml/dr/binaries/erreur.c"
aide = (0);
{
# 152 "/home/ymlusr/local/var/yml/dr/binaries/erreur.c"
int i;
# 152 "/home/ymlusr/local/var/yml/dr/binaries/erreur.c"
for(i = (0); i < r; i++) {
{
# 152 "/home/ymlusr/local/var/yml/dr/binaries/erreur.c"
aide += (*(_XMP_M_GET_ADDR_E_1(_XMP_ADDR_erreur, _XMP_M_CALC_INDEX_BLOCK(i, _XMP_GTOL_temp0_erreur_0))));
}
}
}
{
void * _XMP_TASK_desc5 = (void * )(0);
if(_XMP_exec_task_NODES_PART(&(_XMP_TASK_desc5), _XMP_DESC__XMP_default_nodes, (int)(0), (int)(1), (int)(1), (int)(1), (int)(0), (int)(1), (int)(1), (int)(1))) {
# 155 "/home/ymlusr/local/var/yml/dr/binaries/erreur.c"
printf("\n ERR: %f\n", aide);
_XMP_pop_nodes();
}
_XMP_exec_task_NODES_FINALIZE(_XMP_TASK_desc5);
}
# 158 "/home/ymlusr/local/var/yml/dr/binaries/erreur.c"
err = aide;
# 159 "/home/ymlusr/local/var/yml/dr/binaries/erreur.c"
if(err < (pow(10, -(5)))) {
# 159 "/home/ymlusr/local/var/yml/dr/binaries/erreur.c"
exit(-(1));
}
# 162 "/home/ymlusr/local/var/yml/dr/binaries/erreur.c"
MPI_Barrier((struct ompi_communicator_t * )((void * )(&(ompi_mpi_comm_world))));
# 163 "/home/ymlusr/local/var/yml/dr/binaries/erreur.c"
_xmp_etime_body = ((gettimeofday_sec()) - _xmp_t0);
}
}
}
}
{
# 167 "/home/ymlusr/local/var/yml/dr/binaries/erreur.c"
real_export(&(err), *(argv + (4)));
}
# 170 "/home/ymlusr/local/var/yml/dr/binaries/erreur.c"
return 0;
}
extern void xmpc_traverse_init_file__2f_home_2f_ymlusr_2f_local_2f_var_2f_yml_2f_dr_2f_binaries_2f_erreur_pp()
{
_XMP_init_nodes_STATIC_GLOBAL(&(_XMP_DESC__XMP_default_nodes), 2, (int)(1), (int)(2), (int * )(&(_XMP_NODES_RANK__XMP_default_nodes_0)), (int * )(&(_XMP_NODES_RANK__XMP_default_nodes_1)));
_XMP_init_template_FIXED(&(_XMP_DESC_t), 2, (long long)(0), (long long)(5), (long long)(0), (long long)(5));
_XMP_init_template_chunk(_XMP_DESC_t, _XMP_DESC__XMP_default_nodes);
_XMP_dist_template_BLOCK(_XMP_DESC_t, 0, 0);
_XMP_dist_template_BLOCK(_XMP_DESC_t, 1, 1);
_XMP_init_array_desc(&(_XMP_DESC_A), _XMP_DESC_t, 2, 514, sizeof(double), (int)(0x000000006ll), (int)(0x000000006ll));
_XMP_align_array_BLOCK(_XMP_DESC_A, 0, 1, 0, &(_XMP_GTOL_temp0_A_0));
_XMP_align_array_BLOCK(_XMP_DESC_A, 1, 0, 0, &(_XMP_GTOL_temp0_A_1));
_XMP_init_array_comm(_XMP_DESC_A, 0, 0);
_XMP_init_array_nodes(_XMP_DESC_A);
_XMP_init_array_desc(&(_XMP_DESC_vec), _XMP_DESC_t, 2, 514, sizeof(double), (int)(0x000000006ll), (int)(0x000000006ll));
_XMP_align_array_BLOCK(_XMP_DESC_vec, 0, 1, 0, &(_XMP_GTOL_temp0_vec_0));
_XMP_align_array_BLOCK(_XMP_DESC_vec, 1, 0, 0, &(_XMP_GTOL_temp0_vec_1));
_XMP_init_array_comm(_XMP_DESC_vec, 0, 0);
_XMP_init_array_nodes(_XMP_DESC_vec);
_XMP_init_array_desc(&(_XMP_DESC_res), _XMP_DESC_t, 2, 514, sizeof(double), (int)(0x000000004ll), (int)(0x000000006ll));
_XMP_align_array_NOT_ALIGNED(_XMP_DESC_res, 0);
_XMP_align_array_BLOCK(_XMP_DESC_res, 1, 0, 0, &(_XMP_GTOL_temp0_res_1));
_XMP_init_array_comm(_XMP_DESC_res, 0, 1);
_XMP_init_array_nodes(_XMP_DESC_res);
_XMP_init_array_desc(&(_XMP_DESC_Id), _XMP_DESC_t, 2, 514, sizeof(double), (int)(0x000000006ll), (int)(0x000000006ll));
_XMP_align_array_BLOCK(_XMP_DESC_Id, 0, 1, 0, &(_XMP_GTOL_temp0_Id_0));
_XMP_align_array_BLOCK(_XMP_DESC_Id, 1, 0, 0, &(_XMP_GTOL_temp0_Id_1));
_XMP_init_array_comm(_XMP_DESC_Id, 0, 0);
_XMP_init_array_nodes(_XMP_DESC_Id);
_XMP_init_array_desc(&(_XMP_DESC_M), _XMP_DESC_t, 2, 514, sizeof(double), (int)(0x000000006ll), (int)(0x000000006ll));
_XMP_align_array_BLOCK(_XMP_DESC_M, 0, 1, 0, &(_XMP_GTOL_temp0_M_0));
_XMP_align_array_BLOCK(_XMP_DESC_M, 1, 0, 0, &(_XMP_GTOL_temp0_M_1));
_XMP_init_array_comm(_XMP_DESC_M, 0, 0);
_XMP_init_array_nodes(_XMP_DESC_M);
_XMP_init_array_desc(&(_XMP_DESC_tmp1), _XMP_DESC_t, 1, 514, sizeof(double), (int)(0x000000006ll));
_XMP_align_array_BLOCK(_XMP_DESC_tmp1, 0, 1, 0, &(_XMP_GTOL_temp0_tmp1_0));
_XMP_init_array_comm(_XMP_DESC_tmp1, 1, 0);
_XMP_init_array_nodes(_XMP_DESC_tmp1);
_XMP_init_array_desc(&(_XMP_DESC_tmp2), _XMP_DESC_t, 1, 514, sizeof(double), (int)(0x000000006ll));
_XMP_align_array_BLOCK(_XMP_DESC_tmp2, 0, 0, 0, &(_XMP_GTOL_temp0_tmp2_0));
_XMP_init_array_comm(_XMP_DESC_tmp2, 0, 1);
_XMP_init_array_nodes(_XMP_DESC_tmp2);
_XMP_init_array_desc(&(_XMP_DESC_erreur), _XMP_DESC_t, 1, 514, sizeof(double), (int)(0x000000006ll));
_XMP_align_array_BLOCK(_XMP_DESC_erreur, 0, 0, 0, &(_XMP_GTOL_temp0_erreur_0));
_XMP_init_array_comm(_XMP_DESC_erreur, 0, 1);
_XMP_init_array_nodes(_XMP_DESC_erreur);
_XMP_alloc_array((void * * )(&(_XMP_ADDR_A)), _XMP_DESC_A, 1, (unsigned long long * )(&(_XMP_GTOL_acc_A_1)), (unsigned long long * )(&(_XMP_GTOL_acc_A_0)));
_XMP_alloc_array((void * * )(&(_XMP_ADDR_vec)), _XMP_DESC_vec, 1, (unsigned long long * )(&(_XMP_GTOL_acc_vec_1)), (unsigned long long * )(&(_XMP_GTOL_acc_vec_0)));
_XMP_alloc_array((void * * )(&(_XMP_ADDR_res)), _XMP_DESC_res, 1, (unsigned long long * )(&(_XMP_GTOL_acc_res_1)), (unsigned long long * )(&(_XMP_GTOL_acc_res_0)));
_XMP_alloc_array((void * * )(&(_XMP_ADDR_Id)), _XMP_DESC_Id, 1, (unsigned long long * )(&(_XMP_GTOL_acc_Id_1)), (unsigned long long * )(&(_XMP_GTOL_acc_Id_0)));
_XMP_alloc_array((void * * )(&(_XMP_ADDR_M)), _XMP_DESC_M, 1, (unsigned long long * )(&(_XMP_GTOL_acc_M_1)), (unsigned long long * )(&(_XMP_GTOL_acc_M_0)));
_XMP_alloc_array((void * * )(&(_XMP_ADDR_tmp1)), _XMP_DESC_tmp1, 1, (unsigned long long * )(&(_XMP_GTOL_acc_tmp1_0)));
_XMP_alloc_array((void * * )(&(_XMP_ADDR_tmp2)), _XMP_DESC_tmp2, 1, (unsigned long long * )(&(_XMP_GTOL_acc_tmp2_0)));
_XMP_alloc_array((void * * )(&(_XMP_ADDR_erreur)), _XMP_DESC_erreur, 1, (unsigned long long * )(&(_XMP_GTOL_acc_erreur_0)));
}
extern void xmpc_traverse_finalize_file__2f_home_2f_ymlusr_2f_local_2f_var_2f_yml_2f_dr_2f_binaries_2f_erreur_pp()
{
}
