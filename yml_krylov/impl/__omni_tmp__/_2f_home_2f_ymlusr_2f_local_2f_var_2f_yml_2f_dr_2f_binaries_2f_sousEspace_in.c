/*
 * Original Source  : __omni_tmp__/_2f_home_2f_ymlusr_2f_local_2f_var_2f_yml_2f_dr_2f_binaries_2f_sousEspace_pp.c
 * Language         : C
 * Compiled Time    : 2020-08-17 16:22:39
 * Compiler Info    : XcodeML/C-FrontEnd
 * Compiler Version : 1.1.0
 */
# 1 "__omni_tmp__/_2f_home_2f_ymlusr_2f_local_2f_var_2f_yml_2f_dr_2f_binaries_2f_sousEspace_pp.c"
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
typedef double XMP_vector;
typedef double * vector;
typedef double XMP_Matrix;
typedef double * Matrix;
typedef int (* LAPACK_S_SELECT2)(float const * , float const * );
typedef int (* LAPACK_S_SELECT3)(float const * , float const * , float const * );
typedef int (* LAPACK_D_SELECT2)(double const * , double const * );
typedef int (* LAPACK_D_SELECT3)(double const * , double const * , double const * );
typedef int (* LAPACK_C_SELECT1)(float _Complex const * );
typedef int (* LAPACK_C_SELECT2)(float _Complex const * , float _Complex const * );
typedef int (* LAPACK_Z_SELECT1)(double _Complex const * );
typedef int (* LAPACK_Z_SELECT2)(double _Complex const * , double _Complex const * );
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
double * _XMP_ADDR_c;
static void * _XMP_DESC_c;
static unsigned long long _XMP_GTOL_acc_c_0;
static int _XMP_GTOL_temp0_c_0;
double * _XMP_ADDR_res;
static void * _XMP_DESC_res;
static unsigned long long _XMP_GTOL_acc_res_0;
static unsigned long long _XMP_GTOL_acc_res_1;
static int _XMP_GTOL_temp0_res_1;
extern void xmpc_traverse_init_file__2f_home_2f_ymlusr_2f_local_2f_var_2f_yml_2f_dr_2f_binaries_2f_sousEspace_pp();
extern void xmpc_traverse_finalize_file__2f_home_2f_ymlusr_2f_local_2f_var_2f_yml_2f_dr_2f_binaries_2f_sousEspace_pp();
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
# 22 "/home/ymlusr/local/var/yml/DefaultExecutionCatalog/generators/XMP/include/vector.xmptype.h"
static struct ompi_datatype_t * vector_MPI_Type()
{
# 25 "/home/ymlusr/local/var/yml/DefaultExecutionCatalog/generators/XMP/include/vector.xmptype.h"
return (struct ompi_datatype_t * )((void * )(&(ompi_mpi_double)));
}
# 30 "/home/ymlusr/local/var/yml/DefaultExecutionCatalog/generators/XMP/include/vector.xmptype.h"
static _Bool vector_import(double * param, char * filename, struct ompi_datatype_t * const motif, int const size)
{
# 32 "/home/ymlusr/local/var/yml/DefaultExecutionCatalog/generators/XMP/include/vector.xmptype.h"
int ack;
# 33 "/home/ymlusr/local/var/yml/DefaultExecutionCatalog/generators/XMP/include/vector.xmptype.h"
struct ompi_file_t * fh;
# 34 "/home/ymlusr/local/var/yml/DefaultExecutionCatalog/generators/XMP/include/vector.xmptype.h"
struct ompi_status_public_t status;
# 37 "/home/ymlusr/local/var/yml/DefaultExecutionCatalog/generators/XMP/include/vector.xmptype.h"
ack = (MPI_File_open((struct ompi_communicator_t * )((void * )(&(ompi_mpi_comm_world))), filename, 2, (struct ompi_info_t * )((void * )(&(ompi_mpi_info_null))), &(fh)));
# 39 "/home/ymlusr/local/var/yml/DefaultExecutionCatalog/generators/XMP/include/vector.xmptype.h"
if(ack != (42)) {
# 41 "/home/ymlusr/local/var/yml/DefaultExecutionCatalog/generators/XMP/include/vector.xmptype.h"
MPI_File_set_view(fh, 0, (struct ompi_datatype_t * )((void * )(&(ompi_mpi_double))), motif, "native", (struct ompi_info_t * )((void * )(&(ompi_mpi_info_null))));
# 42 "/home/ymlusr/local/var/yml/DefaultExecutionCatalog/generators/XMP/include/vector.xmptype.h"
MPI_File_read_all(fh, param, size, (struct ompi_datatype_t * )((void * )(&(ompi_mpi_double))), &(status));
# 43 "/home/ymlusr/local/var/yml/DefaultExecutionCatalog/generators/XMP/include/vector.xmptype.h"
MPI_File_close(&(fh));
# 44 "/home/ymlusr/local/var/yml/DefaultExecutionCatalog/generators/XMP/include/vector.xmptype.h"
return 1;
}
# 47 "/home/ymlusr/local/var/yml/DefaultExecutionCatalog/generators/XMP/include/vector.xmptype.h"
MPI_File_close(&(fh));
# 48 "/home/ymlusr/local/var/yml/DefaultExecutionCatalog/generators/XMP/include/vector.xmptype.h"
return 0;
}
# 51 "/home/ymlusr/local/var/yml/DefaultExecutionCatalog/generators/XMP/include/vector.xmptype.h"
static _Bool vector_export(double * const param, char * filename, struct ompi_datatype_t * const motif, int const size, struct ompi_communicator_t * Communicator)
{
# 53 "/home/ymlusr/local/var/yml/DefaultExecutionCatalog/generators/XMP/include/vector.xmptype.h"
int ack;
# 54 "/home/ymlusr/local/var/yml/DefaultExecutionCatalog/generators/XMP/include/vector.xmptype.h"
struct ompi_file_t * fh;
# 55 "/home/ymlusr/local/var/yml/DefaultExecutionCatalog/generators/XMP/include/vector.xmptype.h"
struct ompi_status_public_t status;
# 57 "/home/ymlusr/local/var/yml/DefaultExecutionCatalog/generators/XMP/include/vector.xmptype.h"
ack = (MPI_File_open(Communicator, filename, (4) | (1), (struct ompi_info_t * )((void * )(&(ompi_mpi_info_null))), &(fh)));
# 59 "/home/ymlusr/local/var/yml/DefaultExecutionCatalog/generators/XMP/include/vector.xmptype.h"
if(ack != (42)) {
# 61 "/home/ymlusr/local/var/yml/DefaultExecutionCatalog/generators/XMP/include/vector.xmptype.h"
MPI_File_set_view(fh, 0, (struct ompi_datatype_t * )((void * )(&(ompi_mpi_double))), motif, "native", (struct ompi_info_t * )((void * )(&(ompi_mpi_info_null))));
# 62 "/home/ymlusr/local/var/yml/DefaultExecutionCatalog/generators/XMP/include/vector.xmptype.h"
MPI_File_write_all(fh, param, size, (struct ompi_datatype_t * )((void * )(&(ompi_mpi_double))), &(status));
# 63 "/home/ymlusr/local/var/yml/DefaultExecutionCatalog/generators/XMP/include/vector.xmptype.h"
MPI_File_close(&(fh));
# 64 "/home/ymlusr/local/var/yml/DefaultExecutionCatalog/generators/XMP/include/vector.xmptype.h"
return 1;
}
# 67 "/home/ymlusr/local/var/yml/DefaultExecutionCatalog/generators/XMP/include/vector.xmptype.h"
MPI_File_close(&(fh));
# 68 "/home/ymlusr/local/var/yml/DefaultExecutionCatalog/generators/XMP/include/vector.xmptype.h"
return 0;
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
# 12 "/home/ymlusr/local/var/yml/dr/binaries/sousEspace.c"
/* ignored Xcode.XMP_PRAGMA */
# 14 "/home/ymlusr/local/var/yml/dr/binaries/sousEspace.c"
/* ignored Xcode.XMP_PRAGMA */
# 15 "/home/ymlusr/local/var/yml/dr/binaries/sousEspace.c"
/* ignored Xcode.XMP_PRAGMA */
/* array 'c' is removed by XcalableMP align directive */
# 18 "/home/ymlusr/local/var/yml/dr/binaries/sousEspace.c"
/* ignored Xcode.XMP_PRAGMA */
/* array 'res' is removed by XcalableMP align directive */
# 21 "/home/ymlusr/local/var/yml/dr/binaries/sousEspace.c"
/* ignored Xcode.XMP_PRAGMA */
extern __attribute__((nothrow, leaf)) double _Complex cacos(double _Complex __z);
extern __attribute__((nothrow, leaf)) double _Complex __cacos(double _Complex __z);
extern __attribute__((nothrow, leaf)) double _Complex casin(double _Complex __z);
extern __attribute__((nothrow, leaf)) double _Complex __casin(double _Complex __z);
extern __attribute__((nothrow, leaf)) double _Complex catan(double _Complex __z);
extern __attribute__((nothrow, leaf)) double _Complex __catan(double _Complex __z);
extern __attribute__((nothrow, leaf)) double _Complex ccos(double _Complex __z);
extern __attribute__((nothrow, leaf)) double _Complex __ccos(double _Complex __z);
extern __attribute__((nothrow, leaf)) double _Complex csin(double _Complex __z);
extern __attribute__((nothrow, leaf)) double _Complex __csin(double _Complex __z);
extern __attribute__((nothrow, leaf)) double _Complex ctan(double _Complex __z);
extern __attribute__((nothrow, leaf)) double _Complex __ctan(double _Complex __z);
extern __attribute__((nothrow, leaf)) double _Complex cacosh(double _Complex __z);
extern __attribute__((nothrow, leaf)) double _Complex __cacosh(double _Complex __z);
extern __attribute__((nothrow, leaf)) double _Complex casinh(double _Complex __z);
extern __attribute__((nothrow, leaf)) double _Complex __casinh(double _Complex __z);
extern __attribute__((nothrow, leaf)) double _Complex catanh(double _Complex __z);
extern __attribute__((nothrow, leaf)) double _Complex __catanh(double _Complex __z);
extern __attribute__((nothrow, leaf)) double _Complex ccosh(double _Complex __z);
extern __attribute__((nothrow, leaf)) double _Complex __ccosh(double _Complex __z);
extern __attribute__((nothrow, leaf)) double _Complex csinh(double _Complex __z);
extern __attribute__((nothrow, leaf)) double _Complex __csinh(double _Complex __z);
extern __attribute__((nothrow, leaf)) double _Complex ctanh(double _Complex __z);
extern __attribute__((nothrow, leaf)) double _Complex __ctanh(double _Complex __z);
extern __attribute__((nothrow, leaf)) double _Complex cexp(double _Complex __z);
extern __attribute__((nothrow, leaf)) double _Complex __cexp(double _Complex __z);
extern __attribute__((nothrow, leaf)) double _Complex clog(double _Complex __z);
extern __attribute__((nothrow, leaf)) double _Complex __clog(double _Complex __z);
extern __attribute__((nothrow, leaf)) double _Complex cpow(double _Complex __x, double _Complex __y);
extern __attribute__((nothrow, leaf)) double _Complex __cpow(double _Complex __x, double _Complex __y);
extern __attribute__((nothrow, leaf)) double _Complex csqrt(double _Complex __z);
extern __attribute__((nothrow, leaf)) double _Complex __csqrt(double _Complex __z);
extern __attribute__((nothrow, leaf)) double cabs(double _Complex __z);
extern __attribute__((nothrow, leaf)) double __cabs(double _Complex __z);
extern __attribute__((nothrow, leaf)) double carg(double _Complex __z);
extern __attribute__((nothrow, leaf)) double __carg(double _Complex __z);
extern __attribute__((nothrow, leaf)) double _Complex conj(double _Complex __z);
extern __attribute__((nothrow, leaf)) double _Complex __conj(double _Complex __z);
extern __attribute__((nothrow, leaf)) double _Complex cproj(double _Complex __z);
extern __attribute__((nothrow, leaf)) double _Complex __cproj(double _Complex __z);
extern __attribute__((nothrow, leaf)) double cimag(double _Complex __z);
extern __attribute__((nothrow, leaf)) double __cimag(double _Complex __z);
extern __attribute__((nothrow, leaf)) double creal(double _Complex __z);
extern __attribute__((nothrow, leaf)) double __creal(double _Complex __z);
extern __attribute__((nothrow, leaf)) float _Complex cacosf(float _Complex __z);
extern __attribute__((nothrow, leaf)) float _Complex __cacosf(float _Complex __z);
extern __attribute__((nothrow, leaf)) float _Complex casinf(float _Complex __z);
extern __attribute__((nothrow, leaf)) float _Complex __casinf(float _Complex __z);
extern __attribute__((nothrow, leaf)) float _Complex catanf(float _Complex __z);
extern __attribute__((nothrow, leaf)) float _Complex __catanf(float _Complex __z);
extern __attribute__((nothrow, leaf)) float _Complex ccosf(float _Complex __z);
extern __attribute__((nothrow, leaf)) float _Complex __ccosf(float _Complex __z);
extern __attribute__((nothrow, leaf)) float _Complex csinf(float _Complex __z);
extern __attribute__((nothrow, leaf)) float _Complex __csinf(float _Complex __z);
extern __attribute__((nothrow, leaf)) float _Complex ctanf(float _Complex __z);
extern __attribute__((nothrow, leaf)) float _Complex __ctanf(float _Complex __z);
extern __attribute__((nothrow, leaf)) float _Complex cacoshf(float _Complex __z);
extern __attribute__((nothrow, leaf)) float _Complex __cacoshf(float _Complex __z);
extern __attribute__((nothrow, leaf)) float _Complex casinhf(float _Complex __z);
extern __attribute__((nothrow, leaf)) float _Complex __casinhf(float _Complex __z);
extern __attribute__((nothrow, leaf)) float _Complex catanhf(float _Complex __z);
extern __attribute__((nothrow, leaf)) float _Complex __catanhf(float _Complex __z);
extern __attribute__((nothrow, leaf)) float _Complex ccoshf(float _Complex __z);
extern __attribute__((nothrow, leaf)) float _Complex __ccoshf(float _Complex __z);
extern __attribute__((nothrow, leaf)) float _Complex csinhf(float _Complex __z);
extern __attribute__((nothrow, leaf)) float _Complex __csinhf(float _Complex __z);
extern __attribute__((nothrow, leaf)) float _Complex ctanhf(float _Complex __z);
extern __attribute__((nothrow, leaf)) float _Complex __ctanhf(float _Complex __z);
extern __attribute__((nothrow, leaf)) float _Complex cexpf(float _Complex __z);
extern __attribute__((nothrow, leaf)) float _Complex __cexpf(float _Complex __z);
extern __attribute__((nothrow, leaf)) float _Complex clogf(float _Complex __z);
extern __attribute__((nothrow, leaf)) float _Complex __clogf(float _Complex __z);
extern __attribute__((nothrow, leaf)) float _Complex cpowf(float _Complex __x, float _Complex __y);
extern __attribute__((nothrow, leaf)) float _Complex __cpowf(float _Complex __x, float _Complex __y);
extern __attribute__((nothrow, leaf)) float _Complex csqrtf(float _Complex __z);
extern __attribute__((nothrow, leaf)) float _Complex __csqrtf(float _Complex __z);
extern __attribute__((nothrow, leaf)) float cabsf(float _Complex __z);
extern __attribute__((nothrow, leaf)) float __cabsf(float _Complex __z);
extern __attribute__((nothrow, leaf)) float cargf(float _Complex __z);
extern __attribute__((nothrow, leaf)) float __cargf(float _Complex __z);
extern __attribute__((nothrow, leaf)) float _Complex conjf(float _Complex __z);
extern __attribute__((nothrow, leaf)) float _Complex __conjf(float _Complex __z);
extern __attribute__((nothrow, leaf)) float _Complex cprojf(float _Complex __z);
extern __attribute__((nothrow, leaf)) float _Complex __cprojf(float _Complex __z);
extern __attribute__((nothrow, leaf)) float cimagf(float _Complex __z);
extern __attribute__((nothrow, leaf)) float __cimagf(float _Complex __z);
extern __attribute__((nothrow, leaf)) float crealf(float _Complex __z);
extern __attribute__((nothrow, leaf)) float __crealf(float _Complex __z);
extern __attribute__((nothrow, leaf)) long double _Complex cacosl(long double _Complex __z);
extern __attribute__((nothrow, leaf)) long double _Complex __cacosl(long double _Complex __z);
extern __attribute__((nothrow, leaf)) long double _Complex casinl(long double _Complex __z);
extern __attribute__((nothrow, leaf)) long double _Complex __casinl(long double _Complex __z);
extern __attribute__((nothrow, leaf)) long double _Complex catanl(long double _Complex __z);
extern __attribute__((nothrow, leaf)) long double _Complex __catanl(long double _Complex __z);
extern __attribute__((nothrow, leaf)) long double _Complex ccosl(long double _Complex __z);
extern __attribute__((nothrow, leaf)) long double _Complex __ccosl(long double _Complex __z);
extern __attribute__((nothrow, leaf)) long double _Complex csinl(long double _Complex __z);
extern __attribute__((nothrow, leaf)) long double _Complex __csinl(long double _Complex __z);
extern __attribute__((nothrow, leaf)) long double _Complex ctanl(long double _Complex __z);
extern __attribute__((nothrow, leaf)) long double _Complex __ctanl(long double _Complex __z);
extern __attribute__((nothrow, leaf)) long double _Complex cacoshl(long double _Complex __z);
extern __attribute__((nothrow, leaf)) long double _Complex __cacoshl(long double _Complex __z);
extern __attribute__((nothrow, leaf)) long double _Complex casinhl(long double _Complex __z);
extern __attribute__((nothrow, leaf)) long double _Complex __casinhl(long double _Complex __z);
extern __attribute__((nothrow, leaf)) long double _Complex catanhl(long double _Complex __z);
extern __attribute__((nothrow, leaf)) long double _Complex __catanhl(long double _Complex __z);
extern __attribute__((nothrow, leaf)) long double _Complex ccoshl(long double _Complex __z);
extern __attribute__((nothrow, leaf)) long double _Complex __ccoshl(long double _Complex __z);
extern __attribute__((nothrow, leaf)) long double _Complex csinhl(long double _Complex __z);
extern __attribute__((nothrow, leaf)) long double _Complex __csinhl(long double _Complex __z);
extern __attribute__((nothrow, leaf)) long double _Complex ctanhl(long double _Complex __z);
extern __attribute__((nothrow, leaf)) long double _Complex __ctanhl(long double _Complex __z);
extern __attribute__((nothrow, leaf)) long double _Complex cexpl(long double _Complex __z);
extern __attribute__((nothrow, leaf)) long double _Complex __cexpl(long double _Complex __z);
extern __attribute__((nothrow, leaf)) long double _Complex clogl(long double _Complex __z);
extern __attribute__((nothrow, leaf)) long double _Complex __clogl(long double _Complex __z);
extern __attribute__((nothrow, leaf)) long double _Complex cpowl(long double _Complex __x, long double _Complex __y);
extern __attribute__((nothrow, leaf)) long double _Complex __cpowl(long double _Complex __x, long double _Complex __y);
extern __attribute__((nothrow, leaf)) long double _Complex csqrtl(long double _Complex __z);
extern __attribute__((nothrow, leaf)) long double _Complex __csqrtl(long double _Complex __z);
extern __attribute__((nothrow, leaf)) long double cabsl(long double _Complex __z);
extern __attribute__((nothrow, leaf)) long double __cabsl(long double _Complex __z);
extern __attribute__((nothrow, leaf)) long double cargl(long double _Complex __z);
extern __attribute__((nothrow, leaf)) long double __cargl(long double _Complex __z);
extern __attribute__((nothrow, leaf)) long double _Complex conjl(long double _Complex __z);
extern __attribute__((nothrow, leaf)) long double _Complex __conjl(long double _Complex __z);
extern __attribute__((nothrow, leaf)) long double _Complex cprojl(long double _Complex __z);
extern __attribute__((nothrow, leaf)) long double _Complex __cprojl(long double _Complex __z);
extern __attribute__((nothrow, leaf)) long double cimagl(long double _Complex __z);
extern __attribute__((nothrow, leaf)) long double __cimagl(long double _Complex __z);
extern __attribute__((nothrow, leaf)) long double creall(long double _Complex __z);
extern __attribute__((nothrow, leaf)) long double __creall(long double _Complex __z);
float _Complex lapack_make_complex_float(float re, float im);
double _Complex lapack_make_complex_double(double re, double im);
int lsame_(char * ca, char * cb, int lca, int lcb);
int LAPACKE_sbdsdc(int matrix_order, char uplo, char compq, int n, float * d, float * e, float * u, int ldu, float * vt, int ldvt, float * q, int * iq);
int LAPACKE_dbdsdc(int matrix_order, char uplo, char compq, int n, double * d, double * e, double * u, int ldu, double * vt, int ldvt, double * q, int * iq);
int LAPACKE_sbdsqr(int matrix_order, char uplo, int n, int ncvt, int nru, int ncc, float * d, float * e, float * vt, int ldvt, float * u, int ldu, float * c, int ldc);
int LAPACKE_dbdsqr(int matrix_order, char uplo, int n, int ncvt, int nru, int ncc, double * d, double * e, double * vt, int ldvt, double * u, int ldu, double * c, int ldc);
int LAPACKE_cbdsqr(int matrix_order, char uplo, int n, int ncvt, int nru, int ncc, float * d, float * e, float _Complex * vt, int ldvt, float _Complex * u, int ldu, float _Complex * c, int ldc);
int LAPACKE_zbdsqr(int matrix_order, char uplo, int n, int ncvt, int nru, int ncc, double * d, double * e, double _Complex * vt, int ldvt, double _Complex * u, int ldu, double _Complex * c, int ldc);
int LAPACKE_sdisna(char job, int m, int n, float const * d, float * sep);
int LAPACKE_ddisna(char job, int m, int n, double const * d, double * sep);
int LAPACKE_sgbbrd(int matrix_order, char vect, int m, int n, int ncc, int kl, int ku, float * ab, int ldab, float * d, float * e, float * q, int ldq, float * pt, int ldpt, float * c, int ldc);
int LAPACKE_dgbbrd(int matrix_order, char vect, int m, int n, int ncc, int kl, int ku, double * ab, int ldab, double * d, double * e, double * q, int ldq, double * pt, int ldpt, double * c, int ldc);
int LAPACKE_cgbbrd(int matrix_order, char vect, int m, int n, int ncc, int kl, int ku, float _Complex * ab, int ldab, float * d, float * e, float _Complex * q, int ldq, float _Complex * pt, int ldpt, float _Complex * c, int ldc);
int LAPACKE_zgbbrd(int matrix_order, char vect, int m, int n, int ncc, int kl, int ku, double _Complex * ab, int ldab, double * d, double * e, double _Complex * q, int ldq, double _Complex * pt, int ldpt, double _Complex * c, int ldc);
int LAPACKE_sgbcon(int matrix_order, char norm, int n, int kl, int ku, float const * ab, int ldab, int const * ipiv, float anorm, float * rcond);
int LAPACKE_dgbcon(int matrix_order, char norm, int n, int kl, int ku, double const * ab, int ldab, int const * ipiv, double anorm, double * rcond);
int LAPACKE_cgbcon(int matrix_order, char norm, int n, int kl, int ku, float _Complex const * ab, int ldab, int const * ipiv, float anorm, float * rcond);
int LAPACKE_zgbcon(int matrix_order, char norm, int n, int kl, int ku, double _Complex const * ab, int ldab, int const * ipiv, double anorm, double * rcond);
int LAPACKE_sgbequ(int matrix_order, int m, int n, int kl, int ku, float const * ab, int ldab, float * r, float * c, float * rowcnd, float * colcnd, float * amax);
int LAPACKE_dgbequ(int matrix_order, int m, int n, int kl, int ku, double const * ab, int ldab, double * r, double * c, double * rowcnd, double * colcnd, double * amax);
int LAPACKE_cgbequ(int matrix_order, int m, int n, int kl, int ku, float _Complex const * ab, int ldab, float * r, float * c, float * rowcnd, float * colcnd, float * amax);
int LAPACKE_zgbequ(int matrix_order, int m, int n, int kl, int ku, double _Complex const * ab, int ldab, double * r, double * c, double * rowcnd, double * colcnd, double * amax);
int LAPACKE_sgbequb(int matrix_order, int m, int n, int kl, int ku, float const * ab, int ldab, float * r, float * c, float * rowcnd, float * colcnd, float * amax);
int LAPACKE_dgbequb(int matrix_order, int m, int n, int kl, int ku, double const * ab, int ldab, double * r, double * c, double * rowcnd, double * colcnd, double * amax);
int LAPACKE_cgbequb(int matrix_order, int m, int n, int kl, int ku, float _Complex const * ab, int ldab, float * r, float * c, float * rowcnd, float * colcnd, float * amax);
int LAPACKE_zgbequb(int matrix_order, int m, int n, int kl, int ku, double _Complex const * ab, int ldab, double * r, double * c, double * rowcnd, double * colcnd, double * amax);
int LAPACKE_sgbrfs(int matrix_order, char trans, int n, int kl, int ku, int nrhs, float const * ab, int ldab, float const * afb, int ldafb, int const * ipiv, float const * b, int ldb, float * x, int ldx, float * ferr, float * berr);
int LAPACKE_dgbrfs(int matrix_order, char trans, int n, int kl, int ku, int nrhs, double const * ab, int ldab, double const * afb, int ldafb, int const * ipiv, double const * b, int ldb, double * x, int ldx, double * ferr, double * berr);
int LAPACKE_cgbrfs(int matrix_order, char trans, int n, int kl, int ku, int nrhs, float _Complex const * ab, int ldab, float _Complex const * afb, int ldafb, int const * ipiv, float _Complex const * b, int ldb, float _Complex * x, int ldx, float * ferr, float * berr);
int LAPACKE_zgbrfs(int matrix_order, char trans, int n, int kl, int ku, int nrhs, double _Complex const * ab, int ldab, double _Complex const * afb, int ldafb, int const * ipiv, double _Complex const * b, int ldb, double _Complex * x, int ldx, double * ferr, double * berr);
int LAPACKE_sgbrfsx(int matrix_order, char trans, char equed, int n, int kl, int ku, int nrhs, float const * ab, int ldab, float const * afb, int ldafb, int const * ipiv, float const * r, float const * c, float const * b, int ldb, float * x, int ldx, float * rcond, float * berr, int n_err_bnds, float * err_bnds_norm, float * err_bnds_comp, int nparams, float * params);
int LAPACKE_dgbrfsx(int matrix_order, char trans, char equed, int n, int kl, int ku, int nrhs, double const * ab, int ldab, double const * afb, int ldafb, int const * ipiv, double const * r, double const * c, double const * b, int ldb, double * x, int ldx, double * rcond, double * berr, int n_err_bnds, double * err_bnds_norm, double * err_bnds_comp, int nparams, double * params);
int LAPACKE_cgbrfsx(int matrix_order, char trans, char equed, int n, int kl, int ku, int nrhs, float _Complex const * ab, int ldab, float _Complex const * afb, int ldafb, int const * ipiv, float const * r, float const * c, float _Complex const * b, int ldb, float _Complex * x, int ldx, float * rcond, float * berr, int n_err_bnds, float * err_bnds_norm, float * err_bnds_comp, int nparams, float * params);
int LAPACKE_zgbrfsx(int matrix_order, char trans, char equed, int n, int kl, int ku, int nrhs, double _Complex const * ab, int ldab, double _Complex const * afb, int ldafb, int const * ipiv, double const * r, double const * c, double _Complex const * b, int ldb, double _Complex * x, int ldx, double * rcond, double * berr, int n_err_bnds, double * err_bnds_norm, double * err_bnds_comp, int nparams, double * params);
int LAPACKE_sgbsv(int matrix_order, int n, int kl, int ku, int nrhs, float * ab, int ldab, int * ipiv, float * b, int ldb);
int LAPACKE_dgbsv(int matrix_order, int n, int kl, int ku, int nrhs, double * ab, int ldab, int * ipiv, double * b, int ldb);
int LAPACKE_cgbsv(int matrix_order, int n, int kl, int ku, int nrhs, float _Complex * ab, int ldab, int * ipiv, float _Complex * b, int ldb);
int LAPACKE_zgbsv(int matrix_order, int n, int kl, int ku, int nrhs, double _Complex * ab, int ldab, int * ipiv, double _Complex * b, int ldb);
int LAPACKE_sgbsvx(int matrix_order, char fact, char trans, int n, int kl, int ku, int nrhs, float * ab, int ldab, float * afb, int ldafb, int * ipiv, char * equed, float * r, float * c, float * b, int ldb, float * x, int ldx, float * rcond, float * ferr, float * berr, float * rpivot);
int LAPACKE_dgbsvx(int matrix_order, char fact, char trans, int n, int kl, int ku, int nrhs, double * ab, int ldab, double * afb, int ldafb, int * ipiv, char * equed, double * r, double * c, double * b, int ldb, double * x, int ldx, double * rcond, double * ferr, double * berr, double * rpivot);
int LAPACKE_cgbsvx(int matrix_order, char fact, char trans, int n, int kl, int ku, int nrhs, float _Complex * ab, int ldab, float _Complex * afb, int ldafb, int * ipiv, char * equed, float * r, float * c, float _Complex * b, int ldb, float _Complex * x, int ldx, float * rcond, float * ferr, float * berr, float * rpivot);
int LAPACKE_zgbsvx(int matrix_order, char fact, char trans, int n, int kl, int ku, int nrhs, double _Complex * ab, int ldab, double _Complex * afb, int ldafb, int * ipiv, char * equed, double * r, double * c, double _Complex * b, int ldb, double _Complex * x, int ldx, double * rcond, double * ferr, double * berr, double * rpivot);
int LAPACKE_sgbsvxx(int matrix_order, char fact, char trans, int n, int kl, int ku, int nrhs, float * ab, int ldab, float * afb, int ldafb, int * ipiv, char * equed, float * r, float * c, float * b, int ldb, float * x, int ldx, float * rcond, float * rpvgrw, float * berr, int n_err_bnds, float * err_bnds_norm, float * err_bnds_comp, int nparams, float * params);
int LAPACKE_dgbsvxx(int matrix_order, char fact, char trans, int n, int kl, int ku, int nrhs, double * ab, int ldab, double * afb, int ldafb, int * ipiv, char * equed, double * r, double * c, double * b, int ldb, double * x, int ldx, double * rcond, double * rpvgrw, double * berr, int n_err_bnds, double * err_bnds_norm, double * err_bnds_comp, int nparams, double * params);
int LAPACKE_cgbsvxx(int matrix_order, char fact, char trans, int n, int kl, int ku, int nrhs, float _Complex * ab, int ldab, float _Complex * afb, int ldafb, int * ipiv, char * equed, float * r, float * c, float _Complex * b, int ldb, float _Complex * x, int ldx, float * rcond, float * rpvgrw, float * berr, int n_err_bnds, float * err_bnds_norm, float * err_bnds_comp, int nparams, float * params);
int LAPACKE_zgbsvxx(int matrix_order, char fact, char trans, int n, int kl, int ku, int nrhs, double _Complex * ab, int ldab, double _Complex * afb, int ldafb, int * ipiv, char * equed, double * r, double * c, double _Complex * b, int ldb, double _Complex * x, int ldx, double * rcond, double * rpvgrw, double * berr, int n_err_bnds, double * err_bnds_norm, double * err_bnds_comp, int nparams, double * params);
int LAPACKE_sgbtrf(int matrix_order, int m, int n, int kl, int ku, float * ab, int ldab, int * ipiv);
int LAPACKE_dgbtrf(int matrix_order, int m, int n, int kl, int ku, double * ab, int ldab, int * ipiv);
int LAPACKE_cgbtrf(int matrix_order, int m, int n, int kl, int ku, float _Complex * ab, int ldab, int * ipiv);
int LAPACKE_zgbtrf(int matrix_order, int m, int n, int kl, int ku, double _Complex * ab, int ldab, int * ipiv);
int LAPACKE_sgbtrs(int matrix_order, char trans, int n, int kl, int ku, int nrhs, float const * ab, int ldab, int const * ipiv, float * b, int ldb);
int LAPACKE_dgbtrs(int matrix_order, char trans, int n, int kl, int ku, int nrhs, double const * ab, int ldab, int const * ipiv, double * b, int ldb);
int LAPACKE_cgbtrs(int matrix_order, char trans, int n, int kl, int ku, int nrhs, float _Complex const * ab, int ldab, int const * ipiv, float _Complex * b, int ldb);
int LAPACKE_zgbtrs(int matrix_order, char trans, int n, int kl, int ku, int nrhs, double _Complex const * ab, int ldab, int const * ipiv, double _Complex * b, int ldb);
int LAPACKE_sgebak(int matrix_order, char job, char side, int n, int ilo, int ihi, float const * scale, int m, float * v, int ldv);
int LAPACKE_dgebak(int matrix_order, char job, char side, int n, int ilo, int ihi, double const * scale, int m, double * v, int ldv);
int LAPACKE_cgebak(int matrix_order, char job, char side, int n, int ilo, int ihi, float const * scale, int m, float _Complex * v, int ldv);
int LAPACKE_zgebak(int matrix_order, char job, char side, int n, int ilo, int ihi, double const * scale, int m, double _Complex * v, int ldv);
int LAPACKE_sgebal(int matrix_order, char job, int n, float * a, int lda, int * ilo, int * ihi, float * scale);
int LAPACKE_dgebal(int matrix_order, char job, int n, double * a, int lda, int * ilo, int * ihi, double * scale);
int LAPACKE_cgebal(int matrix_order, char job, int n, float _Complex * a, int lda, int * ilo, int * ihi, float * scale);
int LAPACKE_zgebal(int matrix_order, char job, int n, double _Complex * a, int lda, int * ilo, int * ihi, double * scale);
int LAPACKE_sgebrd(int matrix_order, int m, int n, float * a, int lda, float * d, float * e, float * tauq, float * taup);
int LAPACKE_dgebrd(int matrix_order, int m, int n, double * a, int lda, double * d, double * e, double * tauq, double * taup);
int LAPACKE_cgebrd(int matrix_order, int m, int n, float _Complex * a, int lda, float * d, float * e, float _Complex * tauq, float _Complex * taup);
int LAPACKE_zgebrd(int matrix_order, int m, int n, double _Complex * a, int lda, double * d, double * e, double _Complex * tauq, double _Complex * taup);
int LAPACKE_sgecon(int matrix_order, char norm, int n, float const * a, int lda, float anorm, float * rcond);
int LAPACKE_dgecon(int matrix_order, char norm, int n, double const * a, int lda, double anorm, double * rcond);
int LAPACKE_cgecon(int matrix_order, char norm, int n, float _Complex const * a, int lda, float anorm, float * rcond);
int LAPACKE_zgecon(int matrix_order, char norm, int n, double _Complex const * a, int lda, double anorm, double * rcond);
int LAPACKE_sgeequ(int matrix_order, int m, int n, float const * a, int lda, float * r, float * c, float * rowcnd, float * colcnd, float * amax);
int LAPACKE_dgeequ(int matrix_order, int m, int n, double const * a, int lda, double * r, double * c, double * rowcnd, double * colcnd, double * amax);
int LAPACKE_cgeequ(int matrix_order, int m, int n, float _Complex const * a, int lda, float * r, float * c, float * rowcnd, float * colcnd, float * amax);
int LAPACKE_zgeequ(int matrix_order, int m, int n, double _Complex const * a, int lda, double * r, double * c, double * rowcnd, double * colcnd, double * amax);
int LAPACKE_sgeequb(int matrix_order, int m, int n, float const * a, int lda, float * r, float * c, float * rowcnd, float * colcnd, float * amax);
int LAPACKE_dgeequb(int matrix_order, int m, int n, double const * a, int lda, double * r, double * c, double * rowcnd, double * colcnd, double * amax);
int LAPACKE_cgeequb(int matrix_order, int m, int n, float _Complex const * a, int lda, float * r, float * c, float * rowcnd, float * colcnd, float * amax);
int LAPACKE_zgeequb(int matrix_order, int m, int n, double _Complex const * a, int lda, double * r, double * c, double * rowcnd, double * colcnd, double * amax);
int LAPACKE_sgees(int matrix_order, char jobvs, char sort, int (* select)(float const * , float const * ), int n, float * a, int lda, int * sdim, float * wr, float * wi, float * vs, int ldvs);
int LAPACKE_dgees(int matrix_order, char jobvs, char sort, int (* select)(double const * , double const * ), int n, double * a, int lda, int * sdim, double * wr, double * wi, double * vs, int ldvs);
int LAPACKE_cgees(int matrix_order, char jobvs, char sort, int (* select)(float _Complex const * ), int n, float _Complex * a, int lda, int * sdim, float _Complex * w, float _Complex * vs, int ldvs);
int LAPACKE_zgees(int matrix_order, char jobvs, char sort, int (* select)(double _Complex const * ), int n, double _Complex * a, int lda, int * sdim, double _Complex * w, double _Complex * vs, int ldvs);
int LAPACKE_sgeesx(int matrix_order, char jobvs, char sort, int (* select)(float const * , float const * ), char sense, int n, float * a, int lda, int * sdim, float * wr, float * wi, float * vs, int ldvs, float * rconde, float * rcondv);
int LAPACKE_dgeesx(int matrix_order, char jobvs, char sort, int (* select)(double const * , double const * ), char sense, int n, double * a, int lda, int * sdim, double * wr, double * wi, double * vs, int ldvs, double * rconde, double * rcondv);
int LAPACKE_cgeesx(int matrix_order, char jobvs, char sort, int (* select)(float _Complex const * ), char sense, int n, float _Complex * a, int lda, int * sdim, float _Complex * w, float _Complex * vs, int ldvs, float * rconde, float * rcondv);
int LAPACKE_zgeesx(int matrix_order, char jobvs, char sort, int (* select)(double _Complex const * ), char sense, int n, double _Complex * a, int lda, int * sdim, double _Complex * w, double _Complex * vs, int ldvs, double * rconde, double * rcondv);
int LAPACKE_sgeev(int matrix_order, char jobvl, char jobvr, int n, float * a, int lda, float * wr, float * wi, float * vl, int ldvl, float * vr, int ldvr);
int LAPACKE_dgeev(int matrix_order, char jobvl, char jobvr, int n, double * a, int lda, double * wr, double * wi, double * vl, int ldvl, double * vr, int ldvr);
int LAPACKE_cgeev(int matrix_order, char jobvl, char jobvr, int n, float _Complex * a, int lda, float _Complex * w, float _Complex * vl, int ldvl, float _Complex * vr, int ldvr);
int LAPACKE_zgeev(int matrix_order, char jobvl, char jobvr, int n, double _Complex * a, int lda, double _Complex * w, double _Complex * vl, int ldvl, double _Complex * vr, int ldvr);
int LAPACKE_sgeevx(int matrix_order, char balanc, char jobvl, char jobvr, char sense, int n, float * a, int lda, float * wr, float * wi, float * vl, int ldvl, float * vr, int ldvr, int * ilo, int * ihi, float * scale, float * abnrm, float * rconde, float * rcondv);
int LAPACKE_dgeevx(int matrix_order, char balanc, char jobvl, char jobvr, char sense, int n, double * a, int lda, double * wr, double * wi, double * vl, int ldvl, double * vr, int ldvr, int * ilo, int * ihi, double * scale, double * abnrm, double * rconde, double * rcondv);
int LAPACKE_cgeevx(int matrix_order, char balanc, char jobvl, char jobvr, char sense, int n, float _Complex * a, int lda, float _Complex * w, float _Complex * vl, int ldvl, float _Complex * vr, int ldvr, int * ilo, int * ihi, float * scale, float * abnrm, float * rconde, float * rcondv);
int LAPACKE_zgeevx(int matrix_order, char balanc, char jobvl, char jobvr, char sense, int n, double _Complex * a, int lda, double _Complex * w, double _Complex * vl, int ldvl, double _Complex * vr, int ldvr, int * ilo, int * ihi, double * scale, double * abnrm, double * rconde, double * rcondv);
int LAPACKE_sgehrd(int matrix_order, int n, int ilo, int ihi, float * a, int lda, float * tau);
int LAPACKE_dgehrd(int matrix_order, int n, int ilo, int ihi, double * a, int lda, double * tau);
int LAPACKE_cgehrd(int matrix_order, int n, int ilo, int ihi, float _Complex * a, int lda, float _Complex * tau);
int LAPACKE_zgehrd(int matrix_order, int n, int ilo, int ihi, double _Complex * a, int lda, double _Complex * tau);
int LAPACKE_sgejsv(int matrix_order, char joba, char jobu, char jobv, char jobr, char jobt, char jobp, int m, int n, float * a, int lda, float * sva, float * u, int ldu, float * v, int ldv, float * stat, int * istat);
int LAPACKE_dgejsv(int matrix_order, char joba, char jobu, char jobv, char jobr, char jobt, char jobp, int m, int n, double * a, int lda, double * sva, double * u, int ldu, double * v, int ldv, double * stat, int * istat);
int LAPACKE_sgelq2(int matrix_order, int m, int n, float * a, int lda, float * tau);
int LAPACKE_dgelq2(int matrix_order, int m, int n, double * a, int lda, double * tau);
int LAPACKE_cgelq2(int matrix_order, int m, int n, float _Complex * a, int lda, float _Complex * tau);
int LAPACKE_zgelq2(int matrix_order, int m, int n, double _Complex * a, int lda, double _Complex * tau);
int LAPACKE_sgelqf(int matrix_order, int m, int n, float * a, int lda, float * tau);
int LAPACKE_dgelqf(int matrix_order, int m, int n, double * a, int lda, double * tau);
int LAPACKE_cgelqf(int matrix_order, int m, int n, float _Complex * a, int lda, float _Complex * tau);
int LAPACKE_zgelqf(int matrix_order, int m, int n, double _Complex * a, int lda, double _Complex * tau);
int LAPACKE_sgels(int matrix_order, char trans, int m, int n, int nrhs, float * a, int lda, float * b, int ldb);
int LAPACKE_dgels(int matrix_order, char trans, int m, int n, int nrhs, double * a, int lda, double * b, int ldb);
int LAPACKE_cgels(int matrix_order, char trans, int m, int n, int nrhs, float _Complex * a, int lda, float _Complex * b, int ldb);
int LAPACKE_zgels(int matrix_order, char trans, int m, int n, int nrhs, double _Complex * a, int lda, double _Complex * b, int ldb);
int LAPACKE_sgelsd(int matrix_order, int m, int n, int nrhs, float * a, int lda, float * b, int ldb, float * s, float rcond, int * rank);
int LAPACKE_dgelsd(int matrix_order, int m, int n, int nrhs, double * a, int lda, double * b, int ldb, double * s, double rcond, int * rank);
int LAPACKE_cgelsd(int matrix_order, int m, int n, int nrhs, float _Complex * a, int lda, float _Complex * b, int ldb, float * s, float rcond, int * rank);
int LAPACKE_zgelsd(int matrix_order, int m, int n, int nrhs, double _Complex * a, int lda, double _Complex * b, int ldb, double * s, double rcond, int * rank);
int LAPACKE_sgelss(int matrix_order, int m, int n, int nrhs, float * a, int lda, float * b, int ldb, float * s, float rcond, int * rank);
int LAPACKE_dgelss(int matrix_order, int m, int n, int nrhs, double * a, int lda, double * b, int ldb, double * s, double rcond, int * rank);
int LAPACKE_cgelss(int matrix_order, int m, int n, int nrhs, float _Complex * a, int lda, float _Complex * b, int ldb, float * s, float rcond, int * rank);
int LAPACKE_zgelss(int matrix_order, int m, int n, int nrhs, double _Complex * a, int lda, double _Complex * b, int ldb, double * s, double rcond, int * rank);
int LAPACKE_sgelsy(int matrix_order, int m, int n, int nrhs, float * a, int lda, float * b, int ldb, int * jpvt, float rcond, int * rank);
int LAPACKE_dgelsy(int matrix_order, int m, int n, int nrhs, double * a, int lda, double * b, int ldb, int * jpvt, double rcond, int * rank);
int LAPACKE_cgelsy(int matrix_order, int m, int n, int nrhs, float _Complex * a, int lda, float _Complex * b, int ldb, int * jpvt, float rcond, int * rank);
int LAPACKE_zgelsy(int matrix_order, int m, int n, int nrhs, double _Complex * a, int lda, double _Complex * b, int ldb, int * jpvt, double rcond, int * rank);
int LAPACKE_sgeqlf(int matrix_order, int m, int n, float * a, int lda, float * tau);
int LAPACKE_dgeqlf(int matrix_order, int m, int n, double * a, int lda, double * tau);
int LAPACKE_cgeqlf(int matrix_order, int m, int n, float _Complex * a, int lda, float _Complex * tau);
int LAPACKE_zgeqlf(int matrix_order, int m, int n, double _Complex * a, int lda, double _Complex * tau);
int LAPACKE_sgeqp3(int matrix_order, int m, int n, float * a, int lda, int * jpvt, float * tau);
int LAPACKE_dgeqp3(int matrix_order, int m, int n, double * a, int lda, int * jpvt, double * tau);
int LAPACKE_cgeqp3(int matrix_order, int m, int n, float _Complex * a, int lda, int * jpvt, float _Complex * tau);
int LAPACKE_zgeqp3(int matrix_order, int m, int n, double _Complex * a, int lda, int * jpvt, double _Complex * tau);
int LAPACKE_sgeqpf(int matrix_order, int m, int n, float * a, int lda, int * jpvt, float * tau);
int LAPACKE_dgeqpf(int matrix_order, int m, int n, double * a, int lda, int * jpvt, double * tau);
int LAPACKE_cgeqpf(int matrix_order, int m, int n, float _Complex * a, int lda, int * jpvt, float _Complex * tau);
int LAPACKE_zgeqpf(int matrix_order, int m, int n, double _Complex * a, int lda, int * jpvt, double _Complex * tau);
int LAPACKE_sgeqr2(int matrix_order, int m, int n, float * a, int lda, float * tau);
int LAPACKE_dgeqr2(int matrix_order, int m, int n, double * a, int lda, double * tau);
int LAPACKE_cgeqr2(int matrix_order, int m, int n, float _Complex * a, int lda, float _Complex * tau);
int LAPACKE_zgeqr2(int matrix_order, int m, int n, double _Complex * a, int lda, double _Complex * tau);
int LAPACKE_sgeqrf(int matrix_order, int m, int n, float * a, int lda, float * tau);
int LAPACKE_dgeqrf(int matrix_order, int m, int n, double * a, int lda, double * tau);
int LAPACKE_cgeqrf(int matrix_order, int m, int n, float _Complex * a, int lda, float _Complex * tau);
int LAPACKE_zgeqrf(int matrix_order, int m, int n, double _Complex * a, int lda, double _Complex * tau);
int LAPACKE_sgeqrfp(int matrix_order, int m, int n, float * a, int lda, float * tau);
int LAPACKE_dgeqrfp(int matrix_order, int m, int n, double * a, int lda, double * tau);
int LAPACKE_cgeqrfp(int matrix_order, int m, int n, float _Complex * a, int lda, float _Complex * tau);
int LAPACKE_zgeqrfp(int matrix_order, int m, int n, double _Complex * a, int lda, double _Complex * tau);
int LAPACKE_sgerfs(int matrix_order, char trans, int n, int nrhs, float const * a, int lda, float const * af, int ldaf, int const * ipiv, float const * b, int ldb, float * x, int ldx, float * ferr, float * berr);
int LAPACKE_dgerfs(int matrix_order, char trans, int n, int nrhs, double const * a, int lda, double const * af, int ldaf, int const * ipiv, double const * b, int ldb, double * x, int ldx, double * ferr, double * berr);
int LAPACKE_cgerfs(int matrix_order, char trans, int n, int nrhs, float _Complex const * a, int lda, float _Complex const * af, int ldaf, int const * ipiv, float _Complex const * b, int ldb, float _Complex * x, int ldx, float * ferr, float * berr);
int LAPACKE_zgerfs(int matrix_order, char trans, int n, int nrhs, double _Complex const * a, int lda, double _Complex const * af, int ldaf, int const * ipiv, double _Complex const * b, int ldb, double _Complex * x, int ldx, double * ferr, double * berr);
int LAPACKE_sgerfsx(int matrix_order, char trans, char equed, int n, int nrhs, float const * a, int lda, float const * af, int ldaf, int const * ipiv, float const * r, float const * c, float const * b, int ldb, float * x, int ldx, float * rcond, float * berr, int n_err_bnds, float * err_bnds_norm, float * err_bnds_comp, int nparams, float * params);
int LAPACKE_dgerfsx(int matrix_order, char trans, char equed, int n, int nrhs, double const * a, int lda, double const * af, int ldaf, int const * ipiv, double const * r, double const * c, double const * b, int ldb, double * x, int ldx, double * rcond, double * berr, int n_err_bnds, double * err_bnds_norm, double * err_bnds_comp, int nparams, double * params);
int LAPACKE_cgerfsx(int matrix_order, char trans, char equed, int n, int nrhs, float _Complex const * a, int lda, float _Complex const * af, int ldaf, int const * ipiv, float const * r, float const * c, float _Complex const * b, int ldb, float _Complex * x, int ldx, float * rcond, float * berr, int n_err_bnds, float * err_bnds_norm, float * err_bnds_comp, int nparams, float * params);
int LAPACKE_zgerfsx(int matrix_order, char trans, char equed, int n, int nrhs, double _Complex const * a, int lda, double _Complex const * af, int ldaf, int const * ipiv, double const * r, double const * c, double _Complex const * b, int ldb, double _Complex * x, int ldx, double * rcond, double * berr, int n_err_bnds, double * err_bnds_norm, double * err_bnds_comp, int nparams, double * params);
int LAPACKE_sgerqf(int matrix_order, int m, int n, float * a, int lda, float * tau);
int LAPACKE_dgerqf(int matrix_order, int m, int n, double * a, int lda, double * tau);
int LAPACKE_cgerqf(int matrix_order, int m, int n, float _Complex * a, int lda, float _Complex * tau);
int LAPACKE_zgerqf(int matrix_order, int m, int n, double _Complex * a, int lda, double _Complex * tau);
int LAPACKE_sgesdd(int matrix_order, char jobz, int m, int n, float * a, int lda, float * s, float * u, int ldu, float * vt, int ldvt);
int LAPACKE_dgesdd(int matrix_order, char jobz, int m, int n, double * a, int lda, double * s, double * u, int ldu, double * vt, int ldvt);
int LAPACKE_cgesdd(int matrix_order, char jobz, int m, int n, float _Complex * a, int lda, float * s, float _Complex * u, int ldu, float _Complex * vt, int ldvt);
int LAPACKE_zgesdd(int matrix_order, char jobz, int m, int n, double _Complex * a, int lda, double * s, double _Complex * u, int ldu, double _Complex * vt, int ldvt);
int LAPACKE_sgesv(int matrix_order, int n, int nrhs, float * a, int lda, int * ipiv, float * b, int ldb);
int LAPACKE_dgesv(int matrix_order, int n, int nrhs, double * a, int lda, int * ipiv, double * b, int ldb);
int LAPACKE_cgesv(int matrix_order, int n, int nrhs, float _Complex * a, int lda, int * ipiv, float _Complex * b, int ldb);
int LAPACKE_zgesv(int matrix_order, int n, int nrhs, double _Complex * a, int lda, int * ipiv, double _Complex * b, int ldb);
int LAPACKE_dsgesv(int matrix_order, int n, int nrhs, double * a, int lda, int * ipiv, double * b, int ldb, double * x, int ldx, int * iter);
int LAPACKE_zcgesv(int matrix_order, int n, int nrhs, double _Complex * a, int lda, int * ipiv, double _Complex * b, int ldb, double _Complex * x, int ldx, int * iter);
int LAPACKE_sgesvd(int matrix_order, char jobu, char jobvt, int m, int n, float * a, int lda, float * s, float * u, int ldu, float * vt, int ldvt, float * superb);
int LAPACKE_dgesvd(int matrix_order, char jobu, char jobvt, int m, int n, double * a, int lda, double * s, double * u, int ldu, double * vt, int ldvt, double * superb);
int LAPACKE_cgesvd(int matrix_order, char jobu, char jobvt, int m, int n, float _Complex * a, int lda, float * s, float _Complex * u, int ldu, float _Complex * vt, int ldvt, float * superb);
int LAPACKE_zgesvd(int matrix_order, char jobu, char jobvt, int m, int n, double _Complex * a, int lda, double * s, double _Complex * u, int ldu, double _Complex * vt, int ldvt, double * superb);
int LAPACKE_sgesvj(int matrix_order, char joba, char jobu, char jobv, int m, int n, float * a, int lda, float * sva, int mv, float * v, int ldv, float * stat);
int LAPACKE_dgesvj(int matrix_order, char joba, char jobu, char jobv, int m, int n, double * a, int lda, double * sva, int mv, double * v, int ldv, double * stat);
int LAPACKE_sgesvx(int matrix_order, char fact, char trans, int n, int nrhs, float * a, int lda, float * af, int ldaf, int * ipiv, char * equed, float * r, float * c, float * b, int ldb, float * x, int ldx, float * rcond, float * ferr, float * berr, float * rpivot);
int LAPACKE_dgesvx(int matrix_order, char fact, char trans, int n, int nrhs, double * a, int lda, double * af, int ldaf, int * ipiv, char * equed, double * r, double * c, double * b, int ldb, double * x, int ldx, double * rcond, double * ferr, double * berr, double * rpivot);
int LAPACKE_cgesvx(int matrix_order, char fact, char trans, int n, int nrhs, float _Complex * a, int lda, float _Complex * af, int ldaf, int * ipiv, char * equed, float * r, float * c, float _Complex * b, int ldb, float _Complex * x, int ldx, float * rcond, float * ferr, float * berr, float * rpivot);
int LAPACKE_zgesvx(int matrix_order, char fact, char trans, int n, int nrhs, double _Complex * a, int lda, double _Complex * af, int ldaf, int * ipiv, char * equed, double * r, double * c, double _Complex * b, int ldb, double _Complex * x, int ldx, double * rcond, double * ferr, double * berr, double * rpivot);
int LAPACKE_sgesvxx(int matrix_order, char fact, char trans, int n, int nrhs, float * a, int lda, float * af, int ldaf, int * ipiv, char * equed, float * r, float * c, float * b, int ldb, float * x, int ldx, float * rcond, float * rpvgrw, float * berr, int n_err_bnds, float * err_bnds_norm, float * err_bnds_comp, int nparams, float * params);
int LAPACKE_dgesvxx(int matrix_order, char fact, char trans, int n, int nrhs, double * a, int lda, double * af, int ldaf, int * ipiv, char * equed, double * r, double * c, double * b, int ldb, double * x, int ldx, double * rcond, double * rpvgrw, double * berr, int n_err_bnds, double * err_bnds_norm, double * err_bnds_comp, int nparams, double * params);
int LAPACKE_cgesvxx(int matrix_order, char fact, char trans, int n, int nrhs, float _Complex * a, int lda, float _Complex * af, int ldaf, int * ipiv, char * equed, float * r, float * c, float _Complex * b, int ldb, float _Complex * x, int ldx, float * rcond, float * rpvgrw, float * berr, int n_err_bnds, float * err_bnds_norm, float * err_bnds_comp, int nparams, float * params);
int LAPACKE_zgesvxx(int matrix_order, char fact, char trans, int n, int nrhs, double _Complex * a, int lda, double _Complex * af, int ldaf, int * ipiv, char * equed, double * r, double * c, double _Complex * b, int ldb, double _Complex * x, int ldx, double * rcond, double * rpvgrw, double * berr, int n_err_bnds, double * err_bnds_norm, double * err_bnds_comp, int nparams, double * params);
int LAPACKE_sgetf2(int matrix_order, int m, int n, float * a, int lda, int * ipiv);
int LAPACKE_dgetf2(int matrix_order, int m, int n, double * a, int lda, int * ipiv);
int LAPACKE_cgetf2(int matrix_order, int m, int n, float _Complex * a, int lda, int * ipiv);
int LAPACKE_zgetf2(int matrix_order, int m, int n, double _Complex * a, int lda, int * ipiv);
int LAPACKE_sgetrf(int matrix_order, int m, int n, float * a, int lda, int * ipiv);
int LAPACKE_dgetrf(int matrix_order, int m, int n, double * a, int lda, int * ipiv);
int LAPACKE_cgetrf(int matrix_order, int m, int n, float _Complex * a, int lda, int * ipiv);
int LAPACKE_zgetrf(int matrix_order, int m, int n, double _Complex * a, int lda, int * ipiv);
int LAPACKE_sgetri(int matrix_order, int n, float * a, int lda, int const * ipiv);
int LAPACKE_dgetri(int matrix_order, int n, double * a, int lda, int const * ipiv);
int LAPACKE_cgetri(int matrix_order, int n, float _Complex * a, int lda, int const * ipiv);
int LAPACKE_zgetri(int matrix_order, int n, double _Complex * a, int lda, int const * ipiv);
int LAPACKE_sgetrs(int matrix_order, char trans, int n, int nrhs, float const * a, int lda, int const * ipiv, float * b, int ldb);
int LAPACKE_dgetrs(int matrix_order, char trans, int n, int nrhs, double const * a, int lda, int const * ipiv, double * b, int ldb);
int LAPACKE_cgetrs(int matrix_order, char trans, int n, int nrhs, float _Complex const * a, int lda, int const * ipiv, float _Complex * b, int ldb);
int LAPACKE_zgetrs(int matrix_order, char trans, int n, int nrhs, double _Complex const * a, int lda, int const * ipiv, double _Complex * b, int ldb);
int LAPACKE_sggbak(int matrix_order, char job, char side, int n, int ilo, int ihi, float const * lscale, float const * rscale, int m, float * v, int ldv);
int LAPACKE_dggbak(int matrix_order, char job, char side, int n, int ilo, int ihi, double const * lscale, double const * rscale, int m, double * v, int ldv);
int LAPACKE_cggbak(int matrix_order, char job, char side, int n, int ilo, int ihi, float const * lscale, float const * rscale, int m, float _Complex * v, int ldv);
int LAPACKE_zggbak(int matrix_order, char job, char side, int n, int ilo, int ihi, double const * lscale, double const * rscale, int m, double _Complex * v, int ldv);
int LAPACKE_sggbal(int matrix_order, char job, int n, float * a, int lda, float * b, int ldb, int * ilo, int * ihi, float * lscale, float * rscale);
int LAPACKE_dggbal(int matrix_order, char job, int n, double * a, int lda, double * b, int ldb, int * ilo, int * ihi, double * lscale, double * rscale);
int LAPACKE_cggbal(int matrix_order, char job, int n, float _Complex * a, int lda, float _Complex * b, int ldb, int * ilo, int * ihi, float * lscale, float * rscale);
int LAPACKE_zggbal(int matrix_order, char job, int n, double _Complex * a, int lda, double _Complex * b, int ldb, int * ilo, int * ihi, double * lscale, double * rscale);
int LAPACKE_sgges(int matrix_order, char jobvsl, char jobvsr, char sort, int (* selctg)(float const * , float const * , float const * ), int n, float * a, int lda, float * b, int ldb, int * sdim, float * alphar, float * alphai, float * beta, float * vsl, int ldvsl, float * vsr, int ldvsr);
int LAPACKE_dgges(int matrix_order, char jobvsl, char jobvsr, char sort, int (* selctg)(double const * , double const * , double const * ), int n, double * a, int lda, double * b, int ldb, int * sdim, double * alphar, double * alphai, double * beta, double * vsl, int ldvsl, double * vsr, int ldvsr);
int LAPACKE_cgges(int matrix_order, char jobvsl, char jobvsr, char sort, int (* selctg)(float _Complex const * , float _Complex const * ), int n, float _Complex * a, int lda, float _Complex * b, int ldb, int * sdim, float _Complex * alpha, float _Complex * beta, float _Complex * vsl, int ldvsl, float _Complex * vsr, int ldvsr);
int LAPACKE_zgges(int matrix_order, char jobvsl, char jobvsr, char sort, int (* selctg)(double _Complex const * , double _Complex const * ), int n, double _Complex * a, int lda, double _Complex * b, int ldb, int * sdim, double _Complex * alpha, double _Complex * beta, double _Complex * vsl, int ldvsl, double _Complex * vsr, int ldvsr);
int LAPACKE_sggesx(int matrix_order, char jobvsl, char jobvsr, char sort, int (* selctg)(float const * , float const * , float const * ), char sense, int n, float * a, int lda, float * b, int ldb, int * sdim, float * alphar, float * alphai, float * beta, float * vsl, int ldvsl, float * vsr, int ldvsr, float * rconde, float * rcondv);
int LAPACKE_dggesx(int matrix_order, char jobvsl, char jobvsr, char sort, int (* selctg)(double const * , double const * , double const * ), char sense, int n, double * a, int lda, double * b, int ldb, int * sdim, double * alphar, double * alphai, double * beta, double * vsl, int ldvsl, double * vsr, int ldvsr, double * rconde, double * rcondv);
int LAPACKE_cggesx(int matrix_order, char jobvsl, char jobvsr, char sort, int (* selctg)(float _Complex const * , float _Complex const * ), char sense, int n, float _Complex * a, int lda, float _Complex * b, int ldb, int * sdim, float _Complex * alpha, float _Complex * beta, float _Complex * vsl, int ldvsl, float _Complex * vsr, int ldvsr, float * rconde, float * rcondv);
int LAPACKE_zggesx(int matrix_order, char jobvsl, char jobvsr, char sort, int (* selctg)(double _Complex const * , double _Complex const * ), char sense, int n, double _Complex * a, int lda, double _Complex * b, int ldb, int * sdim, double _Complex * alpha, double _Complex * beta, double _Complex * vsl, int ldvsl, double _Complex * vsr, int ldvsr, double * rconde, double * rcondv);
int LAPACKE_sggev(int matrix_order, char jobvl, char jobvr, int n, float * a, int lda, float * b, int ldb, float * alphar, float * alphai, float * beta, float * vl, int ldvl, float * vr, int ldvr);
int LAPACKE_dggev(int matrix_order, char jobvl, char jobvr, int n, double * a, int lda, double * b, int ldb, double * alphar, double * alphai, double * beta, double * vl, int ldvl, double * vr, int ldvr);
int LAPACKE_cggev(int matrix_order, char jobvl, char jobvr, int n, float _Complex * a, int lda, float _Complex * b, int ldb, float _Complex * alpha, float _Complex * beta, float _Complex * vl, int ldvl, float _Complex * vr, int ldvr);
int LAPACKE_zggev(int matrix_order, char jobvl, char jobvr, int n, double _Complex * a, int lda, double _Complex * b, int ldb, double _Complex * alpha, double _Complex * beta, double _Complex * vl, int ldvl, double _Complex * vr, int ldvr);
int LAPACKE_sggevx(int matrix_order, char balanc, char jobvl, char jobvr, char sense, int n, float * a, int lda, float * b, int ldb, float * alphar, float * alphai, float * beta, float * vl, int ldvl, float * vr, int ldvr, int * ilo, int * ihi, float * lscale, float * rscale, float * abnrm, float * bbnrm, float * rconde, float * rcondv);
int LAPACKE_dggevx(int matrix_order, char balanc, char jobvl, char jobvr, char sense, int n, double * a, int lda, double * b, int ldb, double * alphar, double * alphai, double * beta, double * vl, int ldvl, double * vr, int ldvr, int * ilo, int * ihi, double * lscale, double * rscale, double * abnrm, double * bbnrm, double * rconde, double * rcondv);
int LAPACKE_cggevx(int matrix_order, char balanc, char jobvl, char jobvr, char sense, int n, float _Complex * a, int lda, float _Complex * b, int ldb, float _Complex * alpha, float _Complex * beta, float _Complex * vl, int ldvl, float _Complex * vr, int ldvr, int * ilo, int * ihi, float * lscale, float * rscale, float * abnrm, float * bbnrm, float * rconde, float * rcondv);
int LAPACKE_zggevx(int matrix_order, char balanc, char jobvl, char jobvr, char sense, int n, double _Complex * a, int lda, double _Complex * b, int ldb, double _Complex * alpha, double _Complex * beta, double _Complex * vl, int ldvl, double _Complex * vr, int ldvr, int * ilo, int * ihi, double * lscale, double * rscale, double * abnrm, double * bbnrm, double * rconde, double * rcondv);
int LAPACKE_sggglm(int matrix_order, int n, int m, int p, float * a, int lda, float * b, int ldb, float * d, float * x, float * y);
int LAPACKE_dggglm(int matrix_order, int n, int m, int p, double * a, int lda, double * b, int ldb, double * d, double * x, double * y);
int LAPACKE_cggglm(int matrix_order, int n, int m, int p, float _Complex * a, int lda, float _Complex * b, int ldb, float _Complex * d, float _Complex * x, float _Complex * y);
int LAPACKE_zggglm(int matrix_order, int n, int m, int p, double _Complex * a, int lda, double _Complex * b, int ldb, double _Complex * d, double _Complex * x, double _Complex * y);
int LAPACKE_sgghrd(int matrix_order, char compq, char compz, int n, int ilo, int ihi, float * a, int lda, float * b, int ldb, float * q, int ldq, float * z, int ldz);
int LAPACKE_dgghrd(int matrix_order, char compq, char compz, int n, int ilo, int ihi, double * a, int lda, double * b, int ldb, double * q, int ldq, double * z, int ldz);
int LAPACKE_cgghrd(int matrix_order, char compq, char compz, int n, int ilo, int ihi, float _Complex * a, int lda, float _Complex * b, int ldb, float _Complex * q, int ldq, float _Complex * z, int ldz);
int LAPACKE_zgghrd(int matrix_order, char compq, char compz, int n, int ilo, int ihi, double _Complex * a, int lda, double _Complex * b, int ldb, double _Complex * q, int ldq, double _Complex * z, int ldz);
int LAPACKE_sgglse(int matrix_order, int m, int n, int p, float * a, int lda, float * b, int ldb, float * c, float * d, float * x);
int LAPACKE_dgglse(int matrix_order, int m, int n, int p, double * a, int lda, double * b, int ldb, double * c, double * d, double * x);
int LAPACKE_cgglse(int matrix_order, int m, int n, int p, float _Complex * a, int lda, float _Complex * b, int ldb, float _Complex * c, float _Complex * d, float _Complex * x);
int LAPACKE_zgglse(int matrix_order, int m, int n, int p, double _Complex * a, int lda, double _Complex * b, int ldb, double _Complex * c, double _Complex * d, double _Complex * x);
int LAPACKE_sggqrf(int matrix_order, int n, int m, int p, float * a, int lda, float * taua, float * b, int ldb, float * taub);
int LAPACKE_dggqrf(int matrix_order, int n, int m, int p, double * a, int lda, double * taua, double * b, int ldb, double * taub);
int LAPACKE_cggqrf(int matrix_order, int n, int m, int p, float _Complex * a, int lda, float _Complex * taua, float _Complex * b, int ldb, float _Complex * taub);
int LAPACKE_zggqrf(int matrix_order, int n, int m, int p, double _Complex * a, int lda, double _Complex * taua, double _Complex * b, int ldb, double _Complex * taub);
int LAPACKE_sggrqf(int matrix_order, int m, int p, int n, float * a, int lda, float * taua, float * b, int ldb, float * taub);
int LAPACKE_dggrqf(int matrix_order, int m, int p, int n, double * a, int lda, double * taua, double * b, int ldb, double * taub);
int LAPACKE_cggrqf(int matrix_order, int m, int p, int n, float _Complex * a, int lda, float _Complex * taua, float _Complex * b, int ldb, float _Complex * taub);
int LAPACKE_zggrqf(int matrix_order, int m, int p, int n, double _Complex * a, int lda, double _Complex * taua, double _Complex * b, int ldb, double _Complex * taub);
int LAPACKE_sggsvd(int matrix_order, char jobu, char jobv, char jobq, int m, int n, int p, int * k, int * l, float * a, int lda, float * b, int ldb, float * alpha, float * beta, float * u, int ldu, float * v, int ldv, float * q, int ldq, int * iwork);
int LAPACKE_dggsvd(int matrix_order, char jobu, char jobv, char jobq, int m, int n, int p, int * k, int * l, double * a, int lda, double * b, int ldb, double * alpha, double * beta, double * u, int ldu, double * v, int ldv, double * q, int ldq, int * iwork);
int LAPACKE_cggsvd(int matrix_order, char jobu, char jobv, char jobq, int m, int n, int p, int * k, int * l, float _Complex * a, int lda, float _Complex * b, int ldb, float * alpha, float * beta, float _Complex * u, int ldu, float _Complex * v, int ldv, float _Complex * q, int ldq, int * iwork);
int LAPACKE_zggsvd(int matrix_order, char jobu, char jobv, char jobq, int m, int n, int p, int * k, int * l, double _Complex * a, int lda, double _Complex * b, int ldb, double * alpha, double * beta, double _Complex * u, int ldu, double _Complex * v, int ldv, double _Complex * q, int ldq, int * iwork);
int LAPACKE_sggsvp(int matrix_order, char jobu, char jobv, char jobq, int m, int p, int n, float * a, int lda, float * b, int ldb, float tola, float tolb, int * k, int * l, float * u, int ldu, float * v, int ldv, float * q, int ldq);
int LAPACKE_dggsvp(int matrix_order, char jobu, char jobv, char jobq, int m, int p, int n, double * a, int lda, double * b, int ldb, double tola, double tolb, int * k, int * l, double * u, int ldu, double * v, int ldv, double * q, int ldq);
int LAPACKE_cggsvp(int matrix_order, char jobu, char jobv, char jobq, int m, int p, int n, float _Complex * a, int lda, float _Complex * b, int ldb, float tola, float tolb, int * k, int * l, float _Complex * u, int ldu, float _Complex * v, int ldv, float _Complex * q, int ldq);
int LAPACKE_zggsvp(int matrix_order, char jobu, char jobv, char jobq, int m, int p, int n, double _Complex * a, int lda, double _Complex * b, int ldb, double tola, double tolb, int * k, int * l, double _Complex * u, int ldu, double _Complex * v, int ldv, double _Complex * q, int ldq);
int LAPACKE_sgtcon(char norm, int n, float const * dl, float const * d, float const * du, float const * du2, int const * ipiv, float anorm, float * rcond);
int LAPACKE_dgtcon(char norm, int n, double const * dl, double const * d, double const * du, double const * du2, int const * ipiv, double anorm, double * rcond);
int LAPACKE_cgtcon(char norm, int n, float _Complex const * dl, float _Complex const * d, float _Complex const * du, float _Complex const * du2, int const * ipiv, float anorm, float * rcond);
int LAPACKE_zgtcon(char norm, int n, double _Complex const * dl, double _Complex const * d, double _Complex const * du, double _Complex const * du2, int const * ipiv, double anorm, double * rcond);
int LAPACKE_sgtrfs(int matrix_order, char trans, int n, int nrhs, float const * dl, float const * d, float const * du, float const * dlf, float const * df, float const * duf, float const * du2, int const * ipiv, float const * b, int ldb, float * x, int ldx, float * ferr, float * berr);
int LAPACKE_dgtrfs(int matrix_order, char trans, int n, int nrhs, double const * dl, double const * d, double const * du, double const * dlf, double const * df, double const * duf, double const * du2, int const * ipiv, double const * b, int ldb, double * x, int ldx, double * ferr, double * berr);
int LAPACKE_cgtrfs(int matrix_order, char trans, int n, int nrhs, float _Complex const * dl, float _Complex const * d, float _Complex const * du, float _Complex const * dlf, float _Complex const * df, float _Complex const * duf, float _Complex const * du2, int const * ipiv, float _Complex const * b, int ldb, float _Complex * x, int ldx, float * ferr, float * berr);
int LAPACKE_zgtrfs(int matrix_order, char trans, int n, int nrhs, double _Complex const * dl, double _Complex const * d, double _Complex const * du, double _Complex const * dlf, double _Complex const * df, double _Complex const * duf, double _Complex const * du2, int const * ipiv, double _Complex const * b, int ldb, double _Complex * x, int ldx, double * ferr, double * berr);
int LAPACKE_sgtsv(int matrix_order, int n, int nrhs, float * dl, float * d, float * du, float * b, int ldb);
int LAPACKE_dgtsv(int matrix_order, int n, int nrhs, double * dl, double * d, double * du, double * b, int ldb);
int LAPACKE_cgtsv(int matrix_order, int n, int nrhs, float _Complex * dl, float _Complex * d, float _Complex * du, float _Complex * b, int ldb);
int LAPACKE_zgtsv(int matrix_order, int n, int nrhs, double _Complex * dl, double _Complex * d, double _Complex * du, double _Complex * b, int ldb);
int LAPACKE_sgtsvx(int matrix_order, char fact, char trans, int n, int nrhs, float const * dl, float const * d, float const * du, float * dlf, float * df, float * duf, float * du2, int * ipiv, float const * b, int ldb, float * x, int ldx, float * rcond, float * ferr, float * berr);
int LAPACKE_dgtsvx(int matrix_order, char fact, char trans, int n, int nrhs, double const * dl, double const * d, double const * du, double * dlf, double * df, double * duf, double * du2, int * ipiv, double const * b, int ldb, double * x, int ldx, double * rcond, double * ferr, double * berr);
int LAPACKE_cgtsvx(int matrix_order, char fact, char trans, int n, int nrhs, float _Complex const * dl, float _Complex const * d, float _Complex const * du, float _Complex * dlf, float _Complex * df, float _Complex * duf, float _Complex * du2, int * ipiv, float _Complex const * b, int ldb, float _Complex * x, int ldx, float * rcond, float * ferr, float * berr);
int LAPACKE_zgtsvx(int matrix_order, char fact, char trans, int n, int nrhs, double _Complex const * dl, double _Complex const * d, double _Complex const * du, double _Complex * dlf, double _Complex * df, double _Complex * duf, double _Complex * du2, int * ipiv, double _Complex const * b, int ldb, double _Complex * x, int ldx, double * rcond, double * ferr, double * berr);
int LAPACKE_sgttrf(int n, float * dl, float * d, float * du, float * du2, int * ipiv);
int LAPACKE_dgttrf(int n, double * dl, double * d, double * du, double * du2, int * ipiv);
int LAPACKE_cgttrf(int n, float _Complex * dl, float _Complex * d, float _Complex * du, float _Complex * du2, int * ipiv);
int LAPACKE_zgttrf(int n, double _Complex * dl, double _Complex * d, double _Complex * du, double _Complex * du2, int * ipiv);
int LAPACKE_sgttrs(int matrix_order, char trans, int n, int nrhs, float const * dl, float const * d, float const * du, float const * du2, int const * ipiv, float * b, int ldb);
int LAPACKE_dgttrs(int matrix_order, char trans, int n, int nrhs, double const * dl, double const * d, double const * du, double const * du2, int const * ipiv, double * b, int ldb);
int LAPACKE_cgttrs(int matrix_order, char trans, int n, int nrhs, float _Complex const * dl, float _Complex const * d, float _Complex const * du, float _Complex const * du2, int const * ipiv, float _Complex * b, int ldb);
int LAPACKE_zgttrs(int matrix_order, char trans, int n, int nrhs, double _Complex const * dl, double _Complex const * d, double _Complex const * du, double _Complex const * du2, int const * ipiv, double _Complex * b, int ldb);
int LAPACKE_chbev(int matrix_order, char jobz, char uplo, int n, int kd, float _Complex * ab, int ldab, float * w, float _Complex * z, int ldz);
int LAPACKE_zhbev(int matrix_order, char jobz, char uplo, int n, int kd, double _Complex * ab, int ldab, double * w, double _Complex * z, int ldz);
int LAPACKE_chbevd(int matrix_order, char jobz, char uplo, int n, int kd, float _Complex * ab, int ldab, float * w, float _Complex * z, int ldz);
int LAPACKE_zhbevd(int matrix_order, char jobz, char uplo, int n, int kd, double _Complex * ab, int ldab, double * w, double _Complex * z, int ldz);
int LAPACKE_chbevx(int matrix_order, char jobz, char range, char uplo, int n, int kd, float _Complex * ab, int ldab, float _Complex * q, int ldq, float vl, float vu, int il, int iu, float abstol, int * m, float * w, float _Complex * z, int ldz, int * ifail);
int LAPACKE_zhbevx(int matrix_order, char jobz, char range, char uplo, int n, int kd, double _Complex * ab, int ldab, double _Complex * q, int ldq, double vl, double vu, int il, int iu, double abstol, int * m, double * w, double _Complex * z, int ldz, int * ifail);
int LAPACKE_chbgst(int matrix_order, char vect, char uplo, int n, int ka, int kb, float _Complex * ab, int ldab, float _Complex const * bb, int ldbb, float _Complex * x, int ldx);
int LAPACKE_zhbgst(int matrix_order, char vect, char uplo, int n, int ka, int kb, double _Complex * ab, int ldab, double _Complex const * bb, int ldbb, double _Complex * x, int ldx);
int LAPACKE_chbgv(int matrix_order, char jobz, char uplo, int n, int ka, int kb, float _Complex * ab, int ldab, float _Complex * bb, int ldbb, float * w, float _Complex * z, int ldz);
int LAPACKE_zhbgv(int matrix_order, char jobz, char uplo, int n, int ka, int kb, double _Complex * ab, int ldab, double _Complex * bb, int ldbb, double * w, double _Complex * z, int ldz);
int LAPACKE_chbgvd(int matrix_order, char jobz, char uplo, int n, int ka, int kb, float _Complex * ab, int ldab, float _Complex * bb, int ldbb, float * w, float _Complex * z, int ldz);
int LAPACKE_zhbgvd(int matrix_order, char jobz, char uplo, int n, int ka, int kb, double _Complex * ab, int ldab, double _Complex * bb, int ldbb, double * w, double _Complex * z, int ldz);
int LAPACKE_chbgvx(int matrix_order, char jobz, char range, char uplo, int n, int ka, int kb, float _Complex * ab, int ldab, float _Complex * bb, int ldbb, float _Complex * q, int ldq, float vl, float vu, int il, int iu, float abstol, int * m, float * w, float _Complex * z, int ldz, int * ifail);
int LAPACKE_zhbgvx(int matrix_order, char jobz, char range, char uplo, int n, int ka, int kb, double _Complex * ab, int ldab, double _Complex * bb, int ldbb, double _Complex * q, int ldq, double vl, double vu, int il, int iu, double abstol, int * m, double * w, double _Complex * z, int ldz, int * ifail);
int LAPACKE_chbtrd(int matrix_order, char vect, char uplo, int n, int kd, float _Complex * ab, int ldab, float * d, float * e, float _Complex * q, int ldq);
int LAPACKE_zhbtrd(int matrix_order, char vect, char uplo, int n, int kd, double _Complex * ab, int ldab, double * d, double * e, double _Complex * q, int ldq);
int LAPACKE_checon(int matrix_order, char uplo, int n, float _Complex const * a, int lda, int const * ipiv, float anorm, float * rcond);
int LAPACKE_zhecon(int matrix_order, char uplo, int n, double _Complex const * a, int lda, int const * ipiv, double anorm, double * rcond);
int LAPACKE_cheequb(int matrix_order, char uplo, int n, float _Complex const * a, int lda, float * s, float * scond, float * amax);
int LAPACKE_zheequb(int matrix_order, char uplo, int n, double _Complex const * a, int lda, double * s, double * scond, double * amax);
int LAPACKE_cheev(int matrix_order, char jobz, char uplo, int n, float _Complex * a, int lda, float * w);
int LAPACKE_zheev(int matrix_order, char jobz, char uplo, int n, double _Complex * a, int lda, double * w);
int LAPACKE_cheevd(int matrix_order, char jobz, char uplo, int n, float _Complex * a, int lda, float * w);
int LAPACKE_zheevd(int matrix_order, char jobz, char uplo, int n, double _Complex * a, int lda, double * w);
int LAPACKE_cheevr(int matrix_order, char jobz, char range, char uplo, int n, float _Complex * a, int lda, float vl, float vu, int il, int iu, float abstol, int * m, float * w, float _Complex * z, int ldz, int * isuppz);
int LAPACKE_zheevr(int matrix_order, char jobz, char range, char uplo, int n, double _Complex * a, int lda, double vl, double vu, int il, int iu, double abstol, int * m, double * w, double _Complex * z, int ldz, int * isuppz);
int LAPACKE_cheevx(int matrix_order, char jobz, char range, char uplo, int n, float _Complex * a, int lda, float vl, float vu, int il, int iu, float abstol, int * m, float * w, float _Complex * z, int ldz, int * ifail);
int LAPACKE_zheevx(int matrix_order, char jobz, char range, char uplo, int n, double _Complex * a, int lda, double vl, double vu, int il, int iu, double abstol, int * m, double * w, double _Complex * z, int ldz, int * ifail);
int LAPACKE_chegst(int matrix_order, int itype, char uplo, int n, float _Complex * a, int lda, float _Complex const * b, int ldb);
int LAPACKE_zhegst(int matrix_order, int itype, char uplo, int n, double _Complex * a, int lda, double _Complex const * b, int ldb);
int LAPACKE_chegv(int matrix_order, int itype, char jobz, char uplo, int n, float _Complex * a, int lda, float _Complex * b, int ldb, float * w);
int LAPACKE_zhegv(int matrix_order, int itype, char jobz, char uplo, int n, double _Complex * a, int lda, double _Complex * b, int ldb, double * w);
int LAPACKE_chegvd(int matrix_order, int itype, char jobz, char uplo, int n, float _Complex * a, int lda, float _Complex * b, int ldb, float * w);
int LAPACKE_zhegvd(int matrix_order, int itype, char jobz, char uplo, int n, double _Complex * a, int lda, double _Complex * b, int ldb, double * w);
int LAPACKE_chegvx(int matrix_order, int itype, char jobz, char range, char uplo, int n, float _Complex * a, int lda, float _Complex * b, int ldb, float vl, float vu, int il, int iu, float abstol, int * m, float * w, float _Complex * z, int ldz, int * ifail);
int LAPACKE_zhegvx(int matrix_order, int itype, char jobz, char range, char uplo, int n, double _Complex * a, int lda, double _Complex * b, int ldb, double vl, double vu, int il, int iu, double abstol, int * m, double * w, double _Complex * z, int ldz, int * ifail);
int LAPACKE_cherfs(int matrix_order, char uplo, int n, int nrhs, float _Complex const * a, int lda, float _Complex const * af, int ldaf, int const * ipiv, float _Complex const * b, int ldb, float _Complex * x, int ldx, float * ferr, float * berr);
int LAPACKE_zherfs(int matrix_order, char uplo, int n, int nrhs, double _Complex const * a, int lda, double _Complex const * af, int ldaf, int const * ipiv, double _Complex const * b, int ldb, double _Complex * x, int ldx, double * ferr, double * berr);
int LAPACKE_cherfsx(int matrix_order, char uplo, char equed, int n, int nrhs, float _Complex const * a, int lda, float _Complex const * af, int ldaf, int const * ipiv, float const * s, float _Complex const * b, int ldb, float _Complex * x, int ldx, float * rcond, float * berr, int n_err_bnds, float * err_bnds_norm, float * err_bnds_comp, int nparams, float * params);
int LAPACKE_zherfsx(int matrix_order, char uplo, char equed, int n, int nrhs, double _Complex const * a, int lda, double _Complex const * af, int ldaf, int const * ipiv, double const * s, double _Complex const * b, int ldb, double _Complex * x, int ldx, double * rcond, double * berr, int n_err_bnds, double * err_bnds_norm, double * err_bnds_comp, int nparams, double * params);
int LAPACKE_chesv(int matrix_order, char uplo, int n, int nrhs, float _Complex * a, int lda, int * ipiv, float _Complex * b, int ldb);
int LAPACKE_zhesv(int matrix_order, char uplo, int n, int nrhs, double _Complex * a, int lda, int * ipiv, double _Complex * b, int ldb);
int LAPACKE_chesvx(int matrix_order, char fact, char uplo, int n, int nrhs, float _Complex const * a, int lda, float _Complex * af, int ldaf, int * ipiv, float _Complex const * b, int ldb, float _Complex * x, int ldx, float * rcond, float * ferr, float * berr);
int LAPACKE_zhesvx(int matrix_order, char fact, char uplo, int n, int nrhs, double _Complex const * a, int lda, double _Complex * af, int ldaf, int * ipiv, double _Complex const * b, int ldb, double _Complex * x, int ldx, double * rcond, double * ferr, double * berr);
int LAPACKE_chesvxx(int matrix_order, char fact, char uplo, int n, int nrhs, float _Complex * a, int lda, float _Complex * af, int ldaf, int * ipiv, char * equed, float * s, float _Complex * b, int ldb, float _Complex * x, int ldx, float * rcond, float * rpvgrw, float * berr, int n_err_bnds, float * err_bnds_norm, float * err_bnds_comp, int nparams, float * params);
int LAPACKE_zhesvxx(int matrix_order, char fact, char uplo, int n, int nrhs, double _Complex * a, int lda, double _Complex * af, int ldaf, int * ipiv, char * equed, double * s, double _Complex * b, int ldb, double _Complex * x, int ldx, double * rcond, double * rpvgrw, double * berr, int n_err_bnds, double * err_bnds_norm, double * err_bnds_comp, int nparams, double * params);
int LAPACKE_chetrd(int matrix_order, char uplo, int n, float _Complex * a, int lda, float * d, float * e, float _Complex * tau);
int LAPACKE_zhetrd(int matrix_order, char uplo, int n, double _Complex * a, int lda, double * d, double * e, double _Complex * tau);
int LAPACKE_chetrf(int matrix_order, char uplo, int n, float _Complex * a, int lda, int * ipiv);
int LAPACKE_zhetrf(int matrix_order, char uplo, int n, double _Complex * a, int lda, int * ipiv);
int LAPACKE_chetri(int matrix_order, char uplo, int n, float _Complex * a, int lda, int const * ipiv);
int LAPACKE_zhetri(int matrix_order, char uplo, int n, double _Complex * a, int lda, int const * ipiv);
int LAPACKE_chetrs(int matrix_order, char uplo, int n, int nrhs, float _Complex const * a, int lda, int const * ipiv, float _Complex * b, int ldb);
int LAPACKE_zhetrs(int matrix_order, char uplo, int n, int nrhs, double _Complex const * a, int lda, int const * ipiv, double _Complex * b, int ldb);
int LAPACKE_chfrk(int matrix_order, char transr, char uplo, char trans, int n, int k, float alpha, float _Complex const * a, int lda, float beta, float _Complex * c);
int LAPACKE_zhfrk(int matrix_order, char transr, char uplo, char trans, int n, int k, double alpha, double _Complex const * a, int lda, double beta, double _Complex * c);
int LAPACKE_shgeqz(int matrix_order, char job, char compq, char compz, int n, int ilo, int ihi, float * h, int ldh, float * t, int ldt, float * alphar, float * alphai, float * beta, float * q, int ldq, float * z, int ldz);
int LAPACKE_dhgeqz(int matrix_order, char job, char compq, char compz, int n, int ilo, int ihi, double * h, int ldh, double * t, int ldt, double * alphar, double * alphai, double * beta, double * q, int ldq, double * z, int ldz);
int LAPACKE_chgeqz(int matrix_order, char job, char compq, char compz, int n, int ilo, int ihi, float _Complex * h, int ldh, float _Complex * t, int ldt, float _Complex * alpha, float _Complex * beta, float _Complex * q, int ldq, float _Complex * z, int ldz);
int LAPACKE_zhgeqz(int matrix_order, char job, char compq, char compz, int n, int ilo, int ihi, double _Complex * h, int ldh, double _Complex * t, int ldt, double _Complex * alpha, double _Complex * beta, double _Complex * q, int ldq, double _Complex * z, int ldz);
int LAPACKE_chpcon(int matrix_order, char uplo, int n, float _Complex const * ap, int const * ipiv, float anorm, float * rcond);
int LAPACKE_zhpcon(int matrix_order, char uplo, int n, double _Complex const * ap, int const * ipiv, double anorm, double * rcond);
int LAPACKE_chpev(int matrix_order, char jobz, char uplo, int n, float _Complex * ap, float * w, float _Complex * z, int ldz);
int LAPACKE_zhpev(int matrix_order, char jobz, char uplo, int n, double _Complex * ap, double * w, double _Complex * z, int ldz);
int LAPACKE_chpevd(int matrix_order, char jobz, char uplo, int n, float _Complex * ap, float * w, float _Complex * z, int ldz);
int LAPACKE_zhpevd(int matrix_order, char jobz, char uplo, int n, double _Complex * ap, double * w, double _Complex * z, int ldz);
int LAPACKE_chpevx(int matrix_order, char jobz, char range, char uplo, int n, float _Complex * ap, float vl, float vu, int il, int iu, float abstol, int * m, float * w, float _Complex * z, int ldz, int * ifail);
int LAPACKE_zhpevx(int matrix_order, char jobz, char range, char uplo, int n, double _Complex * ap, double vl, double vu, int il, int iu, double abstol, int * m, double * w, double _Complex * z, int ldz, int * ifail);
int LAPACKE_chpgst(int matrix_order, int itype, char uplo, int n, float _Complex * ap, float _Complex const * bp);
int LAPACKE_zhpgst(int matrix_order, int itype, char uplo, int n, double _Complex * ap, double _Complex const * bp);
int LAPACKE_chpgv(int matrix_order, int itype, char jobz, char uplo, int n, float _Complex * ap, float _Complex * bp, float * w, float _Complex * z, int ldz);
int LAPACKE_zhpgv(int matrix_order, int itype, char jobz, char uplo, int n, double _Complex * ap, double _Complex * bp, double * w, double _Complex * z, int ldz);
int LAPACKE_chpgvd(int matrix_order, int itype, char jobz, char uplo, int n, float _Complex * ap, float _Complex * bp, float * w, float _Complex * z, int ldz);
int LAPACKE_zhpgvd(int matrix_order, int itype, char jobz, char uplo, int n, double _Complex * ap, double _Complex * bp, double * w, double _Complex * z, int ldz);
int LAPACKE_chpgvx(int matrix_order, int itype, char jobz, char range, char uplo, int n, float _Complex * ap, float _Complex * bp, float vl, float vu, int il, int iu, float abstol, int * m, float * w, float _Complex * z, int ldz, int * ifail);
int LAPACKE_zhpgvx(int matrix_order, int itype, char jobz, char range, char uplo, int n, double _Complex * ap, double _Complex * bp, double vl, double vu, int il, int iu, double abstol, int * m, double * w, double _Complex * z, int ldz, int * ifail);
int LAPACKE_chprfs(int matrix_order, char uplo, int n, int nrhs, float _Complex const * ap, float _Complex const * afp, int const * ipiv, float _Complex const * b, int ldb, float _Complex * x, int ldx, float * ferr, float * berr);
int LAPACKE_zhprfs(int matrix_order, char uplo, int n, int nrhs, double _Complex const * ap, double _Complex const * afp, int const * ipiv, double _Complex const * b, int ldb, double _Complex * x, int ldx, double * ferr, double * berr);
int LAPACKE_chpsv(int matrix_order, char uplo, int n, int nrhs, float _Complex * ap, int * ipiv, float _Complex * b, int ldb);
int LAPACKE_zhpsv(int matrix_order, char uplo, int n, int nrhs, double _Complex * ap, int * ipiv, double _Complex * b, int ldb);
int LAPACKE_chpsvx(int matrix_order, char fact, char uplo, int n, int nrhs, float _Complex const * ap, float _Complex * afp, int * ipiv, float _Complex const * b, int ldb, float _Complex * x, int ldx, float * rcond, float * ferr, float * berr);
int LAPACKE_zhpsvx(int matrix_order, char fact, char uplo, int n, int nrhs, double _Complex const * ap, double _Complex * afp, int * ipiv, double _Complex const * b, int ldb, double _Complex * x, int ldx, double * rcond, double * ferr, double * berr);
int LAPACKE_chptrd(int matrix_order, char uplo, int n, float _Complex * ap, float * d, float * e, float _Complex * tau);
int LAPACKE_zhptrd(int matrix_order, char uplo, int n, double _Complex * ap, double * d, double * e, double _Complex * tau);
int LAPACKE_chptrf(int matrix_order, char uplo, int n, float _Complex * ap, int * ipiv);
int LAPACKE_zhptrf(int matrix_order, char uplo, int n, double _Complex * ap, int * ipiv);
int LAPACKE_chptri(int matrix_order, char uplo, int n, float _Complex * ap, int const * ipiv);
int LAPACKE_zhptri(int matrix_order, char uplo, int n, double _Complex * ap, int const * ipiv);
int LAPACKE_chptrs(int matrix_order, char uplo, int n, int nrhs, float _Complex const * ap, int const * ipiv, float _Complex * b, int ldb);
int LAPACKE_zhptrs(int matrix_order, char uplo, int n, int nrhs, double _Complex const * ap, int const * ipiv, double _Complex * b, int ldb);
int LAPACKE_shsein(int matrix_order, char job, char eigsrc, char initv, int * select, int n, float const * h, int ldh, float * wr, float const * wi, float * vl, int ldvl, float * vr, int ldvr, int mm, int * m, int * ifaill, int * ifailr);
int LAPACKE_dhsein(int matrix_order, char job, char eigsrc, char initv, int * select, int n, double const * h, int ldh, double * wr, double const * wi, double * vl, int ldvl, double * vr, int ldvr, int mm, int * m, int * ifaill, int * ifailr);
int LAPACKE_chsein(int matrix_order, char job, char eigsrc, char initv, int const * select, int n, float _Complex const * h, int ldh, float _Complex * w, float _Complex * vl, int ldvl, float _Complex * vr, int ldvr, int mm, int * m, int * ifaill, int * ifailr);
int LAPACKE_zhsein(int matrix_order, char job, char eigsrc, char initv, int const * select, int n, double _Complex const * h, int ldh, double _Complex * w, double _Complex * vl, int ldvl, double _Complex * vr, int ldvr, int mm, int * m, int * ifaill, int * ifailr);
int LAPACKE_shseqr(int matrix_order, char job, char compz, int n, int ilo, int ihi, float * h, int ldh, float * wr, float * wi, float * z, int ldz);
int LAPACKE_dhseqr(int matrix_order, char job, char compz, int n, int ilo, int ihi, double * h, int ldh, double * wr, double * wi, double * z, int ldz);
int LAPACKE_chseqr(int matrix_order, char job, char compz, int n, int ilo, int ihi, float _Complex * h, int ldh, float _Complex * w, float _Complex * z, int ldz);
int LAPACKE_zhseqr(int matrix_order, char job, char compz, int n, int ilo, int ihi, double _Complex * h, int ldh, double _Complex * w, double _Complex * z, int ldz);
int LAPACKE_clacgv(int n, float _Complex * x, int incx);
int LAPACKE_zlacgv(int n, double _Complex * x, int incx);
int LAPACKE_slacn2(int n, float * v, float * x, int * isgn, float * est, int * kase, int * isave);
int LAPACKE_dlacn2(int n, double * v, double * x, int * isgn, double * est, int * kase, int * isave);
int LAPACKE_clacn2(int n, float _Complex * v, float _Complex * x, float * est, int * kase, int * isave);
int LAPACKE_zlacn2(int n, double _Complex * v, double _Complex * x, double * est, int * kase, int * isave);
int LAPACKE_slacpy(int matrix_order, char uplo, int m, int n, float const * a, int lda, float * b, int ldb);
int LAPACKE_dlacpy(int matrix_order, char uplo, int m, int n, double const * a, int lda, double * b, int ldb);
int LAPACKE_clacpy(int matrix_order, char uplo, int m, int n, float _Complex const * a, int lda, float _Complex * b, int ldb);
int LAPACKE_zlacpy(int matrix_order, char uplo, int m, int n, double _Complex const * a, int lda, double _Complex * b, int ldb);
int LAPACKE_clacp2(int matrix_order, char uplo, int m, int n, float const * a, int lda, float _Complex * b, int ldb);
int LAPACKE_zlacp2(int matrix_order, char uplo, int m, int n, double const * a, int lda, double _Complex * b, int ldb);
int LAPACKE_zlag2c(int matrix_order, int m, int n, double _Complex const * a, int lda, float _Complex * sa, int ldsa);
int LAPACKE_slag2d(int matrix_order, int m, int n, float const * sa, int ldsa, double * a, int lda);
int LAPACKE_dlag2s(int matrix_order, int m, int n, double const * a, int lda, float * sa, int ldsa);
int LAPACKE_clag2z(int matrix_order, int m, int n, float _Complex const * sa, int ldsa, double _Complex * a, int lda);
int LAPACKE_slagge(int matrix_order, int m, int n, int kl, int ku, float const * d, float * a, int lda, int * iseed);
int LAPACKE_dlagge(int matrix_order, int m, int n, int kl, int ku, double const * d, double * a, int lda, int * iseed);
int LAPACKE_clagge(int matrix_order, int m, int n, int kl, int ku, float const * d, float _Complex * a, int lda, int * iseed);
int LAPACKE_zlagge(int matrix_order, int m, int n, int kl, int ku, double const * d, double _Complex * a, int lda, int * iseed);
float LAPACKE_slamch(char cmach);
double LAPACKE_dlamch(char cmach);
float LAPACKE_slange(int matrix_order, char norm, int m, int n, float const * a, int lda);
double LAPACKE_dlange(int matrix_order, char norm, int m, int n, double const * a, int lda);
float LAPACKE_clange(int matrix_order, char norm, int m, int n, float _Complex const * a, int lda);
double LAPACKE_zlange(int matrix_order, char norm, int m, int n, double _Complex const * a, int lda);
float LAPACKE_clanhe(int matrix_order, char norm, char uplo, int n, float _Complex const * a, int lda);
double LAPACKE_zlanhe(int matrix_order, char norm, char uplo, int n, double _Complex const * a, int lda);
float LAPACKE_slansy(int matrix_order, char norm, char uplo, int n, float const * a, int lda);
double LAPACKE_dlansy(int matrix_order, char norm, char uplo, int n, double const * a, int lda);
float LAPACKE_clansy(int matrix_order, char norm, char uplo, int n, float _Complex const * a, int lda);
double LAPACKE_zlansy(int matrix_order, char norm, char uplo, int n, double _Complex const * a, int lda);
float LAPACKE_slantr(int matrix_order, char norm, char uplo, char diag, int m, int n, float const * a, int lda);
double LAPACKE_dlantr(int matrix_order, char norm, char uplo, char diag, int m, int n, double const * a, int lda);
float LAPACKE_clantr(int matrix_order, char norm, char uplo, char diag, int m, int n, float _Complex const * a, int lda);
double LAPACKE_zlantr(int matrix_order, char norm, char uplo, char diag, int m, int n, double _Complex const * a, int lda);
int LAPACKE_slarfb(int matrix_order, char side, char trans, char direct, char storev, int m, int n, int k, float const * v, int ldv, float const * t, int ldt, float * c, int ldc);
int LAPACKE_dlarfb(int matrix_order, char side, char trans, char direct, char storev, int m, int n, int k, double const * v, int ldv, double const * t, int ldt, double * c, int ldc);
int LAPACKE_clarfb(int matrix_order, char side, char trans, char direct, char storev, int m, int n, int k, float _Complex const * v, int ldv, float _Complex const * t, int ldt, float _Complex * c, int ldc);
int LAPACKE_zlarfb(int matrix_order, char side, char trans, char direct, char storev, int m, int n, int k, double _Complex const * v, int ldv, double _Complex const * t, int ldt, double _Complex * c, int ldc);
int LAPACKE_slarfg(int n, float * alpha, float * x, int incx, float * tau);
int LAPACKE_dlarfg(int n, double * alpha, double * x, int incx, double * tau);
int LAPACKE_clarfg(int n, float _Complex * alpha, float _Complex * x, int incx, float _Complex * tau);
int LAPACKE_zlarfg(int n, double _Complex * alpha, double _Complex * x, int incx, double _Complex * tau);
int LAPACKE_slarft(int matrix_order, char direct, char storev, int n, int k, float const * v, int ldv, float const * tau, float * t, int ldt);
int LAPACKE_dlarft(int matrix_order, char direct, char storev, int n, int k, double const * v, int ldv, double const * tau, double * t, int ldt);
int LAPACKE_clarft(int matrix_order, char direct, char storev, int n, int k, float _Complex const * v, int ldv, float _Complex const * tau, float _Complex * t, int ldt);
int LAPACKE_zlarft(int matrix_order, char direct, char storev, int n, int k, double _Complex const * v, int ldv, double _Complex const * tau, double _Complex * t, int ldt);
int LAPACKE_slarfx(int matrix_order, char side, int m, int n, float const * v, float tau, float * c, int ldc, float * work);
int LAPACKE_dlarfx(int matrix_order, char side, int m, int n, double const * v, double tau, double * c, int ldc, double * work);
int LAPACKE_clarfx(int matrix_order, char side, int m, int n, float _Complex const * v, float _Complex tau, float _Complex * c, int ldc, float _Complex * work);
int LAPACKE_zlarfx(int matrix_order, char side, int m, int n, double _Complex const * v, double _Complex tau, double _Complex * c, int ldc, double _Complex * work);
int LAPACKE_slarnv(int idist, int * iseed, int n, float * x);
int LAPACKE_dlarnv(int idist, int * iseed, int n, double * x);
int LAPACKE_clarnv(int idist, int * iseed, int n, float _Complex * x);
int LAPACKE_zlarnv(int idist, int * iseed, int n, double _Complex * x);
int LAPACKE_slaset(int matrix_order, char uplo, int m, int n, float alpha, float beta, float * a, int lda);
int LAPACKE_dlaset(int matrix_order, char uplo, int m, int n, double alpha, double beta, double * a, int lda);
int LAPACKE_claset(int matrix_order, char uplo, int m, int n, float _Complex alpha, float _Complex beta, float _Complex * a, int lda);
int LAPACKE_zlaset(int matrix_order, char uplo, int m, int n, double _Complex alpha, double _Complex beta, double _Complex * a, int lda);
int LAPACKE_slasrt(char id, int n, float * d);
int LAPACKE_dlasrt(char id, int n, double * d);
int LAPACKE_slaswp(int matrix_order, int n, float * a, int lda, int k1, int k2, int const * ipiv, int incx);
int LAPACKE_dlaswp(int matrix_order, int n, double * a, int lda, int k1, int k2, int const * ipiv, int incx);
int LAPACKE_claswp(int matrix_order, int n, float _Complex * a, int lda, int k1, int k2, int const * ipiv, int incx);
int LAPACKE_zlaswp(int matrix_order, int n, double _Complex * a, int lda, int k1, int k2, int const * ipiv, int incx);
int LAPACKE_slatms(int matrix_order, int m, int n, char dist, int * iseed, char sym, float * d, int mode, float cond, float dmax, int kl, int ku, char pack, float * a, int lda);
int LAPACKE_dlatms(int matrix_order, int m, int n, char dist, int * iseed, char sym, double * d, int mode, double cond, double dmax, int kl, int ku, char pack, double * a, int lda);
int LAPACKE_clatms(int matrix_order, int m, int n, char dist, int * iseed, char sym, float * d, int mode, float cond, float dmax, int kl, int ku, char pack, float _Complex * a, int lda);
int LAPACKE_zlatms(int matrix_order, int m, int n, char dist, int * iseed, char sym, double * d, int mode, double cond, double dmax, int kl, int ku, char pack, double _Complex * a, int lda);
int LAPACKE_slauum(int matrix_order, char uplo, int n, float * a, int lda);
int LAPACKE_dlauum(int matrix_order, char uplo, int n, double * a, int lda);
int LAPACKE_clauum(int matrix_order, char uplo, int n, float _Complex * a, int lda);
int LAPACKE_zlauum(int matrix_order, char uplo, int n, double _Complex * a, int lda);
int LAPACKE_sopgtr(int matrix_order, char uplo, int n, float const * ap, float const * tau, float * q, int ldq);
int LAPACKE_dopgtr(int matrix_order, char uplo, int n, double const * ap, double const * tau, double * q, int ldq);
int LAPACKE_sopmtr(int matrix_order, char side, char uplo, char trans, int m, int n, float const * ap, float const * tau, float * c, int ldc);
int LAPACKE_dopmtr(int matrix_order, char side, char uplo, char trans, int m, int n, double const * ap, double const * tau, double * c, int ldc);
int LAPACKE_sorgbr(int matrix_order, char vect, int m, int n, int k, float * a, int lda, float const * tau);
int LAPACKE_dorgbr(int matrix_order, char vect, int m, int n, int k, double * a, int lda, double const * tau);
int LAPACKE_sorghr(int matrix_order, int n, int ilo, int ihi, float * a, int lda, float const * tau);
int LAPACKE_dorghr(int matrix_order, int n, int ilo, int ihi, double * a, int lda, double const * tau);
int LAPACKE_sorglq(int matrix_order, int m, int n, int k, float * a, int lda, float const * tau);
int LAPACKE_dorglq(int matrix_order, int m, int n, int k, double * a, int lda, double const * tau);
int LAPACKE_sorgql(int matrix_order, int m, int n, int k, float * a, int lda, float const * tau);
int LAPACKE_dorgql(int matrix_order, int m, int n, int k, double * a, int lda, double const * tau);
int LAPACKE_sorgqr(int matrix_order, int m, int n, int k, float * a, int lda, float const * tau);
int LAPACKE_dorgqr(int matrix_order, int m, int n, int k, double * a, int lda, double const * tau);
int LAPACKE_sorgrq(int matrix_order, int m, int n, int k, float * a, int lda, float const * tau);
int LAPACKE_dorgrq(int matrix_order, int m, int n, int k, double * a, int lda, double const * tau);
int LAPACKE_sorgtr(int matrix_order, char uplo, int n, float * a, int lda, float const * tau);
int LAPACKE_dorgtr(int matrix_order, char uplo, int n, double * a, int lda, double const * tau);
int LAPACKE_sormbr(int matrix_order, char vect, char side, char trans, int m, int n, int k, float const * a, int lda, float const * tau, float * c, int ldc);
int LAPACKE_dormbr(int matrix_order, char vect, char side, char trans, int m, int n, int k, double const * a, int lda, double const * tau, double * c, int ldc);
int LAPACKE_sormhr(int matrix_order, char side, char trans, int m, int n, int ilo, int ihi, float const * a, int lda, float const * tau, float * c, int ldc);
int LAPACKE_dormhr(int matrix_order, char side, char trans, int m, int n, int ilo, int ihi, double const * a, int lda, double const * tau, double * c, int ldc);
int LAPACKE_sormlq(int matrix_order, char side, char trans, int m, int n, int k, float const * a, int lda, float const * tau, float * c, int ldc);
int LAPACKE_dormlq(int matrix_order, char side, char trans, int m, int n, int k, double const * a, int lda, double const * tau, double * c, int ldc);
int LAPACKE_sormql(int matrix_order, char side, char trans, int m, int n, int k, float const * a, int lda, float const * tau, float * c, int ldc);
int LAPACKE_dormql(int matrix_order, char side, char trans, int m, int n, int k, double const * a, int lda, double const * tau, double * c, int ldc);
int LAPACKE_sormqr(int matrix_order, char side, char trans, int m, int n, int k, float const * a, int lda, float const * tau, float * c, int ldc);
int LAPACKE_dormqr(int matrix_order, char side, char trans, int m, int n, int k, double const * a, int lda, double const * tau, double * c, int ldc);
int LAPACKE_sormrq(int matrix_order, char side, char trans, int m, int n, int k, float const * a, int lda, float const * tau, float * c, int ldc);
int LAPACKE_dormrq(int matrix_order, char side, char trans, int m, int n, int k, double const * a, int lda, double const * tau, double * c, int ldc);
int LAPACKE_sormrz(int matrix_order, char side, char trans, int m, int n, int k, int l, float const * a, int lda, float const * tau, float * c, int ldc);
int LAPACKE_dormrz(int matrix_order, char side, char trans, int m, int n, int k, int l, double const * a, int lda, double const * tau, double * c, int ldc);
int LAPACKE_sormtr(int matrix_order, char side, char uplo, char trans, int m, int n, float const * a, int lda, float const * tau, float * c, int ldc);
int LAPACKE_dormtr(int matrix_order, char side, char uplo, char trans, int m, int n, double const * a, int lda, double const * tau, double * c, int ldc);
int LAPACKE_spbcon(int matrix_order, char uplo, int n, int kd, float const * ab, int ldab, float anorm, float * rcond);
int LAPACKE_dpbcon(int matrix_order, char uplo, int n, int kd, double const * ab, int ldab, double anorm, double * rcond);
int LAPACKE_cpbcon(int matrix_order, char uplo, int n, int kd, float _Complex const * ab, int ldab, float anorm, float * rcond);
int LAPACKE_zpbcon(int matrix_order, char uplo, int n, int kd, double _Complex const * ab, int ldab, double anorm, double * rcond);
int LAPACKE_spbequ(int matrix_order, char uplo, int n, int kd, float const * ab, int ldab, float * s, float * scond, float * amax);
int LAPACKE_dpbequ(int matrix_order, char uplo, int n, int kd, double const * ab, int ldab, double * s, double * scond, double * amax);
int LAPACKE_cpbequ(int matrix_order, char uplo, int n, int kd, float _Complex const * ab, int ldab, float * s, float * scond, float * amax);
int LAPACKE_zpbequ(int matrix_order, char uplo, int n, int kd, double _Complex const * ab, int ldab, double * s, double * scond, double * amax);
int LAPACKE_spbrfs(int matrix_order, char uplo, int n, int kd, int nrhs, float const * ab, int ldab, float const * afb, int ldafb, float const * b, int ldb, float * x, int ldx, float * ferr, float * berr);
int LAPACKE_dpbrfs(int matrix_order, char uplo, int n, int kd, int nrhs, double const * ab, int ldab, double const * afb, int ldafb, double const * b, int ldb, double * x, int ldx, double * ferr, double * berr);
int LAPACKE_cpbrfs(int matrix_order, char uplo, int n, int kd, int nrhs, float _Complex const * ab, int ldab, float _Complex const * afb, int ldafb, float _Complex const * b, int ldb, float _Complex * x, int ldx, float * ferr, float * berr);
int LAPACKE_zpbrfs(int matrix_order, char uplo, int n, int kd, int nrhs, double _Complex const * ab, int ldab, double _Complex const * afb, int ldafb, double _Complex const * b, int ldb, double _Complex * x, int ldx, double * ferr, double * berr);
int LAPACKE_spbstf(int matrix_order, char uplo, int n, int kb, float * bb, int ldbb);
int LAPACKE_dpbstf(int matrix_order, char uplo, int n, int kb, double * bb, int ldbb);
int LAPACKE_cpbstf(int matrix_order, char uplo, int n, int kb, float _Complex * bb, int ldbb);
int LAPACKE_zpbstf(int matrix_order, char uplo, int n, int kb, double _Complex * bb, int ldbb);
int LAPACKE_spbsv(int matrix_order, char uplo, int n, int kd, int nrhs, float * ab, int ldab, float * b, int ldb);
int LAPACKE_dpbsv(int matrix_order, char uplo, int n, int kd, int nrhs, double * ab, int ldab, double * b, int ldb);
int LAPACKE_cpbsv(int matrix_order, char uplo, int n, int kd, int nrhs, float _Complex * ab, int ldab, float _Complex * b, int ldb);
int LAPACKE_zpbsv(int matrix_order, char uplo, int n, int kd, int nrhs, double _Complex * ab, int ldab, double _Complex * b, int ldb);
int LAPACKE_spbsvx(int matrix_order, char fact, char uplo, int n, int kd, int nrhs, float * ab, int ldab, float * afb, int ldafb, char * equed, float * s, float * b, int ldb, float * x, int ldx, float * rcond, float * ferr, float * berr);
int LAPACKE_dpbsvx(int matrix_order, char fact, char uplo, int n, int kd, int nrhs, double * ab, int ldab, double * afb, int ldafb, char * equed, double * s, double * b, int ldb, double * x, int ldx, double * rcond, double * ferr, double * berr);
int LAPACKE_cpbsvx(int matrix_order, char fact, char uplo, int n, int kd, int nrhs, float _Complex * ab, int ldab, float _Complex * afb, int ldafb, char * equed, float * s, float _Complex * b, int ldb, float _Complex * x, int ldx, float * rcond, float * ferr, float * berr);
int LAPACKE_zpbsvx(int matrix_order, char fact, char uplo, int n, int kd, int nrhs, double _Complex * ab, int ldab, double _Complex * afb, int ldafb, char * equed, double * s, double _Complex * b, int ldb, double _Complex * x, int ldx, double * rcond, double * ferr, double * berr);
int LAPACKE_spbtrf(int matrix_order, char uplo, int n, int kd, float * ab, int ldab);
int LAPACKE_dpbtrf(int matrix_order, char uplo, int n, int kd, double * ab, int ldab);
int LAPACKE_cpbtrf(int matrix_order, char uplo, int n, int kd, float _Complex * ab, int ldab);
int LAPACKE_zpbtrf(int matrix_order, char uplo, int n, int kd, double _Complex * ab, int ldab);
int LAPACKE_spbtrs(int matrix_order, char uplo, int n, int kd, int nrhs, float const * ab, int ldab, float * b, int ldb);
int LAPACKE_dpbtrs(int matrix_order, char uplo, int n, int kd, int nrhs, double const * ab, int ldab, double * b, int ldb);
int LAPACKE_cpbtrs(int matrix_order, char uplo, int n, int kd, int nrhs, float _Complex const * ab, int ldab, float _Complex * b, int ldb);
int LAPACKE_zpbtrs(int matrix_order, char uplo, int n, int kd, int nrhs, double _Complex const * ab, int ldab, double _Complex * b, int ldb);
int LAPACKE_spftrf(int matrix_order, char transr, char uplo, int n, float * a);
int LAPACKE_dpftrf(int matrix_order, char transr, char uplo, int n, double * a);
int LAPACKE_cpftrf(int matrix_order, char transr, char uplo, int n, float _Complex * a);
int LAPACKE_zpftrf(int matrix_order, char transr, char uplo, int n, double _Complex * a);
int LAPACKE_spftri(int matrix_order, char transr, char uplo, int n, float * a);
int LAPACKE_dpftri(int matrix_order, char transr, char uplo, int n, double * a);
int LAPACKE_cpftri(int matrix_order, char transr, char uplo, int n, float _Complex * a);
int LAPACKE_zpftri(int matrix_order, char transr, char uplo, int n, double _Complex * a);
int LAPACKE_spftrs(int matrix_order, char transr, char uplo, int n, int nrhs, float const * a, float * b, int ldb);
int LAPACKE_dpftrs(int matrix_order, char transr, char uplo, int n, int nrhs, double const * a, double * b, int ldb);
int LAPACKE_cpftrs(int matrix_order, char transr, char uplo, int n, int nrhs, float _Complex const * a, float _Complex * b, int ldb);
int LAPACKE_zpftrs(int matrix_order, char transr, char uplo, int n, int nrhs, double _Complex const * a, double _Complex * b, int ldb);
int LAPACKE_spocon(int matrix_order, char uplo, int n, float const * a, int lda, float anorm, float * rcond);
int LAPACKE_dpocon(int matrix_order, char uplo, int n, double const * a, int lda, double anorm, double * rcond);
int LAPACKE_cpocon(int matrix_order, char uplo, int n, float _Complex const * a, int lda, float anorm, float * rcond);
int LAPACKE_zpocon(int matrix_order, char uplo, int n, double _Complex const * a, int lda, double anorm, double * rcond);
int LAPACKE_spoequ(int matrix_order, int n, float const * a, int lda, float * s, float * scond, float * amax);
int LAPACKE_dpoequ(int matrix_order, int n, double const * a, int lda, double * s, double * scond, double * amax);
int LAPACKE_cpoequ(int matrix_order, int n, float _Complex const * a, int lda, float * s, float * scond, float * amax);
int LAPACKE_zpoequ(int matrix_order, int n, double _Complex const * a, int lda, double * s, double * scond, double * amax);
int LAPACKE_spoequb(int matrix_order, int n, float const * a, int lda, float * s, float * scond, float * amax);
int LAPACKE_dpoequb(int matrix_order, int n, double const * a, int lda, double * s, double * scond, double * amax);
int LAPACKE_cpoequb(int matrix_order, int n, float _Complex const * a, int lda, float * s, float * scond, float * amax);
int LAPACKE_zpoequb(int matrix_order, int n, double _Complex const * a, int lda, double * s, double * scond, double * amax);
int LAPACKE_sporfs(int matrix_order, char uplo, int n, int nrhs, float const * a, int lda, float const * af, int ldaf, float const * b, int ldb, float * x, int ldx, float * ferr, float * berr);
int LAPACKE_dporfs(int matrix_order, char uplo, int n, int nrhs, double const * a, int lda, double const * af, int ldaf, double const * b, int ldb, double * x, int ldx, double * ferr, double * berr);
int LAPACKE_cporfs(int matrix_order, char uplo, int n, int nrhs, float _Complex const * a, int lda, float _Complex const * af, int ldaf, float _Complex const * b, int ldb, float _Complex * x, int ldx, float * ferr, float * berr);
int LAPACKE_zporfs(int matrix_order, char uplo, int n, int nrhs, double _Complex const * a, int lda, double _Complex const * af, int ldaf, double _Complex const * b, int ldb, double _Complex * x, int ldx, double * ferr, double * berr);
int LAPACKE_sporfsx(int matrix_order, char uplo, char equed, int n, int nrhs, float const * a, int lda, float const * af, int ldaf, float const * s, float const * b, int ldb, float * x, int ldx, float * rcond, float * berr, int n_err_bnds, float * err_bnds_norm, float * err_bnds_comp, int nparams, float * params);
int LAPACKE_dporfsx(int matrix_order, char uplo, char equed, int n, int nrhs, double const * a, int lda, double const * af, int ldaf, double const * s, double const * b, int ldb, double * x, int ldx, double * rcond, double * berr, int n_err_bnds, double * err_bnds_norm, double * err_bnds_comp, int nparams, double * params);
int LAPACKE_cporfsx(int matrix_order, char uplo, char equed, int n, int nrhs, float _Complex const * a, int lda, float _Complex const * af, int ldaf, float const * s, float _Complex const * b, int ldb, float _Complex * x, int ldx, float * rcond, float * berr, int n_err_bnds, float * err_bnds_norm, float * err_bnds_comp, int nparams, float * params);
int LAPACKE_zporfsx(int matrix_order, char uplo, char equed, int n, int nrhs, double _Complex const * a, int lda, double _Complex const * af, int ldaf, double const * s, double _Complex const * b, int ldb, double _Complex * x, int ldx, double * rcond, double * berr, int n_err_bnds, double * err_bnds_norm, double * err_bnds_comp, int nparams, double * params);
int LAPACKE_sposv(int matrix_order, char uplo, int n, int nrhs, float * a, int lda, float * b, int ldb);
int LAPACKE_dposv(int matrix_order, char uplo, int n, int nrhs, double * a, int lda, double * b, int ldb);
int LAPACKE_cposv(int matrix_order, char uplo, int n, int nrhs, float _Complex * a, int lda, float _Complex * b, int ldb);
int LAPACKE_zposv(int matrix_order, char uplo, int n, int nrhs, double _Complex * a, int lda, double _Complex * b, int ldb);
int LAPACKE_dsposv(int matrix_order, char uplo, int n, int nrhs, double * a, int lda, double * b, int ldb, double * x, int ldx, int * iter);
int LAPACKE_zcposv(int matrix_order, char uplo, int n, int nrhs, double _Complex * a, int lda, double _Complex * b, int ldb, double _Complex * x, int ldx, int * iter);
int LAPACKE_sposvx(int matrix_order, char fact, char uplo, int n, int nrhs, float * a, int lda, float * af, int ldaf, char * equed, float * s, float * b, int ldb, float * x, int ldx, float * rcond, float * ferr, float * berr);
int LAPACKE_dposvx(int matrix_order, char fact, char uplo, int n, int nrhs, double * a, int lda, double * af, int ldaf, char * equed, double * s, double * b, int ldb, double * x, int ldx, double * rcond, double * ferr, double * berr);
int LAPACKE_cposvx(int matrix_order, char fact, char uplo, int n, int nrhs, float _Complex * a, int lda, float _Complex * af, int ldaf, char * equed, float * s, float _Complex * b, int ldb, float _Complex * x, int ldx, float * rcond, float * ferr, float * berr);
int LAPACKE_zposvx(int matrix_order, char fact, char uplo, int n, int nrhs, double _Complex * a, int lda, double _Complex * af, int ldaf, char * equed, double * s, double _Complex * b, int ldb, double _Complex * x, int ldx, double * rcond, double * ferr, double * berr);
int LAPACKE_sposvxx(int matrix_order, char fact, char uplo, int n, int nrhs, float * a, int lda, float * af, int ldaf, char * equed, float * s, float * b, int ldb, float * x, int ldx, float * rcond, float * rpvgrw, float * berr, int n_err_bnds, float * err_bnds_norm, float * err_bnds_comp, int nparams, float * params);
int LAPACKE_dposvxx(int matrix_order, char fact, char uplo, int n, int nrhs, double * a, int lda, double * af, int ldaf, char * equed, double * s, double * b, int ldb, double * x, int ldx, double * rcond, double * rpvgrw, double * berr, int n_err_bnds, double * err_bnds_norm, double * err_bnds_comp, int nparams, double * params);
int LAPACKE_cposvxx(int matrix_order, char fact, char uplo, int n, int nrhs, float _Complex * a, int lda, float _Complex * af, int ldaf, char * equed, float * s, float _Complex * b, int ldb, float _Complex * x, int ldx, float * rcond, float * rpvgrw, float * berr, int n_err_bnds, float * err_bnds_norm, float * err_bnds_comp, int nparams, float * params);
int LAPACKE_zposvxx(int matrix_order, char fact, char uplo, int n, int nrhs, double _Complex * a, int lda, double _Complex * af, int ldaf, char * equed, double * s, double _Complex * b, int ldb, double _Complex * x, int ldx, double * rcond, double * rpvgrw, double * berr, int n_err_bnds, double * err_bnds_norm, double * err_bnds_comp, int nparams, double * params);
int LAPACKE_spotrf(int matrix_order, char uplo, int n, float * a, int lda);
int LAPACKE_dpotrf(int matrix_order, char uplo, int n, double * a, int lda);
int LAPACKE_cpotrf(int matrix_order, char uplo, int n, float _Complex * a, int lda);
int LAPACKE_zpotrf(int matrix_order, char uplo, int n, double _Complex * a, int lda);
int LAPACKE_spotri(int matrix_order, char uplo, int n, float * a, int lda);
int LAPACKE_dpotri(int matrix_order, char uplo, int n, double * a, int lda);
int LAPACKE_cpotri(int matrix_order, char uplo, int n, float _Complex * a, int lda);
int LAPACKE_zpotri(int matrix_order, char uplo, int n, double _Complex * a, int lda);
int LAPACKE_spotrs(int matrix_order, char uplo, int n, int nrhs, float const * a, int lda, float * b, int ldb);
int LAPACKE_dpotrs(int matrix_order, char uplo, int n, int nrhs, double const * a, int lda, double * b, int ldb);
int LAPACKE_cpotrs(int matrix_order, char uplo, int n, int nrhs, float _Complex const * a, int lda, float _Complex * b, int ldb);
int LAPACKE_zpotrs(int matrix_order, char uplo, int n, int nrhs, double _Complex const * a, int lda, double _Complex * b, int ldb);
int LAPACKE_sppcon(int matrix_order, char uplo, int n, float const * ap, float anorm, float * rcond);
int LAPACKE_dppcon(int matrix_order, char uplo, int n, double const * ap, double anorm, double * rcond);
int LAPACKE_cppcon(int matrix_order, char uplo, int n, float _Complex const * ap, float anorm, float * rcond);
int LAPACKE_zppcon(int matrix_order, char uplo, int n, double _Complex const * ap, double anorm, double * rcond);
int LAPACKE_sppequ(int matrix_order, char uplo, int n, float const * ap, float * s, float * scond, float * amax);
int LAPACKE_dppequ(int matrix_order, char uplo, int n, double const * ap, double * s, double * scond, double * amax);
int LAPACKE_cppequ(int matrix_order, char uplo, int n, float _Complex const * ap, float * s, float * scond, float * amax);
int LAPACKE_zppequ(int matrix_order, char uplo, int n, double _Complex const * ap, double * s, double * scond, double * amax);
int LAPACKE_spprfs(int matrix_order, char uplo, int n, int nrhs, float const * ap, float const * afp, float const * b, int ldb, float * x, int ldx, float * ferr, float * berr);
int LAPACKE_dpprfs(int matrix_order, char uplo, int n, int nrhs, double const * ap, double const * afp, double const * b, int ldb, double * x, int ldx, double * ferr, double * berr);
int LAPACKE_cpprfs(int matrix_order, char uplo, int n, int nrhs, float _Complex const * ap, float _Complex const * afp, float _Complex const * b, int ldb, float _Complex * x, int ldx, float * ferr, float * berr);
int LAPACKE_zpprfs(int matrix_order, char uplo, int n, int nrhs, double _Complex const * ap, double _Complex const * afp, double _Complex const * b, int ldb, double _Complex * x, int ldx, double * ferr, double * berr);
int LAPACKE_sppsv(int matrix_order, char uplo, int n, int nrhs, float * ap, float * b, int ldb);
int LAPACKE_dppsv(int matrix_order, char uplo, int n, int nrhs, double * ap, double * b, int ldb);
int LAPACKE_cppsv(int matrix_order, char uplo, int n, int nrhs, float _Complex * ap, float _Complex * b, int ldb);
int LAPACKE_zppsv(int matrix_order, char uplo, int n, int nrhs, double _Complex * ap, double _Complex * b, int ldb);
int LAPACKE_sppsvx(int matrix_order, char fact, char uplo, int n, int nrhs, float * ap, float * afp, char * equed, float * s, float * b, int ldb, float * x, int ldx, float * rcond, float * ferr, float * berr);
int LAPACKE_dppsvx(int matrix_order, char fact, char uplo, int n, int nrhs, double * ap, double * afp, char * equed, double * s, double * b, int ldb, double * x, int ldx, double * rcond, double * ferr, double * berr);
int LAPACKE_cppsvx(int matrix_order, char fact, char uplo, int n, int nrhs, float _Complex * ap, float _Complex * afp, char * equed, float * s, float _Complex * b, int ldb, float _Complex * x, int ldx, float * rcond, float * ferr, float * berr);
int LAPACKE_zppsvx(int matrix_order, char fact, char uplo, int n, int nrhs, double _Complex * ap, double _Complex * afp, char * equed, double * s, double _Complex * b, int ldb, double _Complex * x, int ldx, double * rcond, double * ferr, double * berr);
int LAPACKE_spptrf(int matrix_order, char uplo, int n, float * ap);
int LAPACKE_dpptrf(int matrix_order, char uplo, int n, double * ap);
int LAPACKE_cpptrf(int matrix_order, char uplo, int n, float _Complex * ap);
int LAPACKE_zpptrf(int matrix_order, char uplo, int n, double _Complex * ap);
int LAPACKE_spptri(int matrix_order, char uplo, int n, float * ap);
int LAPACKE_dpptri(int matrix_order, char uplo, int n, double * ap);
int LAPACKE_cpptri(int matrix_order, char uplo, int n, float _Complex * ap);
int LAPACKE_zpptri(int matrix_order, char uplo, int n, double _Complex * ap);
int LAPACKE_spptrs(int matrix_order, char uplo, int n, int nrhs, float const * ap, float * b, int ldb);
int LAPACKE_dpptrs(int matrix_order, char uplo, int n, int nrhs, double const * ap, double * b, int ldb);
int LAPACKE_cpptrs(int matrix_order, char uplo, int n, int nrhs, float _Complex const * ap, float _Complex * b, int ldb);
int LAPACKE_zpptrs(int matrix_order, char uplo, int n, int nrhs, double _Complex const * ap, double _Complex * b, int ldb);
int LAPACKE_spstrf(int matrix_order, char uplo, int n, float * a, int lda, int * piv, int * rank, float tol);
int LAPACKE_dpstrf(int matrix_order, char uplo, int n, double * a, int lda, int * piv, int * rank, double tol);
int LAPACKE_cpstrf(int matrix_order, char uplo, int n, float _Complex * a, int lda, int * piv, int * rank, float tol);
int LAPACKE_zpstrf(int matrix_order, char uplo, int n, double _Complex * a, int lda, int * piv, int * rank, double tol);
int LAPACKE_sptcon(int n, float const * d, float const * e, float anorm, float * rcond);
int LAPACKE_dptcon(int n, double const * d, double const * e, double anorm, double * rcond);
int LAPACKE_cptcon(int n, float const * d, float _Complex const * e, float anorm, float * rcond);
int LAPACKE_zptcon(int n, double const * d, double _Complex const * e, double anorm, double * rcond);
int LAPACKE_spteqr(int matrix_order, char compz, int n, float * d, float * e, float * z, int ldz);
int LAPACKE_dpteqr(int matrix_order, char compz, int n, double * d, double * e, double * z, int ldz);
int LAPACKE_cpteqr(int matrix_order, char compz, int n, float * d, float * e, float _Complex * z, int ldz);
int LAPACKE_zpteqr(int matrix_order, char compz, int n, double * d, double * e, double _Complex * z, int ldz);
int LAPACKE_sptrfs(int matrix_order, int n, int nrhs, float const * d, float const * e, float const * df, float const * ef, float const * b, int ldb, float * x, int ldx, float * ferr, float * berr);
int LAPACKE_dptrfs(int matrix_order, int n, int nrhs, double const * d, double const * e, double const * df, double const * ef, double const * b, int ldb, double * x, int ldx, double * ferr, double * berr);
int LAPACKE_cptrfs(int matrix_order, char uplo, int n, int nrhs, float const * d, float _Complex const * e, float const * df, float _Complex const * ef, float _Complex const * b, int ldb, float _Complex * x, int ldx, float * ferr, float * berr);
int LAPACKE_zptrfs(int matrix_order, char uplo, int n, int nrhs, double const * d, double _Complex const * e, double const * df, double _Complex const * ef, double _Complex const * b, int ldb, double _Complex * x, int ldx, double * ferr, double * berr);
int LAPACKE_sptsv(int matrix_order, int n, int nrhs, float * d, float * e, float * b, int ldb);
int LAPACKE_dptsv(int matrix_order, int n, int nrhs, double * d, double * e, double * b, int ldb);
int LAPACKE_cptsv(int matrix_order, int n, int nrhs, float * d, float _Complex * e, float _Complex * b, int ldb);
int LAPACKE_zptsv(int matrix_order, int n, int nrhs, double * d, double _Complex * e, double _Complex * b, int ldb);
int LAPACKE_sptsvx(int matrix_order, char fact, int n, int nrhs, float const * d, float const * e, float * df, float * ef, float const * b, int ldb, float * x, int ldx, float * rcond, float * ferr, float * berr);
int LAPACKE_dptsvx(int matrix_order, char fact, int n, int nrhs, double const * d, double const * e, double * df, double * ef, double const * b, int ldb, double * x, int ldx, double * rcond, double * ferr, double * berr);
int LAPACKE_cptsvx(int matrix_order, char fact, int n, int nrhs, float const * d, float _Complex const * e, float * df, float _Complex * ef, float _Complex const * b, int ldb, float _Complex * x, int ldx, float * rcond, float * ferr, float * berr);
int LAPACKE_zptsvx(int matrix_order, char fact, int n, int nrhs, double const * d, double _Complex const * e, double * df, double _Complex * ef, double _Complex const * b, int ldb, double _Complex * x, int ldx, double * rcond, double * ferr, double * berr);
int LAPACKE_spttrf(int n, float * d, float * e);
int LAPACKE_dpttrf(int n, double * d, double * e);
int LAPACKE_cpttrf(int n, float * d, float _Complex * e);
int LAPACKE_zpttrf(int n, double * d, double _Complex * e);
int LAPACKE_spttrs(int matrix_order, int n, int nrhs, float const * d, float const * e, float * b, int ldb);
int LAPACKE_dpttrs(int matrix_order, int n, int nrhs, double const * d, double const * e, double * b, int ldb);
int LAPACKE_cpttrs(int matrix_order, char uplo, int n, int nrhs, float const * d, float _Complex const * e, float _Complex * b, int ldb);
int LAPACKE_zpttrs(int matrix_order, char uplo, int n, int nrhs, double const * d, double _Complex const * e, double _Complex * b, int ldb);
int LAPACKE_ssbev(int matrix_order, char jobz, char uplo, int n, int kd, float * ab, int ldab, float * w, float * z, int ldz);
int LAPACKE_dsbev(int matrix_order, char jobz, char uplo, int n, int kd, double * ab, int ldab, double * w, double * z, int ldz);
int LAPACKE_ssbevd(int matrix_order, char jobz, char uplo, int n, int kd, float * ab, int ldab, float * w, float * z, int ldz);
int LAPACKE_dsbevd(int matrix_order, char jobz, char uplo, int n, int kd, double * ab, int ldab, double * w, double * z, int ldz);
int LAPACKE_ssbevx(int matrix_order, char jobz, char range, char uplo, int n, int kd, float * ab, int ldab, float * q, int ldq, float vl, float vu, int il, int iu, float abstol, int * m, float * w, float * z, int ldz, int * ifail);
int LAPACKE_dsbevx(int matrix_order, char jobz, char range, char uplo, int n, int kd, double * ab, int ldab, double * q, int ldq, double vl, double vu, int il, int iu, double abstol, int * m, double * w, double * z, int ldz, int * ifail);
int LAPACKE_ssbgst(int matrix_order, char vect, char uplo, int n, int ka, int kb, float * ab, int ldab, float const * bb, int ldbb, float * x, int ldx);
int LAPACKE_dsbgst(int matrix_order, char vect, char uplo, int n, int ka, int kb, double * ab, int ldab, double const * bb, int ldbb, double * x, int ldx);
int LAPACKE_ssbgv(int matrix_order, char jobz, char uplo, int n, int ka, int kb, float * ab, int ldab, float * bb, int ldbb, float * w, float * z, int ldz);
int LAPACKE_dsbgv(int matrix_order, char jobz, char uplo, int n, int ka, int kb, double * ab, int ldab, double * bb, int ldbb, double * w, double * z, int ldz);
int LAPACKE_ssbgvd(int matrix_order, char jobz, char uplo, int n, int ka, int kb, float * ab, int ldab, float * bb, int ldbb, float * w, float * z, int ldz);
int LAPACKE_dsbgvd(int matrix_order, char jobz, char uplo, int n, int ka, int kb, double * ab, int ldab, double * bb, int ldbb, double * w, double * z, int ldz);
int LAPACKE_ssbgvx(int matrix_order, char jobz, char range, char uplo, int n, int ka, int kb, float * ab, int ldab, float * bb, int ldbb, float * q, int ldq, float vl, float vu, int il, int iu, float abstol, int * m, float * w, float * z, int ldz, int * ifail);
int LAPACKE_dsbgvx(int matrix_order, char jobz, char range, char uplo, int n, int ka, int kb, double * ab, int ldab, double * bb, int ldbb, double * q, int ldq, double vl, double vu, int il, int iu, double abstol, int * m, double * w, double * z, int ldz, int * ifail);
int LAPACKE_ssbtrd(int matrix_order, char vect, char uplo, int n, int kd, float * ab, int ldab, float * d, float * e, float * q, int ldq);
int LAPACKE_dsbtrd(int matrix_order, char vect, char uplo, int n, int kd, double * ab, int ldab, double * d, double * e, double * q, int ldq);
int LAPACKE_ssfrk(int matrix_order, char transr, char uplo, char trans, int n, int k, float alpha, float const * a, int lda, float beta, float * c);
int LAPACKE_dsfrk(int matrix_order, char transr, char uplo, char trans, int n, int k, double alpha, double const * a, int lda, double beta, double * c);
int LAPACKE_sspcon(int matrix_order, char uplo, int n, float const * ap, int const * ipiv, float anorm, float * rcond);
int LAPACKE_dspcon(int matrix_order, char uplo, int n, double const * ap, int const * ipiv, double anorm, double * rcond);
int LAPACKE_cspcon(int matrix_order, char uplo, int n, float _Complex const * ap, int const * ipiv, float anorm, float * rcond);
int LAPACKE_zspcon(int matrix_order, char uplo, int n, double _Complex const * ap, int const * ipiv, double anorm, double * rcond);
int LAPACKE_sspev(int matrix_order, char jobz, char uplo, int n, float * ap, float * w, float * z, int ldz);
int LAPACKE_dspev(int matrix_order, char jobz, char uplo, int n, double * ap, double * w, double * z, int ldz);
int LAPACKE_sspevd(int matrix_order, char jobz, char uplo, int n, float * ap, float * w, float * z, int ldz);
int LAPACKE_dspevd(int matrix_order, char jobz, char uplo, int n, double * ap, double * w, double * z, int ldz);
int LAPACKE_sspevx(int matrix_order, char jobz, char range, char uplo, int n, float * ap, float vl, float vu, int il, int iu, float abstol, int * m, float * w, float * z, int ldz, int * ifail);
int LAPACKE_dspevx(int matrix_order, char jobz, char range, char uplo, int n, double * ap, double vl, double vu, int il, int iu, double abstol, int * m, double * w, double * z, int ldz, int * ifail);
int LAPACKE_sspgst(int matrix_order, int itype, char uplo, int n, float * ap, float const * bp);
int LAPACKE_dspgst(int matrix_order, int itype, char uplo, int n, double * ap, double const * bp);
int LAPACKE_sspgv(int matrix_order, int itype, char jobz, char uplo, int n, float * ap, float * bp, float * w, float * z, int ldz);
int LAPACKE_dspgv(int matrix_order, int itype, char jobz, char uplo, int n, double * ap, double * bp, double * w, double * z, int ldz);
int LAPACKE_sspgvd(int matrix_order, int itype, char jobz, char uplo, int n, float * ap, float * bp, float * w, float * z, int ldz);
int LAPACKE_dspgvd(int matrix_order, int itype, char jobz, char uplo, int n, double * ap, double * bp, double * w, double * z, int ldz);
int LAPACKE_sspgvx(int matrix_order, int itype, char jobz, char range, char uplo, int n, float * ap, float * bp, float vl, float vu, int il, int iu, float abstol, int * m, float * w, float * z, int ldz, int * ifail);
int LAPACKE_dspgvx(int matrix_order, int itype, char jobz, char range, char uplo, int n, double * ap, double * bp, double vl, double vu, int il, int iu, double abstol, int * m, double * w, double * z, int ldz, int * ifail);
int LAPACKE_ssprfs(int matrix_order, char uplo, int n, int nrhs, float const * ap, float const * afp, int const * ipiv, float const * b, int ldb, float * x, int ldx, float * ferr, float * berr);
int LAPACKE_dsprfs(int matrix_order, char uplo, int n, int nrhs, double const * ap, double const * afp, int const * ipiv, double const * b, int ldb, double * x, int ldx, double * ferr, double * berr);
int LAPACKE_csprfs(int matrix_order, char uplo, int n, int nrhs, float _Complex const * ap, float _Complex const * afp, int const * ipiv, float _Complex const * b, int ldb, float _Complex * x, int ldx, float * ferr, float * berr);
int LAPACKE_zsprfs(int matrix_order, char uplo, int n, int nrhs, double _Complex const * ap, double _Complex const * afp, int const * ipiv, double _Complex const * b, int ldb, double _Complex * x, int ldx, double * ferr, double * berr);
int LAPACKE_sspsv(int matrix_order, char uplo, int n, int nrhs, float * ap, int * ipiv, float * b, int ldb);
int LAPACKE_dspsv(int matrix_order, char uplo, int n, int nrhs, double * ap, int * ipiv, double * b, int ldb);
int LAPACKE_cspsv(int matrix_order, char uplo, int n, int nrhs, float _Complex * ap, int * ipiv, float _Complex * b, int ldb);
int LAPACKE_zspsv(int matrix_order, char uplo, int n, int nrhs, double _Complex * ap, int * ipiv, double _Complex * b, int ldb);
int LAPACKE_sspsvx(int matrix_order, char fact, char uplo, int n, int nrhs, float const * ap, float * afp, int * ipiv, float const * b, int ldb, float * x, int ldx, float * rcond, float * ferr, float * berr);
int LAPACKE_dspsvx(int matrix_order, char fact, char uplo, int n, int nrhs, double const * ap, double * afp, int * ipiv, double const * b, int ldb, double * x, int ldx, double * rcond, double * ferr, double * berr);
int LAPACKE_cspsvx(int matrix_order, char fact, char uplo, int n, int nrhs, float _Complex const * ap, float _Complex * afp, int * ipiv, float _Complex const * b, int ldb, float _Complex * x, int ldx, float * rcond, float * ferr, float * berr);
int LAPACKE_zspsvx(int matrix_order, char fact, char uplo, int n, int nrhs, double _Complex const * ap, double _Complex * afp, int * ipiv, double _Complex const * b, int ldb, double _Complex * x, int ldx, double * rcond, double * ferr, double * berr);
int LAPACKE_ssptrd(int matrix_order, char uplo, int n, float * ap, float * d, float * e, float * tau);
int LAPACKE_dsptrd(int matrix_order, char uplo, int n, double * ap, double * d, double * e, double * tau);
int LAPACKE_ssptrf(int matrix_order, char uplo, int n, float * ap, int * ipiv);
int LAPACKE_dsptrf(int matrix_order, char uplo, int n, double * ap, int * ipiv);
int LAPACKE_csptrf(int matrix_order, char uplo, int n, float _Complex * ap, int * ipiv);
int LAPACKE_zsptrf(int matrix_order, char uplo, int n, double _Complex * ap, int * ipiv);
int LAPACKE_ssptri(int matrix_order, char uplo, int n, float * ap, int const * ipiv);
int LAPACKE_dsptri(int matrix_order, char uplo, int n, double * ap, int const * ipiv);
int LAPACKE_csptri(int matrix_order, char uplo, int n, float _Complex * ap, int const * ipiv);
int LAPACKE_zsptri(int matrix_order, char uplo, int n, double _Complex * ap, int const * ipiv);
int LAPACKE_ssptrs(int matrix_order, char uplo, int n, int nrhs, float const * ap, int const * ipiv, float * b, int ldb);
int LAPACKE_dsptrs(int matrix_order, char uplo, int n, int nrhs, double const * ap, int const * ipiv, double * b, int ldb);
int LAPACKE_csptrs(int matrix_order, char uplo, int n, int nrhs, float _Complex const * ap, int const * ipiv, float _Complex * b, int ldb);
int LAPACKE_zsptrs(int matrix_order, char uplo, int n, int nrhs, double _Complex const * ap, int const * ipiv, double _Complex * b, int ldb);
int LAPACKE_sstebz(char range, char order, int n, float vl, float vu, int il, int iu, float abstol, float const * d, float const * e, int * m, int * nsplit, float * w, int * iblock, int * isplit);
int LAPACKE_dstebz(char range, char order, int n, double vl, double vu, int il, int iu, double abstol, double const * d, double const * e, int * m, int * nsplit, double * w, int * iblock, int * isplit);
int LAPACKE_sstedc(int matrix_order, char compz, int n, float * d, float * e, float * z, int ldz);
int LAPACKE_dstedc(int matrix_order, char compz, int n, double * d, double * e, double * z, int ldz);
int LAPACKE_cstedc(int matrix_order, char compz, int n, float * d, float * e, float _Complex * z, int ldz);
int LAPACKE_zstedc(int matrix_order, char compz, int n, double * d, double * e, double _Complex * z, int ldz);
int LAPACKE_sstegr(int matrix_order, char jobz, char range, int n, float * d, float * e, float vl, float vu, int il, int iu, float abstol, int * m, float * w, float * z, int ldz, int * isuppz);
int LAPACKE_dstegr(int matrix_order, char jobz, char range, int n, double * d, double * e, double vl, double vu, int il, int iu, double abstol, int * m, double * w, double * z, int ldz, int * isuppz);
int LAPACKE_cstegr(int matrix_order, char jobz, char range, int n, float * d, float * e, float vl, float vu, int il, int iu, float abstol, int * m, float * w, float _Complex * z, int ldz, int * isuppz);
int LAPACKE_zstegr(int matrix_order, char jobz, char range, int n, double * d, double * e, double vl, double vu, int il, int iu, double abstol, int * m, double * w, double _Complex * z, int ldz, int * isuppz);
int LAPACKE_sstein(int matrix_order, int n, float const * d, float const * e, int m, float const * w, int const * iblock, int const * isplit, float * z, int ldz, int * ifailv);
int LAPACKE_dstein(int matrix_order, int n, double const * d, double const * e, int m, double const * w, int const * iblock, int const * isplit, double * z, int ldz, int * ifailv);
int LAPACKE_cstein(int matrix_order, int n, float const * d, float const * e, int m, float const * w, int const * iblock, int const * isplit, float _Complex * z, int ldz, int * ifailv);
int LAPACKE_zstein(int matrix_order, int n, double const * d, double const * e, int m, double const * w, int const * iblock, int const * isplit, double _Complex * z, int ldz, int * ifailv);
int LAPACKE_sstemr(int matrix_order, char jobz, char range, int n, float * d, float * e, float vl, float vu, int il, int iu, int * m, float * w, float * z, int ldz, int nzc, int * isuppz, int * tryrac);
int LAPACKE_dstemr(int matrix_order, char jobz, char range, int n, double * d, double * e, double vl, double vu, int il, int iu, int * m, double * w, double * z, int ldz, int nzc, int * isuppz, int * tryrac);
int LAPACKE_cstemr(int matrix_order, char jobz, char range, int n, float * d, float * e, float vl, float vu, int il, int iu, int * m, float * w, float _Complex * z, int ldz, int nzc, int * isuppz, int * tryrac);
int LAPACKE_zstemr(int matrix_order, char jobz, char range, int n, double * d, double * e, double vl, double vu, int il, int iu, int * m, double * w, double _Complex * z, int ldz, int nzc, int * isuppz, int * tryrac);
int LAPACKE_ssteqr(int matrix_order, char compz, int n, float * d, float * e, float * z, int ldz);
int LAPACKE_dsteqr(int matrix_order, char compz, int n, double * d, double * e, double * z, int ldz);
int LAPACKE_csteqr(int matrix_order, char compz, int n, float * d, float * e, float _Complex * z, int ldz);
int LAPACKE_zsteqr(int matrix_order, char compz, int n, double * d, double * e, double _Complex * z, int ldz);
int LAPACKE_ssterf(int n, float * d, float * e);
int LAPACKE_dsterf(int n, double * d, double * e);
int LAPACKE_sstev(int matrix_order, char jobz, int n, float * d, float * e, float * z, int ldz);
int LAPACKE_dstev(int matrix_order, char jobz, int n, double * d, double * e, double * z, int ldz);
int LAPACKE_sstevd(int matrix_order, char jobz, int n, float * d, float * e, float * z, int ldz);
int LAPACKE_dstevd(int matrix_order, char jobz, int n, double * d, double * e, double * z, int ldz);
int LAPACKE_sstevr(int matrix_order, char jobz, char range, int n, float * d, float * e, float vl, float vu, int il, int iu, float abstol, int * m, float * w, float * z, int ldz, int * isuppz);
int LAPACKE_dstevr(int matrix_order, char jobz, char range, int n, double * d, double * e, double vl, double vu, int il, int iu, double abstol, int * m, double * w, double * z, int ldz, int * isuppz);
int LAPACKE_sstevx(int matrix_order, char jobz, char range, int n, float * d, float * e, float vl, float vu, int il, int iu, float abstol, int * m, float * w, float * z, int ldz, int * ifail);
int LAPACKE_dstevx(int matrix_order, char jobz, char range, int n, double * d, double * e, double vl, double vu, int il, int iu, double abstol, int * m, double * w, double * z, int ldz, int * ifail);
int LAPACKE_ssycon(int matrix_order, char uplo, int n, float const * a, int lda, int const * ipiv, float anorm, float * rcond);
int LAPACKE_dsycon(int matrix_order, char uplo, int n, double const * a, int lda, int const * ipiv, double anorm, double * rcond);
int LAPACKE_csycon(int matrix_order, char uplo, int n, float _Complex const * a, int lda, int const * ipiv, float anorm, float * rcond);
int LAPACKE_zsycon(int matrix_order, char uplo, int n, double _Complex const * a, int lda, int const * ipiv, double anorm, double * rcond);
int LAPACKE_ssyequb(int matrix_order, char uplo, int n, float const * a, int lda, float * s, float * scond, float * amax);
int LAPACKE_dsyequb(int matrix_order, char uplo, int n, double const * a, int lda, double * s, double * scond, double * amax);
int LAPACKE_csyequb(int matrix_order, char uplo, int n, float _Complex const * a, int lda, float * s, float * scond, float * amax);
int LAPACKE_zsyequb(int matrix_order, char uplo, int n, double _Complex const * a, int lda, double * s, double * scond, double * amax);
int LAPACKE_ssyev(int matrix_order, char jobz, char uplo, int n, float * a, int lda, float * w);
int LAPACKE_dsyev(int matrix_order, char jobz, char uplo, int n, double * a, int lda, double * w);
int LAPACKE_ssyevd(int matrix_order, char jobz, char uplo, int n, float * a, int lda, float * w);
int LAPACKE_dsyevd(int matrix_order, char jobz, char uplo, int n, double * a, int lda, double * w);
int LAPACKE_ssyevr(int matrix_order, char jobz, char range, char uplo, int n, float * a, int lda, float vl, float vu, int il, int iu, float abstol, int * m, float * w, float * z, int ldz, int * isuppz);
int LAPACKE_dsyevr(int matrix_order, char jobz, char range, char uplo, int n, double * a, int lda, double vl, double vu, int il, int iu, double abstol, int * m, double * w, double * z, int ldz, int * isuppz);
int LAPACKE_ssyevx(int matrix_order, char jobz, char range, char uplo, int n, float * a, int lda, float vl, float vu, int il, int iu, float abstol, int * m, float * w, float * z, int ldz, int * ifail);
int LAPACKE_dsyevx(int matrix_order, char jobz, char range, char uplo, int n, double * a, int lda, double vl, double vu, int il, int iu, double abstol, int * m, double * w, double * z, int ldz, int * ifail);
int LAPACKE_ssygst(int matrix_order, int itype, char uplo, int n, float * a, int lda, float const * b, int ldb);
int LAPACKE_dsygst(int matrix_order, int itype, char uplo, int n, double * a, int lda, double const * b, int ldb);
int LAPACKE_ssygv(int matrix_order, int itype, char jobz, char uplo, int n, float * a, int lda, float * b, int ldb, float * w);
int LAPACKE_dsygv(int matrix_order, int itype, char jobz, char uplo, int n, double * a, int lda, double * b, int ldb, double * w);
int LAPACKE_ssygvd(int matrix_order, int itype, char jobz, char uplo, int n, float * a, int lda, float * b, int ldb, float * w);
int LAPACKE_dsygvd(int matrix_order, int itype, char jobz, char uplo, int n, double * a, int lda, double * b, int ldb, double * w);
int LAPACKE_ssygvx(int matrix_order, int itype, char jobz, char range, char uplo, int n, float * a, int lda, float * b, int ldb, float vl, float vu, int il, int iu, float abstol, int * m, float * w, float * z, int ldz, int * ifail);
int LAPACKE_dsygvx(int matrix_order, int itype, char jobz, char range, char uplo, int n, double * a, int lda, double * b, int ldb, double vl, double vu, int il, int iu, double abstol, int * m, double * w, double * z, int ldz, int * ifail);
int LAPACKE_ssyrfs(int matrix_order, char uplo, int n, int nrhs, float const * a, int lda, float const * af, int ldaf, int const * ipiv, float const * b, int ldb, float * x, int ldx, float * ferr, float * berr);
int LAPACKE_dsyrfs(int matrix_order, char uplo, int n, int nrhs, double const * a, int lda, double const * af, int ldaf, int const * ipiv, double const * b, int ldb, double * x, int ldx, double * ferr, double * berr);
int LAPACKE_csyrfs(int matrix_order, char uplo, int n, int nrhs, float _Complex const * a, int lda, float _Complex const * af, int ldaf, int const * ipiv, float _Complex const * b, int ldb, float _Complex * x, int ldx, float * ferr, float * berr);
int LAPACKE_zsyrfs(int matrix_order, char uplo, int n, int nrhs, double _Complex const * a, int lda, double _Complex const * af, int ldaf, int const * ipiv, double _Complex const * b, int ldb, double _Complex * x, int ldx, double * ferr, double * berr);
int LAPACKE_ssyrfsx(int matrix_order, char uplo, char equed, int n, int nrhs, float const * a, int lda, float const * af, int ldaf, int const * ipiv, float const * s, float const * b, int ldb, float * x, int ldx, float * rcond, float * berr, int n_err_bnds, float * err_bnds_norm, float * err_bnds_comp, int nparams, float * params);
int LAPACKE_dsyrfsx(int matrix_order, char uplo, char equed, int n, int nrhs, double const * a, int lda, double const * af, int ldaf, int const * ipiv, double const * s, double const * b, int ldb, double * x, int ldx, double * rcond, double * berr, int n_err_bnds, double * err_bnds_norm, double * err_bnds_comp, int nparams, double * params);
int LAPACKE_csyrfsx(int matrix_order, char uplo, char equed, int n, int nrhs, float _Complex const * a, int lda, float _Complex const * af, int ldaf, int const * ipiv, float const * s, float _Complex const * b, int ldb, float _Complex * x, int ldx, float * rcond, float * berr, int n_err_bnds, float * err_bnds_norm, float * err_bnds_comp, int nparams, float * params);
int LAPACKE_zsyrfsx(int matrix_order, char uplo, char equed, int n, int nrhs, double _Complex const * a, int lda, double _Complex const * af, int ldaf, int const * ipiv, double const * s, double _Complex const * b, int ldb, double _Complex * x, int ldx, double * rcond, double * berr, int n_err_bnds, double * err_bnds_norm, double * err_bnds_comp, int nparams, double * params);
int LAPACKE_ssysv(int matrix_order, char uplo, int n, int nrhs, float * a, int lda, int * ipiv, float * b, int ldb);
int LAPACKE_dsysv(int matrix_order, char uplo, int n, int nrhs, double * a, int lda, int * ipiv, double * b, int ldb);
int LAPACKE_csysv(int matrix_order, char uplo, int n, int nrhs, float _Complex * a, int lda, int * ipiv, float _Complex * b, int ldb);
int LAPACKE_zsysv(int matrix_order, char uplo, int n, int nrhs, double _Complex * a, int lda, int * ipiv, double _Complex * b, int ldb);
int LAPACKE_ssysvx(int matrix_order, char fact, char uplo, int n, int nrhs, float const * a, int lda, float * af, int ldaf, int * ipiv, float const * b, int ldb, float * x, int ldx, float * rcond, float * ferr, float * berr);
int LAPACKE_dsysvx(int matrix_order, char fact, char uplo, int n, int nrhs, double const * a, int lda, double * af, int ldaf, int * ipiv, double const * b, int ldb, double * x, int ldx, double * rcond, double * ferr, double * berr);
int LAPACKE_csysvx(int matrix_order, char fact, char uplo, int n, int nrhs, float _Complex const * a, int lda, float _Complex * af, int ldaf, int * ipiv, float _Complex const * b, int ldb, float _Complex * x, int ldx, float * rcond, float * ferr, float * berr);
int LAPACKE_zsysvx(int matrix_order, char fact, char uplo, int n, int nrhs, double _Complex const * a, int lda, double _Complex * af, int ldaf, int * ipiv, double _Complex const * b, int ldb, double _Complex * x, int ldx, double * rcond, double * ferr, double * berr);
int LAPACKE_ssysvxx(int matrix_order, char fact, char uplo, int n, int nrhs, float * a, int lda, float * af, int ldaf, int * ipiv, char * equed, float * s, float * b, int ldb, float * x, int ldx, float * rcond, float * rpvgrw, float * berr, int n_err_bnds, float * err_bnds_norm, float * err_bnds_comp, int nparams, float * params);
int LAPACKE_dsysvxx(int matrix_order, char fact, char uplo, int n, int nrhs, double * a, int lda, double * af, int ldaf, int * ipiv, char * equed, double * s, double * b, int ldb, double * x, int ldx, double * rcond, double * rpvgrw, double * berr, int n_err_bnds, double * err_bnds_norm, double * err_bnds_comp, int nparams, double * params);
int LAPACKE_csysvxx(int matrix_order, char fact, char uplo, int n, int nrhs, float _Complex * a, int lda, float _Complex * af, int ldaf, int * ipiv, char * equed, float * s, float _Complex * b, int ldb, float _Complex * x, int ldx, float * rcond, float * rpvgrw, float * berr, int n_err_bnds, float * err_bnds_norm, float * err_bnds_comp, int nparams, float * params);
int LAPACKE_zsysvxx(int matrix_order, char fact, char uplo, int n, int nrhs, double _Complex * a, int lda, double _Complex * af, int ldaf, int * ipiv, char * equed, double * s, double _Complex * b, int ldb, double _Complex * x, int ldx, double * rcond, double * rpvgrw, double * berr, int n_err_bnds, double * err_bnds_norm, double * err_bnds_comp, int nparams, double * params);
int LAPACKE_ssytrd(int matrix_order, char uplo, int n, float * a, int lda, float * d, float * e, float * tau);
int LAPACKE_dsytrd(int matrix_order, char uplo, int n, double * a, int lda, double * d, double * e, double * tau);
int LAPACKE_ssytrf(int matrix_order, char uplo, int n, float * a, int lda, int * ipiv);
int LAPACKE_dsytrf(int matrix_order, char uplo, int n, double * a, int lda, int * ipiv);
int LAPACKE_csytrf(int matrix_order, char uplo, int n, float _Complex * a, int lda, int * ipiv);
int LAPACKE_zsytrf(int matrix_order, char uplo, int n, double _Complex * a, int lda, int * ipiv);
int LAPACKE_ssytri(int matrix_order, char uplo, int n, float * a, int lda, int const * ipiv);
int LAPACKE_dsytri(int matrix_order, char uplo, int n, double * a, int lda, int const * ipiv);
int LAPACKE_csytri(int matrix_order, char uplo, int n, float _Complex * a, int lda, int const * ipiv);
int LAPACKE_zsytri(int matrix_order, char uplo, int n, double _Complex * a, int lda, int const * ipiv);
int LAPACKE_ssytrs(int matrix_order, char uplo, int n, int nrhs, float const * a, int lda, int const * ipiv, float * b, int ldb);
int LAPACKE_dsytrs(int matrix_order, char uplo, int n, int nrhs, double const * a, int lda, int const * ipiv, double * b, int ldb);
int LAPACKE_csytrs(int matrix_order, char uplo, int n, int nrhs, float _Complex const * a, int lda, int const * ipiv, float _Complex * b, int ldb);
int LAPACKE_zsytrs(int matrix_order, char uplo, int n, int nrhs, double _Complex const * a, int lda, int const * ipiv, double _Complex * b, int ldb);
int LAPACKE_stbcon(int matrix_order, char norm, char uplo, char diag, int n, int kd, float const * ab, int ldab, float * rcond);
int LAPACKE_dtbcon(int matrix_order, char norm, char uplo, char diag, int n, int kd, double const * ab, int ldab, double * rcond);
int LAPACKE_ctbcon(int matrix_order, char norm, char uplo, char diag, int n, int kd, float _Complex const * ab, int ldab, float * rcond);
int LAPACKE_ztbcon(int matrix_order, char norm, char uplo, char diag, int n, int kd, double _Complex const * ab, int ldab, double * rcond);
int LAPACKE_stbrfs(int matrix_order, char uplo, char trans, char diag, int n, int kd, int nrhs, float const * ab, int ldab, float const * b, int ldb, float const * x, int ldx, float * ferr, float * berr);
int LAPACKE_dtbrfs(int matrix_order, char uplo, char trans, char diag, int n, int kd, int nrhs, double const * ab, int ldab, double const * b, int ldb, double const * x, int ldx, double * ferr, double * berr);
int LAPACKE_ctbrfs(int matrix_order, char uplo, char trans, char diag, int n, int kd, int nrhs, float _Complex const * ab, int ldab, float _Complex const * b, int ldb, float _Complex const * x, int ldx, float * ferr, float * berr);
int LAPACKE_ztbrfs(int matrix_order, char uplo, char trans, char diag, int n, int kd, int nrhs, double _Complex const * ab, int ldab, double _Complex const * b, int ldb, double _Complex const * x, int ldx, double * ferr, double * berr);
int LAPACKE_stbtrs(int matrix_order, char uplo, char trans, char diag, int n, int kd, int nrhs, float const * ab, int ldab, float * b, int ldb);
int LAPACKE_dtbtrs(int matrix_order, char uplo, char trans, char diag, int n, int kd, int nrhs, double const * ab, int ldab, double * b, int ldb);
int LAPACKE_ctbtrs(int matrix_order, char uplo, char trans, char diag, int n, int kd, int nrhs, float _Complex const * ab, int ldab, float _Complex * b, int ldb);
int LAPACKE_ztbtrs(int matrix_order, char uplo, char trans, char diag, int n, int kd, int nrhs, double _Complex const * ab, int ldab, double _Complex * b, int ldb);
int LAPACKE_stfsm(int matrix_order, char transr, char side, char uplo, char trans, char diag, int m, int n, float alpha, float const * a, float * b, int ldb);
int LAPACKE_dtfsm(int matrix_order, char transr, char side, char uplo, char trans, char diag, int m, int n, double alpha, double const * a, double * b, int ldb);
int LAPACKE_ctfsm(int matrix_order, char transr, char side, char uplo, char trans, char diag, int m, int n, float _Complex alpha, float _Complex const * a, float _Complex * b, int ldb);
int LAPACKE_ztfsm(int matrix_order, char transr, char side, char uplo, char trans, char diag, int m, int n, double _Complex alpha, double _Complex const * a, double _Complex * b, int ldb);
int LAPACKE_stftri(int matrix_order, char transr, char uplo, char diag, int n, float * a);
int LAPACKE_dtftri(int matrix_order, char transr, char uplo, char diag, int n, double * a);
int LAPACKE_ctftri(int matrix_order, char transr, char uplo, char diag, int n, float _Complex * a);
int LAPACKE_ztftri(int matrix_order, char transr, char uplo, char diag, int n, double _Complex * a);
int LAPACKE_stfttp(int matrix_order, char transr, char uplo, int n, float const * arf, float * ap);
int LAPACKE_dtfttp(int matrix_order, char transr, char uplo, int n, double const * arf, double * ap);
int LAPACKE_ctfttp(int matrix_order, char transr, char uplo, int n, float _Complex const * arf, float _Complex * ap);
int LAPACKE_ztfttp(int matrix_order, char transr, char uplo, int n, double _Complex const * arf, double _Complex * ap);
int LAPACKE_stfttr(int matrix_order, char transr, char uplo, int n, float const * arf, float * a, int lda);
int LAPACKE_dtfttr(int matrix_order, char transr, char uplo, int n, double const * arf, double * a, int lda);
int LAPACKE_ctfttr(int matrix_order, char transr, char uplo, int n, float _Complex const * arf, float _Complex * a, int lda);
int LAPACKE_ztfttr(int matrix_order, char transr, char uplo, int n, double _Complex const * arf, double _Complex * a, int lda);
int LAPACKE_stgevc(int matrix_order, char side, char howmny, int const * select, int n, float const * s, int lds, float const * p, int ldp, float * vl, int ldvl, float * vr, int ldvr, int mm, int * m);
int LAPACKE_dtgevc(int matrix_order, char side, char howmny, int const * select, int n, double const * s, int lds, double const * p, int ldp, double * vl, int ldvl, double * vr, int ldvr, int mm, int * m);
int LAPACKE_ctgevc(int matrix_order, char side, char howmny, int const * select, int n, float _Complex const * s, int lds, float _Complex const * p, int ldp, float _Complex * vl, int ldvl, float _Complex * vr, int ldvr, int mm, int * m);
int LAPACKE_ztgevc(int matrix_order, char side, char howmny, int const * select, int n, double _Complex const * s, int lds, double _Complex const * p, int ldp, double _Complex * vl, int ldvl, double _Complex * vr, int ldvr, int mm, int * m);
int LAPACKE_stgexc(int matrix_order, int wantq, int wantz, int n, float * a, int lda, float * b, int ldb, float * q, int ldq, float * z, int ldz, int * ifst, int * ilst);
int LAPACKE_dtgexc(int matrix_order, int wantq, int wantz, int n, double * a, int lda, double * b, int ldb, double * q, int ldq, double * z, int ldz, int * ifst, int * ilst);
int LAPACKE_ctgexc(int matrix_order, int wantq, int wantz, int n, float _Complex * a, int lda, float _Complex * b, int ldb, float _Complex * q, int ldq, float _Complex * z, int ldz, int ifst, int ilst);
int LAPACKE_ztgexc(int matrix_order, int wantq, int wantz, int n, double _Complex * a, int lda, double _Complex * b, int ldb, double _Complex * q, int ldq, double _Complex * z, int ldz, int ifst, int ilst);
int LAPACKE_stgsen(int matrix_order, int ijob, int wantq, int wantz, int const * select, int n, float * a, int lda, float * b, int ldb, float * alphar, float * alphai, float * beta, float * q, int ldq, float * z, int ldz, int * m, float * pl, float * pr, float * dif);
int LAPACKE_dtgsen(int matrix_order, int ijob, int wantq, int wantz, int const * select, int n, double * a, int lda, double * b, int ldb, double * alphar, double * alphai, double * beta, double * q, int ldq, double * z, int ldz, int * m, double * pl, double * pr, double * dif);
int LAPACKE_ctgsen(int matrix_order, int ijob, int wantq, int wantz, int const * select, int n, float _Complex * a, int lda, float _Complex * b, int ldb, float _Complex * alpha, float _Complex * beta, float _Complex * q, int ldq, float _Complex * z, int ldz, int * m, float * pl, float * pr, float * dif);
int LAPACKE_ztgsen(int matrix_order, int ijob, int wantq, int wantz, int const * select, int n, double _Complex * a, int lda, double _Complex * b, int ldb, double _Complex * alpha, double _Complex * beta, double _Complex * q, int ldq, double _Complex * z, int ldz, int * m, double * pl, double * pr, double * dif);
int LAPACKE_stgsja(int matrix_order, char jobu, char jobv, char jobq, int m, int p, int n, int k, int l, float * a, int lda, float * b, int ldb, float tola, float tolb, float * alpha, float * beta, float * u, int ldu, float * v, int ldv, float * q, int ldq, int * ncycle);
int LAPACKE_dtgsja(int matrix_order, char jobu, char jobv, char jobq, int m, int p, int n, int k, int l, double * a, int lda, double * b, int ldb, double tola, double tolb, double * alpha, double * beta, double * u, int ldu, double * v, int ldv, double * q, int ldq, int * ncycle);
int LAPACKE_ctgsja(int matrix_order, char jobu, char jobv, char jobq, int m, int p, int n, int k, int l, float _Complex * a, int lda, float _Complex * b, int ldb, float tola, float tolb, float * alpha, float * beta, float _Complex * u, int ldu, float _Complex * v, int ldv, float _Complex * q, int ldq, int * ncycle);
int LAPACKE_ztgsja(int matrix_order, char jobu, char jobv, char jobq, int m, int p, int n, int k, int l, double _Complex * a, int lda, double _Complex * b, int ldb, double tola, double tolb, double * alpha, double * beta, double _Complex * u, int ldu, double _Complex * v, int ldv, double _Complex * q, int ldq, int * ncycle);
int LAPACKE_stgsna(int matrix_order, char job, char howmny, int const * select, int n, float const * a, int lda, float const * b, int ldb, float const * vl, int ldvl, float const * vr, int ldvr, float * s, float * dif, int mm, int * m);
int LAPACKE_dtgsna(int matrix_order, char job, char howmny, int const * select, int n, double const * a, int lda, double const * b, int ldb, double const * vl, int ldvl, double const * vr, int ldvr, double * s, double * dif, int mm, int * m);
int LAPACKE_ctgsna(int matrix_order, char job, char howmny, int const * select, int n, float _Complex const * a, int lda, float _Complex const * b, int ldb, float _Complex const * vl, int ldvl, float _Complex const * vr, int ldvr, float * s, float * dif, int mm, int * m);
int LAPACKE_ztgsna(int matrix_order, char job, char howmny, int const * select, int n, double _Complex const * a, int lda, double _Complex const * b, int ldb, double _Complex const * vl, int ldvl, double _Complex const * vr, int ldvr, double * s, double * dif, int mm, int * m);
int LAPACKE_stgsyl(int matrix_order, char trans, int ijob, int m, int n, float const * a, int lda, float const * b, int ldb, float * c, int ldc, float const * d, int ldd, float const * e, int lde, float * f, int ldf, float * scale, float * dif);
int LAPACKE_dtgsyl(int matrix_order, char trans, int ijob, int m, int n, double const * a, int lda, double const * b, int ldb, double * c, int ldc, double const * d, int ldd, double const * e, int lde, double * f, int ldf, double * scale, double * dif);
int LAPACKE_ctgsyl(int matrix_order, char trans, int ijob, int m, int n, float _Complex const * a, int lda, float _Complex const * b, int ldb, float _Complex * c, int ldc, float _Complex const * d, int ldd, float _Complex const * e, int lde, float _Complex * f, int ldf, float * scale, float * dif);
int LAPACKE_ztgsyl(int matrix_order, char trans, int ijob, int m, int n, double _Complex const * a, int lda, double _Complex const * b, int ldb, double _Complex * c, int ldc, double _Complex const * d, int ldd, double _Complex const * e, int lde, double _Complex * f, int ldf, double * scale, double * dif);
int LAPACKE_stpcon(int matrix_order, char norm, char uplo, char diag, int n, float const * ap, float * rcond);
int LAPACKE_dtpcon(int matrix_order, char norm, char uplo, char diag, int n, double const * ap, double * rcond);
int LAPACKE_ctpcon(int matrix_order, char norm, char uplo, char diag, int n, float _Complex const * ap, float * rcond);
int LAPACKE_ztpcon(int matrix_order, char norm, char uplo, char diag, int n, double _Complex const * ap, double * rcond);
int LAPACKE_stprfs(int matrix_order, char uplo, char trans, char diag, int n, int nrhs, float const * ap, float const * b, int ldb, float const * x, int ldx, float * ferr, float * berr);
int LAPACKE_dtprfs(int matrix_order, char uplo, char trans, char diag, int n, int nrhs, double const * ap, double const * b, int ldb, double const * x, int ldx, double * ferr, double * berr);
int LAPACKE_ctprfs(int matrix_order, char uplo, char trans, char diag, int n, int nrhs, float _Complex const * ap, float _Complex const * b, int ldb, float _Complex const * x, int ldx, float * ferr, float * berr);
int LAPACKE_ztprfs(int matrix_order, char uplo, char trans, char diag, int n, int nrhs, double _Complex const * ap, double _Complex const * b, int ldb, double _Complex const * x, int ldx, double * ferr, double * berr);
int LAPACKE_stptri(int matrix_order, char uplo, char diag, int n, float * ap);
int LAPACKE_dtptri(int matrix_order, char uplo, char diag, int n, double * ap);
int LAPACKE_ctptri(int matrix_order, char uplo, char diag, int n, float _Complex * ap);
int LAPACKE_ztptri(int matrix_order, char uplo, char diag, int n, double _Complex * ap);
int LAPACKE_stptrs(int matrix_order, char uplo, char trans, char diag, int n, int nrhs, float const * ap, float * b, int ldb);
int LAPACKE_dtptrs(int matrix_order, char uplo, char trans, char diag, int n, int nrhs, double const * ap, double * b, int ldb);
int LAPACKE_ctptrs(int matrix_order, char uplo, char trans, char diag, int n, int nrhs, float _Complex const * ap, float _Complex * b, int ldb);
int LAPACKE_ztptrs(int matrix_order, char uplo, char trans, char diag, int n, int nrhs, double _Complex const * ap, double _Complex * b, int ldb);
int LAPACKE_stpttf(int matrix_order, char transr, char uplo, int n, float const * ap, float * arf);
int LAPACKE_dtpttf(int matrix_order, char transr, char uplo, int n, double const * ap, double * arf);
int LAPACKE_ctpttf(int matrix_order, char transr, char uplo, int n, float _Complex const * ap, float _Complex * arf);
int LAPACKE_ztpttf(int matrix_order, char transr, char uplo, int n, double _Complex const * ap, double _Complex * arf);
int LAPACKE_stpttr(int matrix_order, char uplo, int n, float const * ap, float * a, int lda);
int LAPACKE_dtpttr(int matrix_order, char uplo, int n, double const * ap, double * a, int lda);
int LAPACKE_ctpttr(int matrix_order, char uplo, int n, float _Complex const * ap, float _Complex * a, int lda);
int LAPACKE_ztpttr(int matrix_order, char uplo, int n, double _Complex const * ap, double _Complex * a, int lda);
int LAPACKE_strcon(int matrix_order, char norm, char uplo, char diag, int n, float const * a, int lda, float * rcond);
int LAPACKE_dtrcon(int matrix_order, char norm, char uplo, char diag, int n, double const * a, int lda, double * rcond);
int LAPACKE_ctrcon(int matrix_order, char norm, char uplo, char diag, int n, float _Complex const * a, int lda, float * rcond);
int LAPACKE_ztrcon(int matrix_order, char norm, char uplo, char diag, int n, double _Complex const * a, int lda, double * rcond);
int LAPACKE_strevc(int matrix_order, char side, char howmny, int * select, int n, float const * t, int ldt, float * vl, int ldvl, float * vr, int ldvr, int mm, int * m);
int LAPACKE_dtrevc(int matrix_order, char side, char howmny, int * select, int n, double const * t, int ldt, double * vl, int ldvl, double * vr, int ldvr, int mm, int * m);
int LAPACKE_ctrevc(int matrix_order, char side, char howmny, int const * select, int n, float _Complex * t, int ldt, float _Complex * vl, int ldvl, float _Complex * vr, int ldvr, int mm, int * m);
int LAPACKE_ztrevc(int matrix_order, char side, char howmny, int const * select, int n, double _Complex * t, int ldt, double _Complex * vl, int ldvl, double _Complex * vr, int ldvr, int mm, int * m);
int LAPACKE_strexc(int matrix_order, char compq, int n, float * t, int ldt, float * q, int ldq, int * ifst, int * ilst);
int LAPACKE_dtrexc(int matrix_order, char compq, int n, double * t, int ldt, double * q, int ldq, int * ifst, int * ilst);
int LAPACKE_ctrexc(int matrix_order, char compq, int n, float _Complex * t, int ldt, float _Complex * q, int ldq, int ifst, int ilst);
int LAPACKE_ztrexc(int matrix_order, char compq, int n, double _Complex * t, int ldt, double _Complex * q, int ldq, int ifst, int ilst);
int LAPACKE_strrfs(int matrix_order, char uplo, char trans, char diag, int n, int nrhs, float const * a, int lda, float const * b, int ldb, float const * x, int ldx, float * ferr, float * berr);
int LAPACKE_dtrrfs(int matrix_order, char uplo, char trans, char diag, int n, int nrhs, double const * a, int lda, double const * b, int ldb, double const * x, int ldx, double * ferr, double * berr);
int LAPACKE_ctrrfs(int matrix_order, char uplo, char trans, char diag, int n, int nrhs, float _Complex const * a, int lda, float _Complex const * b, int ldb, float _Complex const * x, int ldx, float * ferr, float * berr);
int LAPACKE_ztrrfs(int matrix_order, char uplo, char trans, char diag, int n, int nrhs, double _Complex const * a, int lda, double _Complex const * b, int ldb, double _Complex const * x, int ldx, double * ferr, double * berr);
int LAPACKE_strsen(int matrix_order, char job, char compq, int const * select, int n, float * t, int ldt, float * q, int ldq, float * wr, float * wi, int * m, float * s, float * sep);
int LAPACKE_dtrsen(int matrix_order, char job, char compq, int const * select, int n, double * t, int ldt, double * q, int ldq, double * wr, double * wi, int * m, double * s, double * sep);
int LAPACKE_ctrsen(int matrix_order, char job, char compq, int const * select, int n, float _Complex * t, int ldt, float _Complex * q, int ldq, float _Complex * w, int * m, float * s, float * sep);
int LAPACKE_ztrsen(int matrix_order, char job, char compq, int const * select, int n, double _Complex * t, int ldt, double _Complex * q, int ldq, double _Complex * w, int * m, double * s, double * sep);
int LAPACKE_strsna(int matrix_order, char job, char howmny, int const * select, int n, float const * t, int ldt, float const * vl, int ldvl, float const * vr, int ldvr, float * s, float * sep, int mm, int * m);
int LAPACKE_dtrsna(int matrix_order, char job, char howmny, int const * select, int n, double const * t, int ldt, double const * vl, int ldvl, double const * vr, int ldvr, double * s, double * sep, int mm, int * m);
int LAPACKE_ctrsna(int matrix_order, char job, char howmny, int const * select, int n, float _Complex const * t, int ldt, float _Complex const * vl, int ldvl, float _Complex const * vr, int ldvr, float * s, float * sep, int mm, int * m);
int LAPACKE_ztrsna(int matrix_order, char job, char howmny, int const * select, int n, double _Complex const * t, int ldt, double _Complex const * vl, int ldvl, double _Complex const * vr, int ldvr, double * s, double * sep, int mm, int * m);
int LAPACKE_strsyl(int matrix_order, char trana, char tranb, int isgn, int m, int n, float const * a, int lda, float const * b, int ldb, float * c, int ldc, float * scale);
int LAPACKE_dtrsyl(int matrix_order, char trana, char tranb, int isgn, int m, int n, double const * a, int lda, double const * b, int ldb, double * c, int ldc, double * scale);
int LAPACKE_ctrsyl(int matrix_order, char trana, char tranb, int isgn, int m, int n, float _Complex const * a, int lda, float _Complex const * b, int ldb, float _Complex * c, int ldc, float * scale);
int LAPACKE_ztrsyl(int matrix_order, char trana, char tranb, int isgn, int m, int n, double _Complex const * a, int lda, double _Complex const * b, int ldb, double _Complex * c, int ldc, double * scale);
int LAPACKE_strtri(int matrix_order, char uplo, char diag, int n, float * a, int lda);
int LAPACKE_dtrtri(int matrix_order, char uplo, char diag, int n, double * a, int lda);
int LAPACKE_ctrtri(int matrix_order, char uplo, char diag, int n, float _Complex * a, int lda);
int LAPACKE_ztrtri(int matrix_order, char uplo, char diag, int n, double _Complex * a, int lda);
int LAPACKE_strtrs(int matrix_order, char uplo, char trans, char diag, int n, int nrhs, float const * a, int lda, float * b, int ldb);
int LAPACKE_dtrtrs(int matrix_order, char uplo, char trans, char diag, int n, int nrhs, double const * a, int lda, double * b, int ldb);
int LAPACKE_ctrtrs(int matrix_order, char uplo, char trans, char diag, int n, int nrhs, float _Complex const * a, int lda, float _Complex * b, int ldb);
int LAPACKE_ztrtrs(int matrix_order, char uplo, char trans, char diag, int n, int nrhs, double _Complex const * a, int lda, double _Complex * b, int ldb);
int LAPACKE_strttf(int matrix_order, char transr, char uplo, int n, float const * a, int lda, float * arf);
int LAPACKE_dtrttf(int matrix_order, char transr, char uplo, int n, double const * a, int lda, double * arf);
int LAPACKE_ctrttf(int matrix_order, char transr, char uplo, int n, float _Complex const * a, int lda, float _Complex * arf);
int LAPACKE_ztrttf(int matrix_order, char transr, char uplo, int n, double _Complex const * a, int lda, double _Complex * arf);
int LAPACKE_strttp(int matrix_order, char uplo, int n, float const * a, int lda, float * ap);
int LAPACKE_dtrttp(int matrix_order, char uplo, int n, double const * a, int lda, double * ap);
int LAPACKE_ctrttp(int matrix_order, char uplo, int n, float _Complex const * a, int lda, float _Complex * ap);
int LAPACKE_ztrttp(int matrix_order, char uplo, int n, double _Complex const * a, int lda, double _Complex * ap);
int LAPACKE_stzrzf(int matrix_order, int m, int n, float * a, int lda, float * tau);
int LAPACKE_dtzrzf(int matrix_order, int m, int n, double * a, int lda, double * tau);
int LAPACKE_ctzrzf(int matrix_order, int m, int n, float _Complex * a, int lda, float _Complex * tau);
int LAPACKE_ztzrzf(int matrix_order, int m, int n, double _Complex * a, int lda, double _Complex * tau);
int LAPACKE_cungbr(int matrix_order, char vect, int m, int n, int k, float _Complex * a, int lda, float _Complex const * tau);
int LAPACKE_zungbr(int matrix_order, char vect, int m, int n, int k, double _Complex * a, int lda, double _Complex const * tau);
int LAPACKE_cunghr(int matrix_order, int n, int ilo, int ihi, float _Complex * a, int lda, float _Complex const * tau);
int LAPACKE_zunghr(int matrix_order, int n, int ilo, int ihi, double _Complex * a, int lda, double _Complex const * tau);
int LAPACKE_cunglq(int matrix_order, int m, int n, int k, float _Complex * a, int lda, float _Complex const * tau);
int LAPACKE_zunglq(int matrix_order, int m, int n, int k, double _Complex * a, int lda, double _Complex const * tau);
int LAPACKE_cungql(int matrix_order, int m, int n, int k, float _Complex * a, int lda, float _Complex const * tau);
int LAPACKE_zungql(int matrix_order, int m, int n, int k, double _Complex * a, int lda, double _Complex const * tau);
int LAPACKE_cungqr(int matrix_order, int m, int n, int k, float _Complex * a, int lda, float _Complex const * tau);
int LAPACKE_zungqr(int matrix_order, int m, int n, int k, double _Complex * a, int lda, double _Complex const * tau);
int LAPACKE_cungrq(int matrix_order, int m, int n, int k, float _Complex * a, int lda, float _Complex const * tau);
int LAPACKE_zungrq(int matrix_order, int m, int n, int k, double _Complex * a, int lda, double _Complex const * tau);
int LAPACKE_cungtr(int matrix_order, char uplo, int n, float _Complex * a, int lda, float _Complex const * tau);
int LAPACKE_zungtr(int matrix_order, char uplo, int n, double _Complex * a, int lda, double _Complex const * tau);
int LAPACKE_cunmbr(int matrix_order, char vect, char side, char trans, int m, int n, int k, float _Complex const * a, int lda, float _Complex const * tau, float _Complex * c, int ldc);
int LAPACKE_zunmbr(int matrix_order, char vect, char side, char trans, int m, int n, int k, double _Complex const * a, int lda, double _Complex const * tau, double _Complex * c, int ldc);
int LAPACKE_cunmhr(int matrix_order, char side, char trans, int m, int n, int ilo, int ihi, float _Complex const * a, int lda, float _Complex const * tau, float _Complex * c, int ldc);
int LAPACKE_zunmhr(int matrix_order, char side, char trans, int m, int n, int ilo, int ihi, double _Complex const * a, int lda, double _Complex const * tau, double _Complex * c, int ldc);
int LAPACKE_cunmlq(int matrix_order, char side, char trans, int m, int n, int k, float _Complex const * a, int lda, float _Complex const * tau, float _Complex * c, int ldc);
int LAPACKE_zunmlq(int matrix_order, char side, char trans, int m, int n, int k, double _Complex const * a, int lda, double _Complex const * tau, double _Complex * c, int ldc);
int LAPACKE_cunmql(int matrix_order, char side, char trans, int m, int n, int k, float _Complex const * a, int lda, float _Complex const * tau, float _Complex * c, int ldc);
int LAPACKE_zunmql(int matrix_order, char side, char trans, int m, int n, int k, double _Complex const * a, int lda, double _Complex const * tau, double _Complex * c, int ldc);
int LAPACKE_cunmqr(int matrix_order, char side, char trans, int m, int n, int k, float _Complex const * a, int lda, float _Complex const * tau, float _Complex * c, int ldc);
int LAPACKE_zunmqr(int matrix_order, char side, char trans, int m, int n, int k, double _Complex const * a, int lda, double _Complex const * tau, double _Complex * c, int ldc);
int LAPACKE_cunmrq(int matrix_order, char side, char trans, int m, int n, int k, float _Complex const * a, int lda, float _Complex const * tau, float _Complex * c, int ldc);
int LAPACKE_zunmrq(int matrix_order, char side, char trans, int m, int n, int k, double _Complex const * a, int lda, double _Complex const * tau, double _Complex * c, int ldc);
int LAPACKE_cunmrz(int matrix_order, char side, char trans, int m, int n, int k, int l, float _Complex const * a, int lda, float _Complex const * tau, float _Complex * c, int ldc);
int LAPACKE_zunmrz(int matrix_order, char side, char trans, int m, int n, int k, int l, double _Complex const * a, int lda, double _Complex const * tau, double _Complex * c, int ldc);
int LAPACKE_cunmtr(int matrix_order, char side, char uplo, char trans, int m, int n, float _Complex const * a, int lda, float _Complex const * tau, float _Complex * c, int ldc);
int LAPACKE_zunmtr(int matrix_order, char side, char uplo, char trans, int m, int n, double _Complex const * a, int lda, double _Complex const * tau, double _Complex * c, int ldc);
int LAPACKE_cupgtr(int matrix_order, char uplo, int n, float _Complex const * ap, float _Complex const * tau, float _Complex * q, int ldq);
int LAPACKE_zupgtr(int matrix_order, char uplo, int n, double _Complex const * ap, double _Complex const * tau, double _Complex * q, int ldq);
int LAPACKE_cupmtr(int matrix_order, char side, char uplo, char trans, int m, int n, float _Complex const * ap, float _Complex const * tau, float _Complex * c, int ldc);
int LAPACKE_zupmtr(int matrix_order, char side, char uplo, char trans, int m, int n, double _Complex const * ap, double _Complex const * tau, double _Complex * c, int ldc);
int LAPACKE_sbdsdc_work(int matrix_order, char uplo, char compq, int n, float * d, float * e, float * u, int ldu, float * vt, int ldvt, float * q, int * iq, float * work, int * iwork);
int LAPACKE_dbdsdc_work(int matrix_order, char uplo, char compq, int n, double * d, double * e, double * u, int ldu, double * vt, int ldvt, double * q, int * iq, double * work, int * iwork);
int LAPACKE_sbdsqr_work(int matrix_order, char uplo, int n, int ncvt, int nru, int ncc, float * d, float * e, float * vt, int ldvt, float * u, int ldu, float * c, int ldc, float * work);
int LAPACKE_dbdsqr_work(int matrix_order, char uplo, int n, int ncvt, int nru, int ncc, double * d, double * e, double * vt, int ldvt, double * u, int ldu, double * c, int ldc, double * work);
int LAPACKE_cbdsqr_work(int matrix_order, char uplo, int n, int ncvt, int nru, int ncc, float * d, float * e, float _Complex * vt, int ldvt, float _Complex * u, int ldu, float _Complex * c, int ldc, float * work);
int LAPACKE_zbdsqr_work(int matrix_order, char uplo, int n, int ncvt, int nru, int ncc, double * d, double * e, double _Complex * vt, int ldvt, double _Complex * u, int ldu, double _Complex * c, int ldc, double * work);
int LAPACKE_sdisna_work(char job, int m, int n, float const * d, float * sep);
int LAPACKE_ddisna_work(char job, int m, int n, double const * d, double * sep);
int LAPACKE_sgbbrd_work(int matrix_order, char vect, int m, int n, int ncc, int kl, int ku, float * ab, int ldab, float * d, float * e, float * q, int ldq, float * pt, int ldpt, float * c, int ldc, float * work);
int LAPACKE_dgbbrd_work(int matrix_order, char vect, int m, int n, int ncc, int kl, int ku, double * ab, int ldab, double * d, double * e, double * q, int ldq, double * pt, int ldpt, double * c, int ldc, double * work);
int LAPACKE_cgbbrd_work(int matrix_order, char vect, int m, int n, int ncc, int kl, int ku, float _Complex * ab, int ldab, float * d, float * e, float _Complex * q, int ldq, float _Complex * pt, int ldpt, float _Complex * c, int ldc, float _Complex * work, float * rwork);
int LAPACKE_zgbbrd_work(int matrix_order, char vect, int m, int n, int ncc, int kl, int ku, double _Complex * ab, int ldab, double * d, double * e, double _Complex * q, int ldq, double _Complex * pt, int ldpt, double _Complex * c, int ldc, double _Complex * work, double * rwork);
int LAPACKE_sgbcon_work(int matrix_order, char norm, int n, int kl, int ku, float const * ab, int ldab, int const * ipiv, float anorm, float * rcond, float * work, int * iwork);
int LAPACKE_dgbcon_work(int matrix_order, char norm, int n, int kl, int ku, double const * ab, int ldab, int const * ipiv, double anorm, double * rcond, double * work, int * iwork);
int LAPACKE_cgbcon_work(int matrix_order, char norm, int n, int kl, int ku, float _Complex const * ab, int ldab, int const * ipiv, float anorm, float * rcond, float _Complex * work, float * rwork);
int LAPACKE_zgbcon_work(int matrix_order, char norm, int n, int kl, int ku, double _Complex const * ab, int ldab, int const * ipiv, double anorm, double * rcond, double _Complex * work, double * rwork);
int LAPACKE_sgbequ_work(int matrix_order, int m, int n, int kl, int ku, float const * ab, int ldab, float * r, float * c, float * rowcnd, float * colcnd, float * amax);
int LAPACKE_dgbequ_work(int matrix_order, int m, int n, int kl, int ku, double const * ab, int ldab, double * r, double * c, double * rowcnd, double * colcnd, double * amax);
int LAPACKE_cgbequ_work(int matrix_order, int m, int n, int kl, int ku, float _Complex const * ab, int ldab, float * r, float * c, float * rowcnd, float * colcnd, float * amax);
int LAPACKE_zgbequ_work(int matrix_order, int m, int n, int kl, int ku, double _Complex const * ab, int ldab, double * r, double * c, double * rowcnd, double * colcnd, double * amax);
int LAPACKE_sgbequb_work(int matrix_order, int m, int n, int kl, int ku, float const * ab, int ldab, float * r, float * c, float * rowcnd, float * colcnd, float * amax);
int LAPACKE_dgbequb_work(int matrix_order, int m, int n, int kl, int ku, double const * ab, int ldab, double * r, double * c, double * rowcnd, double * colcnd, double * amax);
int LAPACKE_cgbequb_work(int matrix_order, int m, int n, int kl, int ku, float _Complex const * ab, int ldab, float * r, float * c, float * rowcnd, float * colcnd, float * amax);
int LAPACKE_zgbequb_work(int matrix_order, int m, int n, int kl, int ku, double _Complex const * ab, int ldab, double * r, double * c, double * rowcnd, double * colcnd, double * amax);
int LAPACKE_sgbrfs_work(int matrix_order, char trans, int n, int kl, int ku, int nrhs, float const * ab, int ldab, float const * afb, int ldafb, int const * ipiv, float const * b, int ldb, float * x, int ldx, float * ferr, float * berr, float * work, int * iwork);
int LAPACKE_dgbrfs_work(int matrix_order, char trans, int n, int kl, int ku, int nrhs, double const * ab, int ldab, double const * afb, int ldafb, int const * ipiv, double const * b, int ldb, double * x, int ldx, double * ferr, double * berr, double * work, int * iwork);
int LAPACKE_cgbrfs_work(int matrix_order, char trans, int n, int kl, int ku, int nrhs, float _Complex const * ab, int ldab, float _Complex const * afb, int ldafb, int const * ipiv, float _Complex const * b, int ldb, float _Complex * x, int ldx, float * ferr, float * berr, float _Complex * work, float * rwork);
int LAPACKE_zgbrfs_work(int matrix_order, char trans, int n, int kl, int ku, int nrhs, double _Complex const * ab, int ldab, double _Complex const * afb, int ldafb, int const * ipiv, double _Complex const * b, int ldb, double _Complex * x, int ldx, double * ferr, double * berr, double _Complex * work, double * rwork);
int LAPACKE_sgbrfsx_work(int matrix_order, char trans, char equed, int n, int kl, int ku, int nrhs, float const * ab, int ldab, float const * afb, int ldafb, int const * ipiv, float const * r, float const * c, float const * b, int ldb, float * x, int ldx, float * rcond, float * berr, int n_err_bnds, float * err_bnds_norm, float * err_bnds_comp, int nparams, float * params, float * work, int * iwork);
int LAPACKE_dgbrfsx_work(int matrix_order, char trans, char equed, int n, int kl, int ku, int nrhs, double const * ab, int ldab, double const * afb, int ldafb, int const * ipiv, double const * r, double const * c, double const * b, int ldb, double * x, int ldx, double * rcond, double * berr, int n_err_bnds, double * err_bnds_norm, double * err_bnds_comp, int nparams, double * params, double * work, int * iwork);
int LAPACKE_cgbrfsx_work(int matrix_order, char trans, char equed, int n, int kl, int ku, int nrhs, float _Complex const * ab, int ldab, float _Complex const * afb, int ldafb, int const * ipiv, float const * r, float const * c, float _Complex const * b, int ldb, float _Complex * x, int ldx, float * rcond, float * berr, int n_err_bnds, float * err_bnds_norm, float * err_bnds_comp, int nparams, float * params, float _Complex * work, float * rwork);
int LAPACKE_zgbrfsx_work(int matrix_order, char trans, char equed, int n, int kl, int ku, int nrhs, double _Complex const * ab, int ldab, double _Complex const * afb, int ldafb, int const * ipiv, double const * r, double const * c, double _Complex const * b, int ldb, double _Complex * x, int ldx, double * rcond, double * berr, int n_err_bnds, double * err_bnds_norm, double * err_bnds_comp, int nparams, double * params, double _Complex * work, double * rwork);
int LAPACKE_sgbsv_work(int matrix_order, int n, int kl, int ku, int nrhs, float * ab, int ldab, int * ipiv, float * b, int ldb);
int LAPACKE_dgbsv_work(int matrix_order, int n, int kl, int ku, int nrhs, double * ab, int ldab, int * ipiv, double * b, int ldb);
int LAPACKE_cgbsv_work(int matrix_order, int n, int kl, int ku, int nrhs, float _Complex * ab, int ldab, int * ipiv, float _Complex * b, int ldb);
int LAPACKE_zgbsv_work(int matrix_order, int n, int kl, int ku, int nrhs, double _Complex * ab, int ldab, int * ipiv, double _Complex * b, int ldb);
int LAPACKE_sgbsvx_work(int matrix_order, char fact, char trans, int n, int kl, int ku, int nrhs, float * ab, int ldab, float * afb, int ldafb, int * ipiv, char * equed, float * r, float * c, float * b, int ldb, float * x, int ldx, float * rcond, float * ferr, float * berr, float * work, int * iwork);
int LAPACKE_dgbsvx_work(int matrix_order, char fact, char trans, int n, int kl, int ku, int nrhs, double * ab, int ldab, double * afb, int ldafb, int * ipiv, char * equed, double * r, double * c, double * b, int ldb, double * x, int ldx, double * rcond, double * ferr, double * berr, double * work, int * iwork);
int LAPACKE_cgbsvx_work(int matrix_order, char fact, char trans, int n, int kl, int ku, int nrhs, float _Complex * ab, int ldab, float _Complex * afb, int ldafb, int * ipiv, char * equed, float * r, float * c, float _Complex * b, int ldb, float _Complex * x, int ldx, float * rcond, float * ferr, float * berr, float _Complex * work, float * rwork);
int LAPACKE_zgbsvx_work(int matrix_order, char fact, char trans, int n, int kl, int ku, int nrhs, double _Complex * ab, int ldab, double _Complex * afb, int ldafb, int * ipiv, char * equed, double * r, double * c, double _Complex * b, int ldb, double _Complex * x, int ldx, double * rcond, double * ferr, double * berr, double _Complex * work, double * rwork);
int LAPACKE_sgbsvxx_work(int matrix_order, char fact, char trans, int n, int kl, int ku, int nrhs, float * ab, int ldab, float * afb, int ldafb, int * ipiv, char * equed, float * r, float * c, float * b, int ldb, float * x, int ldx, float * rcond, float * rpvgrw, float * berr, int n_err_bnds, float * err_bnds_norm, float * err_bnds_comp, int nparams, float * params, float * work, int * iwork);
int LAPACKE_dgbsvxx_work(int matrix_order, char fact, char trans, int n, int kl, int ku, int nrhs, double * ab, int ldab, double * afb, int ldafb, int * ipiv, char * equed, double * r, double * c, double * b, int ldb, double * x, int ldx, double * rcond, double * rpvgrw, double * berr, int n_err_bnds, double * err_bnds_norm, double * err_bnds_comp, int nparams, double * params, double * work, int * iwork);
int LAPACKE_cgbsvxx_work(int matrix_order, char fact, char trans, int n, int kl, int ku, int nrhs, float _Complex * ab, int ldab, float _Complex * afb, int ldafb, int * ipiv, char * equed, float * r, float * c, float _Complex * b, int ldb, float _Complex * x, int ldx, float * rcond, float * rpvgrw, float * berr, int n_err_bnds, float * err_bnds_norm, float * err_bnds_comp, int nparams, float * params, float _Complex * work, float * rwork);
int LAPACKE_zgbsvxx_work(int matrix_order, char fact, char trans, int n, int kl, int ku, int nrhs, double _Complex * ab, int ldab, double _Complex * afb, int ldafb, int * ipiv, char * equed, double * r, double * c, double _Complex * b, int ldb, double _Complex * x, int ldx, double * rcond, double * rpvgrw, double * berr, int n_err_bnds, double * err_bnds_norm, double * err_bnds_comp, int nparams, double * params, double _Complex * work, double * rwork);
int LAPACKE_sgbtrf_work(int matrix_order, int m, int n, int kl, int ku, float * ab, int ldab, int * ipiv);
int LAPACKE_dgbtrf_work(int matrix_order, int m, int n, int kl, int ku, double * ab, int ldab, int * ipiv);
int LAPACKE_cgbtrf_work(int matrix_order, int m, int n, int kl, int ku, float _Complex * ab, int ldab, int * ipiv);
int LAPACKE_zgbtrf_work(int matrix_order, int m, int n, int kl, int ku, double _Complex * ab, int ldab, int * ipiv);
int LAPACKE_sgbtrs_work(int matrix_order, char trans, int n, int kl, int ku, int nrhs, float const * ab, int ldab, int const * ipiv, float * b, int ldb);
int LAPACKE_dgbtrs_work(int matrix_order, char trans, int n, int kl, int ku, int nrhs, double const * ab, int ldab, int const * ipiv, double * b, int ldb);
int LAPACKE_cgbtrs_work(int matrix_order, char trans, int n, int kl, int ku, int nrhs, float _Complex const * ab, int ldab, int const * ipiv, float _Complex * b, int ldb);
int LAPACKE_zgbtrs_work(int matrix_order, char trans, int n, int kl, int ku, int nrhs, double _Complex const * ab, int ldab, int const * ipiv, double _Complex * b, int ldb);
int LAPACKE_sgebak_work(int matrix_order, char job, char side, int n, int ilo, int ihi, float const * scale, int m, float * v, int ldv);
int LAPACKE_dgebak_work(int matrix_order, char job, char side, int n, int ilo, int ihi, double const * scale, int m, double * v, int ldv);
int LAPACKE_cgebak_work(int matrix_order, char job, char side, int n, int ilo, int ihi, float const * scale, int m, float _Complex * v, int ldv);
int LAPACKE_zgebak_work(int matrix_order, char job, char side, int n, int ilo, int ihi, double const * scale, int m, double _Complex * v, int ldv);
int LAPACKE_sgebal_work(int matrix_order, char job, int n, float * a, int lda, int * ilo, int * ihi, float * scale);
int LAPACKE_dgebal_work(int matrix_order, char job, int n, double * a, int lda, int * ilo, int * ihi, double * scale);
int LAPACKE_cgebal_work(int matrix_order, char job, int n, float _Complex * a, int lda, int * ilo, int * ihi, float * scale);
int LAPACKE_zgebal_work(int matrix_order, char job, int n, double _Complex * a, int lda, int * ilo, int * ihi, double * scale);
int LAPACKE_sgebrd_work(int matrix_order, int m, int n, float * a, int lda, float * d, float * e, float * tauq, float * taup, float * work, int lwork);
int LAPACKE_dgebrd_work(int matrix_order, int m, int n, double * a, int lda, double * d, double * e, double * tauq, double * taup, double * work, int lwork);
int LAPACKE_cgebrd_work(int matrix_order, int m, int n, float _Complex * a, int lda, float * d, float * e, float _Complex * tauq, float _Complex * taup, float _Complex * work, int lwork);
int LAPACKE_zgebrd_work(int matrix_order, int m, int n, double _Complex * a, int lda, double * d, double * e, double _Complex * tauq, double _Complex * taup, double _Complex * work, int lwork);
int LAPACKE_sgecon_work(int matrix_order, char norm, int n, float const * a, int lda, float anorm, float * rcond, float * work, int * iwork);
int LAPACKE_dgecon_work(int matrix_order, char norm, int n, double const * a, int lda, double anorm, double * rcond, double * work, int * iwork);
int LAPACKE_cgecon_work(int matrix_order, char norm, int n, float _Complex const * a, int lda, float anorm, float * rcond, float _Complex * work, float * rwork);
int LAPACKE_zgecon_work(int matrix_order, char norm, int n, double _Complex const * a, int lda, double anorm, double * rcond, double _Complex * work, double * rwork);
int LAPACKE_sgeequ_work(int matrix_order, int m, int n, float const * a, int lda, float * r, float * c, float * rowcnd, float * colcnd, float * amax);
int LAPACKE_dgeequ_work(int matrix_order, int m, int n, double const * a, int lda, double * r, double * c, double * rowcnd, double * colcnd, double * amax);
int LAPACKE_cgeequ_work(int matrix_order, int m, int n, float _Complex const * a, int lda, float * r, float * c, float * rowcnd, float * colcnd, float * amax);
int LAPACKE_zgeequ_work(int matrix_order, int m, int n, double _Complex const * a, int lda, double * r, double * c, double * rowcnd, double * colcnd, double * amax);
int LAPACKE_sgeequb_work(int matrix_order, int m, int n, float const * a, int lda, float * r, float * c, float * rowcnd, float * colcnd, float * amax);
int LAPACKE_dgeequb_work(int matrix_order, int m, int n, double const * a, int lda, double * r, double * c, double * rowcnd, double * colcnd, double * amax);
int LAPACKE_cgeequb_work(int matrix_order, int m, int n, float _Complex const * a, int lda, float * r, float * c, float * rowcnd, float * colcnd, float * amax);
int LAPACKE_zgeequb_work(int matrix_order, int m, int n, double _Complex const * a, int lda, double * r, double * c, double * rowcnd, double * colcnd, double * amax);
int LAPACKE_sgees_work(int matrix_order, char jobvs, char sort, int (* select)(float const * , float const * ), int n, float * a, int lda, int * sdim, float * wr, float * wi, float * vs, int ldvs, float * work, int lwork, int * bwork);
int LAPACKE_dgees_work(int matrix_order, char jobvs, char sort, int (* select)(double const * , double const * ), int n, double * a, int lda, int * sdim, double * wr, double * wi, double * vs, int ldvs, double * work, int lwork, int * bwork);
int LAPACKE_cgees_work(int matrix_order, char jobvs, char sort, int (* select)(float _Complex const * ), int n, float _Complex * a, int lda, int * sdim, float _Complex * w, float _Complex * vs, int ldvs, float _Complex * work, int lwork, float * rwork, int * bwork);
int LAPACKE_zgees_work(int matrix_order, char jobvs, char sort, int (* select)(double _Complex const * ), int n, double _Complex * a, int lda, int * sdim, double _Complex * w, double _Complex * vs, int ldvs, double _Complex * work, int lwork, double * rwork, int * bwork);
int LAPACKE_sgeesx_work(int matrix_order, char jobvs, char sort, int (* select)(float const * , float const * ), char sense, int n, float * a, int lda, int * sdim, float * wr, float * wi, float * vs, int ldvs, float * rconde, float * rcondv, float * work, int lwork, int * iwork, int liwork, int * bwork);
int LAPACKE_dgeesx_work(int matrix_order, char jobvs, char sort, int (* select)(double const * , double const * ), char sense, int n, double * a, int lda, int * sdim, double * wr, double * wi, double * vs, int ldvs, double * rconde, double * rcondv, double * work, int lwork, int * iwork, int liwork, int * bwork);
int LAPACKE_cgeesx_work(int matrix_order, char jobvs, char sort, int (* select)(float _Complex const * ), char sense, int n, float _Complex * a, int lda, int * sdim, float _Complex * w, float _Complex * vs, int ldvs, float * rconde, float * rcondv, float _Complex * work, int lwork, float * rwork, int * bwork);
int LAPACKE_zgeesx_work(int matrix_order, char jobvs, char sort, int (* select)(double _Complex const * ), char sense, int n, double _Complex * a, int lda, int * sdim, double _Complex * w, double _Complex * vs, int ldvs, double * rconde, double * rcondv, double _Complex * work, int lwork, double * rwork, int * bwork);
int LAPACKE_sgeev_work(int matrix_order, char jobvl, char jobvr, int n, float * a, int lda, float * wr, float * wi, float * vl, int ldvl, float * vr, int ldvr, float * work, int lwork);
int LAPACKE_dgeev_work(int matrix_order, char jobvl, char jobvr, int n, double * a, int lda, double * wr, double * wi, double * vl, int ldvl, double * vr, int ldvr, double * work, int lwork);
int LAPACKE_cgeev_work(int matrix_order, char jobvl, char jobvr, int n, float _Complex * a, int lda, float _Complex * w, float _Complex * vl, int ldvl, float _Complex * vr, int ldvr, float _Complex * work, int lwork, float * rwork);
int LAPACKE_zgeev_work(int matrix_order, char jobvl, char jobvr, int n, double _Complex * a, int lda, double _Complex * w, double _Complex * vl, int ldvl, double _Complex * vr, int ldvr, double _Complex * work, int lwork, double * rwork);
int LAPACKE_sgeevx_work(int matrix_order, char balanc, char jobvl, char jobvr, char sense, int n, float * a, int lda, float * wr, float * wi, float * vl, int ldvl, float * vr, int ldvr, int * ilo, int * ihi, float * scale, float * abnrm, float * rconde, float * rcondv, float * work, int lwork, int * iwork);
int LAPACKE_dgeevx_work(int matrix_order, char balanc, char jobvl, char jobvr, char sense, int n, double * a, int lda, double * wr, double * wi, double * vl, int ldvl, double * vr, int ldvr, int * ilo, int * ihi, double * scale, double * abnrm, double * rconde, double * rcondv, double * work, int lwork, int * iwork);
int LAPACKE_cgeevx_work(int matrix_order, char balanc, char jobvl, char jobvr, char sense, int n, float _Complex * a, int lda, float _Complex * w, float _Complex * vl, int ldvl, float _Complex * vr, int ldvr, int * ilo, int * ihi, float * scale, float * abnrm, float * rconde, float * rcondv, float _Complex * work, int lwork, float * rwork);
int LAPACKE_zgeevx_work(int matrix_order, char balanc, char jobvl, char jobvr, char sense, int n, double _Complex * a, int lda, double _Complex * w, double _Complex * vl, int ldvl, double _Complex * vr, int ldvr, int * ilo, int * ihi, double * scale, double * abnrm, double * rconde, double * rcondv, double _Complex * work, int lwork, double * rwork);
int LAPACKE_sgehrd_work(int matrix_order, int n, int ilo, int ihi, float * a, int lda, float * tau, float * work, int lwork);
int LAPACKE_dgehrd_work(int matrix_order, int n, int ilo, int ihi, double * a, int lda, double * tau, double * work, int lwork);
int LAPACKE_cgehrd_work(int matrix_order, int n, int ilo, int ihi, float _Complex * a, int lda, float _Complex * tau, float _Complex * work, int lwork);
int LAPACKE_zgehrd_work(int matrix_order, int n, int ilo, int ihi, double _Complex * a, int lda, double _Complex * tau, double _Complex * work, int lwork);
int LAPACKE_sgejsv_work(int matrix_order, char joba, char jobu, char jobv, char jobr, char jobt, char jobp, int m, int n, float * a, int lda, float * sva, float * u, int ldu, float * v, int ldv, float * work, int lwork, int * iwork);
int LAPACKE_dgejsv_work(int matrix_order, char joba, char jobu, char jobv, char jobr, char jobt, char jobp, int m, int n, double * a, int lda, double * sva, double * u, int ldu, double * v, int ldv, double * work, int lwork, int * iwork);
int LAPACKE_sgelq2_work(int matrix_order, int m, int n, float * a, int lda, float * tau, float * work);
int LAPACKE_dgelq2_work(int matrix_order, int m, int n, double * a, int lda, double * tau, double * work);
int LAPACKE_cgelq2_work(int matrix_order, int m, int n, float _Complex * a, int lda, float _Complex * tau, float _Complex * work);
int LAPACKE_zgelq2_work(int matrix_order, int m, int n, double _Complex * a, int lda, double _Complex * tau, double _Complex * work);
int LAPACKE_sgelqf_work(int matrix_order, int m, int n, float * a, int lda, float * tau, float * work, int lwork);
int LAPACKE_dgelqf_work(int matrix_order, int m, int n, double * a, int lda, double * tau, double * work, int lwork);
int LAPACKE_cgelqf_work(int matrix_order, int m, int n, float _Complex * a, int lda, float _Complex * tau, float _Complex * work, int lwork);
int LAPACKE_zgelqf_work(int matrix_order, int m, int n, double _Complex * a, int lda, double _Complex * tau, double _Complex * work, int lwork);
int LAPACKE_sgels_work(int matrix_order, char trans, int m, int n, int nrhs, float * a, int lda, float * b, int ldb, float * work, int lwork);
int LAPACKE_dgels_work(int matrix_order, char trans, int m, int n, int nrhs, double * a, int lda, double * b, int ldb, double * work, int lwork);
int LAPACKE_cgels_work(int matrix_order, char trans, int m, int n, int nrhs, float _Complex * a, int lda, float _Complex * b, int ldb, float _Complex * work, int lwork);
int LAPACKE_zgels_work(int matrix_order, char trans, int m, int n, int nrhs, double _Complex * a, int lda, double _Complex * b, int ldb, double _Complex * work, int lwork);
int LAPACKE_sgelsd_work(int matrix_order, int m, int n, int nrhs, float * a, int lda, float * b, int ldb, float * s, float rcond, int * rank, float * work, int lwork, int * iwork);
int LAPACKE_dgelsd_work(int matrix_order, int m, int n, int nrhs, double * a, int lda, double * b, int ldb, double * s, double rcond, int * rank, double * work, int lwork, int * iwork);
int LAPACKE_cgelsd_work(int matrix_order, int m, int n, int nrhs, float _Complex * a, int lda, float _Complex * b, int ldb, float * s, float rcond, int * rank, float _Complex * work, int lwork, float * rwork, int * iwork);
int LAPACKE_zgelsd_work(int matrix_order, int m, int n, int nrhs, double _Complex * a, int lda, double _Complex * b, int ldb, double * s, double rcond, int * rank, double _Complex * work, int lwork, double * rwork, int * iwork);
int LAPACKE_sgelss_work(int matrix_order, int m, int n, int nrhs, float * a, int lda, float * b, int ldb, float * s, float rcond, int * rank, float * work, int lwork);
int LAPACKE_dgelss_work(int matrix_order, int m, int n, int nrhs, double * a, int lda, double * b, int ldb, double * s, double rcond, int * rank, double * work, int lwork);
int LAPACKE_cgelss_work(int matrix_order, int m, int n, int nrhs, float _Complex * a, int lda, float _Complex * b, int ldb, float * s, float rcond, int * rank, float _Complex * work, int lwork, float * rwork);
int LAPACKE_zgelss_work(int matrix_order, int m, int n, int nrhs, double _Complex * a, int lda, double _Complex * b, int ldb, double * s, double rcond, int * rank, double _Complex * work, int lwork, double * rwork);
int LAPACKE_sgelsy_work(int matrix_order, int m, int n, int nrhs, float * a, int lda, float * b, int ldb, int * jpvt, float rcond, int * rank, float * work, int lwork);
int LAPACKE_dgelsy_work(int matrix_order, int m, int n, int nrhs, double * a, int lda, double * b, int ldb, int * jpvt, double rcond, int * rank, double * work, int lwork);
int LAPACKE_cgelsy_work(int matrix_order, int m, int n, int nrhs, float _Complex * a, int lda, float _Complex * b, int ldb, int * jpvt, float rcond, int * rank, float _Complex * work, int lwork, float * rwork);
int LAPACKE_zgelsy_work(int matrix_order, int m, int n, int nrhs, double _Complex * a, int lda, double _Complex * b, int ldb, int * jpvt, double rcond, int * rank, double _Complex * work, int lwork, double * rwork);
int LAPACKE_sgeqlf_work(int matrix_order, int m, int n, float * a, int lda, float * tau, float * work, int lwork);
int LAPACKE_dgeqlf_work(int matrix_order, int m, int n, double * a, int lda, double * tau, double * work, int lwork);
int LAPACKE_cgeqlf_work(int matrix_order, int m, int n, float _Complex * a, int lda, float _Complex * tau, float _Complex * work, int lwork);
int LAPACKE_zgeqlf_work(int matrix_order, int m, int n, double _Complex * a, int lda, double _Complex * tau, double _Complex * work, int lwork);
int LAPACKE_sgeqp3_work(int matrix_order, int m, int n, float * a, int lda, int * jpvt, float * tau, float * work, int lwork);
int LAPACKE_dgeqp3_work(int matrix_order, int m, int n, double * a, int lda, int * jpvt, double * tau, double * work, int lwork);
int LAPACKE_cgeqp3_work(int matrix_order, int m, int n, float _Complex * a, int lda, int * jpvt, float _Complex * tau, float _Complex * work, int lwork, float * rwork);
int LAPACKE_zgeqp3_work(int matrix_order, int m, int n, double _Complex * a, int lda, int * jpvt, double _Complex * tau, double _Complex * work, int lwork, double * rwork);
int LAPACKE_sgeqpf_work(int matrix_order, int m, int n, float * a, int lda, int * jpvt, float * tau, float * work);
int LAPACKE_dgeqpf_work(int matrix_order, int m, int n, double * a, int lda, int * jpvt, double * tau, double * work);
int LAPACKE_cgeqpf_work(int matrix_order, int m, int n, float _Complex * a, int lda, int * jpvt, float _Complex * tau, float _Complex * work, float * rwork);
int LAPACKE_zgeqpf_work(int matrix_order, int m, int n, double _Complex * a, int lda, int * jpvt, double _Complex * tau, double _Complex * work, double * rwork);
int LAPACKE_sgeqr2_work(int matrix_order, int m, int n, float * a, int lda, float * tau, float * work);
int LAPACKE_dgeqr2_work(int matrix_order, int m, int n, double * a, int lda, double * tau, double * work);
int LAPACKE_cgeqr2_work(int matrix_order, int m, int n, float _Complex * a, int lda, float _Complex * tau, float _Complex * work);
int LAPACKE_zgeqr2_work(int matrix_order, int m, int n, double _Complex * a, int lda, double _Complex * tau, double _Complex * work);
int LAPACKE_sgeqrf_work(int matrix_order, int m, int n, float * a, int lda, float * tau, float * work, int lwork);
int LAPACKE_dgeqrf_work(int matrix_order, int m, int n, double * a, int lda, double * tau, double * work, int lwork);
int LAPACKE_cgeqrf_work(int matrix_order, int m, int n, float _Complex * a, int lda, float _Complex * tau, float _Complex * work, int lwork);
int LAPACKE_zgeqrf_work(int matrix_order, int m, int n, double _Complex * a, int lda, double _Complex * tau, double _Complex * work, int lwork);
int LAPACKE_sgeqrfp_work(int matrix_order, int m, int n, float * a, int lda, float * tau, float * work, int lwork);
int LAPACKE_dgeqrfp_work(int matrix_order, int m, int n, double * a, int lda, double * tau, double * work, int lwork);
int LAPACKE_cgeqrfp_work(int matrix_order, int m, int n, float _Complex * a, int lda, float _Complex * tau, float _Complex * work, int lwork);
int LAPACKE_zgeqrfp_work(int matrix_order, int m, int n, double _Complex * a, int lda, double _Complex * tau, double _Complex * work, int lwork);
int LAPACKE_sgerfs_work(int matrix_order, char trans, int n, int nrhs, float const * a, int lda, float const * af, int ldaf, int const * ipiv, float const * b, int ldb, float * x, int ldx, float * ferr, float * berr, float * work, int * iwork);
int LAPACKE_dgerfs_work(int matrix_order, char trans, int n, int nrhs, double const * a, int lda, double const * af, int ldaf, int const * ipiv, double const * b, int ldb, double * x, int ldx, double * ferr, double * berr, double * work, int * iwork);
int LAPACKE_cgerfs_work(int matrix_order, char trans, int n, int nrhs, float _Complex const * a, int lda, float _Complex const * af, int ldaf, int const * ipiv, float _Complex const * b, int ldb, float _Complex * x, int ldx, float * ferr, float * berr, float _Complex * work, float * rwork);
int LAPACKE_zgerfs_work(int matrix_order, char trans, int n, int nrhs, double _Complex const * a, int lda, double _Complex const * af, int ldaf, int const * ipiv, double _Complex const * b, int ldb, double _Complex * x, int ldx, double * ferr, double * berr, double _Complex * work, double * rwork);
int LAPACKE_sgerfsx_work(int matrix_order, char trans, char equed, int n, int nrhs, float const * a, int lda, float const * af, int ldaf, int const * ipiv, float const * r, float const * c, float const * b, int ldb, float * x, int ldx, float * rcond, float * berr, int n_err_bnds, float * err_bnds_norm, float * err_bnds_comp, int nparams, float * params, float * work, int * iwork);
int LAPACKE_dgerfsx_work(int matrix_order, char trans, char equed, int n, int nrhs, double const * a, int lda, double const * af, int ldaf, int const * ipiv, double const * r, double const * c, double const * b, int ldb, double * x, int ldx, double * rcond, double * berr, int n_err_bnds, double * err_bnds_norm, double * err_bnds_comp, int nparams, double * params, double * work, int * iwork);
int LAPACKE_cgerfsx_work(int matrix_order, char trans, char equed, int n, int nrhs, float _Complex const * a, int lda, float _Complex const * af, int ldaf, int const * ipiv, float const * r, float const * c, float _Complex const * b, int ldb, float _Complex * x, int ldx, float * rcond, float * berr, int n_err_bnds, float * err_bnds_norm, float * err_bnds_comp, int nparams, float * params, float _Complex * work, float * rwork);
int LAPACKE_zgerfsx_work(int matrix_order, char trans, char equed, int n, int nrhs, double _Complex const * a, int lda, double _Complex const * af, int ldaf, int const * ipiv, double const * r, double const * c, double _Complex const * b, int ldb, double _Complex * x, int ldx, double * rcond, double * berr, int n_err_bnds, double * err_bnds_norm, double * err_bnds_comp, int nparams, double * params, double _Complex * work, double * rwork);
int LAPACKE_sgerqf_work(int matrix_order, int m, int n, float * a, int lda, float * tau, float * work, int lwork);
int LAPACKE_dgerqf_work(int matrix_order, int m, int n, double * a, int lda, double * tau, double * work, int lwork);
int LAPACKE_cgerqf_work(int matrix_order, int m, int n, float _Complex * a, int lda, float _Complex * tau, float _Complex * work, int lwork);
int LAPACKE_zgerqf_work(int matrix_order, int m, int n, double _Complex * a, int lda, double _Complex * tau, double _Complex * work, int lwork);
int LAPACKE_sgesdd_work(int matrix_order, char jobz, int m, int n, float * a, int lda, float * s, float * u, int ldu, float * vt, int ldvt, float * work, int lwork, int * iwork);
int LAPACKE_dgesdd_work(int matrix_order, char jobz, int m, int n, double * a, int lda, double * s, double * u, int ldu, double * vt, int ldvt, double * work, int lwork, int * iwork);
int LAPACKE_cgesdd_work(int matrix_order, char jobz, int m, int n, float _Complex * a, int lda, float * s, float _Complex * u, int ldu, float _Complex * vt, int ldvt, float _Complex * work, int lwork, float * rwork, int * iwork);
int LAPACKE_zgesdd_work(int matrix_order, char jobz, int m, int n, double _Complex * a, int lda, double * s, double _Complex * u, int ldu, double _Complex * vt, int ldvt, double _Complex * work, int lwork, double * rwork, int * iwork);
int LAPACKE_sgesv_work(int matrix_order, int n, int nrhs, float * a, int lda, int * ipiv, float * b, int ldb);
int LAPACKE_dgesv_work(int matrix_order, int n, int nrhs, double * a, int lda, int * ipiv, double * b, int ldb);
int LAPACKE_cgesv_work(int matrix_order, int n, int nrhs, float _Complex * a, int lda, int * ipiv, float _Complex * b, int ldb);
int LAPACKE_zgesv_work(int matrix_order, int n, int nrhs, double _Complex * a, int lda, int * ipiv, double _Complex * b, int ldb);
int LAPACKE_dsgesv_work(int matrix_order, int n, int nrhs, double * a, int lda, int * ipiv, double * b, int ldb, double * x, int ldx, double * work, float * swork, int * iter);
int LAPACKE_zcgesv_work(int matrix_order, int n, int nrhs, double _Complex * a, int lda, int * ipiv, double _Complex * b, int ldb, double _Complex * x, int ldx, double _Complex * work, float _Complex * swork, double * rwork, int * iter);
int LAPACKE_sgesvd_work(int matrix_order, char jobu, char jobvt, int m, int n, float * a, int lda, float * s, float * u, int ldu, float * vt, int ldvt, float * work, int lwork);
int LAPACKE_dgesvd_work(int matrix_order, char jobu, char jobvt, int m, int n, double * a, int lda, double * s, double * u, int ldu, double * vt, int ldvt, double * work, int lwork);
int LAPACKE_cgesvd_work(int matrix_order, char jobu, char jobvt, int m, int n, float _Complex * a, int lda, float * s, float _Complex * u, int ldu, float _Complex * vt, int ldvt, float _Complex * work, int lwork, float * rwork);
int LAPACKE_zgesvd_work(int matrix_order, char jobu, char jobvt, int m, int n, double _Complex * a, int lda, double * s, double _Complex * u, int ldu, double _Complex * vt, int ldvt, double _Complex * work, int lwork, double * rwork);
int LAPACKE_sgesvj_work(int matrix_order, char joba, char jobu, char jobv, int m, int n, float * a, int lda, float * sva, int mv, float * v, int ldv, float * work, int lwork);
int LAPACKE_dgesvj_work(int matrix_order, char joba, char jobu, char jobv, int m, int n, double * a, int lda, double * sva, int mv, double * v, int ldv, double * work, int lwork);
int LAPACKE_sgesvx_work(int matrix_order, char fact, char trans, int n, int nrhs, float * a, int lda, float * af, int ldaf, int * ipiv, char * equed, float * r, float * c, float * b, int ldb, float * x, int ldx, float * rcond, float * ferr, float * berr, float * work, int * iwork);
int LAPACKE_dgesvx_work(int matrix_order, char fact, char trans, int n, int nrhs, double * a, int lda, double * af, int ldaf, int * ipiv, char * equed, double * r, double * c, double * b, int ldb, double * x, int ldx, double * rcond, double * ferr, double * berr, double * work, int * iwork);
int LAPACKE_cgesvx_work(int matrix_order, char fact, char trans, int n, int nrhs, float _Complex * a, int lda, float _Complex * af, int ldaf, int * ipiv, char * equed, float * r, float * c, float _Complex * b, int ldb, float _Complex * x, int ldx, float * rcond, float * ferr, float * berr, float _Complex * work, float * rwork);
int LAPACKE_zgesvx_work(int matrix_order, char fact, char trans, int n, int nrhs, double _Complex * a, int lda, double _Complex * af, int ldaf, int * ipiv, char * equed, double * r, double * c, double _Complex * b, int ldb, double _Complex * x, int ldx, double * rcond, double * ferr, double * berr, double _Complex * work, double * rwork);
int LAPACKE_sgesvxx_work(int matrix_order, char fact, char trans, int n, int nrhs, float * a, int lda, float * af, int ldaf, int * ipiv, char * equed, float * r, float * c, float * b, int ldb, float * x, int ldx, float * rcond, float * rpvgrw, float * berr, int n_err_bnds, float * err_bnds_norm, float * err_bnds_comp, int nparams, float * params, float * work, int * iwork);
int LAPACKE_dgesvxx_work(int matrix_order, char fact, char trans, int n, int nrhs, double * a, int lda, double * af, int ldaf, int * ipiv, char * equed, double * r, double * c, double * b, int ldb, double * x, int ldx, double * rcond, double * rpvgrw, double * berr, int n_err_bnds, double * err_bnds_norm, double * err_bnds_comp, int nparams, double * params, double * work, int * iwork);
int LAPACKE_cgesvxx_work(int matrix_order, char fact, char trans, int n, int nrhs, float _Complex * a, int lda, float _Complex * af, int ldaf, int * ipiv, char * equed, float * r, float * c, float _Complex * b, int ldb, float _Complex * x, int ldx, float * rcond, float * rpvgrw, float * berr, int n_err_bnds, float * err_bnds_norm, float * err_bnds_comp, int nparams, float * params, float _Complex * work, float * rwork);
int LAPACKE_zgesvxx_work(int matrix_order, char fact, char trans, int n, int nrhs, double _Complex * a, int lda, double _Complex * af, int ldaf, int * ipiv, char * equed, double * r, double * c, double _Complex * b, int ldb, double _Complex * x, int ldx, double * rcond, double * rpvgrw, double * berr, int n_err_bnds, double * err_bnds_norm, double * err_bnds_comp, int nparams, double * params, double _Complex * work, double * rwork);
int LAPACKE_sgetf2_work(int matrix_order, int m, int n, float * a, int lda, int * ipiv);
int LAPACKE_dgetf2_work(int matrix_order, int m, int n, double * a, int lda, int * ipiv);
int LAPACKE_cgetf2_work(int matrix_order, int m, int n, float _Complex * a, int lda, int * ipiv);
int LAPACKE_zgetf2_work(int matrix_order, int m, int n, double _Complex * a, int lda, int * ipiv);
int LAPACKE_sgetrf_work(int matrix_order, int m, int n, float * a, int lda, int * ipiv);
int LAPACKE_dgetrf_work(int matrix_order, int m, int n, double * a, int lda, int * ipiv);
int LAPACKE_cgetrf_work(int matrix_order, int m, int n, float _Complex * a, int lda, int * ipiv);
int LAPACKE_zgetrf_work(int matrix_order, int m, int n, double _Complex * a, int lda, int * ipiv);
int LAPACKE_sgetri_work(int matrix_order, int n, float * a, int lda, int const * ipiv, float * work, int lwork);
int LAPACKE_dgetri_work(int matrix_order, int n, double * a, int lda, int const * ipiv, double * work, int lwork);
int LAPACKE_cgetri_work(int matrix_order, int n, float _Complex * a, int lda, int const * ipiv, float _Complex * work, int lwork);
int LAPACKE_zgetri_work(int matrix_order, int n, double _Complex * a, int lda, int const * ipiv, double _Complex * work, int lwork);
int LAPACKE_sgetrs_work(int matrix_order, char trans, int n, int nrhs, float const * a, int lda, int const * ipiv, float * b, int ldb);
int LAPACKE_dgetrs_work(int matrix_order, char trans, int n, int nrhs, double const * a, int lda, int const * ipiv, double * b, int ldb);
int LAPACKE_cgetrs_work(int matrix_order, char trans, int n, int nrhs, float _Complex const * a, int lda, int const * ipiv, float _Complex * b, int ldb);
int LAPACKE_zgetrs_work(int matrix_order, char trans, int n, int nrhs, double _Complex const * a, int lda, int const * ipiv, double _Complex * b, int ldb);
int LAPACKE_sggbak_work(int matrix_order, char job, char side, int n, int ilo, int ihi, float const * lscale, float const * rscale, int m, float * v, int ldv);
int LAPACKE_dggbak_work(int matrix_order, char job, char side, int n, int ilo, int ihi, double const * lscale, double const * rscale, int m, double * v, int ldv);
int LAPACKE_cggbak_work(int matrix_order, char job, char side, int n, int ilo, int ihi, float const * lscale, float const * rscale, int m, float _Complex * v, int ldv);
int LAPACKE_zggbak_work(int matrix_order, char job, char side, int n, int ilo, int ihi, double const * lscale, double const * rscale, int m, double _Complex * v, int ldv);
int LAPACKE_sggbal_work(int matrix_order, char job, int n, float * a, int lda, float * b, int ldb, int * ilo, int * ihi, float * lscale, float * rscale, float * work);
int LAPACKE_dggbal_work(int matrix_order, char job, int n, double * a, int lda, double * b, int ldb, int * ilo, int * ihi, double * lscale, double * rscale, double * work);
int LAPACKE_cggbal_work(int matrix_order, char job, int n, float _Complex * a, int lda, float _Complex * b, int ldb, int * ilo, int * ihi, float * lscale, float * rscale, float * work);
int LAPACKE_zggbal_work(int matrix_order, char job, int n, double _Complex * a, int lda, double _Complex * b, int ldb, int * ilo, int * ihi, double * lscale, double * rscale, double * work);
int LAPACKE_sgges_work(int matrix_order, char jobvsl, char jobvsr, char sort, int (* selctg)(float const * , float const * , float const * ), int n, float * a, int lda, float * b, int ldb, int * sdim, float * alphar, float * alphai, float * beta, float * vsl, int ldvsl, float * vsr, int ldvsr, float * work, int lwork, int * bwork);
int LAPACKE_dgges_work(int matrix_order, char jobvsl, char jobvsr, char sort, int (* selctg)(double const * , double const * , double const * ), int n, double * a, int lda, double * b, int ldb, int * sdim, double * alphar, double * alphai, double * beta, double * vsl, int ldvsl, double * vsr, int ldvsr, double * work, int lwork, int * bwork);
int LAPACKE_cgges_work(int matrix_order, char jobvsl, char jobvsr, char sort, int (* selctg)(float _Complex const * , float _Complex const * ), int n, float _Complex * a, int lda, float _Complex * b, int ldb, int * sdim, float _Complex * alpha, float _Complex * beta, float _Complex * vsl, int ldvsl, float _Complex * vsr, int ldvsr, float _Complex * work, int lwork, float * rwork, int * bwork);
int LAPACKE_zgges_work(int matrix_order, char jobvsl, char jobvsr, char sort, int (* selctg)(double _Complex const * , double _Complex const * ), int n, double _Complex * a, int lda, double _Complex * b, int ldb, int * sdim, double _Complex * alpha, double _Complex * beta, double _Complex * vsl, int ldvsl, double _Complex * vsr, int ldvsr, double _Complex * work, int lwork, double * rwork, int * bwork);
int LAPACKE_sggesx_work(int matrix_order, char jobvsl, char jobvsr, char sort, int (* selctg)(float const * , float const * , float const * ), char sense, int n, float * a, int lda, float * b, int ldb, int * sdim, float * alphar, float * alphai, float * beta, float * vsl, int ldvsl, float * vsr, int ldvsr, float * rconde, float * rcondv, float * work, int lwork, int * iwork, int liwork, int * bwork);
int LAPACKE_dggesx_work(int matrix_order, char jobvsl, char jobvsr, char sort, int (* selctg)(double const * , double const * , double const * ), char sense, int n, double * a, int lda, double * b, int ldb, int * sdim, double * alphar, double * alphai, double * beta, double * vsl, int ldvsl, double * vsr, int ldvsr, double * rconde, double * rcondv, double * work, int lwork, int * iwork, int liwork, int * bwork);
int LAPACKE_cggesx_work(int matrix_order, char jobvsl, char jobvsr, char sort, int (* selctg)(float _Complex const * , float _Complex const * ), char sense, int n, float _Complex * a, int lda, float _Complex * b, int ldb, int * sdim, float _Complex * alpha, float _Complex * beta, float _Complex * vsl, int ldvsl, float _Complex * vsr, int ldvsr, float * rconde, float * rcondv, float _Complex * work, int lwork, float * rwork, int * iwork, int liwork, int * bwork);
int LAPACKE_zggesx_work(int matrix_order, char jobvsl, char jobvsr, char sort, int (* selctg)(double _Complex const * , double _Complex const * ), char sense, int n, double _Complex * a, int lda, double _Complex * b, int ldb, int * sdim, double _Complex * alpha, double _Complex * beta, double _Complex * vsl, int ldvsl, double _Complex * vsr, int ldvsr, double * rconde, double * rcondv, double _Complex * work, int lwork, double * rwork, int * iwork, int liwork, int * bwork);
int LAPACKE_sggev_work(int matrix_order, char jobvl, char jobvr, int n, float * a, int lda, float * b, int ldb, float * alphar, float * alphai, float * beta, float * vl, int ldvl, float * vr, int ldvr, float * work, int lwork);
int LAPACKE_dggev_work(int matrix_order, char jobvl, char jobvr, int n, double * a, int lda, double * b, int ldb, double * alphar, double * alphai, double * beta, double * vl, int ldvl, double * vr, int ldvr, double * work, int lwork);
int LAPACKE_cggev_work(int matrix_order, char jobvl, char jobvr, int n, float _Complex * a, int lda, float _Complex * b, int ldb, float _Complex * alpha, float _Complex * beta, float _Complex * vl, int ldvl, float _Complex * vr, int ldvr, float _Complex * work, int lwork, float * rwork);
int LAPACKE_zggev_work(int matrix_order, char jobvl, char jobvr, int n, double _Complex * a, int lda, double _Complex * b, int ldb, double _Complex * alpha, double _Complex * beta, double _Complex * vl, int ldvl, double _Complex * vr, int ldvr, double _Complex * work, int lwork, double * rwork);
int LAPACKE_sggevx_work(int matrix_order, char balanc, char jobvl, char jobvr, char sense, int n, float * a, int lda, float * b, int ldb, float * alphar, float * alphai, float * beta, float * vl, int ldvl, float * vr, int ldvr, int * ilo, int * ihi, float * lscale, float * rscale, float * abnrm, float * bbnrm, float * rconde, float * rcondv, float * work, int lwork, int * iwork, int * bwork);
int LAPACKE_dggevx_work(int matrix_order, char balanc, char jobvl, char jobvr, char sense, int n, double * a, int lda, double * b, int ldb, double * alphar, double * alphai, double * beta, double * vl, int ldvl, double * vr, int ldvr, int * ilo, int * ihi, double * lscale, double * rscale, double * abnrm, double * bbnrm, double * rconde, double * rcondv, double * work, int lwork, int * iwork, int * bwork);
int LAPACKE_cggevx_work(int matrix_order, char balanc, char jobvl, char jobvr, char sense, int n, float _Complex * a, int lda, float _Complex * b, int ldb, float _Complex * alpha, float _Complex * beta, float _Complex * vl, int ldvl, float _Complex * vr, int ldvr, int * ilo, int * ihi, float * lscale, float * rscale, float * abnrm, float * bbnrm, float * rconde, float * rcondv, float _Complex * work, int lwork, float * rwork, int * iwork, int * bwork);
int LAPACKE_zggevx_work(int matrix_order, char balanc, char jobvl, char jobvr, char sense, int n, double _Complex * a, int lda, double _Complex * b, int ldb, double _Complex * alpha, double _Complex * beta, double _Complex * vl, int ldvl, double _Complex * vr, int ldvr, int * ilo, int * ihi, double * lscale, double * rscale, double * abnrm, double * bbnrm, double * rconde, double * rcondv, double _Complex * work, int lwork, double * rwork, int * iwork, int * bwork);
int LAPACKE_sggglm_work(int matrix_order, int n, int m, int p, float * a, int lda, float * b, int ldb, float * d, float * x, float * y, float * work, int lwork);
int LAPACKE_dggglm_work(int matrix_order, int n, int m, int p, double * a, int lda, double * b, int ldb, double * d, double * x, double * y, double * work, int lwork);
int LAPACKE_cggglm_work(int matrix_order, int n, int m, int p, float _Complex * a, int lda, float _Complex * b, int ldb, float _Complex * d, float _Complex * x, float _Complex * y, float _Complex * work, int lwork);
int LAPACKE_zggglm_work(int matrix_order, int n, int m, int p, double _Complex * a, int lda, double _Complex * b, int ldb, double _Complex * d, double _Complex * x, double _Complex * y, double _Complex * work, int lwork);
int LAPACKE_sgghrd_work(int matrix_order, char compq, char compz, int n, int ilo, int ihi, float * a, int lda, float * b, int ldb, float * q, int ldq, float * z, int ldz);
int LAPACKE_dgghrd_work(int matrix_order, char compq, char compz, int n, int ilo, int ihi, double * a, int lda, double * b, int ldb, double * q, int ldq, double * z, int ldz);
int LAPACKE_cgghrd_work(int matrix_order, char compq, char compz, int n, int ilo, int ihi, float _Complex * a, int lda, float _Complex * b, int ldb, float _Complex * q, int ldq, float _Complex * z, int ldz);
int LAPACKE_zgghrd_work(int matrix_order, char compq, char compz, int n, int ilo, int ihi, double _Complex * a, int lda, double _Complex * b, int ldb, double _Complex * q, int ldq, double _Complex * z, int ldz);
int LAPACKE_sgglse_work(int matrix_order, int m, int n, int p, float * a, int lda, float * b, int ldb, float * c, float * d, float * x, float * work, int lwork);
int LAPACKE_dgglse_work(int matrix_order, int m, int n, int p, double * a, int lda, double * b, int ldb, double * c, double * d, double * x, double * work, int lwork);
int LAPACKE_cgglse_work(int matrix_order, int m, int n, int p, float _Complex * a, int lda, float _Complex * b, int ldb, float _Complex * c, float _Complex * d, float _Complex * x, float _Complex * work, int lwork);
int LAPACKE_zgglse_work(int matrix_order, int m, int n, int p, double _Complex * a, int lda, double _Complex * b, int ldb, double _Complex * c, double _Complex * d, double _Complex * x, double _Complex * work, int lwork);
int LAPACKE_sggqrf_work(int matrix_order, int n, int m, int p, float * a, int lda, float * taua, float * b, int ldb, float * taub, float * work, int lwork);
int LAPACKE_dggqrf_work(int matrix_order, int n, int m, int p, double * a, int lda, double * taua, double * b, int ldb, double * taub, double * work, int lwork);
int LAPACKE_cggqrf_work(int matrix_order, int n, int m, int p, float _Complex * a, int lda, float _Complex * taua, float _Complex * b, int ldb, float _Complex * taub, float _Complex * work, int lwork);
int LAPACKE_zggqrf_work(int matrix_order, int n, int m, int p, double _Complex * a, int lda, double _Complex * taua, double _Complex * b, int ldb, double _Complex * taub, double _Complex * work, int lwork);
int LAPACKE_sggrqf_work(int matrix_order, int m, int p, int n, float * a, int lda, float * taua, float * b, int ldb, float * taub, float * work, int lwork);
int LAPACKE_dggrqf_work(int matrix_order, int m, int p, int n, double * a, int lda, double * taua, double * b, int ldb, double * taub, double * work, int lwork);
int LAPACKE_cggrqf_work(int matrix_order, int m, int p, int n, float _Complex * a, int lda, float _Complex * taua, float _Complex * b, int ldb, float _Complex * taub, float _Complex * work, int lwork);
int LAPACKE_zggrqf_work(int matrix_order, int m, int p, int n, double _Complex * a, int lda, double _Complex * taua, double _Complex * b, int ldb, double _Complex * taub, double _Complex * work, int lwork);
int LAPACKE_sggsvd_work(int matrix_order, char jobu, char jobv, char jobq, int m, int n, int p, int * k, int * l, float * a, int lda, float * b, int ldb, float * alpha, float * beta, float * u, int ldu, float * v, int ldv, float * q, int ldq, float * work, int * iwork);
int LAPACKE_dggsvd_work(int matrix_order, char jobu, char jobv, char jobq, int m, int n, int p, int * k, int * l, double * a, int lda, double * b, int ldb, double * alpha, double * beta, double * u, int ldu, double * v, int ldv, double * q, int ldq, double * work, int * iwork);
int LAPACKE_cggsvd_work(int matrix_order, char jobu, char jobv, char jobq, int m, int n, int p, int * k, int * l, float _Complex * a, int lda, float _Complex * b, int ldb, float * alpha, float * beta, float _Complex * u, int ldu, float _Complex * v, int ldv, float _Complex * q, int ldq, float _Complex * work, float * rwork, int * iwork);
int LAPACKE_zggsvd_work(int matrix_order, char jobu, char jobv, char jobq, int m, int n, int p, int * k, int * l, double _Complex * a, int lda, double _Complex * b, int ldb, double * alpha, double * beta, double _Complex * u, int ldu, double _Complex * v, int ldv, double _Complex * q, int ldq, double _Complex * work, double * rwork, int * iwork);
int LAPACKE_sggsvp_work(int matrix_order, char jobu, char jobv, char jobq, int m, int p, int n, float * a, int lda, float * b, int ldb, float tola, float tolb, int * k, int * l, float * u, int ldu, float * v, int ldv, float * q, int ldq, int * iwork, float * tau, float * work);
int LAPACKE_dggsvp_work(int matrix_order, char jobu, char jobv, char jobq, int m, int p, int n, double * a, int lda, double * b, int ldb, double tola, double tolb, int * k, int * l, double * u, int ldu, double * v, int ldv, double * q, int ldq, int * iwork, double * tau, double * work);
int LAPACKE_cggsvp_work(int matrix_order, char jobu, char jobv, char jobq, int m, int p, int n, float _Complex * a, int lda, float _Complex * b, int ldb, float tola, float tolb, int * k, int * l, float _Complex * u, int ldu, float _Complex * v, int ldv, float _Complex * q, int ldq, int * iwork, float * rwork, float _Complex * tau, float _Complex * work);
int LAPACKE_zggsvp_work(int matrix_order, char jobu, char jobv, char jobq, int m, int p, int n, double _Complex * a, int lda, double _Complex * b, int ldb, double tola, double tolb, int * k, int * l, double _Complex * u, int ldu, double _Complex * v, int ldv, double _Complex * q, int ldq, int * iwork, double * rwork, double _Complex * tau, double _Complex * work);
int LAPACKE_sgtcon_work(char norm, int n, float const * dl, float const * d, float const * du, float const * du2, int const * ipiv, float anorm, float * rcond, float * work, int * iwork);
int LAPACKE_dgtcon_work(char norm, int n, double const * dl, double const * d, double const * du, double const * du2, int const * ipiv, double anorm, double * rcond, double * work, int * iwork);
int LAPACKE_cgtcon_work(char norm, int n, float _Complex const * dl, float _Complex const * d, float _Complex const * du, float _Complex const * du2, int const * ipiv, float anorm, float * rcond, float _Complex * work);
int LAPACKE_zgtcon_work(char norm, int n, double _Complex const * dl, double _Complex const * d, double _Complex const * du, double _Complex const * du2, int const * ipiv, double anorm, double * rcond, double _Complex * work);
int LAPACKE_sgtrfs_work(int matrix_order, char trans, int n, int nrhs, float const * dl, float const * d, float const * du, float const * dlf, float const * df, float const * duf, float const * du2, int const * ipiv, float const * b, int ldb, float * x, int ldx, float * ferr, float * berr, float * work, int * iwork);
int LAPACKE_dgtrfs_work(int matrix_order, char trans, int n, int nrhs, double const * dl, double const * d, double const * du, double const * dlf, double const * df, double const * duf, double const * du2, int const * ipiv, double const * b, int ldb, double * x, int ldx, double * ferr, double * berr, double * work, int * iwork);
int LAPACKE_cgtrfs_work(int matrix_order, char trans, int n, int nrhs, float _Complex const * dl, float _Complex const * d, float _Complex const * du, float _Complex const * dlf, float _Complex const * df, float _Complex const * duf, float _Complex const * du2, int const * ipiv, float _Complex const * b, int ldb, float _Complex * x, int ldx, float * ferr, float * berr, float _Complex * work, float * rwork);
int LAPACKE_zgtrfs_work(int matrix_order, char trans, int n, int nrhs, double _Complex const * dl, double _Complex const * d, double _Complex const * du, double _Complex const * dlf, double _Complex const * df, double _Complex const * duf, double _Complex const * du2, int const * ipiv, double _Complex const * b, int ldb, double _Complex * x, int ldx, double * ferr, double * berr, double _Complex * work, double * rwork);
int LAPACKE_sgtsv_work(int matrix_order, int n, int nrhs, float * dl, float * d, float * du, float * b, int ldb);
int LAPACKE_dgtsv_work(int matrix_order, int n, int nrhs, double * dl, double * d, double * du, double * b, int ldb);
int LAPACKE_cgtsv_work(int matrix_order, int n, int nrhs, float _Complex * dl, float _Complex * d, float _Complex * du, float _Complex * b, int ldb);
int LAPACKE_zgtsv_work(int matrix_order, int n, int nrhs, double _Complex * dl, double _Complex * d, double _Complex * du, double _Complex * b, int ldb);
int LAPACKE_sgtsvx_work(int matrix_order, char fact, char trans, int n, int nrhs, float const * dl, float const * d, float const * du, float * dlf, float * df, float * duf, float * du2, int * ipiv, float const * b, int ldb, float * x, int ldx, float * rcond, float * ferr, float * berr, float * work, int * iwork);
int LAPACKE_dgtsvx_work(int matrix_order, char fact, char trans, int n, int nrhs, double const * dl, double const * d, double const * du, double * dlf, double * df, double * duf, double * du2, int * ipiv, double const * b, int ldb, double * x, int ldx, double * rcond, double * ferr, double * berr, double * work, int * iwork);
int LAPACKE_cgtsvx_work(int matrix_order, char fact, char trans, int n, int nrhs, float _Complex const * dl, float _Complex const * d, float _Complex const * du, float _Complex * dlf, float _Complex * df, float _Complex * duf, float _Complex * du2, int * ipiv, float _Complex const * b, int ldb, float _Complex * x, int ldx, float * rcond, float * ferr, float * berr, float _Complex * work, float * rwork);
int LAPACKE_zgtsvx_work(int matrix_order, char fact, char trans, int n, int nrhs, double _Complex const * dl, double _Complex const * d, double _Complex const * du, double _Complex * dlf, double _Complex * df, double _Complex * duf, double _Complex * du2, int * ipiv, double _Complex const * b, int ldb, double _Complex * x, int ldx, double * rcond, double * ferr, double * berr, double _Complex * work, double * rwork);
int LAPACKE_sgttrf_work(int n, float * dl, float * d, float * du, float * du2, int * ipiv);
int LAPACKE_dgttrf_work(int n, double * dl, double * d, double * du, double * du2, int * ipiv);
int LAPACKE_cgttrf_work(int n, float _Complex * dl, float _Complex * d, float _Complex * du, float _Complex * du2, int * ipiv);
int LAPACKE_zgttrf_work(int n, double _Complex * dl, double _Complex * d, double _Complex * du, double _Complex * du2, int * ipiv);
int LAPACKE_sgttrs_work(int matrix_order, char trans, int n, int nrhs, float const * dl, float const * d, float const * du, float const * du2, int const * ipiv, float * b, int ldb);
int LAPACKE_dgttrs_work(int matrix_order, char trans, int n, int nrhs, double const * dl, double const * d, double const * du, double const * du2, int const * ipiv, double * b, int ldb);
int LAPACKE_cgttrs_work(int matrix_order, char trans, int n, int nrhs, float _Complex const * dl, float _Complex const * d, float _Complex const * du, float _Complex const * du2, int const * ipiv, float _Complex * b, int ldb);
int LAPACKE_zgttrs_work(int matrix_order, char trans, int n, int nrhs, double _Complex const * dl, double _Complex const * d, double _Complex const * du, double _Complex const * du2, int const * ipiv, double _Complex * b, int ldb);
int LAPACKE_chbev_work(int matrix_order, char jobz, char uplo, int n, int kd, float _Complex * ab, int ldab, float * w, float _Complex * z, int ldz, float _Complex * work, float * rwork);
int LAPACKE_zhbev_work(int matrix_order, char jobz, char uplo, int n, int kd, double _Complex * ab, int ldab, double * w, double _Complex * z, int ldz, double _Complex * work, double * rwork);
int LAPACKE_chbevd_work(int matrix_order, char jobz, char uplo, int n, int kd, float _Complex * ab, int ldab, float * w, float _Complex * z, int ldz, float _Complex * work, int lwork, float * rwork, int lrwork, int * iwork, int liwork);
int LAPACKE_zhbevd_work(int matrix_order, char jobz, char uplo, int n, int kd, double _Complex * ab, int ldab, double * w, double _Complex * z, int ldz, double _Complex * work, int lwork, double * rwork, int lrwork, int * iwork, int liwork);
int LAPACKE_chbevx_work(int matrix_order, char jobz, char range, char uplo, int n, int kd, float _Complex * ab, int ldab, float _Complex * q, int ldq, float vl, float vu, int il, int iu, float abstol, int * m, float * w, float _Complex * z, int ldz, float _Complex * work, float * rwork, int * iwork, int * ifail);
int LAPACKE_zhbevx_work(int matrix_order, char jobz, char range, char uplo, int n, int kd, double _Complex * ab, int ldab, double _Complex * q, int ldq, double vl, double vu, int il, int iu, double abstol, int * m, double * w, double _Complex * z, int ldz, double _Complex * work, double * rwork, int * iwork, int * ifail);
int LAPACKE_chbgst_work(int matrix_order, char vect, char uplo, int n, int ka, int kb, float _Complex * ab, int ldab, float _Complex const * bb, int ldbb, float _Complex * x, int ldx, float _Complex * work, float * rwork);
int LAPACKE_zhbgst_work(int matrix_order, char vect, char uplo, int n, int ka, int kb, double _Complex * ab, int ldab, double _Complex const * bb, int ldbb, double _Complex * x, int ldx, double _Complex * work, double * rwork);
int LAPACKE_chbgv_work(int matrix_order, char jobz, char uplo, int n, int ka, int kb, float _Complex * ab, int ldab, float _Complex * bb, int ldbb, float * w, float _Complex * z, int ldz, float _Complex * work, float * rwork);
int LAPACKE_zhbgv_work(int matrix_order, char jobz, char uplo, int n, int ka, int kb, double _Complex * ab, int ldab, double _Complex * bb, int ldbb, double * w, double _Complex * z, int ldz, double _Complex * work, double * rwork);
int LAPACKE_chbgvd_work(int matrix_order, char jobz, char uplo, int n, int ka, int kb, float _Complex * ab, int ldab, float _Complex * bb, int ldbb, float * w, float _Complex * z, int ldz, float _Complex * work, int lwork, float * rwork, int lrwork, int * iwork, int liwork);
int LAPACKE_zhbgvd_work(int matrix_order, char jobz, char uplo, int n, int ka, int kb, double _Complex * ab, int ldab, double _Complex * bb, int ldbb, double * w, double _Complex * z, int ldz, double _Complex * work, int lwork, double * rwork, int lrwork, int * iwork, int liwork);
int LAPACKE_chbgvx_work(int matrix_order, char jobz, char range, char uplo, int n, int ka, int kb, float _Complex * ab, int ldab, float _Complex * bb, int ldbb, float _Complex * q, int ldq, float vl, float vu, int il, int iu, float abstol, int * m, float * w, float _Complex * z, int ldz, float _Complex * work, float * rwork, int * iwork, int * ifail);
int LAPACKE_zhbgvx_work(int matrix_order, char jobz, char range, char uplo, int n, int ka, int kb, double _Complex * ab, int ldab, double _Complex * bb, int ldbb, double _Complex * q, int ldq, double vl, double vu, int il, int iu, double abstol, int * m, double * w, double _Complex * z, int ldz, double _Complex * work, double * rwork, int * iwork, int * ifail);
int LAPACKE_chbtrd_work(int matrix_order, char vect, char uplo, int n, int kd, float _Complex * ab, int ldab, float * d, float * e, float _Complex * q, int ldq, float _Complex * work);
int LAPACKE_zhbtrd_work(int matrix_order, char vect, char uplo, int n, int kd, double _Complex * ab, int ldab, double * d, double * e, double _Complex * q, int ldq, double _Complex * work);
int LAPACKE_checon_work(int matrix_order, char uplo, int n, float _Complex const * a, int lda, int const * ipiv, float anorm, float * rcond, float _Complex * work);
int LAPACKE_zhecon_work(int matrix_order, char uplo, int n, double _Complex const * a, int lda, int const * ipiv, double anorm, double * rcond, double _Complex * work);
int LAPACKE_cheequb_work(int matrix_order, char uplo, int n, float _Complex const * a, int lda, float * s, float * scond, float * amax, float _Complex * work);
int LAPACKE_zheequb_work(int matrix_order, char uplo, int n, double _Complex const * a, int lda, double * s, double * scond, double * amax, double _Complex * work);
int LAPACKE_cheev_work(int matrix_order, char jobz, char uplo, int n, float _Complex * a, int lda, float * w, float _Complex * work, int lwork, float * rwork);
int LAPACKE_zheev_work(int matrix_order, char jobz, char uplo, int n, double _Complex * a, int lda, double * w, double _Complex * work, int lwork, double * rwork);
int LAPACKE_cheevd_work(int matrix_order, char jobz, char uplo, int n, float _Complex * a, int lda, float * w, float _Complex * work, int lwork, float * rwork, int lrwork, int * iwork, int liwork);
int LAPACKE_zheevd_work(int matrix_order, char jobz, char uplo, int n, double _Complex * a, int lda, double * w, double _Complex * work, int lwork, double * rwork, int lrwork, int * iwork, int liwork);
int LAPACKE_cheevr_work(int matrix_order, char jobz, char range, char uplo, int n, float _Complex * a, int lda, float vl, float vu, int il, int iu, float abstol, int * m, float * w, float _Complex * z, int ldz, int * isuppz, float _Complex * work, int lwork, float * rwork, int lrwork, int * iwork, int liwork);
int LAPACKE_zheevr_work(int matrix_order, char jobz, char range, char uplo, int n, double _Complex * a, int lda, double vl, double vu, int il, int iu, double abstol, int * m, double * w, double _Complex * z, int ldz, int * isuppz, double _Complex * work, int lwork, double * rwork, int lrwork, int * iwork, int liwork);
int LAPACKE_cheevx_work(int matrix_order, char jobz, char range, char uplo, int n, float _Complex * a, int lda, float vl, float vu, int il, int iu, float abstol, int * m, float * w, float _Complex * z, int ldz, float _Complex * work, int lwork, float * rwork, int * iwork, int * ifail);
int LAPACKE_zheevx_work(int matrix_order, char jobz, char range, char uplo, int n, double _Complex * a, int lda, double vl, double vu, int il, int iu, double abstol, int * m, double * w, double _Complex * z, int ldz, double _Complex * work, int lwork, double * rwork, int * iwork, int * ifail);
int LAPACKE_chegst_work(int matrix_order, int itype, char uplo, int n, float _Complex * a, int lda, float _Complex const * b, int ldb);
int LAPACKE_zhegst_work(int matrix_order, int itype, char uplo, int n, double _Complex * a, int lda, double _Complex const * b, int ldb);
int LAPACKE_chegv_work(int matrix_order, int itype, char jobz, char uplo, int n, float _Complex * a, int lda, float _Complex * b, int ldb, float * w, float _Complex * work, int lwork, float * rwork);
int LAPACKE_zhegv_work(int matrix_order, int itype, char jobz, char uplo, int n, double _Complex * a, int lda, double _Complex * b, int ldb, double * w, double _Complex * work, int lwork, double * rwork);
int LAPACKE_chegvd_work(int matrix_order, int itype, char jobz, char uplo, int n, float _Complex * a, int lda, float _Complex * b, int ldb, float * w, float _Complex * work, int lwork, float * rwork, int lrwork, int * iwork, int liwork);
int LAPACKE_zhegvd_work(int matrix_order, int itype, char jobz, char uplo, int n, double _Complex * a, int lda, double _Complex * b, int ldb, double * w, double _Complex * work, int lwork, double * rwork, int lrwork, int * iwork, int liwork);
int LAPACKE_chegvx_work(int matrix_order, int itype, char jobz, char range, char uplo, int n, float _Complex * a, int lda, float _Complex * b, int ldb, float vl, float vu, int il, int iu, float abstol, int * m, float * w, float _Complex * z, int ldz, float _Complex * work, int lwork, float * rwork, int * iwork, int * ifail);
int LAPACKE_zhegvx_work(int matrix_order, int itype, char jobz, char range, char uplo, int n, double _Complex * a, int lda, double _Complex * b, int ldb, double vl, double vu, int il, int iu, double abstol, int * m, double * w, double _Complex * z, int ldz, double _Complex * work, int lwork, double * rwork, int * iwork, int * ifail);
int LAPACKE_cherfs_work(int matrix_order, char uplo, int n, int nrhs, float _Complex const * a, int lda, float _Complex const * af, int ldaf, int const * ipiv, float _Complex const * b, int ldb, float _Complex * x, int ldx, float * ferr, float * berr, float _Complex * work, float * rwork);
int LAPACKE_zherfs_work(int matrix_order, char uplo, int n, int nrhs, double _Complex const * a, int lda, double _Complex const * af, int ldaf, int const * ipiv, double _Complex const * b, int ldb, double _Complex * x, int ldx, double * ferr, double * berr, double _Complex * work, double * rwork);
int LAPACKE_cherfsx_work(int matrix_order, char uplo, char equed, int n, int nrhs, float _Complex const * a, int lda, float _Complex const * af, int ldaf, int const * ipiv, float const * s, float _Complex const * b, int ldb, float _Complex * x, int ldx, float * rcond, float * berr, int n_err_bnds, float * err_bnds_norm, float * err_bnds_comp, int nparams, float * params, float _Complex * work, float * rwork);
int LAPACKE_zherfsx_work(int matrix_order, char uplo, char equed, int n, int nrhs, double _Complex const * a, int lda, double _Complex const * af, int ldaf, int const * ipiv, double const * s, double _Complex const * b, int ldb, double _Complex * x, int ldx, double * rcond, double * berr, int n_err_bnds, double * err_bnds_norm, double * err_bnds_comp, int nparams, double * params, double _Complex * work, double * rwork);
int LAPACKE_chesv_work(int matrix_order, char uplo, int n, int nrhs, float _Complex * a, int lda, int * ipiv, float _Complex * b, int ldb, float _Complex * work, int lwork);
int LAPACKE_zhesv_work(int matrix_order, char uplo, int n, int nrhs, double _Complex * a, int lda, int * ipiv, double _Complex * b, int ldb, double _Complex * work, int lwork);
int LAPACKE_chesvx_work(int matrix_order, char fact, char uplo, int n, int nrhs, float _Complex const * a, int lda, float _Complex * af, int ldaf, int * ipiv, float _Complex const * b, int ldb, float _Complex * x, int ldx, float * rcond, float * ferr, float * berr, float _Complex * work, int lwork, float * rwork);
int LAPACKE_zhesvx_work(int matrix_order, char fact, char uplo, int n, int nrhs, double _Complex const * a, int lda, double _Complex * af, int ldaf, int * ipiv, double _Complex const * b, int ldb, double _Complex * x, int ldx, double * rcond, double * ferr, double * berr, double _Complex * work, int lwork, double * rwork);
int LAPACKE_chesvxx_work(int matrix_order, char fact, char uplo, int n, int nrhs, float _Complex * a, int lda, float _Complex * af, int ldaf, int * ipiv, char * equed, float * s, float _Complex * b, int ldb, float _Complex * x, int ldx, float * rcond, float * rpvgrw, float * berr, int n_err_bnds, float * err_bnds_norm, float * err_bnds_comp, int nparams, float * params, float _Complex * work, float * rwork);
int LAPACKE_zhesvxx_work(int matrix_order, char fact, char uplo, int n, int nrhs, double _Complex * a, int lda, double _Complex * af, int ldaf, int * ipiv, char * equed, double * s, double _Complex * b, int ldb, double _Complex * x, int ldx, double * rcond, double * rpvgrw, double * berr, int n_err_bnds, double * err_bnds_norm, double * err_bnds_comp, int nparams, double * params, double _Complex * work, double * rwork);
int LAPACKE_chetrd_work(int matrix_order, char uplo, int n, float _Complex * a, int lda, float * d, float * e, float _Complex * tau, float _Complex * work, int lwork);
int LAPACKE_zhetrd_work(int matrix_order, char uplo, int n, double _Complex * a, int lda, double * d, double * e, double _Complex * tau, double _Complex * work, int lwork);
int LAPACKE_chetrf_work(int matrix_order, char uplo, int n, float _Complex * a, int lda, int * ipiv, float _Complex * work, int lwork);
int LAPACKE_zhetrf_work(int matrix_order, char uplo, int n, double _Complex * a, int lda, int * ipiv, double _Complex * work, int lwork);
int LAPACKE_chetri_work(int matrix_order, char uplo, int n, float _Complex * a, int lda, int const * ipiv, float _Complex * work);
int LAPACKE_zhetri_work(int matrix_order, char uplo, int n, double _Complex * a, int lda, int const * ipiv, double _Complex * work);
int LAPACKE_chetrs_work(int matrix_order, char uplo, int n, int nrhs, float _Complex const * a, int lda, int const * ipiv, float _Complex * b, int ldb);
int LAPACKE_zhetrs_work(int matrix_order, char uplo, int n, int nrhs, double _Complex const * a, int lda, int const * ipiv, double _Complex * b, int ldb);
int LAPACKE_chfrk_work(int matrix_order, char transr, char uplo, char trans, int n, int k, float alpha, float _Complex const * a, int lda, float beta, float _Complex * c);
int LAPACKE_zhfrk_work(int matrix_order, char transr, char uplo, char trans, int n, int k, double alpha, double _Complex const * a, int lda, double beta, double _Complex * c);
int LAPACKE_shgeqz_work(int matrix_order, char job, char compq, char compz, int n, int ilo, int ihi, float * h, int ldh, float * t, int ldt, float * alphar, float * alphai, float * beta, float * q, int ldq, float * z, int ldz, float * work, int lwork);
int LAPACKE_dhgeqz_work(int matrix_order, char job, char compq, char compz, int n, int ilo, int ihi, double * h, int ldh, double * t, int ldt, double * alphar, double * alphai, double * beta, double * q, int ldq, double * z, int ldz, double * work, int lwork);
int LAPACKE_chgeqz_work(int matrix_order, char job, char compq, char compz, int n, int ilo, int ihi, float _Complex * h, int ldh, float _Complex * t, int ldt, float _Complex * alpha, float _Complex * beta, float _Complex * q, int ldq, float _Complex * z, int ldz, float _Complex * work, int lwork, float * rwork);
int LAPACKE_zhgeqz_work(int matrix_order, char job, char compq, char compz, int n, int ilo, int ihi, double _Complex * h, int ldh, double _Complex * t, int ldt, double _Complex * alpha, double _Complex * beta, double _Complex * q, int ldq, double _Complex * z, int ldz, double _Complex * work, int lwork, double * rwork);
int LAPACKE_chpcon_work(int matrix_order, char uplo, int n, float _Complex const * ap, int const * ipiv, float anorm, float * rcond, float _Complex * work);
int LAPACKE_zhpcon_work(int matrix_order, char uplo, int n, double _Complex const * ap, int const * ipiv, double anorm, double * rcond, double _Complex * work);
int LAPACKE_chpev_work(int matrix_order, char jobz, char uplo, int n, float _Complex * ap, float * w, float _Complex * z, int ldz, float _Complex * work, float * rwork);
int LAPACKE_zhpev_work(int matrix_order, char jobz, char uplo, int n, double _Complex * ap, double * w, double _Complex * z, int ldz, double _Complex * work, double * rwork);
int LAPACKE_chpevd_work(int matrix_order, char jobz, char uplo, int n, float _Complex * ap, float * w, float _Complex * z, int ldz, float _Complex * work, int lwork, float * rwork, int lrwork, int * iwork, int liwork);
int LAPACKE_zhpevd_work(int matrix_order, char jobz, char uplo, int n, double _Complex * ap, double * w, double _Complex * z, int ldz, double _Complex * work, int lwork, double * rwork, int lrwork, int * iwork, int liwork);
int LAPACKE_chpevx_work(int matrix_order, char jobz, char range, char uplo, int n, float _Complex * ap, float vl, float vu, int il, int iu, float abstol, int * m, float * w, float _Complex * z, int ldz, float _Complex * work, float * rwork, int * iwork, int * ifail);
int LAPACKE_zhpevx_work(int matrix_order, char jobz, char range, char uplo, int n, double _Complex * ap, double vl, double vu, int il, int iu, double abstol, int * m, double * w, double _Complex * z, int ldz, double _Complex * work, double * rwork, int * iwork, int * ifail);
int LAPACKE_chpgst_work(int matrix_order, int itype, char uplo, int n, float _Complex * ap, float _Complex const * bp);
int LAPACKE_zhpgst_work(int matrix_order, int itype, char uplo, int n, double _Complex * ap, double _Complex const * bp);
int LAPACKE_chpgv_work(int matrix_order, int itype, char jobz, char uplo, int n, float _Complex * ap, float _Complex * bp, float * w, float _Complex * z, int ldz, float _Complex * work, float * rwork);
int LAPACKE_zhpgv_work(int matrix_order, int itype, char jobz, char uplo, int n, double _Complex * ap, double _Complex * bp, double * w, double _Complex * z, int ldz, double _Complex * work, double * rwork);
int LAPACKE_chpgvd_work(int matrix_order, int itype, char jobz, char uplo, int n, float _Complex * ap, float _Complex * bp, float * w, float _Complex * z, int ldz, float _Complex * work, int lwork, float * rwork, int lrwork, int * iwork, int liwork);
int LAPACKE_zhpgvd_work(int matrix_order, int itype, char jobz, char uplo, int n, double _Complex * ap, double _Complex * bp, double * w, double _Complex * z, int ldz, double _Complex * work, int lwork, double * rwork, int lrwork, int * iwork, int liwork);
int LAPACKE_chpgvx_work(int matrix_order, int itype, char jobz, char range, char uplo, int n, float _Complex * ap, float _Complex * bp, float vl, float vu, int il, int iu, float abstol, int * m, float * w, float _Complex * z, int ldz, float _Complex * work, float * rwork, int * iwork, int * ifail);
int LAPACKE_zhpgvx_work(int matrix_order, int itype, char jobz, char range, char uplo, int n, double _Complex * ap, double _Complex * bp, double vl, double vu, int il, int iu, double abstol, int * m, double * w, double _Complex * z, int ldz, double _Complex * work, double * rwork, int * iwork, int * ifail);
int LAPACKE_chprfs_work(int matrix_order, char uplo, int n, int nrhs, float _Complex const * ap, float _Complex const * afp, int const * ipiv, float _Complex const * b, int ldb, float _Complex * x, int ldx, float * ferr, float * berr, float _Complex * work, float * rwork);
int LAPACKE_zhprfs_work(int matrix_order, char uplo, int n, int nrhs, double _Complex const * ap, double _Complex const * afp, int const * ipiv, double _Complex const * b, int ldb, double _Complex * x, int ldx, double * ferr, double * berr, double _Complex * work, double * rwork);
int LAPACKE_chpsv_work(int matrix_order, char uplo, int n, int nrhs, float _Complex * ap, int * ipiv, float _Complex * b, int ldb);
int LAPACKE_zhpsv_work(int matrix_order, char uplo, int n, int nrhs, double _Complex * ap, int * ipiv, double _Complex * b, int ldb);
int LAPACKE_chpsvx_work(int matrix_order, char fact, char uplo, int n, int nrhs, float _Complex const * ap, float _Complex * afp, int * ipiv, float _Complex const * b, int ldb, float _Complex * x, int ldx, float * rcond, float * ferr, float * berr, float _Complex * work, float * rwork);
int LAPACKE_zhpsvx_work(int matrix_order, char fact, char uplo, int n, int nrhs, double _Complex const * ap, double _Complex * afp, int * ipiv, double _Complex const * b, int ldb, double _Complex * x, int ldx, double * rcond, double * ferr, double * berr, double _Complex * work, double * rwork);
int LAPACKE_chptrd_work(int matrix_order, char uplo, int n, float _Complex * ap, float * d, float * e, float _Complex * tau);
int LAPACKE_zhptrd_work(int matrix_order, char uplo, int n, double _Complex * ap, double * d, double * e, double _Complex * tau);
int LAPACKE_chptrf_work(int matrix_order, char uplo, int n, float _Complex * ap, int * ipiv);
int LAPACKE_zhptrf_work(int matrix_order, char uplo, int n, double _Complex * ap, int * ipiv);
int LAPACKE_chptri_work(int matrix_order, char uplo, int n, float _Complex * ap, int const * ipiv, float _Complex * work);
int LAPACKE_zhptri_work(int matrix_order, char uplo, int n, double _Complex * ap, int const * ipiv, double _Complex * work);
int LAPACKE_chptrs_work(int matrix_order, char uplo, int n, int nrhs, float _Complex const * ap, int const * ipiv, float _Complex * b, int ldb);
int LAPACKE_zhptrs_work(int matrix_order, char uplo, int n, int nrhs, double _Complex const * ap, int const * ipiv, double _Complex * b, int ldb);
int LAPACKE_shsein_work(int matrix_order, char job, char eigsrc, char initv, int * select, int n, float const * h, int ldh, float * wr, float const * wi, float * vl, int ldvl, float * vr, int ldvr, int mm, int * m, float * work, int * ifaill, int * ifailr);
int LAPACKE_dhsein_work(int matrix_order, char job, char eigsrc, char initv, int * select, int n, double const * h, int ldh, double * wr, double const * wi, double * vl, int ldvl, double * vr, int ldvr, int mm, int * m, double * work, int * ifaill, int * ifailr);
int LAPACKE_chsein_work(int matrix_order, char job, char eigsrc, char initv, int const * select, int n, float _Complex const * h, int ldh, float _Complex * w, float _Complex * vl, int ldvl, float _Complex * vr, int ldvr, int mm, int * m, float _Complex * work, float * rwork, int * ifaill, int * ifailr);
int LAPACKE_zhsein_work(int matrix_order, char job, char eigsrc, char initv, int const * select, int n, double _Complex const * h, int ldh, double _Complex * w, double _Complex * vl, int ldvl, double _Complex * vr, int ldvr, int mm, int * m, double _Complex * work, double * rwork, int * ifaill, int * ifailr);
int LAPACKE_shseqr_work(int matrix_order, char job, char compz, int n, int ilo, int ihi, float * h, int ldh, float * wr, float * wi, float * z, int ldz, float * work, int lwork);
int LAPACKE_dhseqr_work(int matrix_order, char job, char compz, int n, int ilo, int ihi, double * h, int ldh, double * wr, double * wi, double * z, int ldz, double * work, int lwork);
int LAPACKE_chseqr_work(int matrix_order, char job, char compz, int n, int ilo, int ihi, float _Complex * h, int ldh, float _Complex * w, float _Complex * z, int ldz, float _Complex * work, int lwork);
int LAPACKE_zhseqr_work(int matrix_order, char job, char compz, int n, int ilo, int ihi, double _Complex * h, int ldh, double _Complex * w, double _Complex * z, int ldz, double _Complex * work, int lwork);
int LAPACKE_clacgv_work(int n, float _Complex * x, int incx);
int LAPACKE_zlacgv_work(int n, double _Complex * x, int incx);
int LAPACKE_slacn2_work(int n, float * v, float * x, int * isgn, float * est, int * kase, int * isave);
int LAPACKE_dlacn2_work(int n, double * v, double * x, int * isgn, double * est, int * kase, int * isave);
int LAPACKE_clacn2_work(int n, float _Complex * v, float _Complex * x, float * est, int * kase, int * isave);
int LAPACKE_zlacn2_work(int n, double _Complex * v, double _Complex * x, double * est, int * kase, int * isave);
int LAPACKE_slacpy_work(int matrix_order, char uplo, int m, int n, float const * a, int lda, float * b, int ldb);
int LAPACKE_dlacpy_work(int matrix_order, char uplo, int m, int n, double const * a, int lda, double * b, int ldb);
int LAPACKE_clacpy_work(int matrix_order, char uplo, int m, int n, float _Complex const * a, int lda, float _Complex * b, int ldb);
int LAPACKE_zlacpy_work(int matrix_order, char uplo, int m, int n, double _Complex const * a, int lda, double _Complex * b, int ldb);
int LAPACKE_clacp2_work(int matrix_order, char uplo, int m, int n, float const * a, int lda, float _Complex * b, int ldb);
int LAPACKE_zlacp2_work(int matrix_order, char uplo, int m, int n, double const * a, int lda, double _Complex * b, int ldb);
int LAPACKE_zlag2c_work(int matrix_order, int m, int n, double _Complex const * a, int lda, float _Complex * sa, int ldsa);
int LAPACKE_slag2d_work(int matrix_order, int m, int n, float const * sa, int ldsa, double * a, int lda);
int LAPACKE_dlag2s_work(int matrix_order, int m, int n, double const * a, int lda, float * sa, int ldsa);
int LAPACKE_clag2z_work(int matrix_order, int m, int n, float _Complex const * sa, int ldsa, double _Complex * a, int lda);
int LAPACKE_slagge_work(int matrix_order, int m, int n, int kl, int ku, float const * d, float * a, int lda, int * iseed, float * work);
int LAPACKE_dlagge_work(int matrix_order, int m, int n, int kl, int ku, double const * d, double * a, int lda, int * iseed, double * work);
int LAPACKE_clagge_work(int matrix_order, int m, int n, int kl, int ku, float const * d, float _Complex * a, int lda, int * iseed, float _Complex * work);
int LAPACKE_zlagge_work(int matrix_order, int m, int n, int kl, int ku, double const * d, double _Complex * a, int lda, int * iseed, double _Complex * work);
int LAPACKE_claghe_work(int matrix_order, int n, int k, float const * d, float _Complex * a, int lda, int * iseed, float _Complex * work);
int LAPACKE_zlaghe_work(int matrix_order, int n, int k, double const * d, double _Complex * a, int lda, int * iseed, double _Complex * work);
int LAPACKE_slagsy_work(int matrix_order, int n, int k, float const * d, float * a, int lda, int * iseed, float * work);
int LAPACKE_dlagsy_work(int matrix_order, int n, int k, double const * d, double * a, int lda, int * iseed, double * work);
int LAPACKE_clagsy_work(int matrix_order, int n, int k, float const * d, float _Complex * a, int lda, int * iseed, float _Complex * work);
int LAPACKE_zlagsy_work(int matrix_order, int n, int k, double const * d, double _Complex * a, int lda, int * iseed, double _Complex * work);
int LAPACKE_slapmr_work(int matrix_order, int forwrd, int m, int n, float * x, int ldx, int * k);
int LAPACKE_dlapmr_work(int matrix_order, int forwrd, int m, int n, double * x, int ldx, int * k);
int LAPACKE_clapmr_work(int matrix_order, int forwrd, int m, int n, float _Complex * x, int ldx, int * k);
int LAPACKE_zlapmr_work(int matrix_order, int forwrd, int m, int n, double _Complex * x, int ldx, int * k);
int LAPACKE_slartgp_work(float f, float g, float * cs, float * sn, float * r);
int LAPACKE_dlartgp_work(double f, double g, double * cs, double * sn, double * r);
int LAPACKE_slartgs_work(float x, float y, float sigma, float * cs, float * sn);
int LAPACKE_dlartgs_work(double x, double y, double sigma, double * cs, double * sn);
float LAPACKE_slapy2_work(float x, float y);
double LAPACKE_dlapy2_work(double x, double y);
float LAPACKE_slapy3_work(float x, float y, float z);
double LAPACKE_dlapy3_work(double x, double y, double z);
float LAPACKE_slamch_work(char cmach);
double LAPACKE_dlamch_work(char cmach);
float LAPACKE_slange_work(int matrix_order, char norm, int m, int n, float const * a, int lda, float * work);
double LAPACKE_dlange_work(int matrix_order, char norm, int m, int n, double const * a, int lda, double * work);
float LAPACKE_clange_work(int matrix_order, char norm, int m, int n, float _Complex const * a, int lda, float * work);
double LAPACKE_zlange_work(int matrix_order, char norm, int m, int n, double _Complex const * a, int lda, double * work);
float LAPACKE_clanhe_work(int matrix_order, char norm, char uplo, int n, float _Complex const * a, int lda, float * work);
double LAPACKE_zlanhe_work(int matrix_order, char norm, char uplo, int n, double _Complex const * a, int lda, double * work);
float LAPACKE_slansy_work(int matrix_order, char norm, char uplo, int n, float const * a, int lda, float * work);
double LAPACKE_dlansy_work(int matrix_order, char norm, char uplo, int n, double const * a, int lda, double * work);
float LAPACKE_clansy_work(int matrix_order, char norm, char uplo, int n, float _Complex const * a, int lda, float * work);
double LAPACKE_zlansy_work(int matrix_order, char norm, char uplo, int n, double _Complex const * a, int lda, double * work);
float LAPACKE_slantr_work(int matrix_order, char norm, char uplo, char diag, int m, int n, float const * a, int lda, float * work);
double LAPACKE_dlantr_work(int matrix_order, char norm, char uplo, char diag, int m, int n, double const * a, int lda, double * work);
float LAPACKE_clantr_work(int matrix_order, char norm, char uplo, char diag, int m, int n, float _Complex const * a, int lda, float * work);
double LAPACKE_zlantr_work(int matrix_order, char norm, char uplo, char diag, int m, int n, double _Complex const * a, int lda, double * work);
int LAPACKE_slarfb_work(int matrix_order, char side, char trans, char direct, char storev, int m, int n, int k, float const * v, int ldv, float const * t, int ldt, float * c, int ldc, float * work, int ldwork);
int LAPACKE_dlarfb_work(int matrix_order, char side, char trans, char direct, char storev, int m, int n, int k, double const * v, int ldv, double const * t, int ldt, double * c, int ldc, double * work, int ldwork);
int LAPACKE_clarfb_work(int matrix_order, char side, char trans, char direct, char storev, int m, int n, int k, float _Complex const * v, int ldv, float _Complex const * t, int ldt, float _Complex * c, int ldc, float _Complex * work, int ldwork);
int LAPACKE_zlarfb_work(int matrix_order, char side, char trans, char direct, char storev, int m, int n, int k, double _Complex const * v, int ldv, double _Complex const * t, int ldt, double _Complex * c, int ldc, double _Complex * work, int ldwork);
int LAPACKE_slarfg_work(int n, float * alpha, float * x, int incx, float * tau);
int LAPACKE_dlarfg_work(int n, double * alpha, double * x, int incx, double * tau);
int LAPACKE_clarfg_work(int n, float _Complex * alpha, float _Complex * x, int incx, float _Complex * tau);
int LAPACKE_zlarfg_work(int n, double _Complex * alpha, double _Complex * x, int incx, double _Complex * tau);
int LAPACKE_slarft_work(int matrix_order, char direct, char storev, int n, int k, float const * v, int ldv, float const * tau, float * t, int ldt);
int LAPACKE_dlarft_work(int matrix_order, char direct, char storev, int n, int k, double const * v, int ldv, double const * tau, double * t, int ldt);
int LAPACKE_clarft_work(int matrix_order, char direct, char storev, int n, int k, float _Complex const * v, int ldv, float _Complex const * tau, float _Complex * t, int ldt);
int LAPACKE_zlarft_work(int matrix_order, char direct, char storev, int n, int k, double _Complex const * v, int ldv, double _Complex const * tau, double _Complex * t, int ldt);
int LAPACKE_slarfx_work(int matrix_order, char side, int m, int n, float const * v, float tau, float * c, int ldc, float * work);
int LAPACKE_dlarfx_work(int matrix_order, char side, int m, int n, double const * v, double tau, double * c, int ldc, double * work);
int LAPACKE_clarfx_work(int matrix_order, char side, int m, int n, float _Complex const * v, float _Complex tau, float _Complex * c, int ldc, float _Complex * work);
int LAPACKE_zlarfx_work(int matrix_order, char side, int m, int n, double _Complex const * v, double _Complex tau, double _Complex * c, int ldc, double _Complex * work);
int LAPACKE_slarnv_work(int idist, int * iseed, int n, float * x);
int LAPACKE_dlarnv_work(int idist, int * iseed, int n, double * x);
int LAPACKE_clarnv_work(int idist, int * iseed, int n, float _Complex * x);
int LAPACKE_zlarnv_work(int idist, int * iseed, int n, double _Complex * x);
int LAPACKE_slaset_work(int matrix_order, char uplo, int m, int n, float alpha, float beta, float * a, int lda);
int LAPACKE_dlaset_work(int matrix_order, char uplo, int m, int n, double alpha, double beta, double * a, int lda);
int LAPACKE_claset_work(int matrix_order, char uplo, int m, int n, float _Complex alpha, float _Complex beta, float _Complex * a, int lda);
int LAPACKE_zlaset_work(int matrix_order, char uplo, int m, int n, double _Complex alpha, double _Complex beta, double _Complex * a, int lda);
int LAPACKE_slasrt_work(char id, int n, float * d);
int LAPACKE_dlasrt_work(char id, int n, double * d);
int LAPACKE_slaswp_work(int matrix_order, int n, float * a, int lda, int k1, int k2, int const * ipiv, int incx);
int LAPACKE_dlaswp_work(int matrix_order, int n, double * a, int lda, int k1, int k2, int const * ipiv, int incx);
int LAPACKE_claswp_work(int matrix_order, int n, float _Complex * a, int lda, int k1, int k2, int const * ipiv, int incx);
int LAPACKE_zlaswp_work(int matrix_order, int n, double _Complex * a, int lda, int k1, int k2, int const * ipiv, int incx);
int LAPACKE_slatms_work(int matrix_order, int m, int n, char dist, int * iseed, char sym, float * d, int mode, float cond, float dmax, int kl, int ku, char pack, float * a, int lda, float * work);
int LAPACKE_dlatms_work(int matrix_order, int m, int n, char dist, int * iseed, char sym, double * d, int mode, double cond, double dmax, int kl, int ku, char pack, double * a, int lda, double * work);
int LAPACKE_clatms_work(int matrix_order, int m, int n, char dist, int * iseed, char sym, float * d, int mode, float cond, float dmax, int kl, int ku, char pack, float _Complex * a, int lda, float _Complex * work);
int LAPACKE_zlatms_work(int matrix_order, int m, int n, char dist, int * iseed, char sym, double * d, int mode, double cond, double dmax, int kl, int ku, char pack, double _Complex * a, int lda, double _Complex * work);
int LAPACKE_slauum_work(int matrix_order, char uplo, int n, float * a, int lda);
int LAPACKE_dlauum_work(int matrix_order, char uplo, int n, double * a, int lda);
int LAPACKE_clauum_work(int matrix_order, char uplo, int n, float _Complex * a, int lda);
int LAPACKE_zlauum_work(int matrix_order, char uplo, int n, double _Complex * a, int lda);
int LAPACKE_sopgtr_work(int matrix_order, char uplo, int n, float const * ap, float const * tau, float * q, int ldq, float * work);
int LAPACKE_dopgtr_work(int matrix_order, char uplo, int n, double const * ap, double const * tau, double * q, int ldq, double * work);
int LAPACKE_sopmtr_work(int matrix_order, char side, char uplo, char trans, int m, int n, float const * ap, float const * tau, float * c, int ldc, float * work);
int LAPACKE_dopmtr_work(int matrix_order, char side, char uplo, char trans, int m, int n, double const * ap, double const * tau, double * c, int ldc, double * work);
int LAPACKE_sorgbr_work(int matrix_order, char vect, int m, int n, int k, float * a, int lda, float const * tau, float * work, int lwork);
int LAPACKE_dorgbr_work(int matrix_order, char vect, int m, int n, int k, double * a, int lda, double const * tau, double * work, int lwork);
int LAPACKE_sorghr_work(int matrix_order, int n, int ilo, int ihi, float * a, int lda, float const * tau, float * work, int lwork);
int LAPACKE_dorghr_work(int matrix_order, int n, int ilo, int ihi, double * a, int lda, double const * tau, double * work, int lwork);
int LAPACKE_sorglq_work(int matrix_order, int m, int n, int k, float * a, int lda, float const * tau, float * work, int lwork);
int LAPACKE_dorglq_work(int matrix_order, int m, int n, int k, double * a, int lda, double const * tau, double * work, int lwork);
int LAPACKE_sorgql_work(int matrix_order, int m, int n, int k, float * a, int lda, float const * tau, float * work, int lwork);
int LAPACKE_dorgql_work(int matrix_order, int m, int n, int k, double * a, int lda, double const * tau, double * work, int lwork);
int LAPACKE_sorgqr_work(int matrix_order, int m, int n, int k, float * a, int lda, float const * tau, float * work, int lwork);
int LAPACKE_dorgqr_work(int matrix_order, int m, int n, int k, double * a, int lda, double const * tau, double * work, int lwork);
int LAPACKE_sorgrq_work(int matrix_order, int m, int n, int k, float * a, int lda, float const * tau, float * work, int lwork);
int LAPACKE_dorgrq_work(int matrix_order, int m, int n, int k, double * a, int lda, double const * tau, double * work, int lwork);
int LAPACKE_sorgtr_work(int matrix_order, char uplo, int n, float * a, int lda, float const * tau, float * work, int lwork);
int LAPACKE_dorgtr_work(int matrix_order, char uplo, int n, double * a, int lda, double const * tau, double * work, int lwork);
int LAPACKE_sormbr_work(int matrix_order, char vect, char side, char trans, int m, int n, int k, float const * a, int lda, float const * tau, float * c, int ldc, float * work, int lwork);
int LAPACKE_dormbr_work(int matrix_order, char vect, char side, char trans, int m, int n, int k, double const * a, int lda, double const * tau, double * c, int ldc, double * work, int lwork);
int LAPACKE_sormhr_work(int matrix_order, char side, char trans, int m, int n, int ilo, int ihi, float const * a, int lda, float const * tau, float * c, int ldc, float * work, int lwork);
int LAPACKE_dormhr_work(int matrix_order, char side, char trans, int m, int n, int ilo, int ihi, double const * a, int lda, double const * tau, double * c, int ldc, double * work, int lwork);
int LAPACKE_sormlq_work(int matrix_order, char side, char trans, int m, int n, int k, float const * a, int lda, float const * tau, float * c, int ldc, float * work, int lwork);
int LAPACKE_dormlq_work(int matrix_order, char side, char trans, int m, int n, int k, double const * a, int lda, double const * tau, double * c, int ldc, double * work, int lwork);
int LAPACKE_sormql_work(int matrix_order, char side, char trans, int m, int n, int k, float const * a, int lda, float const * tau, float * c, int ldc, float * work, int lwork);
int LAPACKE_dormql_work(int matrix_order, char side, char trans, int m, int n, int k, double const * a, int lda, double const * tau, double * c, int ldc, double * work, int lwork);
int LAPACKE_sormqr_work(int matrix_order, char side, char trans, int m, int n, int k, float const * a, int lda, float const * tau, float * c, int ldc, float * work, int lwork);
int LAPACKE_dormqr_work(int matrix_order, char side, char trans, int m, int n, int k, double const * a, int lda, double const * tau, double * c, int ldc, double * work, int lwork);
int LAPACKE_sormrq_work(int matrix_order, char side, char trans, int m, int n, int k, float const * a, int lda, float const * tau, float * c, int ldc, float * work, int lwork);
int LAPACKE_dormrq_work(int matrix_order, char side, char trans, int m, int n, int k, double const * a, int lda, double const * tau, double * c, int ldc, double * work, int lwork);
int LAPACKE_sormrz_work(int matrix_order, char side, char trans, int m, int n, int k, int l, float const * a, int lda, float const * tau, float * c, int ldc, float * work, int lwork);
int LAPACKE_dormrz_work(int matrix_order, char side, char trans, int m, int n, int k, int l, double const * a, int lda, double const * tau, double * c, int ldc, double * work, int lwork);
int LAPACKE_sormtr_work(int matrix_order, char side, char uplo, char trans, int m, int n, float const * a, int lda, float const * tau, float * c, int ldc, float * work, int lwork);
int LAPACKE_dormtr_work(int matrix_order, char side, char uplo, char trans, int m, int n, double const * a, int lda, double const * tau, double * c, int ldc, double * work, int lwork);
int LAPACKE_spbcon_work(int matrix_order, char uplo, int n, int kd, float const * ab, int ldab, float anorm, float * rcond, float * work, int * iwork);
int LAPACKE_dpbcon_work(int matrix_order, char uplo, int n, int kd, double const * ab, int ldab, double anorm, double * rcond, double * work, int * iwork);
int LAPACKE_cpbcon_work(int matrix_order, char uplo, int n, int kd, float _Complex const * ab, int ldab, float anorm, float * rcond, float _Complex * work, float * rwork);
int LAPACKE_zpbcon_work(int matrix_order, char uplo, int n, int kd, double _Complex const * ab, int ldab, double anorm, double * rcond, double _Complex * work, double * rwork);
int LAPACKE_spbequ_work(int matrix_order, char uplo, int n, int kd, float const * ab, int ldab, float * s, float * scond, float * amax);
int LAPACKE_dpbequ_work(int matrix_order, char uplo, int n, int kd, double const * ab, int ldab, double * s, double * scond, double * amax);
int LAPACKE_cpbequ_work(int matrix_order, char uplo, int n, int kd, float _Complex const * ab, int ldab, float * s, float * scond, float * amax);
int LAPACKE_zpbequ_work(int matrix_order, char uplo, int n, int kd, double _Complex const * ab, int ldab, double * s, double * scond, double * amax);
int LAPACKE_spbrfs_work(int matrix_order, char uplo, int n, int kd, int nrhs, float const * ab, int ldab, float const * afb, int ldafb, float const * b, int ldb, float * x, int ldx, float * ferr, float * berr, float * work, int * iwork);
int LAPACKE_dpbrfs_work(int matrix_order, char uplo, int n, int kd, int nrhs, double const * ab, int ldab, double const * afb, int ldafb, double const * b, int ldb, double * x, int ldx, double * ferr, double * berr, double * work, int * iwork);
int LAPACKE_cpbrfs_work(int matrix_order, char uplo, int n, int kd, int nrhs, float _Complex const * ab, int ldab, float _Complex const * afb, int ldafb, float _Complex const * b, int ldb, float _Complex * x, int ldx, float * ferr, float * berr, float _Complex * work, float * rwork);
int LAPACKE_zpbrfs_work(int matrix_order, char uplo, int n, int kd, int nrhs, double _Complex const * ab, int ldab, double _Complex const * afb, int ldafb, double _Complex const * b, int ldb, double _Complex * x, int ldx, double * ferr, double * berr, double _Complex * work, double * rwork);
int LAPACKE_spbstf_work(int matrix_order, char uplo, int n, int kb, float * bb, int ldbb);
int LAPACKE_dpbstf_work(int matrix_order, char uplo, int n, int kb, double * bb, int ldbb);
int LAPACKE_cpbstf_work(int matrix_order, char uplo, int n, int kb, float _Complex * bb, int ldbb);
int LAPACKE_zpbstf_work(int matrix_order, char uplo, int n, int kb, double _Complex * bb, int ldbb);
int LAPACKE_spbsv_work(int matrix_order, char uplo, int n, int kd, int nrhs, float * ab, int ldab, float * b, int ldb);
int LAPACKE_dpbsv_work(int matrix_order, char uplo, int n, int kd, int nrhs, double * ab, int ldab, double * b, int ldb);
int LAPACKE_cpbsv_work(int matrix_order, char uplo, int n, int kd, int nrhs, float _Complex * ab, int ldab, float _Complex * b, int ldb);
int LAPACKE_zpbsv_work(int matrix_order, char uplo, int n, int kd, int nrhs, double _Complex * ab, int ldab, double _Complex * b, int ldb);
int LAPACKE_spbsvx_work(int matrix_order, char fact, char uplo, int n, int kd, int nrhs, float * ab, int ldab, float * afb, int ldafb, char * equed, float * s, float * b, int ldb, float * x, int ldx, float * rcond, float * ferr, float * berr, float * work, int * iwork);
int LAPACKE_dpbsvx_work(int matrix_order, char fact, char uplo, int n, int kd, int nrhs, double * ab, int ldab, double * afb, int ldafb, char * equed, double * s, double * b, int ldb, double * x, int ldx, double * rcond, double * ferr, double * berr, double * work, int * iwork);
int LAPACKE_cpbsvx_work(int matrix_order, char fact, char uplo, int n, int kd, int nrhs, float _Complex * ab, int ldab, float _Complex * afb, int ldafb, char * equed, float * s, float _Complex * b, int ldb, float _Complex * x, int ldx, float * rcond, float * ferr, float * berr, float _Complex * work, float * rwork);
int LAPACKE_zpbsvx_work(int matrix_order, char fact, char uplo, int n, int kd, int nrhs, double _Complex * ab, int ldab, double _Complex * afb, int ldafb, char * equed, double * s, double _Complex * b, int ldb, double _Complex * x, int ldx, double * rcond, double * ferr, double * berr, double _Complex * work, double * rwork);
int LAPACKE_spbtrf_work(int matrix_order, char uplo, int n, int kd, float * ab, int ldab);
int LAPACKE_dpbtrf_work(int matrix_order, char uplo, int n, int kd, double * ab, int ldab);
int LAPACKE_cpbtrf_work(int matrix_order, char uplo, int n, int kd, float _Complex * ab, int ldab);
int LAPACKE_zpbtrf_work(int matrix_order, char uplo, int n, int kd, double _Complex * ab, int ldab);
int LAPACKE_spbtrs_work(int matrix_order, char uplo, int n, int kd, int nrhs, float const * ab, int ldab, float * b, int ldb);
int LAPACKE_dpbtrs_work(int matrix_order, char uplo, int n, int kd, int nrhs, double const * ab, int ldab, double * b, int ldb);
int LAPACKE_cpbtrs_work(int matrix_order, char uplo, int n, int kd, int nrhs, float _Complex const * ab, int ldab, float _Complex * b, int ldb);
int LAPACKE_zpbtrs_work(int matrix_order, char uplo, int n, int kd, int nrhs, double _Complex const * ab, int ldab, double _Complex * b, int ldb);
int LAPACKE_spftrf_work(int matrix_order, char transr, char uplo, int n, float * a);
int LAPACKE_dpftrf_work(int matrix_order, char transr, char uplo, int n, double * a);
int LAPACKE_cpftrf_work(int matrix_order, char transr, char uplo, int n, float _Complex * a);
int LAPACKE_zpftrf_work(int matrix_order, char transr, char uplo, int n, double _Complex * a);
int LAPACKE_spftri_work(int matrix_order, char transr, char uplo, int n, float * a);
int LAPACKE_dpftri_work(int matrix_order, char transr, char uplo, int n, double * a);
int LAPACKE_cpftri_work(int matrix_order, char transr, char uplo, int n, float _Complex * a);
int LAPACKE_zpftri_work(int matrix_order, char transr, char uplo, int n, double _Complex * a);
int LAPACKE_spftrs_work(int matrix_order, char transr, char uplo, int n, int nrhs, float const * a, float * b, int ldb);
int LAPACKE_dpftrs_work(int matrix_order, char transr, char uplo, int n, int nrhs, double const * a, double * b, int ldb);
int LAPACKE_cpftrs_work(int matrix_order, char transr, char uplo, int n, int nrhs, float _Complex const * a, float _Complex * b, int ldb);
int LAPACKE_zpftrs_work(int matrix_order, char transr, char uplo, int n, int nrhs, double _Complex const * a, double _Complex * b, int ldb);
int LAPACKE_spocon_work(int matrix_order, char uplo, int n, float const * a, int lda, float anorm, float * rcond, float * work, int * iwork);
int LAPACKE_dpocon_work(int matrix_order, char uplo, int n, double const * a, int lda, double anorm, double * rcond, double * work, int * iwork);
int LAPACKE_cpocon_work(int matrix_order, char uplo, int n, float _Complex const * a, int lda, float anorm, float * rcond, float _Complex * work, float * rwork);
int LAPACKE_zpocon_work(int matrix_order, char uplo, int n, double _Complex const * a, int lda, double anorm, double * rcond, double _Complex * work, double * rwork);
int LAPACKE_spoequ_work(int matrix_order, int n, float const * a, int lda, float * s, float * scond, float * amax);
int LAPACKE_dpoequ_work(int matrix_order, int n, double const * a, int lda, double * s, double * scond, double * amax);
int LAPACKE_cpoequ_work(int matrix_order, int n, float _Complex const * a, int lda, float * s, float * scond, float * amax);
int LAPACKE_zpoequ_work(int matrix_order, int n, double _Complex const * a, int lda, double * s, double * scond, double * amax);
int LAPACKE_spoequb_work(int matrix_order, int n, float const * a, int lda, float * s, float * scond, float * amax);
int LAPACKE_dpoequb_work(int matrix_order, int n, double const * a, int lda, double * s, double * scond, double * amax);
int LAPACKE_cpoequb_work(int matrix_order, int n, float _Complex const * a, int lda, float * s, float * scond, float * amax);
int LAPACKE_zpoequb_work(int matrix_order, int n, double _Complex const * a, int lda, double * s, double * scond, double * amax);
int LAPACKE_sporfs_work(int matrix_order, char uplo, int n, int nrhs, float const * a, int lda, float const * af, int ldaf, float const * b, int ldb, float * x, int ldx, float * ferr, float * berr, float * work, int * iwork);
int LAPACKE_dporfs_work(int matrix_order, char uplo, int n, int nrhs, double const * a, int lda, double const * af, int ldaf, double const * b, int ldb, double * x, int ldx, double * ferr, double * berr, double * work, int * iwork);
int LAPACKE_cporfs_work(int matrix_order, char uplo, int n, int nrhs, float _Complex const * a, int lda, float _Complex const * af, int ldaf, float _Complex const * b, int ldb, float _Complex * x, int ldx, float * ferr, float * berr, float _Complex * work, float * rwork);
int LAPACKE_zporfs_work(int matrix_order, char uplo, int n, int nrhs, double _Complex const * a, int lda, double _Complex const * af, int ldaf, double _Complex const * b, int ldb, double _Complex * x, int ldx, double * ferr, double * berr, double _Complex * work, double * rwork);
int LAPACKE_sporfsx_work(int matrix_order, char uplo, char equed, int n, int nrhs, float const * a, int lda, float const * af, int ldaf, float const * s, float const * b, int ldb, float * x, int ldx, float * rcond, float * berr, int n_err_bnds, float * err_bnds_norm, float * err_bnds_comp, int nparams, float * params, float * work, int * iwork);
int LAPACKE_dporfsx_work(int matrix_order, char uplo, char equed, int n, int nrhs, double const * a, int lda, double const * af, int ldaf, double const * s, double const * b, int ldb, double * x, int ldx, double * rcond, double * berr, int n_err_bnds, double * err_bnds_norm, double * err_bnds_comp, int nparams, double * params, double * work, int * iwork);
int LAPACKE_cporfsx_work(int matrix_order, char uplo, char equed, int n, int nrhs, float _Complex const * a, int lda, float _Complex const * af, int ldaf, float const * s, float _Complex const * b, int ldb, float _Complex * x, int ldx, float * rcond, float * berr, int n_err_bnds, float * err_bnds_norm, float * err_bnds_comp, int nparams, float * params, float _Complex * work, float * rwork);
int LAPACKE_zporfsx_work(int matrix_order, char uplo, char equed, int n, int nrhs, double _Complex const * a, int lda, double _Complex const * af, int ldaf, double const * s, double _Complex const * b, int ldb, double _Complex * x, int ldx, double * rcond, double * berr, int n_err_bnds, double * err_bnds_norm, double * err_bnds_comp, int nparams, double * params, double _Complex * work, double * rwork);
int LAPACKE_sposv_work(int matrix_order, char uplo, int n, int nrhs, float * a, int lda, float * b, int ldb);
int LAPACKE_dposv_work(int matrix_order, char uplo, int n, int nrhs, double * a, int lda, double * b, int ldb);
int LAPACKE_cposv_work(int matrix_order, char uplo, int n, int nrhs, float _Complex * a, int lda, float _Complex * b, int ldb);
int LAPACKE_zposv_work(int matrix_order, char uplo, int n, int nrhs, double _Complex * a, int lda, double _Complex * b, int ldb);
int LAPACKE_dsposv_work(int matrix_order, char uplo, int n, int nrhs, double * a, int lda, double * b, int ldb, double * x, int ldx, double * work, float * swork, int * iter);
int LAPACKE_zcposv_work(int matrix_order, char uplo, int n, int nrhs, double _Complex * a, int lda, double _Complex * b, int ldb, double _Complex * x, int ldx, double _Complex * work, float _Complex * swork, double * rwork, int * iter);
int LAPACKE_sposvx_work(int matrix_order, char fact, char uplo, int n, int nrhs, float * a, int lda, float * af, int ldaf, char * equed, float * s, float * b, int ldb, float * x, int ldx, float * rcond, float * ferr, float * berr, float * work, int * iwork);
int LAPACKE_dposvx_work(int matrix_order, char fact, char uplo, int n, int nrhs, double * a, int lda, double * af, int ldaf, char * equed, double * s, double * b, int ldb, double * x, int ldx, double * rcond, double * ferr, double * berr, double * work, int * iwork);
int LAPACKE_cposvx_work(int matrix_order, char fact, char uplo, int n, int nrhs, float _Complex * a, int lda, float _Complex * af, int ldaf, char * equed, float * s, float _Complex * b, int ldb, float _Complex * x, int ldx, float * rcond, float * ferr, float * berr, float _Complex * work, float * rwork);
int LAPACKE_zposvx_work(int matrix_order, char fact, char uplo, int n, int nrhs, double _Complex * a, int lda, double _Complex * af, int ldaf, char * equed, double * s, double _Complex * b, int ldb, double _Complex * x, int ldx, double * rcond, double * ferr, double * berr, double _Complex * work, double * rwork);
int LAPACKE_sposvxx_work(int matrix_order, char fact, char uplo, int n, int nrhs, float * a, int lda, float * af, int ldaf, char * equed, float * s, float * b, int ldb, float * x, int ldx, float * rcond, float * rpvgrw, float * berr, int n_err_bnds, float * err_bnds_norm, float * err_bnds_comp, int nparams, float * params, float * work, int * iwork);
int LAPACKE_dposvxx_work(int matrix_order, char fact, char uplo, int n, int nrhs, double * a, int lda, double * af, int ldaf, char * equed, double * s, double * b, int ldb, double * x, int ldx, double * rcond, double * rpvgrw, double * berr, int n_err_bnds, double * err_bnds_norm, double * err_bnds_comp, int nparams, double * params, double * work, int * iwork);
int LAPACKE_cposvxx_work(int matrix_order, char fact, char uplo, int n, int nrhs, float _Complex * a, int lda, float _Complex * af, int ldaf, char * equed, float * s, float _Complex * b, int ldb, float _Complex * x, int ldx, float * rcond, float * rpvgrw, float * berr, int n_err_bnds, float * err_bnds_norm, float * err_bnds_comp, int nparams, float * params, float _Complex * work, float * rwork);
int LAPACKE_zposvxx_work(int matrix_order, char fact, char uplo, int n, int nrhs, double _Complex * a, int lda, double _Complex * af, int ldaf, char * equed, double * s, double _Complex * b, int ldb, double _Complex * x, int ldx, double * rcond, double * rpvgrw, double * berr, int n_err_bnds, double * err_bnds_norm, double * err_bnds_comp, int nparams, double * params, double _Complex * work, double * rwork);
int LAPACKE_spotrf_work(int matrix_order, char uplo, int n, float * a, int lda);
int LAPACKE_dpotrf_work(int matrix_order, char uplo, int n, double * a, int lda);
int LAPACKE_cpotrf_work(int matrix_order, char uplo, int n, float _Complex * a, int lda);
int LAPACKE_zpotrf_work(int matrix_order, char uplo, int n, double _Complex * a, int lda);
int LAPACKE_spotri_work(int matrix_order, char uplo, int n, float * a, int lda);
int LAPACKE_dpotri_work(int matrix_order, char uplo, int n, double * a, int lda);
int LAPACKE_cpotri_work(int matrix_order, char uplo, int n, float _Complex * a, int lda);
int LAPACKE_zpotri_work(int matrix_order, char uplo, int n, double _Complex * a, int lda);
int LAPACKE_spotrs_work(int matrix_order, char uplo, int n, int nrhs, float const * a, int lda, float * b, int ldb);
int LAPACKE_dpotrs_work(int matrix_order, char uplo, int n, int nrhs, double const * a, int lda, double * b, int ldb);
int LAPACKE_cpotrs_work(int matrix_order, char uplo, int n, int nrhs, float _Complex const * a, int lda, float _Complex * b, int ldb);
int LAPACKE_zpotrs_work(int matrix_order, char uplo, int n, int nrhs, double _Complex const * a, int lda, double _Complex * b, int ldb);
int LAPACKE_sppcon_work(int matrix_order, char uplo, int n, float const * ap, float anorm, float * rcond, float * work, int * iwork);
int LAPACKE_dppcon_work(int matrix_order, char uplo, int n, double const * ap, double anorm, double * rcond, double * work, int * iwork);
int LAPACKE_cppcon_work(int matrix_order, char uplo, int n, float _Complex const * ap, float anorm, float * rcond, float _Complex * work, float * rwork);
int LAPACKE_zppcon_work(int matrix_order, char uplo, int n, double _Complex const * ap, double anorm, double * rcond, double _Complex * work, double * rwork);
int LAPACKE_sppequ_work(int matrix_order, char uplo, int n, float const * ap, float * s, float * scond, float * amax);
int LAPACKE_dppequ_work(int matrix_order, char uplo, int n, double const * ap, double * s, double * scond, double * amax);
int LAPACKE_cppequ_work(int matrix_order, char uplo, int n, float _Complex const * ap, float * s, float * scond, float * amax);
int LAPACKE_zppequ_work(int matrix_order, char uplo, int n, double _Complex const * ap, double * s, double * scond, double * amax);
int LAPACKE_spprfs_work(int matrix_order, char uplo, int n, int nrhs, float const * ap, float const * afp, float const * b, int ldb, float * x, int ldx, float * ferr, float * berr, float * work, int * iwork);
int LAPACKE_dpprfs_work(int matrix_order, char uplo, int n, int nrhs, double const * ap, double const * afp, double const * b, int ldb, double * x, int ldx, double * ferr, double * berr, double * work, int * iwork);
int LAPACKE_cpprfs_work(int matrix_order, char uplo, int n, int nrhs, float _Complex const * ap, float _Complex const * afp, float _Complex const * b, int ldb, float _Complex * x, int ldx, float * ferr, float * berr, float _Complex * work, float * rwork);
int LAPACKE_zpprfs_work(int matrix_order, char uplo, int n, int nrhs, double _Complex const * ap, double _Complex const * afp, double _Complex const * b, int ldb, double _Complex * x, int ldx, double * ferr, double * berr, double _Complex * work, double * rwork);
int LAPACKE_sppsv_work(int matrix_order, char uplo, int n, int nrhs, float * ap, float * b, int ldb);
int LAPACKE_dppsv_work(int matrix_order, char uplo, int n, int nrhs, double * ap, double * b, int ldb);
int LAPACKE_cppsv_work(int matrix_order, char uplo, int n, int nrhs, float _Complex * ap, float _Complex * b, int ldb);
int LAPACKE_zppsv_work(int matrix_order, char uplo, int n, int nrhs, double _Complex * ap, double _Complex * b, int ldb);
int LAPACKE_sppsvx_work(int matrix_order, char fact, char uplo, int n, int nrhs, float * ap, float * afp, char * equed, float * s, float * b, int ldb, float * x, int ldx, float * rcond, float * ferr, float * berr, float * work, int * iwork);
int LAPACKE_dppsvx_work(int matrix_order, char fact, char uplo, int n, int nrhs, double * ap, double * afp, char * equed, double * s, double * b, int ldb, double * x, int ldx, double * rcond, double * ferr, double * berr, double * work, int * iwork);
int LAPACKE_cppsvx_work(int matrix_order, char fact, char uplo, int n, int nrhs, float _Complex * ap, float _Complex * afp, char * equed, float * s, float _Complex * b, int ldb, float _Complex * x, int ldx, float * rcond, float * ferr, float * berr, float _Complex * work, float * rwork);
int LAPACKE_zppsvx_work(int matrix_order, char fact, char uplo, int n, int nrhs, double _Complex * ap, double _Complex * afp, char * equed, double * s, double _Complex * b, int ldb, double _Complex * x, int ldx, double * rcond, double * ferr, double * berr, double _Complex * work, double * rwork);
int LAPACKE_spptrf_work(int matrix_order, char uplo, int n, float * ap);
int LAPACKE_dpptrf_work(int matrix_order, char uplo, int n, double * ap);
int LAPACKE_cpptrf_work(int matrix_order, char uplo, int n, float _Complex * ap);
int LAPACKE_zpptrf_work(int matrix_order, char uplo, int n, double _Complex * ap);
int LAPACKE_spptri_work(int matrix_order, char uplo, int n, float * ap);
int LAPACKE_dpptri_work(int matrix_order, char uplo, int n, double * ap);
int LAPACKE_cpptri_work(int matrix_order, char uplo, int n, float _Complex * ap);
int LAPACKE_zpptri_work(int matrix_order, char uplo, int n, double _Complex * ap);
int LAPACKE_spptrs_work(int matrix_order, char uplo, int n, int nrhs, float const * ap, float * b, int ldb);
int LAPACKE_dpptrs_work(int matrix_order, char uplo, int n, int nrhs, double const * ap, double * b, int ldb);
int LAPACKE_cpptrs_work(int matrix_order, char uplo, int n, int nrhs, float _Complex const * ap, float _Complex * b, int ldb);
int LAPACKE_zpptrs_work(int matrix_order, char uplo, int n, int nrhs, double _Complex const * ap, double _Complex * b, int ldb);
int LAPACKE_spstrf_work(int matrix_order, char uplo, int n, float * a, int lda, int * piv, int * rank, float tol, float * work);
int LAPACKE_dpstrf_work(int matrix_order, char uplo, int n, double * a, int lda, int * piv, int * rank, double tol, double * work);
int LAPACKE_cpstrf_work(int matrix_order, char uplo, int n, float _Complex * a, int lda, int * piv, int * rank, float tol, float * work);
int LAPACKE_zpstrf_work(int matrix_order, char uplo, int n, double _Complex * a, int lda, int * piv, int * rank, double tol, double * work);
int LAPACKE_sptcon_work(int n, float const * d, float const * e, float anorm, float * rcond, float * work);
int LAPACKE_dptcon_work(int n, double const * d, double const * e, double anorm, double * rcond, double * work);
int LAPACKE_cptcon_work(int n, float const * d, float _Complex const * e, float anorm, float * rcond, float * work);
int LAPACKE_zptcon_work(int n, double const * d, double _Complex const * e, double anorm, double * rcond, double * work);
int LAPACKE_spteqr_work(int matrix_order, char compz, int n, float * d, float * e, float * z, int ldz, float * work);
int LAPACKE_dpteqr_work(int matrix_order, char compz, int n, double * d, double * e, double * z, int ldz, double * work);
int LAPACKE_cpteqr_work(int matrix_order, char compz, int n, float * d, float * e, float _Complex * z, int ldz, float * work);
int LAPACKE_zpteqr_work(int matrix_order, char compz, int n, double * d, double * e, double _Complex * z, int ldz, double * work);
int LAPACKE_sptrfs_work(int matrix_order, int n, int nrhs, float const * d, float const * e, float const * df, float const * ef, float const * b, int ldb, float * x, int ldx, float * ferr, float * berr, float * work);
int LAPACKE_dptrfs_work(int matrix_order, int n, int nrhs, double const * d, double const * e, double const * df, double const * ef, double const * b, int ldb, double * x, int ldx, double * ferr, double * berr, double * work);
int LAPACKE_cptrfs_work(int matrix_order, char uplo, int n, int nrhs, float const * d, float _Complex const * e, float const * df, float _Complex const * ef, float _Complex const * b, int ldb, float _Complex * x, int ldx, float * ferr, float * berr, float _Complex * work, float * rwork);
int LAPACKE_zptrfs_work(int matrix_order, char uplo, int n, int nrhs, double const * d, double _Complex const * e, double const * df, double _Complex const * ef, double _Complex const * b, int ldb, double _Complex * x, int ldx, double * ferr, double * berr, double _Complex * work, double * rwork);
int LAPACKE_sptsv_work(int matrix_order, int n, int nrhs, float * d, float * e, float * b, int ldb);
int LAPACKE_dptsv_work(int matrix_order, int n, int nrhs, double * d, double * e, double * b, int ldb);
int LAPACKE_cptsv_work(int matrix_order, int n, int nrhs, float * d, float _Complex * e, float _Complex * b, int ldb);
int LAPACKE_zptsv_work(int matrix_order, int n, int nrhs, double * d, double _Complex * e, double _Complex * b, int ldb);
int LAPACKE_sptsvx_work(int matrix_order, char fact, int n, int nrhs, float const * d, float const * e, float * df, float * ef, float const * b, int ldb, float * x, int ldx, float * rcond, float * ferr, float * berr, float * work);
int LAPACKE_dptsvx_work(int matrix_order, char fact, int n, int nrhs, double const * d, double const * e, double * df, double * ef, double const * b, int ldb, double * x, int ldx, double * rcond, double * ferr, double * berr, double * work);
int LAPACKE_cptsvx_work(int matrix_order, char fact, int n, int nrhs, float const * d, float _Complex const * e, float * df, float _Complex * ef, float _Complex const * b, int ldb, float _Complex * x, int ldx, float * rcond, float * ferr, float * berr, float _Complex * work, float * rwork);
int LAPACKE_zptsvx_work(int matrix_order, char fact, int n, int nrhs, double const * d, double _Complex const * e, double * df, double _Complex * ef, double _Complex const * b, int ldb, double _Complex * x, int ldx, double * rcond, double * ferr, double * berr, double _Complex * work, double * rwork);
int LAPACKE_spttrf_work(int n, float * d, float * e);
int LAPACKE_dpttrf_work(int n, double * d, double * e);
int LAPACKE_cpttrf_work(int n, float * d, float _Complex * e);
int LAPACKE_zpttrf_work(int n, double * d, double _Complex * e);
int LAPACKE_spttrs_work(int matrix_order, int n, int nrhs, float const * d, float const * e, float * b, int ldb);
int LAPACKE_dpttrs_work(int matrix_order, int n, int nrhs, double const * d, double const * e, double * b, int ldb);
int LAPACKE_cpttrs_work(int matrix_order, char uplo, int n, int nrhs, float const * d, float _Complex const * e, float _Complex * b, int ldb);
int LAPACKE_zpttrs_work(int matrix_order, char uplo, int n, int nrhs, double const * d, double _Complex const * e, double _Complex * b, int ldb);
int LAPACKE_ssbev_work(int matrix_order, char jobz, char uplo, int n, int kd, float * ab, int ldab, float * w, float * z, int ldz, float * work);
int LAPACKE_dsbev_work(int matrix_order, char jobz, char uplo, int n, int kd, double * ab, int ldab, double * w, double * z, int ldz, double * work);
int LAPACKE_ssbevd_work(int matrix_order, char jobz, char uplo, int n, int kd, float * ab, int ldab, float * w, float * z, int ldz, float * work, int lwork, int * iwork, int liwork);
int LAPACKE_dsbevd_work(int matrix_order, char jobz, char uplo, int n, int kd, double * ab, int ldab, double * w, double * z, int ldz, double * work, int lwork, int * iwork, int liwork);
int LAPACKE_ssbevx_work(int matrix_order, char jobz, char range, char uplo, int n, int kd, float * ab, int ldab, float * q, int ldq, float vl, float vu, int il, int iu, float abstol, int * m, float * w, float * z, int ldz, float * work, int * iwork, int * ifail);
int LAPACKE_dsbevx_work(int matrix_order, char jobz, char range, char uplo, int n, int kd, double * ab, int ldab, double * q, int ldq, double vl, double vu, int il, int iu, double abstol, int * m, double * w, double * z, int ldz, double * work, int * iwork, int * ifail);
int LAPACKE_ssbgst_work(int matrix_order, char vect, char uplo, int n, int ka, int kb, float * ab, int ldab, float const * bb, int ldbb, float * x, int ldx, float * work);
int LAPACKE_dsbgst_work(int matrix_order, char vect, char uplo, int n, int ka, int kb, double * ab, int ldab, double const * bb, int ldbb, double * x, int ldx, double * work);
int LAPACKE_ssbgv_work(int matrix_order, char jobz, char uplo, int n, int ka, int kb, float * ab, int ldab, float * bb, int ldbb, float * w, float * z, int ldz, float * work);
int LAPACKE_dsbgv_work(int matrix_order, char jobz, char uplo, int n, int ka, int kb, double * ab, int ldab, double * bb, int ldbb, double * w, double * z, int ldz, double * work);
int LAPACKE_ssbgvd_work(int matrix_order, char jobz, char uplo, int n, int ka, int kb, float * ab, int ldab, float * bb, int ldbb, float * w, float * z, int ldz, float * work, int lwork, int * iwork, int liwork);
int LAPACKE_dsbgvd_work(int matrix_order, char jobz, char uplo, int n, int ka, int kb, double * ab, int ldab, double * bb, int ldbb, double * w, double * z, int ldz, double * work, int lwork, int * iwork, int liwork);
int LAPACKE_ssbgvx_work(int matrix_order, char jobz, char range, char uplo, int n, int ka, int kb, float * ab, int ldab, float * bb, int ldbb, float * q, int ldq, float vl, float vu, int il, int iu, float abstol, int * m, float * w, float * z, int ldz, float * work, int * iwork, int * ifail);
int LAPACKE_dsbgvx_work(int matrix_order, char jobz, char range, char uplo, int n, int ka, int kb, double * ab, int ldab, double * bb, int ldbb, double * q, int ldq, double vl, double vu, int il, int iu, double abstol, int * m, double * w, double * z, int ldz, double * work, int * iwork, int * ifail);
int LAPACKE_ssbtrd_work(int matrix_order, char vect, char uplo, int n, int kd, float * ab, int ldab, float * d, float * e, float * q, int ldq, float * work);
int LAPACKE_dsbtrd_work(int matrix_order, char vect, char uplo, int n, int kd, double * ab, int ldab, double * d, double * e, double * q, int ldq, double * work);
int LAPACKE_ssfrk_work(int matrix_order, char transr, char uplo, char trans, int n, int k, float alpha, float const * a, int lda, float beta, float * c);
int LAPACKE_dsfrk_work(int matrix_order, char transr, char uplo, char trans, int n, int k, double alpha, double const * a, int lda, double beta, double * c);
int LAPACKE_sspcon_work(int matrix_order, char uplo, int n, float const * ap, int const * ipiv, float anorm, float * rcond, float * work, int * iwork);
int LAPACKE_dspcon_work(int matrix_order, char uplo, int n, double const * ap, int const * ipiv, double anorm, double * rcond, double * work, int * iwork);
int LAPACKE_cspcon_work(int matrix_order, char uplo, int n, float _Complex const * ap, int const * ipiv, float anorm, float * rcond, float _Complex * work);
int LAPACKE_zspcon_work(int matrix_order, char uplo, int n, double _Complex const * ap, int const * ipiv, double anorm, double * rcond, double _Complex * work);
int LAPACKE_sspev_work(int matrix_order, char jobz, char uplo, int n, float * ap, float * w, float * z, int ldz, float * work);
int LAPACKE_dspev_work(int matrix_order, char jobz, char uplo, int n, double * ap, double * w, double * z, int ldz, double * work);
int LAPACKE_sspevd_work(int matrix_order, char jobz, char uplo, int n, float * ap, float * w, float * z, int ldz, float * work, int lwork, int * iwork, int liwork);
int LAPACKE_dspevd_work(int matrix_order, char jobz, char uplo, int n, double * ap, double * w, double * z, int ldz, double * work, int lwork, int * iwork, int liwork);
int LAPACKE_sspevx_work(int matrix_order, char jobz, char range, char uplo, int n, float * ap, float vl, float vu, int il, int iu, float abstol, int * m, float * w, float * z, int ldz, float * work, int * iwork, int * ifail);
int LAPACKE_dspevx_work(int matrix_order, char jobz, char range, char uplo, int n, double * ap, double vl, double vu, int il, int iu, double abstol, int * m, double * w, double * z, int ldz, double * work, int * iwork, int * ifail);
int LAPACKE_sspgst_work(int matrix_order, int itype, char uplo, int n, float * ap, float const * bp);
int LAPACKE_dspgst_work(int matrix_order, int itype, char uplo, int n, double * ap, double const * bp);
int LAPACKE_sspgv_work(int matrix_order, int itype, char jobz, char uplo, int n, float * ap, float * bp, float * w, float * z, int ldz, float * work);
int LAPACKE_dspgv_work(int matrix_order, int itype, char jobz, char uplo, int n, double * ap, double * bp, double * w, double * z, int ldz, double * work);
int LAPACKE_sspgvd_work(int matrix_order, int itype, char jobz, char uplo, int n, float * ap, float * bp, float * w, float * z, int ldz, float * work, int lwork, int * iwork, int liwork);
int LAPACKE_dspgvd_work(int matrix_order, int itype, char jobz, char uplo, int n, double * ap, double * bp, double * w, double * z, int ldz, double * work, int lwork, int * iwork, int liwork);
int LAPACKE_sspgvx_work(int matrix_order, int itype, char jobz, char range, char uplo, int n, float * ap, float * bp, float vl, float vu, int il, int iu, float abstol, int * m, float * w, float * z, int ldz, float * work, int * iwork, int * ifail);
int LAPACKE_dspgvx_work(int matrix_order, int itype, char jobz, char range, char uplo, int n, double * ap, double * bp, double vl, double vu, int il, int iu, double abstol, int * m, double * w, double * z, int ldz, double * work, int * iwork, int * ifail);
int LAPACKE_ssprfs_work(int matrix_order, char uplo, int n, int nrhs, float const * ap, float const * afp, int const * ipiv, float const * b, int ldb, float * x, int ldx, float * ferr, float * berr, float * work, int * iwork);
int LAPACKE_dsprfs_work(int matrix_order, char uplo, int n, int nrhs, double const * ap, double const * afp, int const * ipiv, double const * b, int ldb, double * x, int ldx, double * ferr, double * berr, double * work, int * iwork);
int LAPACKE_csprfs_work(int matrix_order, char uplo, int n, int nrhs, float _Complex const * ap, float _Complex const * afp, int const * ipiv, float _Complex const * b, int ldb, float _Complex * x, int ldx, float * ferr, float * berr, float _Complex * work, float * rwork);
int LAPACKE_zsprfs_work(int matrix_order, char uplo, int n, int nrhs, double _Complex const * ap, double _Complex const * afp, int const * ipiv, double _Complex const * b, int ldb, double _Complex * x, int ldx, double * ferr, double * berr, double _Complex * work, double * rwork);
int LAPACKE_sspsv_work(int matrix_order, char uplo, int n, int nrhs, float * ap, int * ipiv, float * b, int ldb);
int LAPACKE_dspsv_work(int matrix_order, char uplo, int n, int nrhs, double * ap, int * ipiv, double * b, int ldb);
int LAPACKE_cspsv_work(int matrix_order, char uplo, int n, int nrhs, float _Complex * ap, int * ipiv, float _Complex * b, int ldb);
int LAPACKE_zspsv_work(int matrix_order, char uplo, int n, int nrhs, double _Complex * ap, int * ipiv, double _Complex * b, int ldb);
int LAPACKE_sspsvx_work(int matrix_order, char fact, char uplo, int n, int nrhs, float const * ap, float * afp, int * ipiv, float const * b, int ldb, float * x, int ldx, float * rcond, float * ferr, float * berr, float * work, int * iwork);
int LAPACKE_dspsvx_work(int matrix_order, char fact, char uplo, int n, int nrhs, double const * ap, double * afp, int * ipiv, double const * b, int ldb, double * x, int ldx, double * rcond, double * ferr, double * berr, double * work, int * iwork);
int LAPACKE_cspsvx_work(int matrix_order, char fact, char uplo, int n, int nrhs, float _Complex const * ap, float _Complex * afp, int * ipiv, float _Complex const * b, int ldb, float _Complex * x, int ldx, float * rcond, float * ferr, float * berr, float _Complex * work, float * rwork);
int LAPACKE_zspsvx_work(int matrix_order, char fact, char uplo, int n, int nrhs, double _Complex const * ap, double _Complex * afp, int * ipiv, double _Complex const * b, int ldb, double _Complex * x, int ldx, double * rcond, double * ferr, double * berr, double _Complex * work, double * rwork);
int LAPACKE_ssptrd_work(int matrix_order, char uplo, int n, float * ap, float * d, float * e, float * tau);
int LAPACKE_dsptrd_work(int matrix_order, char uplo, int n, double * ap, double * d, double * e, double * tau);
int LAPACKE_ssptrf_work(int matrix_order, char uplo, int n, float * ap, int * ipiv);
int LAPACKE_dsptrf_work(int matrix_order, char uplo, int n, double * ap, int * ipiv);
int LAPACKE_csptrf_work(int matrix_order, char uplo, int n, float _Complex * ap, int * ipiv);
int LAPACKE_zsptrf_work(int matrix_order, char uplo, int n, double _Complex * ap, int * ipiv);
int LAPACKE_ssptri_work(int matrix_order, char uplo, int n, float * ap, int const * ipiv, float * work);
int LAPACKE_dsptri_work(int matrix_order, char uplo, int n, double * ap, int const * ipiv, double * work);
int LAPACKE_csptri_work(int matrix_order, char uplo, int n, float _Complex * ap, int const * ipiv, float _Complex * work);
int LAPACKE_zsptri_work(int matrix_order, char uplo, int n, double _Complex * ap, int const * ipiv, double _Complex * work);
int LAPACKE_ssptrs_work(int matrix_order, char uplo, int n, int nrhs, float const * ap, int const * ipiv, float * b, int ldb);
int LAPACKE_dsptrs_work(int matrix_order, char uplo, int n, int nrhs, double const * ap, int const * ipiv, double * b, int ldb);
int LAPACKE_csptrs_work(int matrix_order, char uplo, int n, int nrhs, float _Complex const * ap, int const * ipiv, float _Complex * b, int ldb);
int LAPACKE_zsptrs_work(int matrix_order, char uplo, int n, int nrhs, double _Complex const * ap, int const * ipiv, double _Complex * b, int ldb);
int LAPACKE_sstebz_work(char range, char order, int n, float vl, float vu, int il, int iu, float abstol, float const * d, float const * e, int * m, int * nsplit, float * w, int * iblock, int * isplit, float * work, int * iwork);
int LAPACKE_dstebz_work(char range, char order, int n, double vl, double vu, int il, int iu, double abstol, double const * d, double const * e, int * m, int * nsplit, double * w, int * iblock, int * isplit, double * work, int * iwork);
int LAPACKE_sstedc_work(int matrix_order, char compz, int n, float * d, float * e, float * z, int ldz, float * work, int lwork, int * iwork, int liwork);
int LAPACKE_dstedc_work(int matrix_order, char compz, int n, double * d, double * e, double * z, int ldz, double * work, int lwork, int * iwork, int liwork);
int LAPACKE_cstedc_work(int matrix_order, char compz, int n, float * d, float * e, float _Complex * z, int ldz, float _Complex * work, int lwork, float * rwork, int lrwork, int * iwork, int liwork);
int LAPACKE_zstedc_work(int matrix_order, char compz, int n, double * d, double * e, double _Complex * z, int ldz, double _Complex * work, int lwork, double * rwork, int lrwork, int * iwork, int liwork);
int LAPACKE_sstegr_work(int matrix_order, char jobz, char range, int n, float * d, float * e, float vl, float vu, int il, int iu, float abstol, int * m, float * w, float * z, int ldz, int * isuppz, float * work, int lwork, int * iwork, int liwork);
int LAPACKE_dstegr_work(int matrix_order, char jobz, char range, int n, double * d, double * e, double vl, double vu, int il, int iu, double abstol, int * m, double * w, double * z, int ldz, int * isuppz, double * work, int lwork, int * iwork, int liwork);
int LAPACKE_cstegr_work(int matrix_order, char jobz, char range, int n, float * d, float * e, float vl, float vu, int il, int iu, float abstol, int * m, float * w, float _Complex * z, int ldz, int * isuppz, float * work, int lwork, int * iwork, int liwork);
int LAPACKE_zstegr_work(int matrix_order, char jobz, char range, int n, double * d, double * e, double vl, double vu, int il, int iu, double abstol, int * m, double * w, double _Complex * z, int ldz, int * isuppz, double * work, int lwork, int * iwork, int liwork);
int LAPACKE_sstein_work(int matrix_order, int n, float const * d, float const * e, int m, float const * w, int const * iblock, int const * isplit, float * z, int ldz, float * work, int * iwork, int * ifailv);
int LAPACKE_dstein_work(int matrix_order, int n, double const * d, double const * e, int m, double const * w, int const * iblock, int const * isplit, double * z, int ldz, double * work, int * iwork, int * ifailv);
int LAPACKE_cstein_work(int matrix_order, int n, float const * d, float const * e, int m, float const * w, int const * iblock, int const * isplit, float _Complex * z, int ldz, float * work, int * iwork, int * ifailv);
int LAPACKE_zstein_work(int matrix_order, int n, double const * d, double const * e, int m, double const * w, int const * iblock, int const * isplit, double _Complex * z, int ldz, double * work, int * iwork, int * ifailv);
int LAPACKE_sstemr_work(int matrix_order, char jobz, char range, int n, float * d, float * e, float vl, float vu, int il, int iu, int * m, float * w, float * z, int ldz, int nzc, int * isuppz, int * tryrac, float * work, int lwork, int * iwork, int liwork);
int LAPACKE_dstemr_work(int matrix_order, char jobz, char range, int n, double * d, double * e, double vl, double vu, int il, int iu, int * m, double * w, double * z, int ldz, int nzc, int * isuppz, int * tryrac, double * work, int lwork, int * iwork, int liwork);
int LAPACKE_cstemr_work(int matrix_order, char jobz, char range, int n, float * d, float * e, float vl, float vu, int il, int iu, int * m, float * w, float _Complex * z, int ldz, int nzc, int * isuppz, int * tryrac, float * work, int lwork, int * iwork, int liwork);
int LAPACKE_zstemr_work(int matrix_order, char jobz, char range, int n, double * d, double * e, double vl, double vu, int il, int iu, int * m, double * w, double _Complex * z, int ldz, int nzc, int * isuppz, int * tryrac, double * work, int lwork, int * iwork, int liwork);
int LAPACKE_ssteqr_work(int matrix_order, char compz, int n, float * d, float * e, float * z, int ldz, float * work);
int LAPACKE_dsteqr_work(int matrix_order, char compz, int n, double * d, double * e, double * z, int ldz, double * work);
int LAPACKE_csteqr_work(int matrix_order, char compz, int n, float * d, float * e, float _Complex * z, int ldz, float * work);
int LAPACKE_zsteqr_work(int matrix_order, char compz, int n, double * d, double * e, double _Complex * z, int ldz, double * work);
int LAPACKE_ssterf_work(int n, float * d, float * e);
int LAPACKE_dsterf_work(int n, double * d, double * e);
int LAPACKE_sstev_work(int matrix_order, char jobz, int n, float * d, float * e, float * z, int ldz, float * work);
int LAPACKE_dstev_work(int matrix_order, char jobz, int n, double * d, double * e, double * z, int ldz, double * work);
int LAPACKE_sstevd_work(int matrix_order, char jobz, int n, float * d, float * e, float * z, int ldz, float * work, int lwork, int * iwork, int liwork);
int LAPACKE_dstevd_work(int matrix_order, char jobz, int n, double * d, double * e, double * z, int ldz, double * work, int lwork, int * iwork, int liwork);
int LAPACKE_sstevr_work(int matrix_order, char jobz, char range, int n, float * d, float * e, float vl, float vu, int il, int iu, float abstol, int * m, float * w, float * z, int ldz, int * isuppz, float * work, int lwork, int * iwork, int liwork);
int LAPACKE_dstevr_work(int matrix_order, char jobz, char range, int n, double * d, double * e, double vl, double vu, int il, int iu, double abstol, int * m, double * w, double * z, int ldz, int * isuppz, double * work, int lwork, int * iwork, int liwork);
int LAPACKE_sstevx_work(int matrix_order, char jobz, char range, int n, float * d, float * e, float vl, float vu, int il, int iu, float abstol, int * m, float * w, float * z, int ldz, float * work, int * iwork, int * ifail);
int LAPACKE_dstevx_work(int matrix_order, char jobz, char range, int n, double * d, double * e, double vl, double vu, int il, int iu, double abstol, int * m, double * w, double * z, int ldz, double * work, int * iwork, int * ifail);
int LAPACKE_ssycon_work(int matrix_order, char uplo, int n, float const * a, int lda, int const * ipiv, float anorm, float * rcond, float * work, int * iwork);
int LAPACKE_dsycon_work(int matrix_order, char uplo, int n, double const * a, int lda, int const * ipiv, double anorm, double * rcond, double * work, int * iwork);
int LAPACKE_csycon_work(int matrix_order, char uplo, int n, float _Complex const * a, int lda, int const * ipiv, float anorm, float * rcond, float _Complex * work);
int LAPACKE_zsycon_work(int matrix_order, char uplo, int n, double _Complex const * a, int lda, int const * ipiv, double anorm, double * rcond, double _Complex * work);
int LAPACKE_ssyequb_work(int matrix_order, char uplo, int n, float const * a, int lda, float * s, float * scond, float * amax, float * work);
int LAPACKE_dsyequb_work(int matrix_order, char uplo, int n, double const * a, int lda, double * s, double * scond, double * amax, double * work);
int LAPACKE_csyequb_work(int matrix_order, char uplo, int n, float _Complex const * a, int lda, float * s, float * scond, float * amax, float _Complex * work);
int LAPACKE_zsyequb_work(int matrix_order, char uplo, int n, double _Complex const * a, int lda, double * s, double * scond, double * amax, double _Complex * work);
int LAPACKE_ssyev_work(int matrix_order, char jobz, char uplo, int n, float * a, int lda, float * w, float * work, int lwork);
int LAPACKE_dsyev_work(int matrix_order, char jobz, char uplo, int n, double * a, int lda, double * w, double * work, int lwork);
int LAPACKE_ssyevd_work(int matrix_order, char jobz, char uplo, int n, float * a, int lda, float * w, float * work, int lwork, int * iwork, int liwork);
int LAPACKE_dsyevd_work(int matrix_order, char jobz, char uplo, int n, double * a, int lda, double * w, double * work, int lwork, int * iwork, int liwork);
int LAPACKE_ssyevr_work(int matrix_order, char jobz, char range, char uplo, int n, float * a, int lda, float vl, float vu, int il, int iu, float abstol, int * m, float * w, float * z, int ldz, int * isuppz, float * work, int lwork, int * iwork, int liwork);
int LAPACKE_dsyevr_work(int matrix_order, char jobz, char range, char uplo, int n, double * a, int lda, double vl, double vu, int il, int iu, double abstol, int * m, double * w, double * z, int ldz, int * isuppz, double * work, int lwork, int * iwork, int liwork);
int LAPACKE_ssyevx_work(int matrix_order, char jobz, char range, char uplo, int n, float * a, int lda, float vl, float vu, int il, int iu, float abstol, int * m, float * w, float * z, int ldz, float * work, int lwork, int * iwork, int * ifail);
int LAPACKE_dsyevx_work(int matrix_order, char jobz, char range, char uplo, int n, double * a, int lda, double vl, double vu, int il, int iu, double abstol, int * m, double * w, double * z, int ldz, double * work, int lwork, int * iwork, int * ifail);
int LAPACKE_ssygst_work(int matrix_order, int itype, char uplo, int n, float * a, int lda, float const * b, int ldb);
int LAPACKE_dsygst_work(int matrix_order, int itype, char uplo, int n, double * a, int lda, double const * b, int ldb);
int LAPACKE_ssygv_work(int matrix_order, int itype, char jobz, char uplo, int n, float * a, int lda, float * b, int ldb, float * w, float * work, int lwork);
int LAPACKE_dsygv_work(int matrix_order, int itype, char jobz, char uplo, int n, double * a, int lda, double * b, int ldb, double * w, double * work, int lwork);
int LAPACKE_ssygvd_work(int matrix_order, int itype, char jobz, char uplo, int n, float * a, int lda, float * b, int ldb, float * w, float * work, int lwork, int * iwork, int liwork);
int LAPACKE_dsygvd_work(int matrix_order, int itype, char jobz, char uplo, int n, double * a, int lda, double * b, int ldb, double * w, double * work, int lwork, int * iwork, int liwork);
int LAPACKE_ssygvx_work(int matrix_order, int itype, char jobz, char range, char uplo, int n, float * a, int lda, float * b, int ldb, float vl, float vu, int il, int iu, float abstol, int * m, float * w, float * z, int ldz, float * work, int lwork, int * iwork, int * ifail);
int LAPACKE_dsygvx_work(int matrix_order, int itype, char jobz, char range, char uplo, int n, double * a, int lda, double * b, int ldb, double vl, double vu, int il, int iu, double abstol, int * m, double * w, double * z, int ldz, double * work, int lwork, int * iwork, int * ifail);
int LAPACKE_ssyrfs_work(int matrix_order, char uplo, int n, int nrhs, float const * a, int lda, float const * af, int ldaf, int const * ipiv, float const * b, int ldb, float * x, int ldx, float * ferr, float * berr, float * work, int * iwork);
int LAPACKE_dsyrfs_work(int matrix_order, char uplo, int n, int nrhs, double const * a, int lda, double const * af, int ldaf, int const * ipiv, double const * b, int ldb, double * x, int ldx, double * ferr, double * berr, double * work, int * iwork);
int LAPACKE_csyrfs_work(int matrix_order, char uplo, int n, int nrhs, float _Complex const * a, int lda, float _Complex const * af, int ldaf, int const * ipiv, float _Complex const * b, int ldb, float _Complex * x, int ldx, float * ferr, float * berr, float _Complex * work, float * rwork);
int LAPACKE_zsyrfs_work(int matrix_order, char uplo, int n, int nrhs, double _Complex const * a, int lda, double _Complex const * af, int ldaf, int const * ipiv, double _Complex const * b, int ldb, double _Complex * x, int ldx, double * ferr, double * berr, double _Complex * work, double * rwork);
int LAPACKE_ssyrfsx_work(int matrix_order, char uplo, char equed, int n, int nrhs, float const * a, int lda, float const * af, int ldaf, int const * ipiv, float const * s, float const * b, int ldb, float * x, int ldx, float * rcond, float * berr, int n_err_bnds, float * err_bnds_norm, float * err_bnds_comp, int nparams, float * params, float * work, int * iwork);
int LAPACKE_dsyrfsx_work(int matrix_order, char uplo, char equed, int n, int nrhs, double const * a, int lda, double const * af, int ldaf, int const * ipiv, double const * s, double const * b, int ldb, double * x, int ldx, double * rcond, double * berr, int n_err_bnds, double * err_bnds_norm, double * err_bnds_comp, int nparams, double * params, double * work, int * iwork);
int LAPACKE_csyrfsx_work(int matrix_order, char uplo, char equed, int n, int nrhs, float _Complex const * a, int lda, float _Complex const * af, int ldaf, int const * ipiv, float const * s, float _Complex const * b, int ldb, float _Complex * x, int ldx, float * rcond, float * berr, int n_err_bnds, float * err_bnds_norm, float * err_bnds_comp, int nparams, float * params, float _Complex * work, float * rwork);
int LAPACKE_zsyrfsx_work(int matrix_order, char uplo, char equed, int n, int nrhs, double _Complex const * a, int lda, double _Complex const * af, int ldaf, int const * ipiv, double const * s, double _Complex const * b, int ldb, double _Complex * x, int ldx, double * rcond, double * berr, int n_err_bnds, double * err_bnds_norm, double * err_bnds_comp, int nparams, double * params, double _Complex * work, double * rwork);
int LAPACKE_ssysv_work(int matrix_order, char uplo, int n, int nrhs, float * a, int lda, int * ipiv, float * b, int ldb, float * work, int lwork);
int LAPACKE_dsysv_work(int matrix_order, char uplo, int n, int nrhs, double * a, int lda, int * ipiv, double * b, int ldb, double * work, int lwork);
int LAPACKE_csysv_work(int matrix_order, char uplo, int n, int nrhs, float _Complex * a, int lda, int * ipiv, float _Complex * b, int ldb, float _Complex * work, int lwork);
int LAPACKE_zsysv_work(int matrix_order, char uplo, int n, int nrhs, double _Complex * a, int lda, int * ipiv, double _Complex * b, int ldb, double _Complex * work, int lwork);
int LAPACKE_ssysv_rook_work(int matrix_order, char uplo, int n, int nrhs, float * a, int lda, int * ipiv, float * b, int ldb, float * work, int lwork);
int LAPACKE_dsysv_rook_work(int matrix_order, char uplo, int n, int nrhs, double * a, int lda, int * ipiv, double * b, int ldb, double * work, int lwork);
int LAPACKE_csysv_rook_work(int matrix_order, char uplo, int n, int nrhs, float _Complex * a, int lda, int * ipiv, float _Complex * b, int ldb, float _Complex * work, int lwork);
int LAPACKE_zsysv_rook_work(int matrix_order, char uplo, int n, int nrhs, double _Complex * a, int lda, int * ipiv, double _Complex * b, int ldb, double _Complex * work, int lwork);
int LAPACKE_ssysvx_work(int matrix_order, char fact, char uplo, int n, int nrhs, float const * a, int lda, float * af, int ldaf, int * ipiv, float const * b, int ldb, float * x, int ldx, float * rcond, float * ferr, float * berr, float * work, int lwork, int * iwork);
int LAPACKE_dsysvx_work(int matrix_order, char fact, char uplo, int n, int nrhs, double const * a, int lda, double * af, int ldaf, int * ipiv, double const * b, int ldb, double * x, int ldx, double * rcond, double * ferr, double * berr, double * work, int lwork, int * iwork);
int LAPACKE_csysvx_work(int matrix_order, char fact, char uplo, int n, int nrhs, float _Complex const * a, int lda, float _Complex * af, int ldaf, int * ipiv, float _Complex const * b, int ldb, float _Complex * x, int ldx, float * rcond, float * ferr, float * berr, float _Complex * work, int lwork, float * rwork);
int LAPACKE_zsysvx_work(int matrix_order, char fact, char uplo, int n, int nrhs, double _Complex const * a, int lda, double _Complex * af, int ldaf, int * ipiv, double _Complex const * b, int ldb, double _Complex * x, int ldx, double * rcond, double * ferr, double * berr, double _Complex * work, int lwork, double * rwork);
int LAPACKE_ssysvxx_work(int matrix_order, char fact, char uplo, int n, int nrhs, float * a, int lda, float * af, int ldaf, int * ipiv, char * equed, float * s, float * b, int ldb, float * x, int ldx, float * rcond, float * rpvgrw, float * berr, int n_err_bnds, float * err_bnds_norm, float * err_bnds_comp, int nparams, float * params, float * work, int * iwork);
int LAPACKE_dsysvxx_work(int matrix_order, char fact, char uplo, int n, int nrhs, double * a, int lda, double * af, int ldaf, int * ipiv, char * equed, double * s, double * b, int ldb, double * x, int ldx, double * rcond, double * rpvgrw, double * berr, int n_err_bnds, double * err_bnds_norm, double * err_bnds_comp, int nparams, double * params, double * work, int * iwork);
int LAPACKE_csysvxx_work(int matrix_order, char fact, char uplo, int n, int nrhs, float _Complex * a, int lda, float _Complex * af, int ldaf, int * ipiv, char * equed, float * s, float _Complex * b, int ldb, float _Complex * x, int ldx, float * rcond, float * rpvgrw, float * berr, int n_err_bnds, float * err_bnds_norm, float * err_bnds_comp, int nparams, float * params, float _Complex * work, float * rwork);
int LAPACKE_zsysvxx_work(int matrix_order, char fact, char uplo, int n, int nrhs, double _Complex * a, int lda, double _Complex * af, int ldaf, int * ipiv, char * equed, double * s, double _Complex * b, int ldb, double _Complex * x, int ldx, double * rcond, double * rpvgrw, double * berr, int n_err_bnds, double * err_bnds_norm, double * err_bnds_comp, int nparams, double * params, double _Complex * work, double * rwork);
int LAPACKE_ssytrd_work(int matrix_order, char uplo, int n, float * a, int lda, float * d, float * e, float * tau, float * work, int lwork);
int LAPACKE_dsytrd_work(int matrix_order, char uplo, int n, double * a, int lda, double * d, double * e, double * tau, double * work, int lwork);
int LAPACKE_ssytrf_work(int matrix_order, char uplo, int n, float * a, int lda, int * ipiv, float * work, int lwork);
int LAPACKE_dsytrf_work(int matrix_order, char uplo, int n, double * a, int lda, int * ipiv, double * work, int lwork);
int LAPACKE_csytrf_work(int matrix_order, char uplo, int n, float _Complex * a, int lda, int * ipiv, float _Complex * work, int lwork);
int LAPACKE_zsytrf_work(int matrix_order, char uplo, int n, double _Complex * a, int lda, int * ipiv, double _Complex * work, int lwork);
int LAPACKE_ssytri_work(int matrix_order, char uplo, int n, float * a, int lda, int const * ipiv, float * work);
int LAPACKE_dsytri_work(int matrix_order, char uplo, int n, double * a, int lda, int const * ipiv, double * work);
int LAPACKE_csytri_work(int matrix_order, char uplo, int n, float _Complex * a, int lda, int const * ipiv, float _Complex * work);
int LAPACKE_zsytri_work(int matrix_order, char uplo, int n, double _Complex * a, int lda, int const * ipiv, double _Complex * work);
int LAPACKE_ssytrs_work(int matrix_order, char uplo, int n, int nrhs, float const * a, int lda, int const * ipiv, float * b, int ldb);
int LAPACKE_dsytrs_work(int matrix_order, char uplo, int n, int nrhs, double const * a, int lda, int const * ipiv, double * b, int ldb);
int LAPACKE_csytrs_work(int matrix_order, char uplo, int n, int nrhs, float _Complex const * a, int lda, int const * ipiv, float _Complex * b, int ldb);
int LAPACKE_zsytrs_work(int matrix_order, char uplo, int n, int nrhs, double _Complex const * a, int lda, int const * ipiv, double _Complex * b, int ldb);
int LAPACKE_stbcon_work(int matrix_order, char norm, char uplo, char diag, int n, int kd, float const * ab, int ldab, float * rcond, float * work, int * iwork);
int LAPACKE_dtbcon_work(int matrix_order, char norm, char uplo, char diag, int n, int kd, double const * ab, int ldab, double * rcond, double * work, int * iwork);
int LAPACKE_ctbcon_work(int matrix_order, char norm, char uplo, char diag, int n, int kd, float _Complex const * ab, int ldab, float * rcond, float _Complex * work, float * rwork);
int LAPACKE_ztbcon_work(int matrix_order, char norm, char uplo, char diag, int n, int kd, double _Complex const * ab, int ldab, double * rcond, double _Complex * work, double * rwork);
int LAPACKE_stbrfs_work(int matrix_order, char uplo, char trans, char diag, int n, int kd, int nrhs, float const * ab, int ldab, float const * b, int ldb, float const * x, int ldx, float * ferr, float * berr, float * work, int * iwork);
int LAPACKE_dtbrfs_work(int matrix_order, char uplo, char trans, char diag, int n, int kd, int nrhs, double const * ab, int ldab, double const * b, int ldb, double const * x, int ldx, double * ferr, double * berr, double * work, int * iwork);
int LAPACKE_ctbrfs_work(int matrix_order, char uplo, char trans, char diag, int n, int kd, int nrhs, float _Complex const * ab, int ldab, float _Complex const * b, int ldb, float _Complex const * x, int ldx, float * ferr, float * berr, float _Complex * work, float * rwork);
int LAPACKE_ztbrfs_work(int matrix_order, char uplo, char trans, char diag, int n, int kd, int nrhs, double _Complex const * ab, int ldab, double _Complex const * b, int ldb, double _Complex const * x, int ldx, double * ferr, double * berr, double _Complex * work, double * rwork);
int LAPACKE_stbtrs_work(int matrix_order, char uplo, char trans, char diag, int n, int kd, int nrhs, float const * ab, int ldab, float * b, int ldb);
int LAPACKE_dtbtrs_work(int matrix_order, char uplo, char trans, char diag, int n, int kd, int nrhs, double const * ab, int ldab, double * b, int ldb);
int LAPACKE_ctbtrs_work(int matrix_order, char uplo, char trans, char diag, int n, int kd, int nrhs, float _Complex const * ab, int ldab, float _Complex * b, int ldb);
int LAPACKE_ztbtrs_work(int matrix_order, char uplo, char trans, char diag, int n, int kd, int nrhs, double _Complex const * ab, int ldab, double _Complex * b, int ldb);
int LAPACKE_stfsm_work(int matrix_order, char transr, char side, char uplo, char trans, char diag, int m, int n, float alpha, float const * a, float * b, int ldb);
int LAPACKE_dtfsm_work(int matrix_order, char transr, char side, char uplo, char trans, char diag, int m, int n, double alpha, double const * a, double * b, int ldb);
int LAPACKE_ctfsm_work(int matrix_order, char transr, char side, char uplo, char trans, char diag, int m, int n, float _Complex alpha, float _Complex const * a, float _Complex * b, int ldb);
int LAPACKE_ztfsm_work(int matrix_order, char transr, char side, char uplo, char trans, char diag, int m, int n, double _Complex alpha, double _Complex const * a, double _Complex * b, int ldb);
int LAPACKE_stftri_work(int matrix_order, char transr, char uplo, char diag, int n, float * a);
int LAPACKE_dtftri_work(int matrix_order, char transr, char uplo, char diag, int n, double * a);
int LAPACKE_ctftri_work(int matrix_order, char transr, char uplo, char diag, int n, float _Complex * a);
int LAPACKE_ztftri_work(int matrix_order, char transr, char uplo, char diag, int n, double _Complex * a);
int LAPACKE_stfttp_work(int matrix_order, char transr, char uplo, int n, float const * arf, float * ap);
int LAPACKE_dtfttp_work(int matrix_order, char transr, char uplo, int n, double const * arf, double * ap);
int LAPACKE_ctfttp_work(int matrix_order, char transr, char uplo, int n, float _Complex const * arf, float _Complex * ap);
int LAPACKE_ztfttp_work(int matrix_order, char transr, char uplo, int n, double _Complex const * arf, double _Complex * ap);
int LAPACKE_stfttr_work(int matrix_order, char transr, char uplo, int n, float const * arf, float * a, int lda);
int LAPACKE_dtfttr_work(int matrix_order, char transr, char uplo, int n, double const * arf, double * a, int lda);
int LAPACKE_ctfttr_work(int matrix_order, char transr, char uplo, int n, float _Complex const * arf, float _Complex * a, int lda);
int LAPACKE_ztfttr_work(int matrix_order, char transr, char uplo, int n, double _Complex const * arf, double _Complex * a, int lda);
int LAPACKE_stgevc_work(int matrix_order, char side, char howmny, int const * select, int n, float const * s, int lds, float const * p, int ldp, float * vl, int ldvl, float * vr, int ldvr, int mm, int * m, float * work);
int LAPACKE_dtgevc_work(int matrix_order, char side, char howmny, int const * select, int n, double const * s, int lds, double const * p, int ldp, double * vl, int ldvl, double * vr, int ldvr, int mm, int * m, double * work);
int LAPACKE_ctgevc_work(int matrix_order, char side, char howmny, int const * select, int n, float _Complex const * s, int lds, float _Complex const * p, int ldp, float _Complex * vl, int ldvl, float _Complex * vr, int ldvr, int mm, int * m, float _Complex * work, float * rwork);
int LAPACKE_ztgevc_work(int matrix_order, char side, char howmny, int const * select, int n, double _Complex const * s, int lds, double _Complex const * p, int ldp, double _Complex * vl, int ldvl, double _Complex * vr, int ldvr, int mm, int * m, double _Complex * work, double * rwork);
int LAPACKE_stgexc_work(int matrix_order, int wantq, int wantz, int n, float * a, int lda, float * b, int ldb, float * q, int ldq, float * z, int ldz, int * ifst, int * ilst, float * work, int lwork);
int LAPACKE_dtgexc_work(int matrix_order, int wantq, int wantz, int n, double * a, int lda, double * b, int ldb, double * q, int ldq, double * z, int ldz, int * ifst, int * ilst, double * work, int lwork);
int LAPACKE_ctgexc_work(int matrix_order, int wantq, int wantz, int n, float _Complex * a, int lda, float _Complex * b, int ldb, float _Complex * q, int ldq, float _Complex * z, int ldz, int ifst, int ilst);
int LAPACKE_ztgexc_work(int matrix_order, int wantq, int wantz, int n, double _Complex * a, int lda, double _Complex * b, int ldb, double _Complex * q, int ldq, double _Complex * z, int ldz, int ifst, int ilst);
int LAPACKE_stgsen_work(int matrix_order, int ijob, int wantq, int wantz, int const * select, int n, float * a, int lda, float * b, int ldb, float * alphar, float * alphai, float * beta, float * q, int ldq, float * z, int ldz, int * m, float * pl, float * pr, float * dif, float * work, int lwork, int * iwork, int liwork);
int LAPACKE_dtgsen_work(int matrix_order, int ijob, int wantq, int wantz, int const * select, int n, double * a, int lda, double * b, int ldb, double * alphar, double * alphai, double * beta, double * q, int ldq, double * z, int ldz, int * m, double * pl, double * pr, double * dif, double * work, int lwork, int * iwork, int liwork);
int LAPACKE_ctgsen_work(int matrix_order, int ijob, int wantq, int wantz, int const * select, int n, float _Complex * a, int lda, float _Complex * b, int ldb, float _Complex * alpha, float _Complex * beta, float _Complex * q, int ldq, float _Complex * z, int ldz, int * m, float * pl, float * pr, float * dif, float _Complex * work, int lwork, int * iwork, int liwork);
int LAPACKE_ztgsen_work(int matrix_order, int ijob, int wantq, int wantz, int const * select, int n, double _Complex * a, int lda, double _Complex * b, int ldb, double _Complex * alpha, double _Complex * beta, double _Complex * q, int ldq, double _Complex * z, int ldz, int * m, double * pl, double * pr, double * dif, double _Complex * work, int lwork, int * iwork, int liwork);
int LAPACKE_stgsja_work(int matrix_order, char jobu, char jobv, char jobq, int m, int p, int n, int k, int l, float * a, int lda, float * b, int ldb, float tola, float tolb, float * alpha, float * beta, float * u, int ldu, float * v, int ldv, float * q, int ldq, float * work, int * ncycle);
int LAPACKE_dtgsja_work(int matrix_order, char jobu, char jobv, char jobq, int m, int p, int n, int k, int l, double * a, int lda, double * b, int ldb, double tola, double tolb, double * alpha, double * beta, double * u, int ldu, double * v, int ldv, double * q, int ldq, double * work, int * ncycle);
int LAPACKE_ctgsja_work(int matrix_order, char jobu, char jobv, char jobq, int m, int p, int n, int k, int l, float _Complex * a, int lda, float _Complex * b, int ldb, float tola, float tolb, float * alpha, float * beta, float _Complex * u, int ldu, float _Complex * v, int ldv, float _Complex * q, int ldq, float _Complex * work, int * ncycle);
int LAPACKE_ztgsja_work(int matrix_order, char jobu, char jobv, char jobq, int m, int p, int n, int k, int l, double _Complex * a, int lda, double _Complex * b, int ldb, double tola, double tolb, double * alpha, double * beta, double _Complex * u, int ldu, double _Complex * v, int ldv, double _Complex * q, int ldq, double _Complex * work, int * ncycle);
int LAPACKE_stgsna_work(int matrix_order, char job, char howmny, int const * select, int n, float const * a, int lda, float const * b, int ldb, float const * vl, int ldvl, float const * vr, int ldvr, float * s, float * dif, int mm, int * m, float * work, int lwork, int * iwork);
int LAPACKE_dtgsna_work(int matrix_order, char job, char howmny, int const * select, int n, double const * a, int lda, double const * b, int ldb, double const * vl, int ldvl, double const * vr, int ldvr, double * s, double * dif, int mm, int * m, double * work, int lwork, int * iwork);
int LAPACKE_ctgsna_work(int matrix_order, char job, char howmny, int const * select, int n, float _Complex const * a, int lda, float _Complex const * b, int ldb, float _Complex const * vl, int ldvl, float _Complex const * vr, int ldvr, float * s, float * dif, int mm, int * m, float _Complex * work, int lwork, int * iwork);
int LAPACKE_ztgsna_work(int matrix_order, char job, char howmny, int const * select, int n, double _Complex const * a, int lda, double _Complex const * b, int ldb, double _Complex const * vl, int ldvl, double _Complex const * vr, int ldvr, double * s, double * dif, int mm, int * m, double _Complex * work, int lwork, int * iwork);
int LAPACKE_stgsyl_work(int matrix_order, char trans, int ijob, int m, int n, float const * a, int lda, float const * b, int ldb, float * c, int ldc, float const * d, int ldd, float const * e, int lde, float * f, int ldf, float * scale, float * dif, float * work, int lwork, int * iwork);
int LAPACKE_dtgsyl_work(int matrix_order, char trans, int ijob, int m, int n, double const * a, int lda, double const * b, int ldb, double * c, int ldc, double const * d, int ldd, double const * e, int lde, double * f, int ldf, double * scale, double * dif, double * work, int lwork, int * iwork);
int LAPACKE_ctgsyl_work(int matrix_order, char trans, int ijob, int m, int n, float _Complex const * a, int lda, float _Complex const * b, int ldb, float _Complex * c, int ldc, float _Complex const * d, int ldd, float _Complex const * e, int lde, float _Complex * f, int ldf, float * scale, float * dif, float _Complex * work, int lwork, int * iwork);
int LAPACKE_ztgsyl_work(int matrix_order, char trans, int ijob, int m, int n, double _Complex const * a, int lda, double _Complex const * b, int ldb, double _Complex * c, int ldc, double _Complex const * d, int ldd, double _Complex const * e, int lde, double _Complex * f, int ldf, double * scale, double * dif, double _Complex * work, int lwork, int * iwork);
int LAPACKE_stpcon_work(int matrix_order, char norm, char uplo, char diag, int n, float const * ap, float * rcond, float * work, int * iwork);
int LAPACKE_dtpcon_work(int matrix_order, char norm, char uplo, char diag, int n, double const * ap, double * rcond, double * work, int * iwork);
int LAPACKE_ctpcon_work(int matrix_order, char norm, char uplo, char diag, int n, float _Complex const * ap, float * rcond, float _Complex * work, float * rwork);
int LAPACKE_ztpcon_work(int matrix_order, char norm, char uplo, char diag, int n, double _Complex const * ap, double * rcond, double _Complex * work, double * rwork);
int LAPACKE_stprfs_work(int matrix_order, char uplo, char trans, char diag, int n, int nrhs, float const * ap, float const * b, int ldb, float const * x, int ldx, float * ferr, float * berr, float * work, int * iwork);
int LAPACKE_dtprfs_work(int matrix_order, char uplo, char trans, char diag, int n, int nrhs, double const * ap, double const * b, int ldb, double const * x, int ldx, double * ferr, double * berr, double * work, int * iwork);
int LAPACKE_ctprfs_work(int matrix_order, char uplo, char trans, char diag, int n, int nrhs, float _Complex const * ap, float _Complex const * b, int ldb, float _Complex const * x, int ldx, float * ferr, float * berr, float _Complex * work, float * rwork);
int LAPACKE_ztprfs_work(int matrix_order, char uplo, char trans, char diag, int n, int nrhs, double _Complex const * ap, double _Complex const * b, int ldb, double _Complex const * x, int ldx, double * ferr, double * berr, double _Complex * work, double * rwork);
int LAPACKE_stptri_work(int matrix_order, char uplo, char diag, int n, float * ap);
int LAPACKE_dtptri_work(int matrix_order, char uplo, char diag, int n, double * ap);
int LAPACKE_ctptri_work(int matrix_order, char uplo, char diag, int n, float _Complex * ap);
int LAPACKE_ztptri_work(int matrix_order, char uplo, char diag, int n, double _Complex * ap);
int LAPACKE_stptrs_work(int matrix_order, char uplo, char trans, char diag, int n, int nrhs, float const * ap, float * b, int ldb);
int LAPACKE_dtptrs_work(int matrix_order, char uplo, char trans, char diag, int n, int nrhs, double const * ap, double * b, int ldb);
int LAPACKE_ctptrs_work(int matrix_order, char uplo, char trans, char diag, int n, int nrhs, float _Complex const * ap, float _Complex * b, int ldb);
int LAPACKE_ztptrs_work(int matrix_order, char uplo, char trans, char diag, int n, int nrhs, double _Complex const * ap, double _Complex * b, int ldb);
int LAPACKE_stpttf_work(int matrix_order, char transr, char uplo, int n, float const * ap, float * arf);
int LAPACKE_dtpttf_work(int matrix_order, char transr, char uplo, int n, double const * ap, double * arf);
int LAPACKE_ctpttf_work(int matrix_order, char transr, char uplo, int n, float _Complex const * ap, float _Complex * arf);
int LAPACKE_ztpttf_work(int matrix_order, char transr, char uplo, int n, double _Complex const * ap, double _Complex * arf);
int LAPACKE_stpttr_work(int matrix_order, char uplo, int n, float const * ap, float * a, int lda);
int LAPACKE_dtpttr_work(int matrix_order, char uplo, int n, double const * ap, double * a, int lda);
int LAPACKE_ctpttr_work(int matrix_order, char uplo, int n, float _Complex const * ap, float _Complex * a, int lda);
int LAPACKE_ztpttr_work(int matrix_order, char uplo, int n, double _Complex const * ap, double _Complex * a, int lda);
int LAPACKE_strcon_work(int matrix_order, char norm, char uplo, char diag, int n, float const * a, int lda, float * rcond, float * work, int * iwork);
int LAPACKE_dtrcon_work(int matrix_order, char norm, char uplo, char diag, int n, double const * a, int lda, double * rcond, double * work, int * iwork);
int LAPACKE_ctrcon_work(int matrix_order, char norm, char uplo, char diag, int n, float _Complex const * a, int lda, float * rcond, float _Complex * work, float * rwork);
int LAPACKE_ztrcon_work(int matrix_order, char norm, char uplo, char diag, int n, double _Complex const * a, int lda, double * rcond, double _Complex * work, double * rwork);
int LAPACKE_strevc_work(int matrix_order, char side, char howmny, int * select, int n, float const * t, int ldt, float * vl, int ldvl, float * vr, int ldvr, int mm, int * m, float * work);
int LAPACKE_dtrevc_work(int matrix_order, char side, char howmny, int * select, int n, double const * t, int ldt, double * vl, int ldvl, double * vr, int ldvr, int mm, int * m, double * work);
int LAPACKE_ctrevc_work(int matrix_order, char side, char howmny, int const * select, int n, float _Complex * t, int ldt, float _Complex * vl, int ldvl, float _Complex * vr, int ldvr, int mm, int * m, float _Complex * work, float * rwork);
int LAPACKE_ztrevc_work(int matrix_order, char side, char howmny, int const * select, int n, double _Complex * t, int ldt, double _Complex * vl, int ldvl, double _Complex * vr, int ldvr, int mm, int * m, double _Complex * work, double * rwork);
int LAPACKE_strexc_work(int matrix_order, char compq, int n, float * t, int ldt, float * q, int ldq, int * ifst, int * ilst, float * work);
int LAPACKE_dtrexc_work(int matrix_order, char compq, int n, double * t, int ldt, double * q, int ldq, int * ifst, int * ilst, double * work);
int LAPACKE_ctrexc_work(int matrix_order, char compq, int n, float _Complex * t, int ldt, float _Complex * q, int ldq, int ifst, int ilst);
int LAPACKE_ztrexc_work(int matrix_order, char compq, int n, double _Complex * t, int ldt, double _Complex * q, int ldq, int ifst, int ilst);
int LAPACKE_strrfs_work(int matrix_order, char uplo, char trans, char diag, int n, int nrhs, float const * a, int lda, float const * b, int ldb, float const * x, int ldx, float * ferr, float * berr, float * work, int * iwork);
int LAPACKE_dtrrfs_work(int matrix_order, char uplo, char trans, char diag, int n, int nrhs, double const * a, int lda, double const * b, int ldb, double const * x, int ldx, double * ferr, double * berr, double * work, int * iwork);
int LAPACKE_ctrrfs_work(int matrix_order, char uplo, char trans, char diag, int n, int nrhs, float _Complex const * a, int lda, float _Complex const * b, int ldb, float _Complex const * x, int ldx, float * ferr, float * berr, float _Complex * work, float * rwork);
int LAPACKE_ztrrfs_work(int matrix_order, char uplo, char trans, char diag, int n, int nrhs, double _Complex const * a, int lda, double _Complex const * b, int ldb, double _Complex const * x, int ldx, double * ferr, double * berr, double _Complex * work, double * rwork);
int LAPACKE_strsen_work(int matrix_order, char job, char compq, int const * select, int n, float * t, int ldt, float * q, int ldq, float * wr, float * wi, int * m, float * s, float * sep, float * work, int lwork, int * iwork, int liwork);
int LAPACKE_dtrsen_work(int matrix_order, char job, char compq, int const * select, int n, double * t, int ldt, double * q, int ldq, double * wr, double * wi, int * m, double * s, double * sep, double * work, int lwork, int * iwork, int liwork);
int LAPACKE_ctrsen_work(int matrix_order, char job, char compq, int const * select, int n, float _Complex * t, int ldt, float _Complex * q, int ldq, float _Complex * w, int * m, float * s, float * sep, float _Complex * work, int lwork);
int LAPACKE_ztrsen_work(int matrix_order, char job, char compq, int const * select, int n, double _Complex * t, int ldt, double _Complex * q, int ldq, double _Complex * w, int * m, double * s, double * sep, double _Complex * work, int lwork);
int LAPACKE_strsna_work(int matrix_order, char job, char howmny, int const * select, int n, float const * t, int ldt, float const * vl, int ldvl, float const * vr, int ldvr, float * s, float * sep, int mm, int * m, float * work, int ldwork, int * iwork);
int LAPACKE_dtrsna_work(int matrix_order, char job, char howmny, int const * select, int n, double const * t, int ldt, double const * vl, int ldvl, double const * vr, int ldvr, double * s, double * sep, int mm, int * m, double * work, int ldwork, int * iwork);
int LAPACKE_ctrsna_work(int matrix_order, char job, char howmny, int const * select, int n, float _Complex const * t, int ldt, float _Complex const * vl, int ldvl, float _Complex const * vr, int ldvr, float * s, float * sep, int mm, int * m, float _Complex * work, int ldwork, float * rwork);
int LAPACKE_ztrsna_work(int matrix_order, char job, char howmny, int const * select, int n, double _Complex const * t, int ldt, double _Complex const * vl, int ldvl, double _Complex const * vr, int ldvr, double * s, double * sep, int mm, int * m, double _Complex * work, int ldwork, double * rwork);
int LAPACKE_strsyl_work(int matrix_order, char trana, char tranb, int isgn, int m, int n, float const * a, int lda, float const * b, int ldb, float * c, int ldc, float * scale);
int LAPACKE_dtrsyl_work(int matrix_order, char trana, char tranb, int isgn, int m, int n, double const * a, int lda, double const * b, int ldb, double * c, int ldc, double * scale);
int LAPACKE_ctrsyl_work(int matrix_order, char trana, char tranb, int isgn, int m, int n, float _Complex const * a, int lda, float _Complex const * b, int ldb, float _Complex * c, int ldc, float * scale);
int LAPACKE_ztrsyl_work(int matrix_order, char trana, char tranb, int isgn, int m, int n, double _Complex const * a, int lda, double _Complex const * b, int ldb, double _Complex * c, int ldc, double * scale);
int LAPACKE_strtri_work(int matrix_order, char uplo, char diag, int n, float * a, int lda);
int LAPACKE_dtrtri_work(int matrix_order, char uplo, char diag, int n, double * a, int lda);
int LAPACKE_ctrtri_work(int matrix_order, char uplo, char diag, int n, float _Complex * a, int lda);
int LAPACKE_ztrtri_work(int matrix_order, char uplo, char diag, int n, double _Complex * a, int lda);
int LAPACKE_strtrs_work(int matrix_order, char uplo, char trans, char diag, int n, int nrhs, float const * a, int lda, float * b, int ldb);
int LAPACKE_dtrtrs_work(int matrix_order, char uplo, char trans, char diag, int n, int nrhs, double const * a, int lda, double * b, int ldb);
int LAPACKE_ctrtrs_work(int matrix_order, char uplo, char trans, char diag, int n, int nrhs, float _Complex const * a, int lda, float _Complex * b, int ldb);
int LAPACKE_ztrtrs_work(int matrix_order, char uplo, char trans, char diag, int n, int nrhs, double _Complex const * a, int lda, double _Complex * b, int ldb);
int LAPACKE_strttf_work(int matrix_order, char transr, char uplo, int n, float const * a, int lda, float * arf);
int LAPACKE_dtrttf_work(int matrix_order, char transr, char uplo, int n, double const * a, int lda, double * arf);
int LAPACKE_ctrttf_work(int matrix_order, char transr, char uplo, int n, float _Complex const * a, int lda, float _Complex * arf);
int LAPACKE_ztrttf_work(int matrix_order, char transr, char uplo, int n, double _Complex const * a, int lda, double _Complex * arf);
int LAPACKE_strttp_work(int matrix_order, char uplo, int n, float const * a, int lda, float * ap);
int LAPACKE_dtrttp_work(int matrix_order, char uplo, int n, double const * a, int lda, double * ap);
int LAPACKE_ctrttp_work(int matrix_order, char uplo, int n, float _Complex const * a, int lda, float _Complex * ap);
int LAPACKE_ztrttp_work(int matrix_order, char uplo, int n, double _Complex const * a, int lda, double _Complex * ap);
int LAPACKE_stzrzf_work(int matrix_order, int m, int n, float * a, int lda, float * tau, float * work, int lwork);
int LAPACKE_dtzrzf_work(int matrix_order, int m, int n, double * a, int lda, double * tau, double * work, int lwork);
int LAPACKE_ctzrzf_work(int matrix_order, int m, int n, float _Complex * a, int lda, float _Complex * tau, float _Complex * work, int lwork);
int LAPACKE_ztzrzf_work(int matrix_order, int m, int n, double _Complex * a, int lda, double _Complex * tau, double _Complex * work, int lwork);
int LAPACKE_cungbr_work(int matrix_order, char vect, int m, int n, int k, float _Complex * a, int lda, float _Complex const * tau, float _Complex * work, int lwork);
int LAPACKE_zungbr_work(int matrix_order, char vect, int m, int n, int k, double _Complex * a, int lda, double _Complex const * tau, double _Complex * work, int lwork);
int LAPACKE_cunghr_work(int matrix_order, int n, int ilo, int ihi, float _Complex * a, int lda, float _Complex const * tau, float _Complex * work, int lwork);
int LAPACKE_zunghr_work(int matrix_order, int n, int ilo, int ihi, double _Complex * a, int lda, double _Complex const * tau, double _Complex * work, int lwork);
int LAPACKE_cunglq_work(int matrix_order, int m, int n, int k, float _Complex * a, int lda, float _Complex const * tau, float _Complex * work, int lwork);
int LAPACKE_zunglq_work(int matrix_order, int m, int n, int k, double _Complex * a, int lda, double _Complex const * tau, double _Complex * work, int lwork);
int LAPACKE_cungql_work(int matrix_order, int m, int n, int k, float _Complex * a, int lda, float _Complex const * tau, float _Complex * work, int lwork);
int LAPACKE_zungql_work(int matrix_order, int m, int n, int k, double _Complex * a, int lda, double _Complex const * tau, double _Complex * work, int lwork);
int LAPACKE_cungqr_work(int matrix_order, int m, int n, int k, float _Complex * a, int lda, float _Complex const * tau, float _Complex * work, int lwork);
int LAPACKE_zungqr_work(int matrix_order, int m, int n, int k, double _Complex * a, int lda, double _Complex const * tau, double _Complex * work, int lwork);
int LAPACKE_cungrq_work(int matrix_order, int m, int n, int k, float _Complex * a, int lda, float _Complex const * tau, float _Complex * work, int lwork);
int LAPACKE_zungrq_work(int matrix_order, int m, int n, int k, double _Complex * a, int lda, double _Complex const * tau, double _Complex * work, int lwork);
int LAPACKE_cungtr_work(int matrix_order, char uplo, int n, float _Complex * a, int lda, float _Complex const * tau, float _Complex * work, int lwork);
int LAPACKE_zungtr_work(int matrix_order, char uplo, int n, double _Complex * a, int lda, double _Complex const * tau, double _Complex * work, int lwork);
int LAPACKE_cunmbr_work(int matrix_order, char vect, char side, char trans, int m, int n, int k, float _Complex const * a, int lda, float _Complex const * tau, float _Complex * c, int ldc, float _Complex * work, int lwork);
int LAPACKE_zunmbr_work(int matrix_order, char vect, char side, char trans, int m, int n, int k, double _Complex const * a, int lda, double _Complex const * tau, double _Complex * c, int ldc, double _Complex * work, int lwork);
int LAPACKE_cunmhr_work(int matrix_order, char side, char trans, int m, int n, int ilo, int ihi, float _Complex const * a, int lda, float _Complex const * tau, float _Complex * c, int ldc, float _Complex * work, int lwork);
int LAPACKE_zunmhr_work(int matrix_order, char side, char trans, int m, int n, int ilo, int ihi, double _Complex const * a, int lda, double _Complex const * tau, double _Complex * c, int ldc, double _Complex * work, int lwork);
int LAPACKE_cunmlq_work(int matrix_order, char side, char trans, int m, int n, int k, float _Complex const * a, int lda, float _Complex const * tau, float _Complex * c, int ldc, float _Complex * work, int lwork);
int LAPACKE_zunmlq_work(int matrix_order, char side, char trans, int m, int n, int k, double _Complex const * a, int lda, double _Complex const * tau, double _Complex * c, int ldc, double _Complex * work, int lwork);
int LAPACKE_cunmql_work(int matrix_order, char side, char trans, int m, int n, int k, float _Complex const * a, int lda, float _Complex const * tau, float _Complex * c, int ldc, float _Complex * work, int lwork);
int LAPACKE_zunmql_work(int matrix_order, char side, char trans, int m, int n, int k, double _Complex const * a, int lda, double _Complex const * tau, double _Complex * c, int ldc, double _Complex * work, int lwork);
int LAPACKE_cunmqr_work(int matrix_order, char side, char trans, int m, int n, int k, float _Complex const * a, int lda, float _Complex const * tau, float _Complex * c, int ldc, float _Complex * work, int lwork);
int LAPACKE_zunmqr_work(int matrix_order, char side, char trans, int m, int n, int k, double _Complex const * a, int lda, double _Complex const * tau, double _Complex * c, int ldc, double _Complex * work, int lwork);
int LAPACKE_cunmrq_work(int matrix_order, char side, char trans, int m, int n, int k, float _Complex const * a, int lda, float _Complex const * tau, float _Complex * c, int ldc, float _Complex * work, int lwork);
int LAPACKE_zunmrq_work(int matrix_order, char side, char trans, int m, int n, int k, double _Complex const * a, int lda, double _Complex const * tau, double _Complex * c, int ldc, double _Complex * work, int lwork);
int LAPACKE_cunmrz_work(int matrix_order, char side, char trans, int m, int n, int k, int l, float _Complex const * a, int lda, float _Complex const * tau, float _Complex * c, int ldc, float _Complex * work, int lwork);
int LAPACKE_zunmrz_work(int matrix_order, char side, char trans, int m, int n, int k, int l, double _Complex const * a, int lda, double _Complex const * tau, double _Complex * c, int ldc, double _Complex * work, int lwork);
int LAPACKE_cunmtr_work(int matrix_order, char side, char uplo, char trans, int m, int n, float _Complex const * a, int lda, float _Complex const * tau, float _Complex * c, int ldc, float _Complex * work, int lwork);
int LAPACKE_zunmtr_work(int matrix_order, char side, char uplo, char trans, int m, int n, double _Complex const * a, int lda, double _Complex const * tau, double _Complex * c, int ldc, double _Complex * work, int lwork);
int LAPACKE_cupgtr_work(int matrix_order, char uplo, int n, float _Complex const * ap, float _Complex const * tau, float _Complex * q, int ldq, float _Complex * work);
int LAPACKE_zupgtr_work(int matrix_order, char uplo, int n, double _Complex const * ap, double _Complex const * tau, double _Complex * q, int ldq, double _Complex * work);
int LAPACKE_cupmtr_work(int matrix_order, char side, char uplo, char trans, int m, int n, float _Complex const * ap, float _Complex const * tau, float _Complex * c, int ldc, float _Complex * work);
int LAPACKE_zupmtr_work(int matrix_order, char side, char uplo, char trans, int m, int n, double _Complex const * ap, double _Complex const * tau, double _Complex * c, int ldc, double _Complex * work);
int LAPACKE_claghe(int matrix_order, int n, int k, float const * d, float _Complex * a, int lda, int * iseed);
int LAPACKE_zlaghe(int matrix_order, int n, int k, double const * d, double _Complex * a, int lda, int * iseed);
int LAPACKE_slagsy(int matrix_order, int n, int k, float const * d, float * a, int lda, int * iseed);
int LAPACKE_dlagsy(int matrix_order, int n, int k, double const * d, double * a, int lda, int * iseed);
int LAPACKE_clagsy(int matrix_order, int n, int k, float const * d, float _Complex * a, int lda, int * iseed);
int LAPACKE_zlagsy(int matrix_order, int n, int k, double const * d, double _Complex * a, int lda, int * iseed);
int LAPACKE_slapmr(int matrix_order, int forwrd, int m, int n, float * x, int ldx, int * k);
int LAPACKE_dlapmr(int matrix_order, int forwrd, int m, int n, double * x, int ldx, int * k);
int LAPACKE_clapmr(int matrix_order, int forwrd, int m, int n, float _Complex * x, int ldx, int * k);
int LAPACKE_zlapmr(int matrix_order, int forwrd, int m, int n, double _Complex * x, int ldx, int * k);
float LAPACKE_slapy2(float x, float y);
double LAPACKE_dlapy2(double x, double y);
float LAPACKE_slapy3(float x, float y, float z);
double LAPACKE_dlapy3(double x, double y, double z);
int LAPACKE_slartgp(float f, float g, float * cs, float * sn, float * r);
int LAPACKE_dlartgp(double f, double g, double * cs, double * sn, double * r);
int LAPACKE_slartgs(float x, float y, float sigma, float * cs, float * sn);
int LAPACKE_dlartgs(double x, double y, double sigma, double * cs, double * sn);
int LAPACKE_cbbcsd(int matrix_order, char jobu1, char jobu2, char jobv1t, char jobv2t, char trans, int m, int p, int q, float * theta, float * phi, float _Complex * u1, int ldu1, float _Complex * u2, int ldu2, float _Complex * v1t, int ldv1t, float _Complex * v2t, int ldv2t, float * b11d, float * b11e, float * b12d, float * b12e, float * b21d, float * b21e, float * b22d, float * b22e);
int LAPACKE_cbbcsd_work(int matrix_order, char jobu1, char jobu2, char jobv1t, char jobv2t, char trans, int m, int p, int q, float * theta, float * phi, float _Complex * u1, int ldu1, float _Complex * u2, int ldu2, float _Complex * v1t, int ldv1t, float _Complex * v2t, int ldv2t, float * b11d, float * b11e, float * b12d, float * b12e, float * b21d, float * b21e, float * b22d, float * b22e, float * rwork, int lrwork);
int LAPACKE_cheswapr(int matrix_order, char uplo, int n, float _Complex * a, int i1, int i2);
int LAPACKE_cheswapr_work(int matrix_order, char uplo, int n, float _Complex * a, int i1, int i2);
int LAPACKE_chetri2(int matrix_order, char uplo, int n, float _Complex * a, int lda, int const * ipiv);
int LAPACKE_chetri2_work(int matrix_order, char uplo, int n, float _Complex * a, int lda, int const * ipiv, float _Complex * work, int lwork);
int LAPACKE_chetri2x(int matrix_order, char uplo, int n, float _Complex * a, int lda, int const * ipiv, int nb);
int LAPACKE_chetri2x_work(int matrix_order, char uplo, int n, float _Complex * a, int lda, int const * ipiv, float _Complex * work, int nb);
int LAPACKE_chetrs2(int matrix_order, char uplo, int n, int nrhs, float _Complex const * a, int lda, int const * ipiv, float _Complex * b, int ldb);
int LAPACKE_chetrs2_work(int matrix_order, char uplo, int n, int nrhs, float _Complex const * a, int lda, int const * ipiv, float _Complex * b, int ldb, float _Complex * work);
int LAPACKE_csyconv(int matrix_order, char uplo, char way, int n, float _Complex * a, int lda, int const * ipiv);
int LAPACKE_csyconv_work(int matrix_order, char uplo, char way, int n, float _Complex * a, int lda, int const * ipiv, float _Complex * work);
int LAPACKE_csyswapr(int matrix_order, char uplo, int n, float _Complex * a, int i1, int i2);
int LAPACKE_csyswapr_work(int matrix_order, char uplo, int n, float _Complex * a, int i1, int i2);
int LAPACKE_csytri2(int matrix_order, char uplo, int n, float _Complex * a, int lda, int const * ipiv);
int LAPACKE_csytri2_work(int matrix_order, char uplo, int n, float _Complex * a, int lda, int const * ipiv, float _Complex * work, int lwork);
int LAPACKE_csytri2x(int matrix_order, char uplo, int n, float _Complex * a, int lda, int const * ipiv, int nb);
int LAPACKE_csytri2x_work(int matrix_order, char uplo, int n, float _Complex * a, int lda, int const * ipiv, float _Complex * work, int nb);
int LAPACKE_csytrs2(int matrix_order, char uplo, int n, int nrhs, float _Complex const * a, int lda, int const * ipiv, float _Complex * b, int ldb);
int LAPACKE_csytrs2_work(int matrix_order, char uplo, int n, int nrhs, float _Complex const * a, int lda, int const * ipiv, float _Complex * b, int ldb, float _Complex * work);
int LAPACKE_cunbdb(int matrix_order, char trans, char signs, int m, int p, int q, float _Complex * x11, int ldx11, float _Complex * x12, int ldx12, float _Complex * x21, int ldx21, float _Complex * x22, int ldx22, float * theta, float * phi, float _Complex * taup1, float _Complex * taup2, float _Complex * tauq1, float _Complex * tauq2);
int LAPACKE_cunbdb_work(int matrix_order, char trans, char signs, int m, int p, int q, float _Complex * x11, int ldx11, float _Complex * x12, int ldx12, float _Complex * x21, int ldx21, float _Complex * x22, int ldx22, float * theta, float * phi, float _Complex * taup1, float _Complex * taup2, float _Complex * tauq1, float _Complex * tauq2, float _Complex * work, int lwork);
int LAPACKE_cuncsd(int matrix_order, char jobu1, char jobu2, char jobv1t, char jobv2t, char trans, char signs, int m, int p, int q, float _Complex * x11, int ldx11, float _Complex * x12, int ldx12, float _Complex * x21, int ldx21, float _Complex * x22, int ldx22, float * theta, float _Complex * u1, int ldu1, float _Complex * u2, int ldu2, float _Complex * v1t, int ldv1t, float _Complex * v2t, int ldv2t);
int LAPACKE_cuncsd_work(int matrix_order, char jobu1, char jobu2, char jobv1t, char jobv2t, char trans, char signs, int m, int p, int q, float _Complex * x11, int ldx11, float _Complex * x12, int ldx12, float _Complex * x21, int ldx21, float _Complex * x22, int ldx22, float * theta, float _Complex * u1, int ldu1, float _Complex * u2, int ldu2, float _Complex * v1t, int ldv1t, float _Complex * v2t, int ldv2t, float _Complex * work, int lwork, float * rwork, int lrwork, int * iwork);
int LAPACKE_dbbcsd(int matrix_order, char jobu1, char jobu2, char jobv1t, char jobv2t, char trans, int m, int p, int q, double * theta, double * phi, double * u1, int ldu1, double * u2, int ldu2, double * v1t, int ldv1t, double * v2t, int ldv2t, double * b11d, double * b11e, double * b12d, double * b12e, double * b21d, double * b21e, double * b22d, double * b22e);
int LAPACKE_dbbcsd_work(int matrix_order, char jobu1, char jobu2, char jobv1t, char jobv2t, char trans, int m, int p, int q, double * theta, double * phi, double * u1, int ldu1, double * u2, int ldu2, double * v1t, int ldv1t, double * v2t, int ldv2t, double * b11d, double * b11e, double * b12d, double * b12e, double * b21d, double * b21e, double * b22d, double * b22e, double * work, int lwork);
int LAPACKE_dorbdb(int matrix_order, char trans, char signs, int m, int p, int q, double * x11, int ldx11, double * x12, int ldx12, double * x21, int ldx21, double * x22, int ldx22, double * theta, double * phi, double * taup1, double * taup2, double * tauq1, double * tauq2);
int LAPACKE_dorbdb_work(int matrix_order, char trans, char signs, int m, int p, int q, double * x11, int ldx11, double * x12, int ldx12, double * x21, int ldx21, double * x22, int ldx22, double * theta, double * phi, double * taup1, double * taup2, double * tauq1, double * tauq2, double * work, int lwork);
int LAPACKE_dorcsd(int matrix_order, char jobu1, char jobu2, char jobv1t, char jobv2t, char trans, char signs, int m, int p, int q, double * x11, int ldx11, double * x12, int ldx12, double * x21, int ldx21, double * x22, int ldx22, double * theta, double * u1, int ldu1, double * u2, int ldu2, double * v1t, int ldv1t, double * v2t, int ldv2t);
int LAPACKE_dorcsd_work(int matrix_order, char jobu1, char jobu2, char jobv1t, char jobv2t, char trans, char signs, int m, int p, int q, double * x11, int ldx11, double * x12, int ldx12, double * x21, int ldx21, double * x22, int ldx22, double * theta, double * u1, int ldu1, double * u2, int ldu2, double * v1t, int ldv1t, double * v2t, int ldv2t, double * work, int lwork, int * iwork);
int LAPACKE_dsyconv(int matrix_order, char uplo, char way, int n, double * a, int lda, int const * ipiv);
int LAPACKE_dsyconv_work(int matrix_order, char uplo, char way, int n, double * a, int lda, int const * ipiv, double * work);
int LAPACKE_dsyswapr(int matrix_order, char uplo, int n, double * a, int i1, int i2);
int LAPACKE_dsyswapr_work(int matrix_order, char uplo, int n, double * a, int i1, int i2);
int LAPACKE_dsytri2(int matrix_order, char uplo, int n, double * a, int lda, int const * ipiv);
int LAPACKE_dsytri2_work(int matrix_order, char uplo, int n, double * a, int lda, int const * ipiv, double _Complex * work, int lwork);
int LAPACKE_dsytri2x(int matrix_order, char uplo, int n, double * a, int lda, int const * ipiv, int nb);
int LAPACKE_dsytri2x_work(int matrix_order, char uplo, int n, double * a, int lda, int const * ipiv, double * work, int nb);
int LAPACKE_dsytrs2(int matrix_order, char uplo, int n, int nrhs, double const * a, int lda, int const * ipiv, double * b, int ldb);
int LAPACKE_dsytrs2_work(int matrix_order, char uplo, int n, int nrhs, double const * a, int lda, int const * ipiv, double * b, int ldb, double * work);
int LAPACKE_sbbcsd(int matrix_order, char jobu1, char jobu2, char jobv1t, char jobv2t, char trans, int m, int p, int q, float * theta, float * phi, float * u1, int ldu1, float * u2, int ldu2, float * v1t, int ldv1t, float * v2t, int ldv2t, float * b11d, float * b11e, float * b12d, float * b12e, float * b21d, float * b21e, float * b22d, float * b22e);
int LAPACKE_sbbcsd_work(int matrix_order, char jobu1, char jobu2, char jobv1t, char jobv2t, char trans, int m, int p, int q, float * theta, float * phi, float * u1, int ldu1, float * u2, int ldu2, float * v1t, int ldv1t, float * v2t, int ldv2t, float * b11d, float * b11e, float * b12d, float * b12e, float * b21d, float * b21e, float * b22d, float * b22e, float * work, int lwork);
int LAPACKE_sorbdb(int matrix_order, char trans, char signs, int m, int p, int q, float * x11, int ldx11, float * x12, int ldx12, float * x21, int ldx21, float * x22, int ldx22, float * theta, float * phi, float * taup1, float * taup2, float * tauq1, float * tauq2);
int LAPACKE_sorbdb_work(int matrix_order, char trans, char signs, int m, int p, int q, float * x11, int ldx11, float * x12, int ldx12, float * x21, int ldx21, float * x22, int ldx22, float * theta, float * phi, float * taup1, float * taup2, float * tauq1, float * tauq2, float * work, int lwork);
int LAPACKE_sorcsd(int matrix_order, char jobu1, char jobu2, char jobv1t, char jobv2t, char trans, char signs, int m, int p, int q, float * x11, int ldx11, float * x12, int ldx12, float * x21, int ldx21, float * x22, int ldx22, float * theta, float * u1, int ldu1, float * u2, int ldu2, float * v1t, int ldv1t, float * v2t, int ldv2t);
int LAPACKE_sorcsd_work(int matrix_order, char jobu1, char jobu2, char jobv1t, char jobv2t, char trans, char signs, int m, int p, int q, float * x11, int ldx11, float * x12, int ldx12, float * x21, int ldx21, float * x22, int ldx22, float * theta, float * u1, int ldu1, float * u2, int ldu2, float * v1t, int ldv1t, float * v2t, int ldv2t, float * work, int lwork, int * iwork);
int LAPACKE_ssyconv(int matrix_order, char uplo, char way, int n, float * a, int lda, int const * ipiv);
int LAPACKE_ssyconv_work(int matrix_order, char uplo, char way, int n, float * a, int lda, int const * ipiv, float * work);
int LAPACKE_ssyswapr(int matrix_order, char uplo, int n, float * a, int i1, int i2);
int LAPACKE_ssyswapr_work(int matrix_order, char uplo, int n, float * a, int i1, int i2);
int LAPACKE_ssytri2(int matrix_order, char uplo, int n, float * a, int lda, int const * ipiv);
int LAPACKE_ssytri2_work(int matrix_order, char uplo, int n, float * a, int lda, int const * ipiv, float _Complex * work, int lwork);
int LAPACKE_ssytri2x(int matrix_order, char uplo, int n, float * a, int lda, int const * ipiv, int nb);
int LAPACKE_ssytri2x_work(int matrix_order, char uplo, int n, float * a, int lda, int const * ipiv, float * work, int nb);
int LAPACKE_ssytrs2(int matrix_order, char uplo, int n, int nrhs, float const * a, int lda, int const * ipiv, float * b, int ldb);
int LAPACKE_ssytrs2_work(int matrix_order, char uplo, int n, int nrhs, float const * a, int lda, int const * ipiv, float * b, int ldb, float * work);
int LAPACKE_zbbcsd(int matrix_order, char jobu1, char jobu2, char jobv1t, char jobv2t, char trans, int m, int p, int q, double * theta, double * phi, double _Complex * u1, int ldu1, double _Complex * u2, int ldu2, double _Complex * v1t, int ldv1t, double _Complex * v2t, int ldv2t, double * b11d, double * b11e, double * b12d, double * b12e, double * b21d, double * b21e, double * b22d, double * b22e);
int LAPACKE_zbbcsd_work(int matrix_order, char jobu1, char jobu2, char jobv1t, char jobv2t, char trans, int m, int p, int q, double * theta, double * phi, double _Complex * u1, int ldu1, double _Complex * u2, int ldu2, double _Complex * v1t, int ldv1t, double _Complex * v2t, int ldv2t, double * b11d, double * b11e, double * b12d, double * b12e, double * b21d, double * b21e, double * b22d, double * b22e, double * rwork, int lrwork);
int LAPACKE_zheswapr(int matrix_order, char uplo, int n, double _Complex * a, int i1, int i2);
int LAPACKE_zheswapr_work(int matrix_order, char uplo, int n, double _Complex * a, int i1, int i2);
int LAPACKE_zhetri2(int matrix_order, char uplo, int n, double _Complex * a, int lda, int const * ipiv);
int LAPACKE_zhetri2_work(int matrix_order, char uplo, int n, double _Complex * a, int lda, int const * ipiv, double _Complex * work, int lwork);
int LAPACKE_zhetri2x(int matrix_order, char uplo, int n, double _Complex * a, int lda, int const * ipiv, int nb);
int LAPACKE_zhetri2x_work(int matrix_order, char uplo, int n, double _Complex * a, int lda, int const * ipiv, double _Complex * work, int nb);
int LAPACKE_zhetrs2(int matrix_order, char uplo, int n, int nrhs, double _Complex const * a, int lda, int const * ipiv, double _Complex * b, int ldb);
int LAPACKE_zhetrs2_work(int matrix_order, char uplo, int n, int nrhs, double _Complex const * a, int lda, int const * ipiv, double _Complex * b, int ldb, double _Complex * work);
int LAPACKE_zsyconv(int matrix_order, char uplo, char way, int n, double _Complex * a, int lda, int const * ipiv);
int LAPACKE_zsyconv_work(int matrix_order, char uplo, char way, int n, double _Complex * a, int lda, int const * ipiv, double _Complex * work);
int LAPACKE_zsyswapr(int matrix_order, char uplo, int n, double _Complex * a, int i1, int i2);
int LAPACKE_zsyswapr_work(int matrix_order, char uplo, int n, double _Complex * a, int i1, int i2);
int LAPACKE_zsytri2(int matrix_order, char uplo, int n, double _Complex * a, int lda, int const * ipiv);
int LAPACKE_zsytri2_work(int matrix_order, char uplo, int n, double _Complex * a, int lda, int const * ipiv, double _Complex * work, int lwork);
int LAPACKE_zsytri2x(int matrix_order, char uplo, int n, double _Complex * a, int lda, int const * ipiv, int nb);
int LAPACKE_zsytri2x_work(int matrix_order, char uplo, int n, double _Complex * a, int lda, int const * ipiv, double _Complex * work, int nb);
int LAPACKE_zsytrs2(int matrix_order, char uplo, int n, int nrhs, double _Complex const * a, int lda, int const * ipiv, double _Complex * b, int ldb);
int LAPACKE_zsytrs2_work(int matrix_order, char uplo, int n, int nrhs, double _Complex const * a, int lda, int const * ipiv, double _Complex * b, int ldb, double _Complex * work);
int LAPACKE_zunbdb(int matrix_order, char trans, char signs, int m, int p, int q, double _Complex * x11, int ldx11, double _Complex * x12, int ldx12, double _Complex * x21, int ldx21, double _Complex * x22, int ldx22, double * theta, double * phi, double _Complex * taup1, double _Complex * taup2, double _Complex * tauq1, double _Complex * tauq2);
int LAPACKE_zunbdb_work(int matrix_order, char trans, char signs, int m, int p, int q, double _Complex * x11, int ldx11, double _Complex * x12, int ldx12, double _Complex * x21, int ldx21, double _Complex * x22, int ldx22, double * theta, double * phi, double _Complex * taup1, double _Complex * taup2, double _Complex * tauq1, double _Complex * tauq2, double _Complex * work, int lwork);
int LAPACKE_zuncsd(int matrix_order, char jobu1, char jobu2, char jobv1t, char jobv2t, char trans, char signs, int m, int p, int q, double _Complex * x11, int ldx11, double _Complex * x12, int ldx12, double _Complex * x21, int ldx21, double _Complex * x22, int ldx22, double * theta, double _Complex * u1, int ldu1, double _Complex * u2, int ldu2, double _Complex * v1t, int ldv1t, double _Complex * v2t, int ldv2t);
int LAPACKE_zuncsd_work(int matrix_order, char jobu1, char jobu2, char jobv1t, char jobv2t, char trans, char signs, int m, int p, int q, double _Complex * x11, int ldx11, double _Complex * x12, int ldx12, double _Complex * x21, int ldx21, double _Complex * x22, int ldx22, double * theta, double _Complex * u1, int ldu1, double _Complex * u2, int ldu2, double _Complex * v1t, int ldv1t, double _Complex * v2t, int ldv2t, double _Complex * work, int lwork, double * rwork, int lrwork, int * iwork);
int LAPACKE_sgemqrt(int matrix_order, char side, char trans, int m, int n, int k, int nb, float const * v, int ldv, float const * t, int ldt, float * c, int ldc);
int LAPACKE_dgemqrt(int matrix_order, char side, char trans, int m, int n, int k, int nb, double const * v, int ldv, double const * t, int ldt, double * c, int ldc);
int LAPACKE_cgemqrt(int matrix_order, char side, char trans, int m, int n, int k, int nb, float _Complex const * v, int ldv, float _Complex const * t, int ldt, float _Complex * c, int ldc);
int LAPACKE_zgemqrt(int matrix_order, char side, char trans, int m, int n, int k, int nb, double _Complex const * v, int ldv, double _Complex const * t, int ldt, double _Complex * c, int ldc);
int LAPACKE_sgeqrt(int matrix_order, int m, int n, int nb, float * a, int lda, float * t, int ldt);
int LAPACKE_dgeqrt(int matrix_order, int m, int n, int nb, double * a, int lda, double * t, int ldt);
int LAPACKE_cgeqrt(int matrix_order, int m, int n, int nb, float _Complex * a, int lda, float _Complex * t, int ldt);
int LAPACKE_zgeqrt(int matrix_order, int m, int n, int nb, double _Complex * a, int lda, double _Complex * t, int ldt);
int LAPACKE_sgeqrt2(int matrix_order, int m, int n, float * a, int lda, float * t, int ldt);
int LAPACKE_dgeqrt2(int matrix_order, int m, int n, double * a, int lda, double * t, int ldt);
int LAPACKE_cgeqrt2(int matrix_order, int m, int n, float _Complex * a, int lda, float _Complex * t, int ldt);
int LAPACKE_zgeqrt2(int matrix_order, int m, int n, double _Complex * a, int lda, double _Complex * t, int ldt);
int LAPACKE_sgeqrt3(int matrix_order, int m, int n, float * a, int lda, float * t, int ldt);
int LAPACKE_dgeqrt3(int matrix_order, int m, int n, double * a, int lda, double * t, int ldt);
int LAPACKE_cgeqrt3(int matrix_order, int m, int n, float _Complex * a, int lda, float _Complex * t, int ldt);
int LAPACKE_zgeqrt3(int matrix_order, int m, int n, double _Complex * a, int lda, double _Complex * t, int ldt);
int LAPACKE_stpmqrt(int matrix_order, char side, char trans, int m, int n, int k, int l, int nb, float const * v, int ldv, float const * t, int ldt, float * a, int lda, float * b, int ldb);
int LAPACKE_dtpmqrt(int matrix_order, char side, char trans, int m, int n, int k, int l, int nb, double const * v, int ldv, double const * t, int ldt, double * a, int lda, double * b, int ldb);
int LAPACKE_ctpmqrt(int matrix_order, char side, char trans, int m, int n, int k, int l, int nb, float _Complex const * v, int ldv, float _Complex const * t, int ldt, float _Complex * a, int lda, float _Complex * b, int ldb);
int LAPACKE_ztpmqrt(int matrix_order, char side, char trans, int m, int n, int k, int l, int nb, double _Complex const * v, int ldv, double _Complex const * t, int ldt, double _Complex * a, int lda, double _Complex * b, int ldb);
int LAPACKE_dtpqrt(int matrix_order, int m, int n, int l, int nb, double * a, int lda, double * b, int ldb, double * t, int ldt);
int LAPACKE_ctpqrt(int matrix_order, int m, int n, int l, int nb, float _Complex * a, int lda, float _Complex * b, int ldb, float _Complex * t, int ldt);
int LAPACKE_ztpqrt(int matrix_order, int m, int n, int l, int nb, double _Complex * a, int lda, double _Complex * b, int ldb, double _Complex * t, int ldt);
int LAPACKE_stpqrt2(int matrix_order, int m, int n, int l, float * a, int lda, float * b, int ldb, float * t, int ldt);
int LAPACKE_dtpqrt2(int matrix_order, int m, int n, int l, double * a, int lda, double * b, int ldb, double * t, int ldt);
int LAPACKE_ctpqrt2(int matrix_order, int m, int n, int l, float _Complex * a, int lda, float _Complex * b, int ldb, float _Complex * t, int ldt);
int LAPACKE_ztpqrt2(int matrix_order, int m, int n, int l, double _Complex * a, int lda, double _Complex * b, int ldb, double _Complex * t, int ldt);
int LAPACKE_stprfb(int matrix_order, char side, char trans, char direct, char storev, int m, int n, int k, int l, float const * v, int ldv, float const * t, int ldt, float * a, int lda, float * b, int ldb);
int LAPACKE_dtprfb(int matrix_order, char side, char trans, char direct, char storev, int m, int n, int k, int l, double const * v, int ldv, double const * t, int ldt, double * a, int lda, double * b, int ldb);
int LAPACKE_ctprfb(int matrix_order, char side, char trans, char direct, char storev, int m, int n, int k, int l, float _Complex const * v, int ldv, float _Complex const * t, int ldt, float _Complex * a, int lda, float _Complex * b, int ldb);
int LAPACKE_ztprfb(int matrix_order, char side, char trans, char direct, char storev, int m, int n, int k, int l, double _Complex const * v, int ldv, double _Complex const * t, int ldt, double _Complex * a, int lda, double _Complex * b, int ldb);
int LAPACKE_sgemqrt_work(int matrix_order, char side, char trans, int m, int n, int k, int nb, float const * v, int ldv, float const * t, int ldt, float * c, int ldc, float * work);
int LAPACKE_dgemqrt_work(int matrix_order, char side, char trans, int m, int n, int k, int nb, double const * v, int ldv, double const * t, int ldt, double * c, int ldc, double * work);
int LAPACKE_cgemqrt_work(int matrix_order, char side, char trans, int m, int n, int k, int nb, float _Complex const * v, int ldv, float _Complex const * t, int ldt, float _Complex * c, int ldc, float _Complex * work);
int LAPACKE_zgemqrt_work(int matrix_order, char side, char trans, int m, int n, int k, int nb, double _Complex const * v, int ldv, double _Complex const * t, int ldt, double _Complex * c, int ldc, double _Complex * work);
int LAPACKE_sgeqrt_work(int matrix_order, int m, int n, int nb, float * a, int lda, float * t, int ldt, float * work);
int LAPACKE_dgeqrt_work(int matrix_order, int m, int n, int nb, double * a, int lda, double * t, int ldt, double * work);
int LAPACKE_cgeqrt_work(int matrix_order, int m, int n, int nb, float _Complex * a, int lda, float _Complex * t, int ldt, float _Complex * work);
int LAPACKE_zgeqrt_work(int matrix_order, int m, int n, int nb, double _Complex * a, int lda, double _Complex * t, int ldt, double _Complex * work);
int LAPACKE_sgeqrt2_work(int matrix_order, int m, int n, float * a, int lda, float * t, int ldt);
int LAPACKE_dgeqrt2_work(int matrix_order, int m, int n, double * a, int lda, double * t, int ldt);
int LAPACKE_cgeqrt2_work(int matrix_order, int m, int n, float _Complex * a, int lda, float _Complex * t, int ldt);
int LAPACKE_zgeqrt2_work(int matrix_order, int m, int n, double _Complex * a, int lda, double _Complex * t, int ldt);
int LAPACKE_sgeqrt3_work(int matrix_order, int m, int n, float * a, int lda, float * t, int ldt);
int LAPACKE_dgeqrt3_work(int matrix_order, int m, int n, double * a, int lda, double * t, int ldt);
int LAPACKE_cgeqrt3_work(int matrix_order, int m, int n, float _Complex * a, int lda, float _Complex * t, int ldt);
int LAPACKE_zgeqrt3_work(int matrix_order, int m, int n, double _Complex * a, int lda, double _Complex * t, int ldt);
int LAPACKE_stpmqrt_work(int matrix_order, char side, char trans, int m, int n, int k, int l, int nb, float const * v, int ldv, float const * t, int ldt, float * a, int lda, float * b, int ldb, float * work);
int LAPACKE_dtpmqrt_work(int matrix_order, char side, char trans, int m, int n, int k, int l, int nb, double const * v, int ldv, double const * t, int ldt, double * a, int lda, double * b, int ldb, double * work);
int LAPACKE_ctpmqrt_work(int matrix_order, char side, char trans, int m, int n, int k, int l, int nb, float _Complex const * v, int ldv, float _Complex const * t, int ldt, float _Complex * a, int lda, float _Complex * b, int ldb, float _Complex * work);
int LAPACKE_ztpmqrt_work(int matrix_order, char side, char trans, int m, int n, int k, int l, int nb, double _Complex const * v, int ldv, double _Complex const * t, int ldt, double _Complex * a, int lda, double _Complex * b, int ldb, double _Complex * work);
int LAPACKE_dtpqrt_work(int matrix_order, int m, int n, int l, int nb, double * a, int lda, double * b, int ldb, double * t, int ldt, double * work);
int LAPACKE_ctpqrt_work(int matrix_order, int m, int n, int l, int nb, float _Complex * a, int lda, float _Complex * b, int ldb, float _Complex * t, int ldt, float _Complex * work);
int LAPACKE_ztpqrt_work(int matrix_order, int m, int n, int l, int nb, double _Complex * a, int lda, double _Complex * b, int ldb, double _Complex * t, int ldt, double _Complex * work);
int LAPACKE_stpqrt2_work(int matrix_order, int m, int n, int l, float * a, int lda, float * b, int ldb, float * t, int ldt);
int LAPACKE_dtpqrt2_work(int matrix_order, int m, int n, int l, double * a, int lda, double * b, int ldb, double * t, int ldt);
int LAPACKE_ctpqrt2_work(int matrix_order, int m, int n, int l, float _Complex * a, int lda, float _Complex * b, int ldb, float _Complex * t, int ldt);
int LAPACKE_ztpqrt2_work(int matrix_order, int m, int n, int l, double _Complex * a, int lda, double _Complex * b, int ldb, double _Complex * t, int ldt);
int LAPACKE_stprfb_work(int matrix_order, char side, char trans, char direct, char storev, int m, int n, int k, int l, float const * v, int ldv, float const * t, int ldt, float * a, int lda, float * b, int ldb, float const * work, int ldwork);
int LAPACKE_dtprfb_work(int matrix_order, char side, char trans, char direct, char storev, int m, int n, int k, int l, double const * v, int ldv, double const * t, int ldt, double * a, int lda, double * b, int ldb, double const * work, int ldwork);
int LAPACKE_ctprfb_work(int matrix_order, char side, char trans, char direct, char storev, int m, int n, int k, int l, float _Complex const * v, int ldv, float _Complex const * t, int ldt, float _Complex * a, int lda, float _Complex * b, int ldb, float const * work, int ldwork);
int LAPACKE_ztprfb_work(int matrix_order, char side, char trans, char direct, char storev, int m, int n, int k, int l, double _Complex const * v, int ldv, double _Complex const * t, int ldt, double _Complex * a, int lda, double _Complex * b, int ldb, double const * work, int ldwork);
int LAPACKE_ssysv_rook(int matrix_order, char uplo, int n, int nrhs, float * a, int lda, int * ipiv, float * b, int ldb);
int LAPACKE_dsysv_rook(int matrix_order, char uplo, int n, int nrhs, double * a, int lda, int * ipiv, double * b, int ldb);
int LAPACKE_csysv_rook(int matrix_order, char uplo, int n, int nrhs, float _Complex * a, int lda, int * ipiv, float _Complex * b, int ldb);
int LAPACKE_zsysv_rook(int matrix_order, char uplo, int n, int nrhs, double _Complex * a, int lda, int * ipiv, double _Complex * b, int ldb);
int LAPACKE_csyr(int matrix_order, char uplo, int n, float _Complex alpha, float _Complex const * x, int incx, float _Complex * a, int lda);
int LAPACKE_zsyr(int matrix_order, char uplo, int n, double _Complex alpha, double _Complex const * x, int incx, double _Complex * a, int lda);
int LAPACKE_ssysv_rook_work(int matrix_order, char uplo, int n, int nrhs, float * a, int lda, int * ipiv, float * b, int ldb, float * work, int lwork);
int LAPACKE_dsysv_rook_work(int matrix_order, char uplo, int n, int nrhs, double * a, int lda, int * ipiv, double * b, int ldb, double * work, int lwork);
int LAPACKE_csysv_rook_work(int matrix_order, char uplo, int n, int nrhs, float _Complex * a, int lda, int * ipiv, float _Complex * b, int ldb, float _Complex * work, int lwork);
int LAPACKE_zsysv_rook_work(int matrix_order, char uplo, int n, int nrhs, double _Complex * a, int lda, int * ipiv, double _Complex * b, int ldb, double _Complex * work, int lwork);
int LAPACKE_csyr_work(int matrix_order, char uplo, int n, float _Complex alpha, float _Complex const * x, int incx, float _Complex * a, int lda);
int LAPACKE_zsyr_work(int matrix_order, char uplo, int n, double _Complex alpha, double _Complex const * x, int incx, double _Complex * a, int lda);
void LAPACKE_ilaver(int const * vers_major, int const * vers_minor, int const * vers_patch);
void sgetrf_(int * m, int * n, float * a, int * lda, int * ipiv, int * info);
void dgetrf_(int * m, int * n, double * a, int * lda, int * ipiv, int * info);
void cgetrf_(int * m, int * n, float _Complex * a, int * lda, int * ipiv, int * info);
void zgetrf_(int * m, int * n, double _Complex * a, int * lda, int * ipiv, int * info);
void sgbtrf_(int * m, int * n, int * kl, int * ku, float * ab, int * ldab, int * ipiv, int * info);
void dgbtrf_(int * m, int * n, int * kl, int * ku, double * ab, int * ldab, int * ipiv, int * info);
void cgbtrf_(int * m, int * n, int * kl, int * ku, float _Complex * ab, int * ldab, int * ipiv, int * info);
void zgbtrf_(int * m, int * n, int * kl, int * ku, double _Complex * ab, int * ldab, int * ipiv, int * info);
void sgttrf_(int * n, float * dl, float * d, float * du, float * du2, int * ipiv, int * info);
void dgttrf_(int * n, double * dl, double * d, double * du, double * du2, int * ipiv, int * info);
void cgttrf_(int * n, float _Complex * dl, float _Complex * d, float _Complex * du, float _Complex * du2, int * ipiv, int * info);
void zgttrf_(int * n, double _Complex * dl, double _Complex * d, double _Complex * du, double _Complex * du2, int * ipiv, int * info);
void spotrf_(char * uplo, int * n, float * a, int * lda, int * info);
void dpotrf_(char * uplo, int * n, double * a, int * lda, int * info);
void cpotrf_(char * uplo, int * n, float _Complex * a, int * lda, int * info);
void zpotrf_(char * uplo, int * n, double _Complex * a, int * lda, int * info);
void dpstrf_(char * uplo, int * n, double * a, int * lda, int * piv, int * rank, double * tol, double * work, int * info);
void spstrf_(char * uplo, int * n, float * a, int * lda, int * piv, int * rank, float * tol, float * work, int * info);
void zpstrf_(char * uplo, int * n, double _Complex * a, int * lda, int * piv, int * rank, double * tol, double * work, int * info);
void cpstrf_(char * uplo, int * n, float _Complex * a, int * lda, int * piv, int * rank, float * tol, float * work, int * info);
void dpftrf_(char * transr, char * uplo, int * n, double * a, int * info);
void spftrf_(char * transr, char * uplo, int * n, float * a, int * info);
void zpftrf_(char * transr, char * uplo, int * n, double _Complex * a, int * info);
void cpftrf_(char * transr, char * uplo, int * n, float _Complex * a, int * info);
void spptrf_(char * uplo, int * n, float * ap, int * info);
void dpptrf_(char * uplo, int * n, double * ap, int * info);
void cpptrf_(char * uplo, int * n, float _Complex * ap, int * info);
void zpptrf_(char * uplo, int * n, double _Complex * ap, int * info);
void spbtrf_(char * uplo, int * n, int * kd, float * ab, int * ldab, int * info);
void dpbtrf_(char * uplo, int * n, int * kd, double * ab, int * ldab, int * info);
void cpbtrf_(char * uplo, int * n, int * kd, float _Complex * ab, int * ldab, int * info);
void zpbtrf_(char * uplo, int * n, int * kd, double _Complex * ab, int * ldab, int * info);
void spttrf_(int * n, float * d, float * e, int * info);
void dpttrf_(int * n, double * d, double * e, int * info);
void cpttrf_(int * n, float * d, float _Complex * e, int * info);
void zpttrf_(int * n, double * d, double _Complex * e, int * info);
void ssytrf_(char * uplo, int * n, float * a, int * lda, int * ipiv, float * work, int * lwork, int * info);
void dsytrf_(char * uplo, int * n, double * a, int * lda, int * ipiv, double * work, int * lwork, int * info);
void csytrf_(char * uplo, int * n, float _Complex * a, int * lda, int * ipiv, float _Complex * work, int * lwork, int * info);
void zsytrf_(char * uplo, int * n, double _Complex * a, int * lda, int * ipiv, double _Complex * work, int * lwork, int * info);
void chetrf_(char * uplo, int * n, float _Complex * a, int * lda, int * ipiv, float _Complex * work, int * lwork, int * info);
void zhetrf_(char * uplo, int * n, double _Complex * a, int * lda, int * ipiv, double _Complex * work, int * lwork, int * info);
void ssptrf_(char * uplo, int * n, float * ap, int * ipiv, int * info);
void dsptrf_(char * uplo, int * n, double * ap, int * ipiv, int * info);
void csptrf_(char * uplo, int * n, float _Complex * ap, int * ipiv, int * info);
void zsptrf_(char * uplo, int * n, double _Complex * ap, int * ipiv, int * info);
void chptrf_(char * uplo, int * n, float _Complex * ap, int * ipiv, int * info);
void zhptrf_(char * uplo, int * n, double _Complex * ap, int * ipiv, int * info);
void sgetrs_(char * trans, int * n, int * nrhs, float const * a, int * lda, int const * ipiv, float * b, int * ldb, int * info);
void dgetrs_(char * trans, int * n, int * nrhs, double const * a, int * lda, int const * ipiv, double * b, int * ldb, int * info);
void cgetrs_(char * trans, int * n, int * nrhs, float _Complex const * a, int * lda, int const * ipiv, float _Complex * b, int * ldb, int * info);
void zgetrs_(char * trans, int * n, int * nrhs, double _Complex const * a, int * lda, int const * ipiv, double _Complex * b, int * ldb, int * info);
void sgbtrs_(char * trans, int * n, int * kl, int * ku, int * nrhs, float const * ab, int * ldab, int const * ipiv, float * b, int * ldb, int * info);
void dgbtrs_(char * trans, int * n, int * kl, int * ku, int * nrhs, double const * ab, int * ldab, int const * ipiv, double * b, int * ldb, int * info);
void cgbtrs_(char * trans, int * n, int * kl, int * ku, int * nrhs, float _Complex const * ab, int * ldab, int const * ipiv, float _Complex * b, int * ldb, int * info);
void zgbtrs_(char * trans, int * n, int * kl, int * ku, int * nrhs, double _Complex const * ab, int * ldab, int const * ipiv, double _Complex * b, int * ldb, int * info);
void sgttrs_(char * trans, int * n, int * nrhs, float const * dl, float const * d, float const * du, float const * du2, int const * ipiv, float * b, int * ldb, int * info);
void dgttrs_(char * trans, int * n, int * nrhs, double const * dl, double const * d, double const * du, double const * du2, int const * ipiv, double * b, int * ldb, int * info);
void cgttrs_(char * trans, int * n, int * nrhs, float _Complex const * dl, float _Complex const * d, float _Complex const * du, float _Complex const * du2, int const * ipiv, float _Complex * b, int * ldb, int * info);
void zgttrs_(char * trans, int * n, int * nrhs, double _Complex const * dl, double _Complex const * d, double _Complex const * du, double _Complex const * du2, int const * ipiv, double _Complex * b, int * ldb, int * info);
void spotrs_(char * uplo, int * n, int * nrhs, float const * a, int * lda, float * b, int * ldb, int * info);
void dpotrs_(char * uplo, int * n, int * nrhs, double const * a, int * lda, double * b, int * ldb, int * info);
void cpotrs_(char * uplo, int * n, int * nrhs, float _Complex const * a, int * lda, float _Complex * b, int * ldb, int * info);
void zpotrs_(char * uplo, int * n, int * nrhs, double _Complex const * a, int * lda, double _Complex * b, int * ldb, int * info);
void dpftrs_(char * transr, char * uplo, int * n, int * nrhs, double const * a, double * b, int * ldb, int * info);
void spftrs_(char * transr, char * uplo, int * n, int * nrhs, float const * a, float * b, int * ldb, int * info);
void zpftrs_(char * transr, char * uplo, int * n, int * nrhs, double _Complex const * a, double _Complex * b, int * ldb, int * info);
void cpftrs_(char * transr, char * uplo, int * n, int * nrhs, float _Complex const * a, float _Complex * b, int * ldb, int * info);
void spptrs_(char * uplo, int * n, int * nrhs, float const * ap, float * b, int * ldb, int * info);
void dpptrs_(char * uplo, int * n, int * nrhs, double const * ap, double * b, int * ldb, int * info);
void cpptrs_(char * uplo, int * n, int * nrhs, float _Complex const * ap, float _Complex * b, int * ldb, int * info);
void zpptrs_(char * uplo, int * n, int * nrhs, double _Complex const * ap, double _Complex * b, int * ldb, int * info);
void spbtrs_(char * uplo, int * n, int * kd, int * nrhs, float const * ab, int * ldab, float * b, int * ldb, int * info);
void dpbtrs_(char * uplo, int * n, int * kd, int * nrhs, double const * ab, int * ldab, double * b, int * ldb, int * info);
void cpbtrs_(char * uplo, int * n, int * kd, int * nrhs, float _Complex const * ab, int * ldab, float _Complex * b, int * ldb, int * info);
void zpbtrs_(char * uplo, int * n, int * kd, int * nrhs, double _Complex const * ab, int * ldab, double _Complex * b, int * ldb, int * info);
void spttrs_(int * n, int * nrhs, float const * d, float const * e, float * b, int * ldb, int * info);
void dpttrs_(int * n, int * nrhs, double const * d, double const * e, double * b, int * ldb, int * info);
void cpttrs_(char * uplo, int * n, int * nrhs, float const * d, float _Complex const * e, float _Complex * b, int * ldb, int * info);
void zpttrs_(char * uplo, int * n, int * nrhs, double const * d, double _Complex const * e, double _Complex * b, int * ldb, int * info);
void ssytrs_(char * uplo, int * n, int * nrhs, float const * a, int * lda, int const * ipiv, float * b, int * ldb, int * info);
void dsytrs_(char * uplo, int * n, int * nrhs, double const * a, int * lda, int const * ipiv, double * b, int * ldb, int * info);
void csytrs_(char * uplo, int * n, int * nrhs, float _Complex const * a, int * lda, int const * ipiv, float _Complex * b, int * ldb, int * info);
void zsytrs_(char * uplo, int * n, int * nrhs, double _Complex const * a, int * lda, int const * ipiv, double _Complex * b, int * ldb, int * info);
void chetrs_(char * uplo, int * n, int * nrhs, float _Complex const * a, int * lda, int const * ipiv, float _Complex * b, int * ldb, int * info);
void zhetrs_(char * uplo, int * n, int * nrhs, double _Complex const * a, int * lda, int const * ipiv, double _Complex * b, int * ldb, int * info);
void ssptrs_(char * uplo, int * n, int * nrhs, float const * ap, int const * ipiv, float * b, int * ldb, int * info);
void dsptrs_(char * uplo, int * n, int * nrhs, double const * ap, int const * ipiv, double * b, int * ldb, int * info);
void csptrs_(char * uplo, int * n, int * nrhs, float _Complex const * ap, int const * ipiv, float _Complex * b, int * ldb, int * info);
void zsptrs_(char * uplo, int * n, int * nrhs, double _Complex const * ap, int const * ipiv, double _Complex * b, int * ldb, int * info);
void chptrs_(char * uplo, int * n, int * nrhs, float _Complex const * ap, int const * ipiv, float _Complex * b, int * ldb, int * info);
void zhptrs_(char * uplo, int * n, int * nrhs, double _Complex const * ap, int const * ipiv, double _Complex * b, int * ldb, int * info);
void strtrs_(char * uplo, char * trans, char * diag, int * n, int * nrhs, float const * a, int * lda, float * b, int * ldb, int * info);
void dtrtrs_(char * uplo, char * trans, char * diag, int * n, int * nrhs, double const * a, int * lda, double * b, int * ldb, int * info);
void ctrtrs_(char * uplo, char * trans, char * diag, int * n, int * nrhs, float _Complex const * a, int * lda, float _Complex * b, int * ldb, int * info);
void ztrtrs_(char * uplo, char * trans, char * diag, int * n, int * nrhs, double _Complex const * a, int * lda, double _Complex * b, int * ldb, int * info);
void stptrs_(char * uplo, char * trans, char * diag, int * n, int * nrhs, float const * ap, float * b, int * ldb, int * info);
void dtptrs_(char * uplo, char * trans, char * diag, int * n, int * nrhs, double const * ap, double * b, int * ldb, int * info);
void ctptrs_(char * uplo, char * trans, char * diag, int * n, int * nrhs, float _Complex const * ap, float _Complex * b, int * ldb, int * info);
void ztptrs_(char * uplo, char * trans, char * diag, int * n, int * nrhs, double _Complex const * ap, double _Complex * b, int * ldb, int * info);
void stbtrs_(char * uplo, char * trans, char * diag, int * n, int * kd, int * nrhs, float const * ab, int * ldab, float * b, int * ldb, int * info);
void dtbtrs_(char * uplo, char * trans, char * diag, int * n, int * kd, int * nrhs, double const * ab, int * ldab, double * b, int * ldb, int * info);
void ctbtrs_(char * uplo, char * trans, char * diag, int * n, int * kd, int * nrhs, float _Complex const * ab, int * ldab, float _Complex * b, int * ldb, int * info);
void ztbtrs_(char * uplo, char * trans, char * diag, int * n, int * kd, int * nrhs, double _Complex const * ab, int * ldab, double _Complex * b, int * ldb, int * info);
void sgecon_(char * norm, int * n, float const * a, int * lda, float * anorm, float * rcond, float * work, int * iwork, int * info);
void dgecon_(char * norm, int * n, double const * a, int * lda, double * anorm, double * rcond, double * work, int * iwork, int * info);
void cgecon_(char * norm, int * n, float _Complex const * a, int * lda, float * anorm, float * rcond, float _Complex * work, float * rwork, int * info);
void zgecon_(char * norm, int * n, double _Complex const * a, int * lda, double * anorm, double * rcond, double _Complex * work, double * rwork, int * info);
void sgbcon_(char * norm, int * n, int * kl, int * ku, float const * ab, int * ldab, int const * ipiv, float * anorm, float * rcond, float * work, int * iwork, int * info);
void dgbcon_(char * norm, int * n, int * kl, int * ku, double const * ab, int * ldab, int const * ipiv, double * anorm, double * rcond, double * work, int * iwork, int * info);
void cgbcon_(char * norm, int * n, int * kl, int * ku, float _Complex const * ab, int * ldab, int const * ipiv, float * anorm, float * rcond, float _Complex * work, float * rwork, int * info);
void zgbcon_(char * norm, int * n, int * kl, int * ku, double _Complex const * ab, int * ldab, int const * ipiv, double * anorm, double * rcond, double _Complex * work, double * rwork, int * info);
void sgtcon_(char * norm, int * n, float const * dl, float const * d, float const * du, float const * du2, int const * ipiv, float * anorm, float * rcond, float * work, int * iwork, int * info);
void dgtcon_(char * norm, int * n, double const * dl, double const * d, double const * du, double const * du2, int const * ipiv, double * anorm, double * rcond, double * work, int * iwork, int * info);
void cgtcon_(char * norm, int * n, float _Complex const * dl, float _Complex const * d, float _Complex const * du, float _Complex const * du2, int const * ipiv, float * anorm, float * rcond, float _Complex * work, int * info);
void zgtcon_(char * norm, int * n, double _Complex const * dl, double _Complex const * d, double _Complex const * du, double _Complex const * du2, int const * ipiv, double * anorm, double * rcond, double _Complex * work, int * info);
void spocon_(char * uplo, int * n, float const * a, int * lda, float * anorm, float * rcond, float * work, int * iwork, int * info);
void dpocon_(char * uplo, int * n, double const * a, int * lda, double * anorm, double * rcond, double * work, int * iwork, int * info);
void cpocon_(char * uplo, int * n, float _Complex const * a, int * lda, float * anorm, float * rcond, float _Complex * work, float * rwork, int * info);
void zpocon_(char * uplo, int * n, double _Complex const * a, int * lda, double * anorm, double * rcond, double _Complex * work, double * rwork, int * info);
void sppcon_(char * uplo, int * n, float const * ap, float * anorm, float * rcond, float * work, int * iwork, int * info);
void dppcon_(char * uplo, int * n, double const * ap, double * anorm, double * rcond, double * work, int * iwork, int * info);
void cppcon_(char * uplo, int * n, float _Complex const * ap, float * anorm, float * rcond, float _Complex * work, float * rwork, int * info);
void zppcon_(char * uplo, int * n, double _Complex const * ap, double * anorm, double * rcond, double _Complex * work, double * rwork, int * info);
void spbcon_(char * uplo, int * n, int * kd, float const * ab, int * ldab, float * anorm, float * rcond, float * work, int * iwork, int * info);
void dpbcon_(char * uplo, int * n, int * kd, double const * ab, int * ldab, double * anorm, double * rcond, double * work, int * iwork, int * info);
void cpbcon_(char * uplo, int * n, int * kd, float _Complex const * ab, int * ldab, float * anorm, float * rcond, float _Complex * work, float * rwork, int * info);
void zpbcon_(char * uplo, int * n, int * kd, double _Complex const * ab, int * ldab, double * anorm, double * rcond, double _Complex * work, double * rwork, int * info);
void sptcon_(int * n, float const * d, float const * e, float * anorm, float * rcond, float * work, int * info);
void dptcon_(int * n, double const * d, double const * e, double * anorm, double * rcond, double * work, int * info);
void cptcon_(int * n, float const * d, float _Complex const * e, float * anorm, float * rcond, float * work, int * info);
void zptcon_(int * n, double const * d, double _Complex const * e, double * anorm, double * rcond, double * work, int * info);
void ssycon_(char * uplo, int * n, float const * a, int * lda, int const * ipiv, float * anorm, float * rcond, float * work, int * iwork, int * info);
void dsycon_(char * uplo, int * n, double const * a, int * lda, int const * ipiv, double * anorm, double * rcond, double * work, int * iwork, int * info);
void csycon_(char * uplo, int * n, float _Complex const * a, int * lda, int const * ipiv, float * anorm, float * rcond, float _Complex * work, int * info);
void zsycon_(char * uplo, int * n, double _Complex const * a, int * lda, int const * ipiv, double * anorm, double * rcond, double _Complex * work, int * info);
void checon_(char * uplo, int * n, float _Complex const * a, int * lda, int const * ipiv, float * anorm, float * rcond, float _Complex * work, int * info);
void zhecon_(char * uplo, int * n, double _Complex const * a, int * lda, int const * ipiv, double * anorm, double * rcond, double _Complex * work, int * info);
void sspcon_(char * uplo, int * n, float const * ap, int const * ipiv, float * anorm, float * rcond, float * work, int * iwork, int * info);
void dspcon_(char * uplo, int * n, double const * ap, int const * ipiv, double * anorm, double * rcond, double * work, int * iwork, int * info);
void cspcon_(char * uplo, int * n, float _Complex const * ap, int const * ipiv, float * anorm, float * rcond, float _Complex * work, int * info);
void zspcon_(char * uplo, int * n, double _Complex const * ap, int const * ipiv, double * anorm, double * rcond, double _Complex * work, int * info);
void chpcon_(char * uplo, int * n, float _Complex const * ap, int const * ipiv, float * anorm, float * rcond, float _Complex * work, int * info);
void zhpcon_(char * uplo, int * n, double _Complex const * ap, int const * ipiv, double * anorm, double * rcond, double _Complex * work, int * info);
void strcon_(char * norm, char * uplo, char * diag, int * n, float const * a, int * lda, float * rcond, float * work, int * iwork, int * info);
void dtrcon_(char * norm, char * uplo, char * diag, int * n, double const * a, int * lda, double * rcond, double * work, int * iwork, int * info);
void ctrcon_(char * norm, char * uplo, char * diag, int * n, float _Complex const * a, int * lda, float * rcond, float _Complex * work, float * rwork, int * info);
void ztrcon_(char * norm, char * uplo, char * diag, int * n, double _Complex const * a, int * lda, double * rcond, double _Complex * work, double * rwork, int * info);
void stpcon_(char * norm, char * uplo, char * diag, int * n, float const * ap, float * rcond, float * work, int * iwork, int * info);
void dtpcon_(char * norm, char * uplo, char * diag, int * n, double const * ap, double * rcond, double * work, int * iwork, int * info);
void ctpcon_(char * norm, char * uplo, char * diag, int * n, float _Complex const * ap, float * rcond, float _Complex * work, float * rwork, int * info);
void ztpcon_(char * norm, char * uplo, char * diag, int * n, double _Complex const * ap, double * rcond, double _Complex * work, double * rwork, int * info);
void stbcon_(char * norm, char * uplo, char * diag, int * n, int * kd, float const * ab, int * ldab, float * rcond, float * work, int * iwork, int * info);
void dtbcon_(char * norm, char * uplo, char * diag, int * n, int * kd, double const * ab, int * ldab, double * rcond, double * work, int * iwork, int * info);
void ctbcon_(char * norm, char * uplo, char * diag, int * n, int * kd, float _Complex const * ab, int * ldab, float * rcond, float _Complex * work, float * rwork, int * info);
void ztbcon_(char * norm, char * uplo, char * diag, int * n, int * kd, double _Complex const * ab, int * ldab, double * rcond, double _Complex * work, double * rwork, int * info);
void sgerfs_(char * trans, int * n, int * nrhs, float const * a, int * lda, float const * af, int * ldaf, int const * ipiv, float const * b, int * ldb, float * x, int * ldx, float * ferr, float * berr, float * work, int * iwork, int * info);
void dgerfs_(char * trans, int * n, int * nrhs, double const * a, int * lda, double const * af, int * ldaf, int const * ipiv, double const * b, int * ldb, double * x, int * ldx, double * ferr, double * berr, double * work, int * iwork, int * info);
void cgerfs_(char * trans, int * n, int * nrhs, float _Complex const * a, int * lda, float _Complex const * af, int * ldaf, int const * ipiv, float _Complex const * b, int * ldb, float _Complex * x, int * ldx, float * ferr, float * berr, float _Complex * work, float * rwork, int * info);
void zgerfs_(char * trans, int * n, int * nrhs, double _Complex const * a, int * lda, double _Complex const * af, int * ldaf, int const * ipiv, double _Complex const * b, int * ldb, double _Complex * x, int * ldx, double * ferr, double * berr, double _Complex * work, double * rwork, int * info);
void dgerfsx_(char * trans, char * equed, int * n, int * nrhs, double const * a, int * lda, double const * af, int * ldaf, int const * ipiv, double const * r, double const * c, double const * b, int * ldb, double * x, int * ldx, double * rcond, double * berr, int * n_err_bnds, double * err_bnds_norm, double * err_bnds_comp, int * nparams, double * params, double * work, int * iwork, int * info);
void sgerfsx_(char * trans, char * equed, int * n, int * nrhs, float const * a, int * lda, float const * af, int * ldaf, int const * ipiv, float const * r, float const * c, float const * b, int * ldb, float * x, int * ldx, float * rcond, float * berr, int * n_err_bnds, float * err_bnds_norm, float * err_bnds_comp, int * nparams, float * params, float * work, int * iwork, int * info);
void zgerfsx_(char * trans, char * equed, int * n, int * nrhs, double _Complex const * a, int * lda, double _Complex const * af, int * ldaf, int const * ipiv, double const * r, double const * c, double _Complex const * b, int * ldb, double _Complex * x, int * ldx, double * rcond, double * berr, int * n_err_bnds, double * err_bnds_norm, double * err_bnds_comp, int * nparams, double * params, double _Complex * work, double * rwork, int * info);
void cgerfsx_(char * trans, char * equed, int * n, int * nrhs, float _Complex const * a, int * lda, float _Complex const * af, int * ldaf, int const * ipiv, float const * r, float const * c, float _Complex const * b, int * ldb, float _Complex * x, int * ldx, float * rcond, float * berr, int * n_err_bnds, float * err_bnds_norm, float * err_bnds_comp, int * nparams, float * params, float _Complex * work, float * rwork, int * info);
void sgbrfs_(char * trans, int * n, int * kl, int * ku, int * nrhs, float const * ab, int * ldab, float const * afb, int * ldafb, int const * ipiv, float const * b, int * ldb, float * x, int * ldx, float * ferr, float * berr, float * work, int * iwork, int * info);
void dgbrfs_(char * trans, int * n, int * kl, int * ku, int * nrhs, double const * ab, int * ldab, double const * afb, int * ldafb, int const * ipiv, double const * b, int * ldb, double * x, int * ldx, double * ferr, double * berr, double * work, int * iwork, int * info);
void cgbrfs_(char * trans, int * n, int * kl, int * ku, int * nrhs, float _Complex const * ab, int * ldab, float _Complex const * afb, int * ldafb, int const * ipiv, float _Complex const * b, int * ldb, float _Complex * x, int * ldx, float * ferr, float * berr, float _Complex * work, float * rwork, int * info);
void zgbrfs_(char * trans, int * n, int * kl, int * ku, int * nrhs, double _Complex const * ab, int * ldab, double _Complex const * afb, int * ldafb, int const * ipiv, double _Complex const * b, int * ldb, double _Complex * x, int * ldx, double * ferr, double * berr, double _Complex * work, double * rwork, int * info);
void dgbrfsx_(char * trans, char * equed, int * n, int * kl, int * ku, int * nrhs, double const * ab, int * ldab, double const * afb, int * ldafb, int const * ipiv, double const * r, double const * c, double const * b, int * ldb, double * x, int * ldx, double * rcond, double * berr, int * n_err_bnds, double * err_bnds_norm, double * err_bnds_comp, int * nparams, double * params, double * work, int * iwork, int * info);
void sgbrfsx_(char * trans, char * equed, int * n, int * kl, int * ku, int * nrhs, float const * ab, int * ldab, float const * afb, int * ldafb, int const * ipiv, float const * r, float const * c, float const * b, int * ldb, float * x, int * ldx, float * rcond, float * berr, int * n_err_bnds, float * err_bnds_norm, float * err_bnds_comp, int * nparams, float * params, float * work, int * iwork, int * info);
void zgbrfsx_(char * trans, char * equed, int * n, int * kl, int * ku, int * nrhs, double _Complex const * ab, int * ldab, double _Complex const * afb, int * ldafb, int const * ipiv, double const * r, double const * c, double _Complex const * b, int * ldb, double _Complex * x, int * ldx, double * rcond, double * berr, int * n_err_bnds, double * err_bnds_norm, double * err_bnds_comp, int * nparams, double * params, double _Complex * work, double * rwork, int * info);
void cgbrfsx_(char * trans, char * equed, int * n, int * kl, int * ku, int * nrhs, float _Complex const * ab, int * ldab, float _Complex const * afb, int * ldafb, int const * ipiv, float const * r, float const * c, float _Complex const * b, int * ldb, float _Complex * x, int * ldx, float * rcond, float * berr, int * n_err_bnds, float * err_bnds_norm, float * err_bnds_comp, int * nparams, float * params, float _Complex * work, float * rwork, int * info);
void sgtrfs_(char * trans, int * n, int * nrhs, float const * dl, float const * d, float const * du, float const * dlf, float const * df, float const * duf, float const * du2, int const * ipiv, float const * b, int * ldb, float * x, int * ldx, float * ferr, float * berr, float * work, int * iwork, int * info);
void dgtrfs_(char * trans, int * n, int * nrhs, double const * dl, double const * d, double const * du, double const * dlf, double const * df, double const * duf, double const * du2, int const * ipiv, double const * b, int * ldb, double * x, int * ldx, double * ferr, double * berr, double * work, int * iwork, int * info);
void cgtrfs_(char * trans, int * n, int * nrhs, float _Complex const * dl, float _Complex const * d, float _Complex const * du, float _Complex const * dlf, float _Complex const * df, float _Complex const * duf, float _Complex const * du2, int const * ipiv, float _Complex const * b, int * ldb, float _Complex * x, int * ldx, float * ferr, float * berr, float _Complex * work, float * rwork, int * info);
void zgtrfs_(char * trans, int * n, int * nrhs, double _Complex const * dl, double _Complex const * d, double _Complex const * du, double _Complex const * dlf, double _Complex const * df, double _Complex const * duf, double _Complex const * du2, int const * ipiv, double _Complex const * b, int * ldb, double _Complex * x, int * ldx, double * ferr, double * berr, double _Complex * work, double * rwork, int * info);
void sporfs_(char * uplo, int * n, int * nrhs, float const * a, int * lda, float const * af, int * ldaf, float const * b, int * ldb, float * x, int * ldx, float * ferr, float * berr, float * work, int * iwork, int * info);
void dporfs_(char * uplo, int * n, int * nrhs, double const * a, int * lda, double const * af, int * ldaf, double const * b, int * ldb, double * x, int * ldx, double * ferr, double * berr, double * work, int * iwork, int * info);
void cporfs_(char * uplo, int * n, int * nrhs, float _Complex const * a, int * lda, float _Complex const * af, int * ldaf, float _Complex const * b, int * ldb, float _Complex * x, int * ldx, float * ferr, float * berr, float _Complex * work, float * rwork, int * info);
void zporfs_(char * uplo, int * n, int * nrhs, double _Complex const * a, int * lda, double _Complex const * af, int * ldaf, double _Complex const * b, int * ldb, double _Complex * x, int * ldx, double * ferr, double * berr, double _Complex * work, double * rwork, int * info);
void dporfsx_(char * uplo, char * equed, int * n, int * nrhs, double const * a, int * lda, double const * af, int * ldaf, double const * s, double const * b, int * ldb, double * x, int * ldx, double * rcond, double * berr, int * n_err_bnds, double * err_bnds_norm, double * err_bnds_comp, int * nparams, double * params, double * work, int * iwork, int * info);
void sporfsx_(char * uplo, char * equed, int * n, int * nrhs, float const * a, int * lda, float const * af, int * ldaf, float const * s, float const * b, int * ldb, float * x, int * ldx, float * rcond, float * berr, int * n_err_bnds, float * err_bnds_norm, float * err_bnds_comp, int * nparams, float * params, float * work, int * iwork, int * info);
void zporfsx_(char * uplo, char * equed, int * n, int * nrhs, double _Complex const * a, int * lda, double _Complex const * af, int * ldaf, double const * s, double _Complex const * b, int * ldb, double _Complex * x, int * ldx, double * rcond, double * berr, int * n_err_bnds, double * err_bnds_norm, double * err_bnds_comp, int * nparams, double * params, double _Complex * work, double * rwork, int * info);
void cporfsx_(char * uplo, char * equed, int * n, int * nrhs, float _Complex const * a, int * lda, float _Complex const * af, int * ldaf, float const * s, float _Complex const * b, int * ldb, float _Complex * x, int * ldx, float * rcond, float * berr, int * n_err_bnds, float * err_bnds_norm, float * err_bnds_comp, int * nparams, float * params, float _Complex * work, float * rwork, int * info);
void spprfs_(char * uplo, int * n, int * nrhs, float const * ap, float const * afp, float const * b, int * ldb, float * x, int * ldx, float * ferr, float * berr, float * work, int * iwork, int * info);
void dpprfs_(char * uplo, int * n, int * nrhs, double const * ap, double const * afp, double const * b, int * ldb, double * x, int * ldx, double * ferr, double * berr, double * work, int * iwork, int * info);
void cpprfs_(char * uplo, int * n, int * nrhs, float _Complex const * ap, float _Complex const * afp, float _Complex const * b, int * ldb, float _Complex * x, int * ldx, float * ferr, float * berr, float _Complex * work, float * rwork, int * info);
void zpprfs_(char * uplo, int * n, int * nrhs, double _Complex const * ap, double _Complex const * afp, double _Complex const * b, int * ldb, double _Complex * x, int * ldx, double * ferr, double * berr, double _Complex * work, double * rwork, int * info);
void spbrfs_(char * uplo, int * n, int * kd, int * nrhs, float const * ab, int * ldab, float const * afb, int * ldafb, float const * b, int * ldb, float * x, int * ldx, float * ferr, float * berr, float * work, int * iwork, int * info);
void dpbrfs_(char * uplo, int * n, int * kd, int * nrhs, double const * ab, int * ldab, double const * afb, int * ldafb, double const * b, int * ldb, double * x, int * ldx, double * ferr, double * berr, double * work, int * iwork, int * info);
void cpbrfs_(char * uplo, int * n, int * kd, int * nrhs, float _Complex const * ab, int * ldab, float _Complex const * afb, int * ldafb, float _Complex const * b, int * ldb, float _Complex * x, int * ldx, float * ferr, float * berr, float _Complex * work, float * rwork, int * info);
void zpbrfs_(char * uplo, int * n, int * kd, int * nrhs, double _Complex const * ab, int * ldab, double _Complex const * afb, int * ldafb, double _Complex const * b, int * ldb, double _Complex * x, int * ldx, double * ferr, double * berr, double _Complex * work, double * rwork, int * info);
void sptrfs_(int * n, int * nrhs, float const * d, float const * e, float const * df, float const * ef, float const * b, int * ldb, float * x, int * ldx, float * ferr, float * berr, float * work, int * info);
void dptrfs_(int * n, int * nrhs, double const * d, double const * e, double const * df, double const * ef, double const * b, int * ldb, double * x, int * ldx, double * ferr, double * berr, double * work, int * info);
void cptrfs_(char * uplo, int * n, int * nrhs, float const * d, float _Complex const * e, float const * df, float _Complex const * ef, float _Complex const * b, int * ldb, float _Complex * x, int * ldx, float * ferr, float * berr, float _Complex * work, float * rwork, int * info);
void zptrfs_(char * uplo, int * n, int * nrhs, double const * d, double _Complex const * e, double const * df, double _Complex const * ef, double _Complex const * b, int * ldb, double _Complex * x, int * ldx, double * ferr, double * berr, double _Complex * work, double * rwork, int * info);
void ssyrfs_(char * uplo, int * n, int * nrhs, float const * a, int * lda, float const * af, int * ldaf, int const * ipiv, float const * b, int * ldb, float * x, int * ldx, float * ferr, float * berr, float * work, int * iwork, int * info);
void dsyrfs_(char * uplo, int * n, int * nrhs, double const * a, int * lda, double const * af, int * ldaf, int const * ipiv, double const * b, int * ldb, double * x, int * ldx, double * ferr, double * berr, double * work, int * iwork, int * info);
void csyrfs_(char * uplo, int * n, int * nrhs, float _Complex const * a, int * lda, float _Complex const * af, int * ldaf, int const * ipiv, float _Complex const * b, int * ldb, float _Complex * x, int * ldx, float * ferr, float * berr, float _Complex * work, float * rwork, int * info);
void zsyrfs_(char * uplo, int * n, int * nrhs, double _Complex const * a, int * lda, double _Complex const * af, int * ldaf, int const * ipiv, double _Complex const * b, int * ldb, double _Complex * x, int * ldx, double * ferr, double * berr, double _Complex * work, double * rwork, int * info);
void dsyrfsx_(char * uplo, char * equed, int * n, int * nrhs, double const * a, int * lda, double const * af, int * ldaf, int const * ipiv, double const * s, double const * b, int * ldb, double * x, int * ldx, double * rcond, double * berr, int * n_err_bnds, double * err_bnds_norm, double * err_bnds_comp, int * nparams, double * params, double * work, int * iwork, int * info);
void ssyrfsx_(char * uplo, char * equed, int * n, int * nrhs, float const * a, int * lda, float const * af, int * ldaf, int const * ipiv, float const * s, float const * b, int * ldb, float * x, int * ldx, float * rcond, float * berr, int * n_err_bnds, float * err_bnds_norm, float * err_bnds_comp, int * nparams, float * params, float * work, int * iwork, int * info);
void zsyrfsx_(char * uplo, char * equed, int * n, int * nrhs, double _Complex const * a, int * lda, double _Complex const * af, int * ldaf, int const * ipiv, double const * s, double _Complex const * b, int * ldb, double _Complex * x, int * ldx, double * rcond, double * berr, int * n_err_bnds, double * err_bnds_norm, double * err_bnds_comp, int * nparams, double * params, double _Complex * work, double * rwork, int * info);
void csyrfsx_(char * uplo, char * equed, int * n, int * nrhs, float _Complex const * a, int * lda, float _Complex const * af, int * ldaf, int const * ipiv, float const * s, float _Complex const * b, int * ldb, float _Complex * x, int * ldx, float * rcond, float * berr, int * n_err_bnds, float * err_bnds_norm, float * err_bnds_comp, int * nparams, float * params, float _Complex * work, float * rwork, int * info);
void cherfs_(char * uplo, int * n, int * nrhs, float _Complex const * a, int * lda, float _Complex const * af, int * ldaf, int const * ipiv, float _Complex const * b, int * ldb, float _Complex * x, int * ldx, float * ferr, float * berr, float _Complex * work, float * rwork, int * info);
void zherfs_(char * uplo, int * n, int * nrhs, double _Complex const * a, int * lda, double _Complex const * af, int * ldaf, int const * ipiv, double _Complex const * b, int * ldb, double _Complex * x, int * ldx, double * ferr, double * berr, double _Complex * work, double * rwork, int * info);
void zherfsx_(char * uplo, char * equed, int * n, int * nrhs, double _Complex const * a, int * lda, double _Complex const * af, int * ldaf, int const * ipiv, double const * s, double _Complex const * b, int * ldb, double _Complex * x, int * ldx, double * rcond, double * berr, int * n_err_bnds, double * err_bnds_norm, double * err_bnds_comp, int * nparams, double * params, double _Complex * work, double * rwork, int * info);
void cherfsx_(char * uplo, char * equed, int * n, int * nrhs, float _Complex const * a, int * lda, float _Complex const * af, int * ldaf, int const * ipiv, float const * s, float _Complex const * b, int * ldb, float _Complex * x, int * ldx, float * rcond, float * berr, int * n_err_bnds, float * err_bnds_norm, float * err_bnds_comp, int * nparams, float * params, float _Complex * work, float * rwork, int * info);
void ssprfs_(char * uplo, int * n, int * nrhs, float const * ap, float const * afp, int const * ipiv, float const * b, int * ldb, float * x, int * ldx, float * ferr, float * berr, float * work, int * iwork, int * info);
void dsprfs_(char * uplo, int * n, int * nrhs, double const * ap, double const * afp, int const * ipiv, double const * b, int * ldb, double * x, int * ldx, double * ferr, double * berr, double * work, int * iwork, int * info);
void csprfs_(char * uplo, int * n, int * nrhs, float _Complex const * ap, float _Complex const * afp, int const * ipiv, float _Complex const * b, int * ldb, float _Complex * x, int * ldx, float * ferr, float * berr, float _Complex * work, float * rwork, int * info);
void zsprfs_(char * uplo, int * n, int * nrhs, double _Complex const * ap, double _Complex const * afp, int const * ipiv, double _Complex const * b, int * ldb, double _Complex * x, int * ldx, double * ferr, double * berr, double _Complex * work, double * rwork, int * info);
void chprfs_(char * uplo, int * n, int * nrhs, float _Complex const * ap, float _Complex const * afp, int const * ipiv, float _Complex const * b, int * ldb, float _Complex * x, int * ldx, float * ferr, float * berr, float _Complex * work, float * rwork, int * info);
void zhprfs_(char * uplo, int * n, int * nrhs, double _Complex const * ap, double _Complex const * afp, int const * ipiv, double _Complex const * b, int * ldb, double _Complex * x, int * ldx, double * ferr, double * berr, double _Complex * work, double * rwork, int * info);
void strrfs_(char * uplo, char * trans, char * diag, int * n, int * nrhs, float const * a, int * lda, float const * b, int * ldb, float const * x, int * ldx, float * ferr, float * berr, float * work, int * iwork, int * info);
void dtrrfs_(char * uplo, char * trans, char * diag, int * n, int * nrhs, double const * a, int * lda, double const * b, int * ldb, double const * x, int * ldx, double * ferr, double * berr, double * work, int * iwork, int * info);
void ctrrfs_(char * uplo, char * trans, char * diag, int * n, int * nrhs, float _Complex const * a, int * lda, float _Complex const * b, int * ldb, float _Complex const * x, int * ldx, float * ferr, float * berr, float _Complex * work, float * rwork, int * info);
void ztrrfs_(char * uplo, char * trans, char * diag, int * n, int * nrhs, double _Complex const * a, int * lda, double _Complex const * b, int * ldb, double _Complex const * x, int * ldx, double * ferr, double * berr, double _Complex * work, double * rwork, int * info);
void stprfs_(char * uplo, char * trans, char * diag, int * n, int * nrhs, float const * ap, float const * b, int * ldb, float const * x, int * ldx, float * ferr, float * berr, float * work, int * iwork, int * info);
void dtprfs_(char * uplo, char * trans, char * diag, int * n, int * nrhs, double const * ap, double const * b, int * ldb, double const * x, int * ldx, double * ferr, double * berr, double * work, int * iwork, int * info);
void ctprfs_(char * uplo, char * trans, char * diag, int * n, int * nrhs, float _Complex const * ap, float _Complex const * b, int * ldb, float _Complex const * x, int * ldx, float * ferr, float * berr, float _Complex * work, float * rwork, int * info);
void ztprfs_(char * uplo, char * trans, char * diag, int * n, int * nrhs, double _Complex const * ap, double _Complex const * b, int * ldb, double _Complex const * x, int * ldx, double * ferr, double * berr, double _Complex * work, double * rwork, int * info);
void stbrfs_(char * uplo, char * trans, char * diag, int * n, int * kd, int * nrhs, float const * ab, int * ldab, float const * b, int * ldb, float const * x, int * ldx, float * ferr, float * berr, float * work, int * iwork, int * info);
void dtbrfs_(char * uplo, char * trans, char * diag, int * n, int * kd, int * nrhs, double const * ab, int * ldab, double const * b, int * ldb, double const * x, int * ldx, double * ferr, double * berr, double * work, int * iwork, int * info);
void ctbrfs_(char * uplo, char * trans, char * diag, int * n, int * kd, int * nrhs, float _Complex const * ab, int * ldab, float _Complex const * b, int * ldb, float _Complex const * x, int * ldx, float * ferr, float * berr, float _Complex * work, float * rwork, int * info);
void ztbrfs_(char * uplo, char * trans, char * diag, int * n, int * kd, int * nrhs, double _Complex const * ab, int * ldab, double _Complex const * b, int * ldb, double _Complex const * x, int * ldx, double * ferr, double * berr, double _Complex * work, double * rwork, int * info);
void sgetri_(int * n, float * a, int * lda, int const * ipiv, float * work, int * lwork, int * info);
void dgetri_(int * n, double * a, int * lda, int const * ipiv, double * work, int * lwork, int * info);
void cgetri_(int * n, float _Complex * a, int * lda, int const * ipiv, float _Complex * work, int * lwork, int * info);
void zgetri_(int * n, double _Complex * a, int * lda, int const * ipiv, double _Complex * work, int * lwork, int * info);
void spotri_(char * uplo, int * n, float * a, int * lda, int * info);
void dpotri_(char * uplo, int * n, double * a, int * lda, int * info);
void cpotri_(char * uplo, int * n, float _Complex * a, int * lda, int * info);
void zpotri_(char * uplo, int * n, double _Complex * a, int * lda, int * info);
void dpftri_(char * transr, char * uplo, int * n, double * a, int * info);
void spftri_(char * transr, char * uplo, int * n, float * a, int * info);
void zpftri_(char * transr, char * uplo, int * n, double _Complex * a, int * info);
void cpftri_(char * transr, char * uplo, int * n, float _Complex * a, int * info);
void spptri_(char * uplo, int * n, float * ap, int * info);
void dpptri_(char * uplo, int * n, double * ap, int * info);
void cpptri_(char * uplo, int * n, float _Complex * ap, int * info);
void zpptri_(char * uplo, int * n, double _Complex * ap, int * info);
void ssytri_(char * uplo, int * n, float * a, int * lda, int const * ipiv, float * work, int * info);
void dsytri_(char * uplo, int * n, double * a, int * lda, int const * ipiv, double * work, int * info);
void csytri_(char * uplo, int * n, float _Complex * a, int * lda, int const * ipiv, float _Complex * work, int * info);
void zsytri_(char * uplo, int * n, double _Complex * a, int * lda, int const * ipiv, double _Complex * work, int * info);
void chetri_(char * uplo, int * n, float _Complex * a, int * lda, int const * ipiv, float _Complex * work, int * info);
void zhetri_(char * uplo, int * n, double _Complex * a, int * lda, int const * ipiv, double _Complex * work, int * info);
void ssptri_(char * uplo, int * n, float * ap, int const * ipiv, float * work, int * info);
void dsptri_(char * uplo, int * n, double * ap, int const * ipiv, double * work, int * info);
void csptri_(char * uplo, int * n, float _Complex * ap, int const * ipiv, float _Complex * work, int * info);
void zsptri_(char * uplo, int * n, double _Complex * ap, int const * ipiv, double _Complex * work, int * info);
void chptri_(char * uplo, int * n, float _Complex * ap, int const * ipiv, float _Complex * work, int * info);
void zhptri_(char * uplo, int * n, double _Complex * ap, int const * ipiv, double _Complex * work, int * info);
void strtri_(char * uplo, char * diag, int * n, float * a, int * lda, int * info);
void dtrtri_(char * uplo, char * diag, int * n, double * a, int * lda, int * info);
void ctrtri_(char * uplo, char * diag, int * n, float _Complex * a, int * lda, int * info);
void ztrtri_(char * uplo, char * diag, int * n, double _Complex * a, int * lda, int * info);
void dtftri_(char * transr, char * uplo, char * diag, int * n, double * a, int * info);
void stftri_(char * transr, char * uplo, char * diag, int * n, float * a, int * info);
void ztftri_(char * transr, char * uplo, char * diag, int * n, double _Complex * a, int * info);
void ctftri_(char * transr, char * uplo, char * diag, int * n, float _Complex * a, int * info);
void stptri_(char * uplo, char * diag, int * n, float * ap, int * info);
void dtptri_(char * uplo, char * diag, int * n, double * ap, int * info);
void ctptri_(char * uplo, char * diag, int * n, float _Complex * ap, int * info);
void ztptri_(char * uplo, char * diag, int * n, double _Complex * ap, int * info);
void sgeequ_(int * m, int * n, float const * a, int * lda, float * r, float * c, float * rowcnd, float * colcnd, float * amax, int * info);
void dgeequ_(int * m, int * n, double const * a, int * lda, double * r, double * c, double * rowcnd, double * colcnd, double * amax, int * info);
void cgeequ_(int * m, int * n, float _Complex const * a, int * lda, float * r, float * c, float * rowcnd, float * colcnd, float * amax, int * info);
void zgeequ_(int * m, int * n, double _Complex const * a, int * lda, double * r, double * c, double * rowcnd, double * colcnd, double * amax, int * info);
void dgeequb_(int * m, int * n, double const * a, int * lda, double * r, double * c, double * rowcnd, double * colcnd, double * amax, int * info);
void sgeequb_(int * m, int * n, float const * a, int * lda, float * r, float * c, float * rowcnd, float * colcnd, float * amax, int * info);
void zgeequb_(int * m, int * n, double _Complex const * a, int * lda, double * r, double * c, double * rowcnd, double * colcnd, double * amax, int * info);
void cgeequb_(int * m, int * n, float _Complex const * a, int * lda, float * r, float * c, float * rowcnd, float * colcnd, float * amax, int * info);
void sgbequ_(int * m, int * n, int * kl, int * ku, float const * ab, int * ldab, float * r, float * c, float * rowcnd, float * colcnd, float * amax, int * info);
void dgbequ_(int * m, int * n, int * kl, int * ku, double const * ab, int * ldab, double * r, double * c, double * rowcnd, double * colcnd, double * amax, int * info);
void cgbequ_(int * m, int * n, int * kl, int * ku, float _Complex const * ab, int * ldab, float * r, float * c, float * rowcnd, float * colcnd, float * amax, int * info);
void zgbequ_(int * m, int * n, int * kl, int * ku, double _Complex const * ab, int * ldab, double * r, double * c, double * rowcnd, double * colcnd, double * amax, int * info);
void dgbequb_(int * m, int * n, int * kl, int * ku, double const * ab, int * ldab, double * r, double * c, double * rowcnd, double * colcnd, double * amax, int * info);
void sgbequb_(int * m, int * n, int * kl, int * ku, float const * ab, int * ldab, float * r, float * c, float * rowcnd, float * colcnd, float * amax, int * info);
void zgbequb_(int * m, int * n, int * kl, int * ku, double _Complex const * ab, int * ldab, double * r, double * c, double * rowcnd, double * colcnd, double * amax, int * info);
void cgbequb_(int * m, int * n, int * kl, int * ku, float _Complex const * ab, int * ldab, float * r, float * c, float * rowcnd, float * colcnd, float * amax, int * info);
void spoequ_(int * n, float const * a, int * lda, float * s, float * scond, float * amax, int * info);
void dpoequ_(int * n, double const * a, int * lda, double * s, double * scond, double * amax, int * info);
void cpoequ_(int * n, float _Complex const * a, int * lda, float * s, float * scond, float * amax, int * info);
void zpoequ_(int * n, double _Complex const * a, int * lda, double * s, double * scond, double * amax, int * info);
void dpoequb_(int * n, double const * a, int * lda, double * s, double * scond, double * amax, int * info);
void spoequb_(int * n, float const * a, int * lda, float * s, float * scond, float * amax, int * info);
void zpoequb_(int * n, double _Complex const * a, int * lda, double * s, double * scond, double * amax, int * info);
void cpoequb_(int * n, float _Complex const * a, int * lda, float * s, float * scond, float * amax, int * info);
void sppequ_(char * uplo, int * n, float const * ap, float * s, float * scond, float * amax, int * info);
void dppequ_(char * uplo, int * n, double const * ap, double * s, double * scond, double * amax, int * info);
void cppequ_(char * uplo, int * n, float _Complex const * ap, float * s, float * scond, float * amax, int * info);
void zppequ_(char * uplo, int * n, double _Complex const * ap, double * s, double * scond, double * amax, int * info);
void spbequ_(char * uplo, int * n, int * kd, float const * ab, int * ldab, float * s, float * scond, float * amax, int * info);
void dpbequ_(char * uplo, int * n, int * kd, double const * ab, int * ldab, double * s, double * scond, double * amax, int * info);
void cpbequ_(char * uplo, int * n, int * kd, float _Complex const * ab, int * ldab, float * s, float * scond, float * amax, int * info);
void zpbequ_(char * uplo, int * n, int * kd, double _Complex const * ab, int * ldab, double * s, double * scond, double * amax, int * info);
void dsyequb_(char * uplo, int * n, double const * a, int * lda, double * s, double * scond, double * amax, double * work, int * info);
void ssyequb_(char * uplo, int * n, float const * a, int * lda, float * s, float * scond, float * amax, float * work, int * info);
void zsyequb_(char * uplo, int * n, double _Complex const * a, int * lda, double * s, double * scond, double * amax, double _Complex * work, int * info);
void csyequb_(char * uplo, int * n, float _Complex const * a, int * lda, float * s, float * scond, float * amax, float _Complex * work, int * info);
void zheequb_(char * uplo, int * n, double _Complex const * a, int * lda, double * s, double * scond, double * amax, double _Complex * work, int * info);
void cheequb_(char * uplo, int * n, float _Complex const * a, int * lda, float * s, float * scond, float * amax, float _Complex * work, int * info);
void sgesv_(int * n, int * nrhs, float * a, int * lda, int * ipiv, float * b, int * ldb, int * info);
void dgesv_(int * n, int * nrhs, double * a, int * lda, int * ipiv, double * b, int * ldb, int * info);
void cgesv_(int * n, int * nrhs, float _Complex * a, int * lda, int * ipiv, float _Complex * b, int * ldb, int * info);
void zgesv_(int * n, int * nrhs, double _Complex * a, int * lda, int * ipiv, double _Complex * b, int * ldb, int * info);
void dsgesv_(int * n, int * nrhs, double * a, int * lda, int * ipiv, double * b, int * ldb, double * x, int * ldx, double * work, float * swork, int * iter, int * info);
void zcgesv_(int * n, int * nrhs, double _Complex * a, int * lda, int * ipiv, double _Complex * b, int * ldb, double _Complex * x, int * ldx, double _Complex * work, float _Complex * swork, double * rwork, int * iter, int * info);
void sgesvx_(char * fact, char * trans, int * n, int * nrhs, float * a, int * lda, float * af, int * ldaf, int * ipiv, char * equed, float * r, float * c, float * b, int * ldb, float * x, int * ldx, float * rcond, float * ferr, float * berr, float * work, int * iwork, int * info);
void dgesvx_(char * fact, char * trans, int * n, int * nrhs, double * a, int * lda, double * af, int * ldaf, int * ipiv, char * equed, double * r, double * c, double * b, int * ldb, double * x, int * ldx, double * rcond, double * ferr, double * berr, double * work, int * iwork, int * info);
void cgesvx_(char * fact, char * trans, int * n, int * nrhs, float _Complex * a, int * lda, float _Complex * af, int * ldaf, int * ipiv, char * equed, float * r, float * c, float _Complex * b, int * ldb, float _Complex * x, int * ldx, float * rcond, float * ferr, float * berr, float _Complex * work, float * rwork, int * info);
void zgesvx_(char * fact, char * trans, int * n, int * nrhs, double _Complex * a, int * lda, double _Complex * af, int * ldaf, int * ipiv, char * equed, double * r, double * c, double _Complex * b, int * ldb, double _Complex * x, int * ldx, double * rcond, double * ferr, double * berr, double _Complex * work, double * rwork, int * info);
void dgesvxx_(char * fact, char * trans, int * n, int * nrhs, double * a, int * lda, double * af, int * ldaf, int * ipiv, char * equed, double * r, double * c, double * b, int * ldb, double * x, int * ldx, double * rcond, double * rpvgrw, double * berr, int * n_err_bnds, double * err_bnds_norm, double * err_bnds_comp, int * nparams, double * params, double * work, int * iwork, int * info);
void sgesvxx_(char * fact, char * trans, int * n, int * nrhs, float * a, int * lda, float * af, int * ldaf, int * ipiv, char * equed, float * r, float * c, float * b, int * ldb, float * x, int * ldx, float * rcond, float * rpvgrw, float * berr, int * n_err_bnds, float * err_bnds_norm, float * err_bnds_comp, int * nparams, float * params, float * work, int * iwork, int * info);
void zgesvxx_(char * fact, char * trans, int * n, int * nrhs, double _Complex * a, int * lda, double _Complex * af, int * ldaf, int * ipiv, char * equed, double * r, double * c, double _Complex * b, int * ldb, double _Complex * x, int * ldx, double * rcond, double * rpvgrw, double * berr, int * n_err_bnds, double * err_bnds_norm, double * err_bnds_comp, int * nparams, double * params, double _Complex * work, double * rwork, int * info);
void cgesvxx_(char * fact, char * trans, int * n, int * nrhs, float _Complex * a, int * lda, float _Complex * af, int * ldaf, int * ipiv, char * equed, float * r, float * c, float _Complex * b, int * ldb, float _Complex * x, int * ldx, float * rcond, float * rpvgrw, float * berr, int * n_err_bnds, float * err_bnds_norm, float * err_bnds_comp, int * nparams, float * params, float _Complex * work, float * rwork, int * info);
void sgbsv_(int * n, int * kl, int * ku, int * nrhs, float * ab, int * ldab, int * ipiv, float * b, int * ldb, int * info);
void dgbsv_(int * n, int * kl, int * ku, int * nrhs, double * ab, int * ldab, int * ipiv, double * b, int * ldb, int * info);
void cgbsv_(int * n, int * kl, int * ku, int * nrhs, float _Complex * ab, int * ldab, int * ipiv, float _Complex * b, int * ldb, int * info);
void zgbsv_(int * n, int * kl, int * ku, int * nrhs, double _Complex * ab, int * ldab, int * ipiv, double _Complex * b, int * ldb, int * info);
void sgbsvx_(char * fact, char * trans, int * n, int * kl, int * ku, int * nrhs, float * ab, int * ldab, float * afb, int * ldafb, int * ipiv, char * equed, float * r, float * c, float * b, int * ldb, float * x, int * ldx, float * rcond, float * ferr, float * berr, float * work, int * iwork, int * info);
void dgbsvx_(char * fact, char * trans, int * n, int * kl, int * ku, int * nrhs, double * ab, int * ldab, double * afb, int * ldafb, int * ipiv, char * equed, double * r, double * c, double * b, int * ldb, double * x, int * ldx, double * rcond, double * ferr, double * berr, double * work, int * iwork, int * info);
void cgbsvx_(char * fact, char * trans, int * n, int * kl, int * ku, int * nrhs, float _Complex * ab, int * ldab, float _Complex * afb, int * ldafb, int * ipiv, char * equed, float * r, float * c, float _Complex * b, int * ldb, float _Complex * x, int * ldx, float * rcond, float * ferr, float * berr, float _Complex * work, float * rwork, int * info);
void zgbsvx_(char * fact, char * trans, int * n, int * kl, int * ku, int * nrhs, double _Complex * ab, int * ldab, double _Complex * afb, int * ldafb, int * ipiv, char * equed, double * r, double * c, double _Complex * b, int * ldb, double _Complex * x, int * ldx, double * rcond, double * ferr, double * berr, double _Complex * work, double * rwork, int * info);
void dgbsvxx_(char * fact, char * trans, int * n, int * kl, int * ku, int * nrhs, double * ab, int * ldab, double * afb, int * ldafb, int * ipiv, char * equed, double * r, double * c, double * b, int * ldb, double * x, int * ldx, double * rcond, double * rpvgrw, double * berr, int * n_err_bnds, double * err_bnds_norm, double * err_bnds_comp, int * nparams, double * params, double * work, int * iwork, int * info);
void sgbsvxx_(char * fact, char * trans, int * n, int * kl, int * ku, int * nrhs, float * ab, int * ldab, float * afb, int * ldafb, int * ipiv, char * equed, float * r, float * c, float * b, int * ldb, float * x, int * ldx, float * rcond, float * rpvgrw, float * berr, int * n_err_bnds, float * err_bnds_norm, float * err_bnds_comp, int * nparams, float * params, float * work, int * iwork, int * info);
void zgbsvxx_(char * fact, char * trans, int * n, int * kl, int * ku, int * nrhs, double _Complex * ab, int * ldab, double _Complex * afb, int * ldafb, int * ipiv, char * equed, double * r, double * c, double _Complex * b, int * ldb, double _Complex * x, int * ldx, double * rcond, double * rpvgrw, double * berr, int * n_err_bnds, double * err_bnds_norm, double * err_bnds_comp, int * nparams, double * params, double _Complex * work, double * rwork, int * info);
void cgbsvxx_(char * fact, char * trans, int * n, int * kl, int * ku, int * nrhs, float _Complex * ab, int * ldab, float _Complex * afb, int * ldafb, int * ipiv, char * equed, float * r, float * c, float _Complex * b, int * ldb, float _Complex * x, int * ldx, float * rcond, float * rpvgrw, float * berr, int * n_err_bnds, float * err_bnds_norm, float * err_bnds_comp, int * nparams, float * params, float _Complex * work, float * rwork, int * info);
void sgtsv_(int * n, int * nrhs, float * dl, float * d, float * du, float * b, int * ldb, int * info);
void dgtsv_(int * n, int * nrhs, double * dl, double * d, double * du, double * b, int * ldb, int * info);
void cgtsv_(int * n, int * nrhs, float _Complex * dl, float _Complex * d, float _Complex * du, float _Complex * b, int * ldb, int * info);
void zgtsv_(int * n, int * nrhs, double _Complex * dl, double _Complex * d, double _Complex * du, double _Complex * b, int * ldb, int * info);
void sgtsvx_(char * fact, char * trans, int * n, int * nrhs, float const * dl, float const * d, float const * du, float * dlf, float * df, float * duf, float * du2, int * ipiv, float const * b, int * ldb, float * x, int * ldx, float * rcond, float * ferr, float * berr, float * work, int * iwork, int * info);
void dgtsvx_(char * fact, char * trans, int * n, int * nrhs, double const * dl, double const * d, double const * du, double * dlf, double * df, double * duf, double * du2, int * ipiv, double const * b, int * ldb, double * x, int * ldx, double * rcond, double * ferr, double * berr, double * work, int * iwork, int * info);
void cgtsvx_(char * fact, char * trans, int * n, int * nrhs, float _Complex const * dl, float _Complex const * d, float _Complex const * du, float _Complex * dlf, float _Complex * df, float _Complex * duf, float _Complex * du2, int * ipiv, float _Complex const * b, int * ldb, float _Complex * x, int * ldx, float * rcond, float * ferr, float * berr, float _Complex * work, float * rwork, int * info);
void zgtsvx_(char * fact, char * trans, int * n, int * nrhs, double _Complex const * dl, double _Complex const * d, double _Complex const * du, double _Complex * dlf, double _Complex * df, double _Complex * duf, double _Complex * du2, int * ipiv, double _Complex const * b, int * ldb, double _Complex * x, int * ldx, double * rcond, double * ferr, double * berr, double _Complex * work, double * rwork, int * info);
void sposv_(char * uplo, int * n, int * nrhs, float * a, int * lda, float * b, int * ldb, int * info);
void dposv_(char * uplo, int * n, int * nrhs, double * a, int * lda, double * b, int * ldb, int * info);
void cposv_(char * uplo, int * n, int * nrhs, float _Complex * a, int * lda, float _Complex * b, int * ldb, int * info);
void zposv_(char * uplo, int * n, int * nrhs, double _Complex * a, int * lda, double _Complex * b, int * ldb, int * info);
void dsposv_(char * uplo, int * n, int * nrhs, double * a, int * lda, double * b, int * ldb, double * x, int * ldx, double * work, float * swork, int * iter, int * info);
void zcposv_(char * uplo, int * n, int * nrhs, double _Complex * a, int * lda, double _Complex * b, int * ldb, double _Complex * x, int * ldx, double _Complex * work, float _Complex * swork, double * rwork, int * iter, int * info);
void sposvx_(char * fact, char * uplo, int * n, int * nrhs, float * a, int * lda, float * af, int * ldaf, char * equed, float * s, float * b, int * ldb, float * x, int * ldx, float * rcond, float * ferr, float * berr, float * work, int * iwork, int * info);
void dposvx_(char * fact, char * uplo, int * n, int * nrhs, double * a, int * lda, double * af, int * ldaf, char * equed, double * s, double * b, int * ldb, double * x, int * ldx, double * rcond, double * ferr, double * berr, double * work, int * iwork, int * info);
void cposvx_(char * fact, char * uplo, int * n, int * nrhs, float _Complex * a, int * lda, float _Complex * af, int * ldaf, char * equed, float * s, float _Complex * b, int * ldb, float _Complex * x, int * ldx, float * rcond, float * ferr, float * berr, float _Complex * work, float * rwork, int * info);
void zposvx_(char * fact, char * uplo, int * n, int * nrhs, double _Complex * a, int * lda, double _Complex * af, int * ldaf, char * equed, double * s, double _Complex * b, int * ldb, double _Complex * x, int * ldx, double * rcond, double * ferr, double * berr, double _Complex * work, double * rwork, int * info);
void dposvxx_(char * fact, char * uplo, int * n, int * nrhs, double * a, int * lda, double * af, int * ldaf, char * equed, double * s, double * b, int * ldb, double * x, int * ldx, double * rcond, double * rpvgrw, double * berr, int * n_err_bnds, double * err_bnds_norm, double * err_bnds_comp, int * nparams, double * params, double * work, int * iwork, int * info);
void sposvxx_(char * fact, char * uplo, int * n, int * nrhs, float * a, int * lda, float * af, int * ldaf, char * equed, float * s, float * b, int * ldb, float * x, int * ldx, float * rcond, float * rpvgrw, float * berr, int * n_err_bnds, float * err_bnds_norm, float * err_bnds_comp, int * nparams, float * params, float * work, int * iwork, int * info);
void zposvxx_(char * fact, char * uplo, int * n, int * nrhs, double _Complex * a, int * lda, double _Complex * af, int * ldaf, char * equed, double * s, double _Complex * b, int * ldb, double _Complex * x, int * ldx, double * rcond, double * rpvgrw, double * berr, int * n_err_bnds, double * err_bnds_norm, double * err_bnds_comp, int * nparams, double * params, double _Complex * work, double * rwork, int * info);
void cposvxx_(char * fact, char * uplo, int * n, int * nrhs, float _Complex * a, int * lda, float _Complex * af, int * ldaf, char * equed, float * s, float _Complex * b, int * ldb, float _Complex * x, int * ldx, float * rcond, float * rpvgrw, float * berr, int * n_err_bnds, float * err_bnds_norm, float * err_bnds_comp, int * nparams, float * params, float _Complex * work, float * rwork, int * info);
void sppsv_(char * uplo, int * n, int * nrhs, float * ap, float * b, int * ldb, int * info);
void dppsv_(char * uplo, int * n, int * nrhs, double * ap, double * b, int * ldb, int * info);
void cppsv_(char * uplo, int * n, int * nrhs, float _Complex * ap, float _Complex * b, int * ldb, int * info);
void zppsv_(char * uplo, int * n, int * nrhs, double _Complex * ap, double _Complex * b, int * ldb, int * info);
void sppsvx_(char * fact, char * uplo, int * n, int * nrhs, float * ap, float * afp, char * equed, float * s, float * b, int * ldb, float * x, int * ldx, float * rcond, float * ferr, float * berr, float * work, int * iwork, int * info);
void dppsvx_(char * fact, char * uplo, int * n, int * nrhs, double * ap, double * afp, char * equed, double * s, double * b, int * ldb, double * x, int * ldx, double * rcond, double * ferr, double * berr, double * work, int * iwork, int * info);
void cppsvx_(char * fact, char * uplo, int * n, int * nrhs, float _Complex * ap, float _Complex * afp, char * equed, float * s, float _Complex * b, int * ldb, float _Complex * x, int * ldx, float * rcond, float * ferr, float * berr, float _Complex * work, float * rwork, int * info);
void zppsvx_(char * fact, char * uplo, int * n, int * nrhs, double _Complex * ap, double _Complex * afp, char * equed, double * s, double _Complex * b, int * ldb, double _Complex * x, int * ldx, double * rcond, double * ferr, double * berr, double _Complex * work, double * rwork, int * info);
void spbsv_(char * uplo, int * n, int * kd, int * nrhs, float * ab, int * ldab, float * b, int * ldb, int * info);
void dpbsv_(char * uplo, int * n, int * kd, int * nrhs, double * ab, int * ldab, double * b, int * ldb, int * info);
void cpbsv_(char * uplo, int * n, int * kd, int * nrhs, float _Complex * ab, int * ldab, float _Complex * b, int * ldb, int * info);
void zpbsv_(char * uplo, int * n, int * kd, int * nrhs, double _Complex * ab, int * ldab, double _Complex * b, int * ldb, int * info);
void spbsvx_(char * fact, char * uplo, int * n, int * kd, int * nrhs, float * ab, int * ldab, float * afb, int * ldafb, char * equed, float * s, float * b, int * ldb, float * x, int * ldx, float * rcond, float * ferr, float * berr, float * work, int * iwork, int * info);
void dpbsvx_(char * fact, char * uplo, int * n, int * kd, int * nrhs, double * ab, int * ldab, double * afb, int * ldafb, char * equed, double * s, double * b, int * ldb, double * x, int * ldx, double * rcond, double * ferr, double * berr, double * work, int * iwork, int * info);
void cpbsvx_(char * fact, char * uplo, int * n, int * kd, int * nrhs, float _Complex * ab, int * ldab, float _Complex * afb, int * ldafb, char * equed, float * s, float _Complex * b, int * ldb, float _Complex * x, int * ldx, float * rcond, float * ferr, float * berr, float _Complex * work, float * rwork, int * info);
void zpbsvx_(char * fact, char * uplo, int * n, int * kd, int * nrhs, double _Complex * ab, int * ldab, double _Complex * afb, int * ldafb, char * equed, double * s, double _Complex * b, int * ldb, double _Complex * x, int * ldx, double * rcond, double * ferr, double * berr, double _Complex * work, double * rwork, int * info);
void sptsv_(int * n, int * nrhs, float * d, float * e, float * b, int * ldb, int * info);
void dptsv_(int * n, int * nrhs, double * d, double * e, double * b, int * ldb, int * info);
void cptsv_(int * n, int * nrhs, float * d, float _Complex * e, float _Complex * b, int * ldb, int * info);
void zptsv_(int * n, int * nrhs, double * d, double _Complex * e, double _Complex * b, int * ldb, int * info);
void sptsvx_(char * fact, int * n, int * nrhs, float const * d, float const * e, float * df, float * ef, float const * b, int * ldb, float * x, int * ldx, float * rcond, float * ferr, float * berr, float * work, int * info);
void dptsvx_(char * fact, int * n, int * nrhs, double const * d, double const * e, double * df, double * ef, double const * b, int * ldb, double * x, int * ldx, double * rcond, double * ferr, double * berr, double * work, int * info);
void cptsvx_(char * fact, int * n, int * nrhs, float const * d, float _Complex const * e, float * df, float _Complex * ef, float _Complex const * b, int * ldb, float _Complex * x, int * ldx, float * rcond, float * ferr, float * berr, float _Complex * work, float * rwork, int * info);
void zptsvx_(char * fact, int * n, int * nrhs, double const * d, double _Complex const * e, double * df, double _Complex * ef, double _Complex const * b, int * ldb, double _Complex * x, int * ldx, double * rcond, double * ferr, double * berr, double _Complex * work, double * rwork, int * info);
void ssysv_(char * uplo, int * n, int * nrhs, float * a, int * lda, int * ipiv, float * b, int * ldb, float * work, int * lwork, int * info);
void dsysv_(char * uplo, int * n, int * nrhs, double * a, int * lda, int * ipiv, double * b, int * ldb, double * work, int * lwork, int * info);
void csysv_(char * uplo, int * n, int * nrhs, float _Complex * a, int * lda, int * ipiv, float _Complex * b, int * ldb, float _Complex * work, int * lwork, int * info);
void zsysv_(char * uplo, int * n, int * nrhs, double _Complex * a, int * lda, int * ipiv, double _Complex * b, int * ldb, double _Complex * work, int * lwork, int * info);
void ssysvx_(char * fact, char * uplo, int * n, int * nrhs, float const * a, int * lda, float * af, int * ldaf, int * ipiv, float const * b, int * ldb, float * x, int * ldx, float * rcond, float * ferr, float * berr, float * work, int * lwork, int * iwork, int * info);
void dsysvx_(char * fact, char * uplo, int * n, int * nrhs, double const * a, int * lda, double * af, int * ldaf, int * ipiv, double const * b, int * ldb, double * x, int * ldx, double * rcond, double * ferr, double * berr, double * work, int * lwork, int * iwork, int * info);
void csysvx_(char * fact, char * uplo, int * n, int * nrhs, float _Complex const * a, int * lda, float _Complex * af, int * ldaf, int * ipiv, float _Complex const * b, int * ldb, float _Complex * x, int * ldx, float * rcond, float * ferr, float * berr, float _Complex * work, int * lwork, float * rwork, int * info);
void zsysvx_(char * fact, char * uplo, int * n, int * nrhs, double _Complex const * a, int * lda, double _Complex * af, int * ldaf, int * ipiv, double _Complex const * b, int * ldb, double _Complex * x, int * ldx, double * rcond, double * ferr, double * berr, double _Complex * work, int * lwork, double * rwork, int * info);
void dsysvxx_(char * fact, char * uplo, int * n, int * nrhs, double * a, int * lda, double * af, int * ldaf, int * ipiv, char * equed, double * s, double * b, int * ldb, double * x, int * ldx, double * rcond, double * rpvgrw, double * berr, int * n_err_bnds, double * err_bnds_norm, double * err_bnds_comp, int * nparams, double * params, double * work, int * iwork, int * info);
void ssysvxx_(char * fact, char * uplo, int * n, int * nrhs, float * a, int * lda, float * af, int * ldaf, int * ipiv, char * equed, float * s, float * b, int * ldb, float * x, int * ldx, float * rcond, float * rpvgrw, float * berr, int * n_err_bnds, float * err_bnds_norm, float * err_bnds_comp, int * nparams, float * params, float * work, int * iwork, int * info);
void zsysvxx_(char * fact, char * uplo, int * n, int * nrhs, double _Complex * a, int * lda, double _Complex * af, int * ldaf, int * ipiv, char * equed, double * s, double _Complex * b, int * ldb, double _Complex * x, int * ldx, double * rcond, double * rpvgrw, double * berr, int * n_err_bnds, double * err_bnds_norm, double * err_bnds_comp, int * nparams, double * params, double _Complex * work, double * rwork, int * info);
void csysvxx_(char * fact, char * uplo, int * n, int * nrhs, float _Complex * a, int * lda, float _Complex * af, int * ldaf, int * ipiv, char * equed, float * s, float _Complex * b, int * ldb, float _Complex * x, int * ldx, float * rcond, float * rpvgrw, float * berr, int * n_err_bnds, float * err_bnds_norm, float * err_bnds_comp, int * nparams, float * params, float _Complex * work, float * rwork, int * info);
void chesv_(char * uplo, int * n, int * nrhs, float _Complex * a, int * lda, int * ipiv, float _Complex * b, int * ldb, float _Complex * work, int * lwork, int * info);
void zhesv_(char * uplo, int * n, int * nrhs, double _Complex * a, int * lda, int * ipiv, double _Complex * b, int * ldb, double _Complex * work, int * lwork, int * info);
void chesvx_(char * fact, char * uplo, int * n, int * nrhs, float _Complex const * a, int * lda, float _Complex * af, int * ldaf, int * ipiv, float _Complex const * b, int * ldb, float _Complex * x, int * ldx, float * rcond, float * ferr, float * berr, float _Complex * work, int * lwork, float * rwork, int * info);
void zhesvx_(char * fact, char * uplo, int * n, int * nrhs, double _Complex const * a, int * lda, double _Complex * af, int * ldaf, int * ipiv, double _Complex const * b, int * ldb, double _Complex * x, int * ldx, double * rcond, double * ferr, double * berr, double _Complex * work, int * lwork, double * rwork, int * info);
void zhesvxx_(char * fact, char * uplo, int * n, int * nrhs, double _Complex * a, int * lda, double _Complex * af, int * ldaf, int * ipiv, char * equed, double * s, double _Complex * b, int * ldb, double _Complex * x, int * ldx, double * rcond, double * rpvgrw, double * berr, int * n_err_bnds, double * err_bnds_norm, double * err_bnds_comp, int * nparams, double * params, double _Complex * work, double * rwork, int * info);
void chesvxx_(char * fact, char * uplo, int * n, int * nrhs, float _Complex * a, int * lda, float _Complex * af, int * ldaf, int * ipiv, char * equed, float * s, float _Complex * b, int * ldb, float _Complex * x, int * ldx, float * rcond, float * rpvgrw, float * berr, int * n_err_bnds, float * err_bnds_norm, float * err_bnds_comp, int * nparams, float * params, float _Complex * work, float * rwork, int * info);
void sspsv_(char * uplo, int * n, int * nrhs, float * ap, int * ipiv, float * b, int * ldb, int * info);
void dspsv_(char * uplo, int * n, int * nrhs, double * ap, int * ipiv, double * b, int * ldb, int * info);
void cspsv_(char * uplo, int * n, int * nrhs, float _Complex * ap, int * ipiv, float _Complex * b, int * ldb, int * info);
void zspsv_(char * uplo, int * n, int * nrhs, double _Complex * ap, int * ipiv, double _Complex * b, int * ldb, int * info);
void sspsvx_(char * fact, char * uplo, int * n, int * nrhs, float const * ap, float * afp, int * ipiv, float const * b, int * ldb, float * x, int * ldx, float * rcond, float * ferr, float * berr, float * work, int * iwork, int * info);
void dspsvx_(char * fact, char * uplo, int * n, int * nrhs, double const * ap, double * afp, int * ipiv, double const * b, int * ldb, double * x, int * ldx, double * rcond, double * ferr, double * berr, double * work, int * iwork, int * info);
void cspsvx_(char * fact, char * uplo, int * n, int * nrhs, float _Complex const * ap, float _Complex * afp, int * ipiv, float _Complex const * b, int * ldb, float _Complex * x, int * ldx, float * rcond, float * ferr, float * berr, float _Complex * work, float * rwork, int * info);
void zspsvx_(char * fact, char * uplo, int * n, int * nrhs, double _Complex const * ap, double _Complex * afp, int * ipiv, double _Complex const * b, int * ldb, double _Complex * x, int * ldx, double * rcond, double * ferr, double * berr, double _Complex * work, double * rwork, int * info);
void chpsv_(char * uplo, int * n, int * nrhs, float _Complex * ap, int * ipiv, float _Complex * b, int * ldb, int * info);
void zhpsv_(char * uplo, int * n, int * nrhs, double _Complex * ap, int * ipiv, double _Complex * b, int * ldb, int * info);
void chpsvx_(char * fact, char * uplo, int * n, int * nrhs, float _Complex const * ap, float _Complex * afp, int * ipiv, float _Complex const * b, int * ldb, float _Complex * x, int * ldx, float * rcond, float * ferr, float * berr, float _Complex * work, float * rwork, int * info);
void zhpsvx_(char * fact, char * uplo, int * n, int * nrhs, double _Complex const * ap, double _Complex * afp, int * ipiv, double _Complex const * b, int * ldb, double _Complex * x, int * ldx, double * rcond, double * ferr, double * berr, double _Complex * work, double * rwork, int * info);
void sgeqrf_(int * m, int * n, float * a, int * lda, float * tau, float * work, int * lwork, int * info);
void dgeqrf_(int * m, int * n, double * a, int * lda, double * tau, double * work, int * lwork, int * info);
void cgeqrf_(int * m, int * n, float _Complex * a, int * lda, float _Complex * tau, float _Complex * work, int * lwork, int * info);
void zgeqrf_(int * m, int * n, double _Complex * a, int * lda, double _Complex * tau, double _Complex * work, int * lwork, int * info);
void sgeqpf_(int * m, int * n, float * a, int * lda, int * jpvt, float * tau, float * work, int * info);
void dgeqpf_(int * m, int * n, double * a, int * lda, int * jpvt, double * tau, double * work, int * info);
void cgeqpf_(int * m, int * n, float _Complex * a, int * lda, int * jpvt, float _Complex * tau, float _Complex * work, float * rwork, int * info);
void zgeqpf_(int * m, int * n, double _Complex * a, int * lda, int * jpvt, double _Complex * tau, double _Complex * work, double * rwork, int * info);
void sgeqp3_(int * m, int * n, float * a, int * lda, int * jpvt, float * tau, float * work, int * lwork, int * info);
void dgeqp3_(int * m, int * n, double * a, int * lda, int * jpvt, double * tau, double * work, int * lwork, int * info);
void cgeqp3_(int * m, int * n, float _Complex * a, int * lda, int * jpvt, float _Complex * tau, float _Complex * work, int * lwork, float * rwork, int * info);
void zgeqp3_(int * m, int * n, double _Complex * a, int * lda, int * jpvt, double _Complex * tau, double _Complex * work, int * lwork, double * rwork, int * info);
void sorgqr_(int * m, int * n, int * k, float * a, int * lda, float const * tau, float * work, int * lwork, int * info);
void dorgqr_(int * m, int * n, int * k, double * a, int * lda, double const * tau, double * work, int * lwork, int * info);
void sormqr_(char * side, char * trans, int * m, int * n, int * k, float const * a, int * lda, float const * tau, float * c, int * ldc, float * work, int * lwork, int * info);
void dormqr_(char * side, char * trans, int * m, int * n, int * k, double const * a, int * lda, double const * tau, double * c, int * ldc, double * work, int * lwork, int * info);
void cungqr_(int * m, int * n, int * k, float _Complex * a, int * lda, float _Complex const * tau, float _Complex * work, int * lwork, int * info);
void zungqr_(int * m, int * n, int * k, double _Complex * a, int * lda, double _Complex const * tau, double _Complex * work, int * lwork, int * info);
void cunmqr_(char * side, char * trans, int * m, int * n, int * k, float _Complex const * a, int * lda, float _Complex const * tau, float _Complex * c, int * ldc, float _Complex * work, int * lwork, int * info);
void zunmqr_(char * side, char * trans, int * m, int * n, int * k, double _Complex const * a, int * lda, double _Complex const * tau, double _Complex * c, int * ldc, double _Complex * work, int * lwork, int * info);
void sgelqf_(int * m, int * n, float * a, int * lda, float * tau, float * work, int * lwork, int * info);
void dgelqf_(int * m, int * n, double * a, int * lda, double * tau, double * work, int * lwork, int * info);
void cgelqf_(int * m, int * n, float _Complex * a, int * lda, float _Complex * tau, float _Complex * work, int * lwork, int * info);
void zgelqf_(int * m, int * n, double _Complex * a, int * lda, double _Complex * tau, double _Complex * work, int * lwork, int * info);
void sorglq_(int * m, int * n, int * k, float * a, int * lda, float const * tau, float * work, int * lwork, int * info);
void dorglq_(int * m, int * n, int * k, double * a, int * lda, double const * tau, double * work, int * lwork, int * info);
void sormlq_(char * side, char * trans, int * m, int * n, int * k, float const * a, int * lda, float const * tau, float * c, int * ldc, float * work, int * lwork, int * info);
void dormlq_(char * side, char * trans, int * m, int * n, int * k, double const * a, int * lda, double const * tau, double * c, int * ldc, double * work, int * lwork, int * info);
void cunglq_(int * m, int * n, int * k, float _Complex * a, int * lda, float _Complex const * tau, float _Complex * work, int * lwork, int * info);
void zunglq_(int * m, int * n, int * k, double _Complex * a, int * lda, double _Complex const * tau, double _Complex * work, int * lwork, int * info);
void cunmlq_(char * side, char * trans, int * m, int * n, int * k, float _Complex const * a, int * lda, float _Complex const * tau, float _Complex * c, int * ldc, float _Complex * work, int * lwork, int * info);
void zunmlq_(char * side, char * trans, int * m, int * n, int * k, double _Complex const * a, int * lda, double _Complex const * tau, double _Complex * c, int * ldc, double _Complex * work, int * lwork, int * info);
void sgeqlf_(int * m, int * n, float * a, int * lda, float * tau, float * work, int * lwork, int * info);
void dgeqlf_(int * m, int * n, double * a, int * lda, double * tau, double * work, int * lwork, int * info);
void cgeqlf_(int * m, int * n, float _Complex * a, int * lda, float _Complex * tau, float _Complex * work, int * lwork, int * info);
void zgeqlf_(int * m, int * n, double _Complex * a, int * lda, double _Complex * tau, double _Complex * work, int * lwork, int * info);
void sorgql_(int * m, int * n, int * k, float * a, int * lda, float const * tau, float * work, int * lwork, int * info);
void dorgql_(int * m, int * n, int * k, double * a, int * lda, double const * tau, double * work, int * lwork, int * info);
void cungql_(int * m, int * n, int * k, float _Complex * a, int * lda, float _Complex const * tau, float _Complex * work, int * lwork, int * info);
void zungql_(int * m, int * n, int * k, double _Complex * a, int * lda, double _Complex const * tau, double _Complex * work, int * lwork, int * info);
void sormql_(char * side, char * trans, int * m, int * n, int * k, float const * a, int * lda, float const * tau, float * c, int * ldc, float * work, int * lwork, int * info);
void dormql_(char * side, char * trans, int * m, int * n, int * k, double const * a, int * lda, double const * tau, double * c, int * ldc, double * work, int * lwork, int * info);
void cunmql_(char * side, char * trans, int * m, int * n, int * k, float _Complex const * a, int * lda, float _Complex const * tau, float _Complex * c, int * ldc, float _Complex * work, int * lwork, int * info);
void zunmql_(char * side, char * trans, int * m, int * n, int * k, double _Complex const * a, int * lda, double _Complex const * tau, double _Complex * c, int * ldc, double _Complex * work, int * lwork, int * info);
void sgerqf_(int * m, int * n, float * a, int * lda, float * tau, float * work, int * lwork, int * info);
void dgerqf_(int * m, int * n, double * a, int * lda, double * tau, double * work, int * lwork, int * info);
void cgerqf_(int * m, int * n, float _Complex * a, int * lda, float _Complex * tau, float _Complex * work, int * lwork, int * info);
void zgerqf_(int * m, int * n, double _Complex * a, int * lda, double _Complex * tau, double _Complex * work, int * lwork, int * info);
void sorgrq_(int * m, int * n, int * k, float * a, int * lda, float const * tau, float * work, int * lwork, int * info);
void dorgrq_(int * m, int * n, int * k, double * a, int * lda, double const * tau, double * work, int * lwork, int * info);
void cungrq_(int * m, int * n, int * k, float _Complex * a, int * lda, float _Complex const * tau, float _Complex * work, int * lwork, int * info);
void zungrq_(int * m, int * n, int * k, double _Complex * a, int * lda, double _Complex const * tau, double _Complex * work, int * lwork, int * info);
void sormrq_(char * side, char * trans, int * m, int * n, int * k, float const * a, int * lda, float const * tau, float * c, int * ldc, float * work, int * lwork, int * info);
void dormrq_(char * side, char * trans, int * m, int * n, int * k, double const * a, int * lda, double const * tau, double * c, int * ldc, double * work, int * lwork, int * info);
void cunmrq_(char * side, char * trans, int * m, int * n, int * k, float _Complex const * a, int * lda, float _Complex const * tau, float _Complex * c, int * ldc, float _Complex * work, int * lwork, int * info);
void zunmrq_(char * side, char * trans, int * m, int * n, int * k, double _Complex const * a, int * lda, double _Complex const * tau, double _Complex * c, int * ldc, double _Complex * work, int * lwork, int * info);
void stzrzf_(int * m, int * n, float * a, int * lda, float * tau, float * work, int * lwork, int * info);
void dtzrzf_(int * m, int * n, double * a, int * lda, double * tau, double * work, int * lwork, int * info);
void ctzrzf_(int * m, int * n, float _Complex * a, int * lda, float _Complex * tau, float _Complex * work, int * lwork, int * info);
void ztzrzf_(int * m, int * n, double _Complex * a, int * lda, double _Complex * tau, double _Complex * work, int * lwork, int * info);
void sormrz_(char * side, char * trans, int * m, int * n, int * k, int * l, float const * a, int * lda, float const * tau, float * c, int * ldc, float * work, int * lwork, int * info);
void dormrz_(char * side, char * trans, int * m, int * n, int * k, int * l, double const * a, int * lda, double const * tau, double * c, int * ldc, double * work, int * lwork, int * info);
void cunmrz_(char * side, char * trans, int * m, int * n, int * k, int * l, float _Complex const * a, int * lda, float _Complex const * tau, float _Complex * c, int * ldc, float _Complex * work, int * lwork, int * info);
void zunmrz_(char * side, char * trans, int * m, int * n, int * k, int * l, double _Complex const * a, int * lda, double _Complex const * tau, double _Complex * c, int * ldc, double _Complex * work, int * lwork, int * info);
void sggqrf_(int * n, int * m, int * p, float * a, int * lda, float * taua, float * b, int * ldb, float * taub, float * work, int * lwork, int * info);
void dggqrf_(int * n, int * m, int * p, double * a, int * lda, double * taua, double * b, int * ldb, double * taub, double * work, int * lwork, int * info);
void cggqrf_(int * n, int * m, int * p, float _Complex * a, int * lda, float _Complex * taua, float _Complex * b, int * ldb, float _Complex * taub, float _Complex * work, int * lwork, int * info);
void zggqrf_(int * n, int * m, int * p, double _Complex * a, int * lda, double _Complex * taua, double _Complex * b, int * ldb, double _Complex * taub, double _Complex * work, int * lwork, int * info);
void sggrqf_(int * m, int * p, int * n, float * a, int * lda, float * taua, float * b, int * ldb, float * taub, float * work, int * lwork, int * info);
void dggrqf_(int * m, int * p, int * n, double * a, int * lda, double * taua, double * b, int * ldb, double * taub, double * work, int * lwork, int * info);
void cggrqf_(int * m, int * p, int * n, float _Complex * a, int * lda, float _Complex * taua, float _Complex * b, int * ldb, float _Complex * taub, float _Complex * work, int * lwork, int * info);
void zggrqf_(int * m, int * p, int * n, double _Complex * a, int * lda, double _Complex * taua, double _Complex * b, int * ldb, double _Complex * taub, double _Complex * work, int * lwork, int * info);
void sgebrd_(int * m, int * n, float * a, int * lda, float * d, float * e, float * tauq, float * taup, float * work, int * lwork, int * info);
void dgebrd_(int * m, int * n, double * a, int * lda, double * d, double * e, double * tauq, double * taup, double * work, int * lwork, int * info);
void cgebrd_(int * m, int * n, float _Complex * a, int * lda, float * d, float * e, float _Complex * tauq, float _Complex * taup, float _Complex * work, int * lwork, int * info);
void zgebrd_(int * m, int * n, double _Complex * a, int * lda, double * d, double * e, double _Complex * tauq, double _Complex * taup, double _Complex * work, int * lwork, int * info);
void sgbbrd_(char * vect, int * m, int * n, int * ncc, int * kl, int * ku, float * ab, int * ldab, float * d, float * e, float * q, int * ldq, float * pt, int * ldpt, float * c, int * ldc, float * work, int * info);
void dgbbrd_(char * vect, int * m, int * n, int * ncc, int * kl, int * ku, double * ab, int * ldab, double * d, double * e, double * q, int * ldq, double * pt, int * ldpt, double * c, int * ldc, double * work, int * info);
void cgbbrd_(char * vect, int * m, int * n, int * ncc, int * kl, int * ku, float _Complex * ab, int * ldab, float * d, float * e, float _Complex * q, int * ldq, float _Complex * pt, int * ldpt, float _Complex * c, int * ldc, float _Complex * work, float * rwork, int * info);
void zgbbrd_(char * vect, int * m, int * n, int * ncc, int * kl, int * ku, double _Complex * ab, int * ldab, double * d, double * e, double _Complex * q, int * ldq, double _Complex * pt, int * ldpt, double _Complex * c, int * ldc, double _Complex * work, double * rwork, int * info);
void sorgbr_(char * vect, int * m, int * n, int * k, float * a, int * lda, float const * tau, float * work, int * lwork, int * info);
void dorgbr_(char * vect, int * m, int * n, int * k, double * a, int * lda, double const * tau, double * work, int * lwork, int * info);
void sormbr_(char * vect, char * side, char * trans, int * m, int * n, int * k, float const * a, int * lda, float const * tau, float * c, int * ldc, float * work, int * lwork, int * info);
void dormbr_(char * vect, char * side, char * trans, int * m, int * n, int * k, double const * a, int * lda, double const * tau, double * c, int * ldc, double * work, int * lwork, int * info);
void cungbr_(char * vect, int * m, int * n, int * k, float _Complex * a, int * lda, float _Complex const * tau, float _Complex * work, int * lwork, int * info);
void zungbr_(char * vect, int * m, int * n, int * k, double _Complex * a, int * lda, double _Complex const * tau, double _Complex * work, int * lwork, int * info);
void cunmbr_(char * vect, char * side, char * trans, int * m, int * n, int * k, float _Complex const * a, int * lda, float _Complex const * tau, float _Complex * c, int * ldc, float _Complex * work, int * lwork, int * info);
void zunmbr_(char * vect, char * side, char * trans, int * m, int * n, int * k, double _Complex const * a, int * lda, double _Complex const * tau, double _Complex * c, int * ldc, double _Complex * work, int * lwork, int * info);
void sbdsqr_(char * uplo, int * n, int * ncvt, int * nru, int * ncc, float * d, float * e, float * vt, int * ldvt, float * u, int * ldu, float * c, int * ldc, float * work, int * info);
void dbdsqr_(char * uplo, int * n, int * ncvt, int * nru, int * ncc, double * d, double * e, double * vt, int * ldvt, double * u, int * ldu, double * c, int * ldc, double * work, int * info);
void cbdsqr_(char * uplo, int * n, int * ncvt, int * nru, int * ncc, float * d, float * e, float _Complex * vt, int * ldvt, float _Complex * u, int * ldu, float _Complex * c, int * ldc, float * work, int * info);
void zbdsqr_(char * uplo, int * n, int * ncvt, int * nru, int * ncc, double * d, double * e, double _Complex * vt, int * ldvt, double _Complex * u, int * ldu, double _Complex * c, int * ldc, double * work, int * info);
void sbdsdc_(char * uplo, char * compq, int * n, float * d, float * e, float * u, int * ldu, float * vt, int * ldvt, float * q, int * iq, float * work, int * iwork, int * info);
void dbdsdc_(char * uplo, char * compq, int * n, double * d, double * e, double * u, int * ldu, double * vt, int * ldvt, double * q, int * iq, double * work, int * iwork, int * info);
void ssytrd_(char * uplo, int * n, float * a, int * lda, float * d, float * e, float * tau, float * work, int * lwork, int * info);
void dsytrd_(char * uplo, int * n, double * a, int * lda, double * d, double * e, double * tau, double * work, int * lwork, int * info);
void sorgtr_(char * uplo, int * n, float * a, int * lda, float const * tau, float * work, int * lwork, int * info);
void dorgtr_(char * uplo, int * n, double * a, int * lda, double const * tau, double * work, int * lwork, int * info);
void sormtr_(char * side, char * uplo, char * trans, int * m, int * n, float const * a, int * lda, float const * tau, float * c, int * ldc, float * work, int * lwork, int * info);
void dormtr_(char * side, char * uplo, char * trans, int * m, int * n, double const * a, int * lda, double const * tau, double * c, int * ldc, double * work, int * lwork, int * info);
void chetrd_(char * uplo, int * n, float _Complex * a, int * lda, float * d, float * e, float _Complex * tau, float _Complex * work, int * lwork, int * info);
void zhetrd_(char * uplo, int * n, double _Complex * a, int * lda, double * d, double * e, double _Complex * tau, double _Complex * work, int * lwork, int * info);
void cungtr_(char * uplo, int * n, float _Complex * a, int * lda, float _Complex const * tau, float _Complex * work, int * lwork, int * info);
void zungtr_(char * uplo, int * n, double _Complex * a, int * lda, double _Complex const * tau, double _Complex * work, int * lwork, int * info);
void cunmtr_(char * side, char * uplo, char * trans, int * m, int * n, float _Complex const * a, int * lda, float _Complex const * tau, float _Complex * c, int * ldc, float _Complex * work, int * lwork, int * info);
void zunmtr_(char * side, char * uplo, char * trans, int * m, int * n, double _Complex const * a, int * lda, double _Complex const * tau, double _Complex * c, int * ldc, double _Complex * work, int * lwork, int * info);
void ssptrd_(char * uplo, int * n, float * ap, float * d, float * e, float * tau, int * info);
void dsptrd_(char * uplo, int * n, double * ap, double * d, double * e, double * tau, int * info);
void sopgtr_(char * uplo, int * n, float const * ap, float const * tau, float * q, int * ldq, float * work, int * info);
void dopgtr_(char * uplo, int * n, double const * ap, double const * tau, double * q, int * ldq, double * work, int * info);
void sopmtr_(char * side, char * uplo, char * trans, int * m, int * n, float const * ap, float const * tau, float * c, int * ldc, float * work, int * info);
void dopmtr_(char * side, char * uplo, char * trans, int * m, int * n, double const * ap, double const * tau, double * c, int * ldc, double * work, int * info);
void chptrd_(char * uplo, int * n, float _Complex * ap, float * d, float * e, float _Complex * tau, int * info);
void zhptrd_(char * uplo, int * n, double _Complex * ap, double * d, double * e, double _Complex * tau, int * info);
void cupgtr_(char * uplo, int * n, float _Complex const * ap, float _Complex const * tau, float _Complex * q, int * ldq, float _Complex * work, int * info);
void zupgtr_(char * uplo, int * n, double _Complex const * ap, double _Complex const * tau, double _Complex * q, int * ldq, double _Complex * work, int * info);
void cupmtr_(char * side, char * uplo, char * trans, int * m, int * n, float _Complex const * ap, float _Complex const * tau, float _Complex * c, int * ldc, float _Complex * work, int * info);
void zupmtr_(char * side, char * uplo, char * trans, int * m, int * n, double _Complex const * ap, double _Complex const * tau, double _Complex * c, int * ldc, double _Complex * work, int * info);
void ssbtrd_(char * vect, char * uplo, int * n, int * kd, float * ab, int * ldab, float * d, float * e, float * q, int * ldq, float * work, int * info);
void dsbtrd_(char * vect, char * uplo, int * n, int * kd, double * ab, int * ldab, double * d, double * e, double * q, int * ldq, double * work, int * info);
void chbtrd_(char * vect, char * uplo, int * n, int * kd, float _Complex * ab, int * ldab, float * d, float * e, float _Complex * q, int * ldq, float _Complex * work, int * info);
void zhbtrd_(char * vect, char * uplo, int * n, int * kd, double _Complex * ab, int * ldab, double * d, double * e, double _Complex * q, int * ldq, double _Complex * work, int * info);
void ssterf_(int * n, float * d, float * e, int * info);
void dsterf_(int * n, double * d, double * e, int * info);
void ssteqr_(char * compz, int * n, float * d, float * e, float * z, int * ldz, float * work, int * info);
void dsteqr_(char * compz, int * n, double * d, double * e, double * z, int * ldz, double * work, int * info);
void csteqr_(char * compz, int * n, float * d, float * e, float _Complex * z, int * ldz, float * work, int * info);
void zsteqr_(char * compz, int * n, double * d, double * e, double _Complex * z, int * ldz, double * work, int * info);
void sstemr_(char * jobz, char * range, int * n, float * d, float * e, float * vl, float * vu, int * il, int * iu, int * m, float * w, float * z, int * ldz, int * nzc, int * isuppz, int * tryrac, float * work, int * lwork, int * iwork, int * liwork, int * info);
void dstemr_(char * jobz, char * range, int * n, double * d, double * e, double * vl, double * vu, int * il, int * iu, int * m, double * w, double * z, int * ldz, int * nzc, int * isuppz, int * tryrac, double * work, int * lwork, int * iwork, int * liwork, int * info);
void cstemr_(char * jobz, char * range, int * n, float * d, float * e, float * vl, float * vu, int * il, int * iu, int * m, float * w, float _Complex * z, int * ldz, int * nzc, int * isuppz, int * tryrac, float * work, int * lwork, int * iwork, int * liwork, int * info);
void zstemr_(char * jobz, char * range, int * n, double * d, double * e, double * vl, double * vu, int * il, int * iu, int * m, double * w, double _Complex * z, int * ldz, int * nzc, int * isuppz, int * tryrac, double * work, int * lwork, int * iwork, int * liwork, int * info);
void sstedc_(char * compz, int * n, float * d, float * e, float * z, int * ldz, float * work, int * lwork, int * iwork, int * liwork, int * info);
void dstedc_(char * compz, int * n, double * d, double * e, double * z, int * ldz, double * work, int * lwork, int * iwork, int * liwork, int * info);
void cstedc_(char * compz, int * n, float * d, float * e, float _Complex * z, int * ldz, float _Complex * work, int * lwork, float * rwork, int * lrwork, int * iwork, int * liwork, int * info);
void zstedc_(char * compz, int * n, double * d, double * e, double _Complex * z, int * ldz, double _Complex * work, int * lwork, double * rwork, int * lrwork, int * iwork, int * liwork, int * info);
void sstegr_(char * jobz, char * range, int * n, float * d, float * e, float * vl, float * vu, int * il, int * iu, float * abstol, int * m, float * w, float * z, int * ldz, int * isuppz, float * work, int * lwork, int * iwork, int * liwork, int * info);
void dstegr_(char * jobz, char * range, int * n, double * d, double * e, double * vl, double * vu, int * il, int * iu, double * abstol, int * m, double * w, double * z, int * ldz, int * isuppz, double * work, int * lwork, int * iwork, int * liwork, int * info);
void cstegr_(char * jobz, char * range, int * n, float * d, float * e, float * vl, float * vu, int * il, int * iu, float * abstol, int * m, float * w, float _Complex * z, int * ldz, int * isuppz, float * work, int * lwork, int * iwork, int * liwork, int * info);
void zstegr_(char * jobz, char * range, int * n, double * d, double * e, double * vl, double * vu, int * il, int * iu, double * abstol, int * m, double * w, double _Complex * z, int * ldz, int * isuppz, double * work, int * lwork, int * iwork, int * liwork, int * info);
void spteqr_(char * compz, int * n, float * d, float * e, float * z, int * ldz, float * work, int * info);
void dpteqr_(char * compz, int * n, double * d, double * e, double * z, int * ldz, double * work, int * info);
void cpteqr_(char * compz, int * n, float * d, float * e, float _Complex * z, int * ldz, float * work, int * info);
void zpteqr_(char * compz, int * n, double * d, double * e, double _Complex * z, int * ldz, double * work, int * info);
void sstebz_(char * range, char * order, int * n, float * vl, float * vu, int * il, int * iu, float * abstol, float const * d, float const * e, int * m, int * nsplit, float * w, int * iblock, int * isplit, float * work, int * iwork, int * info);
void dstebz_(char * range, char * order, int * n, double * vl, double * vu, int * il, int * iu, double * abstol, double const * d, double const * e, int * m, int * nsplit, double * w, int * iblock, int * isplit, double * work, int * iwork, int * info);
void sstein_(int * n, float const * d, float const * e, int * m, float const * w, int const * iblock, int const * isplit, float * z, int * ldz, float * work, int * iwork, int * ifailv, int * info);
void dstein_(int * n, double const * d, double const * e, int * m, double const * w, int const * iblock, int const * isplit, double * z, int * ldz, double * work, int * iwork, int * ifailv, int * info);
void cstein_(int * n, float const * d, float const * e, int * m, float const * w, int const * iblock, int const * isplit, float _Complex * z, int * ldz, float * work, int * iwork, int * ifailv, int * info);
void zstein_(int * n, double const * d, double const * e, int * m, double const * w, int const * iblock, int const * isplit, double _Complex * z, int * ldz, double * work, int * iwork, int * ifailv, int * info);
void sdisna_(char * job, int * m, int * n, float const * d, float * sep, int * info);
void ddisna_(char * job, int * m, int * n, double const * d, double * sep, int * info);
void ssygst_(int * itype, char * uplo, int * n, float * a, int * lda, float const * b, int * ldb, int * info);
void dsygst_(int * itype, char * uplo, int * n, double * a, int * lda, double const * b, int * ldb, int * info);
void chegst_(int * itype, char * uplo, int * n, float _Complex * a, int * lda, float _Complex const * b, int * ldb, int * info);
void zhegst_(int * itype, char * uplo, int * n, double _Complex * a, int * lda, double _Complex const * b, int * ldb, int * info);
void sspgst_(int * itype, char * uplo, int * n, float * ap, float const * bp, int * info);
void dspgst_(int * itype, char * uplo, int * n, double * ap, double const * bp, int * info);
void chpgst_(int * itype, char * uplo, int * n, float _Complex * ap, float _Complex const * bp, int * info);
void zhpgst_(int * itype, char * uplo, int * n, double _Complex * ap, double _Complex const * bp, int * info);
void ssbgst_(char * vect, char * uplo, int * n, int * ka, int * kb, float * ab, int * ldab, float const * bb, int * ldbb, float * x, int * ldx, float * work, int * info);
void dsbgst_(char * vect, char * uplo, int * n, int * ka, int * kb, double * ab, int * ldab, double const * bb, int * ldbb, double * x, int * ldx, double * work, int * info);
void chbgst_(char * vect, char * uplo, int * n, int * ka, int * kb, float _Complex * ab, int * ldab, float _Complex const * bb, int * ldbb, float _Complex * x, int * ldx, float _Complex * work, float * rwork, int * info);
void zhbgst_(char * vect, char * uplo, int * n, int * ka, int * kb, double _Complex * ab, int * ldab, double _Complex const * bb, int * ldbb, double _Complex * x, int * ldx, double _Complex * work, double * rwork, int * info);
void spbstf_(char * uplo, int * n, int * kb, float * bb, int * ldbb, int * info);
void dpbstf_(char * uplo, int * n, int * kb, double * bb, int * ldbb, int * info);
void cpbstf_(char * uplo, int * n, int * kb, float _Complex * bb, int * ldbb, int * info);
void zpbstf_(char * uplo, int * n, int * kb, double _Complex * bb, int * ldbb, int * info);
void sgehrd_(int * n, int * ilo, int * ihi, float * a, int * lda, float * tau, float * work, int * lwork, int * info);
void dgehrd_(int * n, int * ilo, int * ihi, double * a, int * lda, double * tau, double * work, int * lwork, int * info);
void cgehrd_(int * n, int * ilo, int * ihi, float _Complex * a, int * lda, float _Complex * tau, float _Complex * work, int * lwork, int * info);
void zgehrd_(int * n, int * ilo, int * ihi, double _Complex * a, int * lda, double _Complex * tau, double _Complex * work, int * lwork, int * info);
void sorghr_(int * n, int * ilo, int * ihi, float * a, int * lda, float const * tau, float * work, int * lwork, int * info);
void dorghr_(int * n, int * ilo, int * ihi, double * a, int * lda, double const * tau, double * work, int * lwork, int * info);
void sormhr_(char * side, char * trans, int * m, int * n, int * ilo, int * ihi, float const * a, int * lda, float const * tau, float * c, int * ldc, float * work, int * lwork, int * info);
void dormhr_(char * side, char * trans, int * m, int * n, int * ilo, int * ihi, double const * a, int * lda, double const * tau, double * c, int * ldc, double * work, int * lwork, int * info);
void cunghr_(int * n, int * ilo, int * ihi, float _Complex * a, int * lda, float _Complex const * tau, float _Complex * work, int * lwork, int * info);
void zunghr_(int * n, int * ilo, int * ihi, double _Complex * a, int * lda, double _Complex const * tau, double _Complex * work, int * lwork, int * info);
void cunmhr_(char * side, char * trans, int * m, int * n, int * ilo, int * ihi, float _Complex const * a, int * lda, float _Complex const * tau, float _Complex * c, int * ldc, float _Complex * work, int * lwork, int * info);
void zunmhr_(char * side, char * trans, int * m, int * n, int * ilo, int * ihi, double _Complex const * a, int * lda, double _Complex const * tau, double _Complex * c, int * ldc, double _Complex * work, int * lwork, int * info);
void sgebal_(char * job, int * n, float * a, int * lda, int * ilo, int * ihi, float * scale, int * info);
void dgebal_(char * job, int * n, double * a, int * lda, int * ilo, int * ihi, double * scale, int * info);
void cgebal_(char * job, int * n, float _Complex * a, int * lda, int * ilo, int * ihi, float * scale, int * info);
void zgebal_(char * job, int * n, double _Complex * a, int * lda, int * ilo, int * ihi, double * scale, int * info);
void sgebak_(char * job, char * side, int * n, int * ilo, int * ihi, float const * scale, int * m, float * v, int * ldv, int * info);
void dgebak_(char * job, char * side, int * n, int * ilo, int * ihi, double const * scale, int * m, double * v, int * ldv, int * info);
void cgebak_(char * job, char * side, int * n, int * ilo, int * ihi, float const * scale, int * m, float _Complex * v, int * ldv, int * info);
void zgebak_(char * job, char * side, int * n, int * ilo, int * ihi, double const * scale, int * m, double _Complex * v, int * ldv, int * info);
void shseqr_(char * job, char * compz, int * n, int * ilo, int * ihi, float * h, int * ldh, float * wr, float * wi, float * z, int * ldz, float * work, int * lwork, int * info);
void dhseqr_(char * job, char * compz, int * n, int * ilo, int * ihi, double * h, int * ldh, double * wr, double * wi, double * z, int * ldz, double * work, int * lwork, int * info);
void chseqr_(char * job, char * compz, int * n, int * ilo, int * ihi, float _Complex * h, int * ldh, float _Complex * w, float _Complex * z, int * ldz, float _Complex * work, int * lwork, int * info);
void zhseqr_(char * job, char * compz, int * n, int * ilo, int * ihi, double _Complex * h, int * ldh, double _Complex * w, double _Complex * z, int * ldz, double _Complex * work, int * lwork, int * info);
void shsein_(char * job, char * eigsrc, char * initv, int * select, int * n, float const * h, int * ldh, float * wr, float const * wi, float * vl, int * ldvl, float * vr, int * ldvr, int * mm, int * m, float * work, int * ifaill, int * ifailr, int * info);
void dhsein_(char * job, char * eigsrc, char * initv, int * select, int * n, double const * h, int * ldh, double * wr, double const * wi, double * vl, int * ldvl, double * vr, int * ldvr, int * mm, int * m, double * work, int * ifaill, int * ifailr, int * info);
void chsein_(char * job, char * eigsrc, char * initv, int const * select, int * n, float _Complex const * h, int * ldh, float _Complex * w, float _Complex * vl, int * ldvl, float _Complex * vr, int * ldvr, int * mm, int * m, float _Complex * work, float * rwork, int * ifaill, int * ifailr, int * info);
void zhsein_(char * job, char * eigsrc, char * initv, int const * select, int * n, double _Complex const * h, int * ldh, double _Complex * w, double _Complex * vl, int * ldvl, double _Complex * vr, int * ldvr, int * mm, int * m, double _Complex * work, double * rwork, int * ifaill, int * ifailr, int * info);
void strevc_(char * side, char * howmny, int * select, int * n, float const * t, int * ldt, float * vl, int * ldvl, float * vr, int * ldvr, int * mm, int * m, float * work, int * info);
void dtrevc_(char * side, char * howmny, int * select, int * n, double const * t, int * ldt, double * vl, int * ldvl, double * vr, int * ldvr, int * mm, int * m, double * work, int * info);
void ctrevc_(char * side, char * howmny, int const * select, int * n, float _Complex * t, int * ldt, float _Complex * vl, int * ldvl, float _Complex * vr, int * ldvr, int * mm, int * m, float _Complex * work, float * rwork, int * info);
void ztrevc_(char * side, char * howmny, int const * select, int * n, double _Complex * t, int * ldt, double _Complex * vl, int * ldvl, double _Complex * vr, int * ldvr, int * mm, int * m, double _Complex * work, double * rwork, int * info);
void strsna_(char * job, char * howmny, int const * select, int * n, float const * t, int * ldt, float const * vl, int * ldvl, float const * vr, int * ldvr, float * s, float * sep, int * mm, int * m, float * work, int * ldwork, int * iwork, int * info);
void dtrsna_(char * job, char * howmny, int const * select, int * n, double const * t, int * ldt, double const * vl, int * ldvl, double const * vr, int * ldvr, double * s, double * sep, int * mm, int * m, double * work, int * ldwork, int * iwork, int * info);
void ctrsna_(char * job, char * howmny, int const * select, int * n, float _Complex const * t, int * ldt, float _Complex const * vl, int * ldvl, float _Complex const * vr, int * ldvr, float * s, float * sep, int * mm, int * m, float _Complex * work, int * ldwork, float * rwork, int * info);
void ztrsna_(char * job, char * howmny, int const * select, int * n, double _Complex const * t, int * ldt, double _Complex const * vl, int * ldvl, double _Complex const * vr, int * ldvr, double * s, double * sep, int * mm, int * m, double _Complex * work, int * ldwork, double * rwork, int * info);
void strexc_(char * compq, int * n, float * t, int * ldt, float * q, int * ldq, int * ifst, int * ilst, float * work, int * info);
void dtrexc_(char * compq, int * n, double * t, int * ldt, double * q, int * ldq, int * ifst, int * ilst, double * work, int * info);
void ctrexc_(char * compq, int * n, float _Complex * t, int * ldt, float _Complex * q, int * ldq, int * ifst, int * ilst, int * info);
void ztrexc_(char * compq, int * n, double _Complex * t, int * ldt, double _Complex * q, int * ldq, int * ifst, int * ilst, int * info);
void strsen_(char * job, char * compq, int const * select, int * n, float * t, int * ldt, float * q, int * ldq, float * wr, float * wi, int * m, float * s, float * sep, float * work, int * lwork, int * iwork, int * liwork, int * info);
void dtrsen_(char * job, char * compq, int const * select, int * n, double * t, int * ldt, double * q, int * ldq, double * wr, double * wi, int * m, double * s, double * sep, double * work, int * lwork, int * iwork, int * liwork, int * info);
void ctrsen_(char * job, char * compq, int const * select, int * n, float _Complex * t, int * ldt, float _Complex * q, int * ldq, float _Complex * w, int * m, float * s, float * sep, float _Complex * work, int * lwork, int * info);
void ztrsen_(char * job, char * compq, int const * select, int * n, double _Complex * t, int * ldt, double _Complex * q, int * ldq, double _Complex * w, int * m, double * s, double * sep, double _Complex * work, int * lwork, int * info);
void strsyl_(char * trana, char * tranb, int * isgn, int * m, int * n, float const * a, int * lda, float const * b, int * ldb, float * c, int * ldc, float * scale, int * info);
void dtrsyl_(char * trana, char * tranb, int * isgn, int * m, int * n, double const * a, int * lda, double const * b, int * ldb, double * c, int * ldc, double * scale, int * info);
void ctrsyl_(char * trana, char * tranb, int * isgn, int * m, int * n, float _Complex const * a, int * lda, float _Complex const * b, int * ldb, float _Complex * c, int * ldc, float * scale, int * info);
void ztrsyl_(char * trana, char * tranb, int * isgn, int * m, int * n, double _Complex const * a, int * lda, double _Complex const * b, int * ldb, double _Complex * c, int * ldc, double * scale, int * info);
void sgghrd_(char * compq, char * compz, int * n, int * ilo, int * ihi, float * a, int * lda, float * b, int * ldb, float * q, int * ldq, float * z, int * ldz, int * info);
void dgghrd_(char * compq, char * compz, int * n, int * ilo, int * ihi, double * a, int * lda, double * b, int * ldb, double * q, int * ldq, double * z, int * ldz, int * info);
void cgghrd_(char * compq, char * compz, int * n, int * ilo, int * ihi, float _Complex * a, int * lda, float _Complex * b, int * ldb, float _Complex * q, int * ldq, float _Complex * z, int * ldz, int * info);
void zgghrd_(char * compq, char * compz, int * n, int * ilo, int * ihi, double _Complex * a, int * lda, double _Complex * b, int * ldb, double _Complex * q, int * ldq, double _Complex * z, int * ldz, int * info);
void sggbal_(char * job, int * n, float * a, int * lda, float * b, int * ldb, int * ilo, int * ihi, float * lscale, float * rscale, float * work, int * info);
void dggbal_(char * job, int * n, double * a, int * lda, double * b, int * ldb, int * ilo, int * ihi, double * lscale, double * rscale, double * work, int * info);
void cggbal_(char * job, int * n, float _Complex * a, int * lda, float _Complex * b, int * ldb, int * ilo, int * ihi, float * lscale, float * rscale, float * work, int * info);
void zggbal_(char * job, int * n, double _Complex * a, int * lda, double _Complex * b, int * ldb, int * ilo, int * ihi, double * lscale, double * rscale, double * work, int * info);
void sggbak_(char * job, char * side, int * n, int * ilo, int * ihi, float const * lscale, float const * rscale, int * m, float * v, int * ldv, int * info);
void dggbak_(char * job, char * side, int * n, int * ilo, int * ihi, double const * lscale, double const * rscale, int * m, double * v, int * ldv, int * info);
void cggbak_(char * job, char * side, int * n, int * ilo, int * ihi, float const * lscale, float const * rscale, int * m, float _Complex * v, int * ldv, int * info);
void zggbak_(char * job, char * side, int * n, int * ilo, int * ihi, double const * lscale, double const * rscale, int * m, double _Complex * v, int * ldv, int * info);
void shgeqz_(char * job, char * compq, char * compz, int * n, int * ilo, int * ihi, float * h, int * ldh, float * t, int * ldt, float * alphar, float * alphai, float * beta, float * q, int * ldq, float * z, int * ldz, float * work, int * lwork, int * info);
void dhgeqz_(char * job, char * compq, char * compz, int * n, int * ilo, int * ihi, double * h, int * ldh, double * t, int * ldt, double * alphar, double * alphai, double * beta, double * q, int * ldq, double * z, int * ldz, double * work, int * lwork, int * info);
void chgeqz_(char * job, char * compq, char * compz, int * n, int * ilo, int * ihi, float _Complex * h, int * ldh, float _Complex * t, int * ldt, float _Complex * alpha, float _Complex * beta, float _Complex * q, int * ldq, float _Complex * z, int * ldz, float _Complex * work, int * lwork, float * rwork, int * info);
void zhgeqz_(char * job, char * compq, char * compz, int * n, int * ilo, int * ihi, double _Complex * h, int * ldh, double _Complex * t, int * ldt, double _Complex * alpha, double _Complex * beta, double _Complex * q, int * ldq, double _Complex * z, int * ldz, double _Complex * work, int * lwork, double * rwork, int * info);
void stgevc_(char * side, char * howmny, int const * select, int * n, float const * s, int * lds, float const * p, int * ldp, float * vl, int * ldvl, float * vr, int * ldvr, int * mm, int * m, float * work, int * info);
void dtgevc_(char * side, char * howmny, int const * select, int * n, double const * s, int * lds, double const * p, int * ldp, double * vl, int * ldvl, double * vr, int * ldvr, int * mm, int * m, double * work, int * info);
void ctgevc_(char * side, char * howmny, int const * select, int * n, float _Complex const * s, int * lds, float _Complex const * p, int * ldp, float _Complex * vl, int * ldvl, float _Complex * vr, int * ldvr, int * mm, int * m, float _Complex * work, float * rwork, int * info);
void ztgevc_(char * side, char * howmny, int const * select, int * n, double _Complex const * s, int * lds, double _Complex const * p, int * ldp, double _Complex * vl, int * ldvl, double _Complex * vr, int * ldvr, int * mm, int * m, double _Complex * work, double * rwork, int * info);
void stgexc_(int * wantq, int * wantz, int * n, float * a, int * lda, float * b, int * ldb, float * q, int * ldq, float * z, int * ldz, int * ifst, int * ilst, float * work, int * lwork, int * info);
void dtgexc_(int * wantq, int * wantz, int * n, double * a, int * lda, double * b, int * ldb, double * q, int * ldq, double * z, int * ldz, int * ifst, int * ilst, double * work, int * lwork, int * info);
void ctgexc_(int * wantq, int * wantz, int * n, float _Complex * a, int * lda, float _Complex * b, int * ldb, float _Complex * q, int * ldq, float _Complex * z, int * ldz, int * ifst, int * ilst, int * info);
void ztgexc_(int * wantq, int * wantz, int * n, double _Complex * a, int * lda, double _Complex * b, int * ldb, double _Complex * q, int * ldq, double _Complex * z, int * ldz, int * ifst, int * ilst, int * info);
void stgsen_(int * ijob, int * wantq, int * wantz, int const * select, int * n, float * a, int * lda, float * b, int * ldb, float * alphar, float * alphai, float * beta, float * q, int * ldq, float * z, int * ldz, int * m, float * pl, float * pr, float * dif, float * work, int * lwork, int * iwork, int * liwork, int * info);
void dtgsen_(int * ijob, int * wantq, int * wantz, int const * select, int * n, double * a, int * lda, double * b, int * ldb, double * alphar, double * alphai, double * beta, double * q, int * ldq, double * z, int * ldz, int * m, double * pl, double * pr, double * dif, double * work, int * lwork, int * iwork, int * liwork, int * info);
void ctgsen_(int * ijob, int * wantq, int * wantz, int const * select, int * n, float _Complex * a, int * lda, float _Complex * b, int * ldb, float _Complex * alpha, float _Complex * beta, float _Complex * q, int * ldq, float _Complex * z, int * ldz, int * m, float * pl, float * pr, float * dif, float _Complex * work, int * lwork, int * iwork, int * liwork, int * info);
void ztgsen_(int * ijob, int * wantq, int * wantz, int const * select, int * n, double _Complex * a, int * lda, double _Complex * b, int * ldb, double _Complex * alpha, double _Complex * beta, double _Complex * q, int * ldq, double _Complex * z, int * ldz, int * m, double * pl, double * pr, double * dif, double _Complex * work, int * lwork, int * iwork, int * liwork, int * info);
void stgsyl_(char * trans, int * ijob, int * m, int * n, float const * a, int * lda, float const * b, int * ldb, float * c, int * ldc, float const * d, int * ldd, float const * e, int * lde, float * f, int * ldf, float * scale, float * dif, float * work, int * lwork, int * iwork, int * info);
void dtgsyl_(char * trans, int * ijob, int * m, int * n, double const * a, int * lda, double const * b, int * ldb, double * c, int * ldc, double const * d, int * ldd, double const * e, int * lde, double * f, int * ldf, double * scale, double * dif, double * work, int * lwork, int * iwork, int * info);
void ctgsyl_(char * trans, int * ijob, int * m, int * n, float _Complex const * a, int * lda, float _Complex const * b, int * ldb, float _Complex * c, int * ldc, float _Complex const * d, int * ldd, float _Complex const * e, int * lde, float _Complex * f, int * ldf, float * scale, float * dif, float _Complex * work, int * lwork, int * iwork, int * info);
void ztgsyl_(char * trans, int * ijob, int * m, int * n, double _Complex const * a, int * lda, double _Complex const * b, int * ldb, double _Complex * c, int * ldc, double _Complex const * d, int * ldd, double _Complex const * e, int * lde, double _Complex * f, int * ldf, double * scale, double * dif, double _Complex * work, int * lwork, int * iwork, int * info);
void stgsna_(char * job, char * howmny, int const * select, int * n, float const * a, int * lda, float const * b, int * ldb, float const * vl, int * ldvl, float const * vr, int * ldvr, float * s, float * dif, int * mm, int * m, float * work, int * lwork, int * iwork, int * info);
void dtgsna_(char * job, char * howmny, int const * select, int * n, double const * a, int * lda, double const * b, int * ldb, double const * vl, int * ldvl, double const * vr, int * ldvr, double * s, double * dif, int * mm, int * m, double * work, int * lwork, int * iwork, int * info);
void ctgsna_(char * job, char * howmny, int const * select, int * n, float _Complex const * a, int * lda, float _Complex const * b, int * ldb, float _Complex const * vl, int * ldvl, float _Complex const * vr, int * ldvr, float * s, float * dif, int * mm, int * m, float _Complex * work, int * lwork, int * iwork, int * info);
void ztgsna_(char * job, char * howmny, int const * select, int * n, double _Complex const * a, int * lda, double _Complex const * b, int * ldb, double _Complex const * vl, int * ldvl, double _Complex const * vr, int * ldvr, double * s, double * dif, int * mm, int * m, double _Complex * work, int * lwork, int * iwork, int * info);
void sggsvp_(char * jobu, char * jobv, char * jobq, int * m, int * p, int * n, float * a, int * lda, float * b, int * ldb, float * tola, float * tolb, int * k, int * l, float * u, int * ldu, float * v, int * ldv, float * q, int * ldq, int * iwork, float * tau, float * work, int * info);
void dggsvp_(char * jobu, char * jobv, char * jobq, int * m, int * p, int * n, double * a, int * lda, double * b, int * ldb, double * tola, double * tolb, int * k, int * l, double * u, int * ldu, double * v, int * ldv, double * q, int * ldq, int * iwork, double * tau, double * work, int * info);
void cggsvp_(char * jobu, char * jobv, char * jobq, int * m, int * p, int * n, float _Complex * a, int * lda, float _Complex * b, int * ldb, float * tola, float * tolb, int * k, int * l, float _Complex * u, int * ldu, float _Complex * v, int * ldv, float _Complex * q, int * ldq, int * iwork, float * rwork, float _Complex * tau, float _Complex * work, int * info);
void zggsvp_(char * jobu, char * jobv, char * jobq, int * m, int * p, int * n, double _Complex * a, int * lda, double _Complex * b, int * ldb, double * tola, double * tolb, int * k, int * l, double _Complex * u, int * ldu, double _Complex * v, int * ldv, double _Complex * q, int * ldq, int * iwork, double * rwork, double _Complex * tau, double _Complex * work, int * info);
void stgsja_(char * jobu, char * jobv, char * jobq, int * m, int * p, int * n, int * k, int * l, float * a, int * lda, float * b, int * ldb, float * tola, float * tolb, float * alpha, float * beta, float * u, int * ldu, float * v, int * ldv, float * q, int * ldq, float * work, int * ncycle, int * info);
void dtgsja_(char * jobu, char * jobv, char * jobq, int * m, int * p, int * n, int * k, int * l, double * a, int * lda, double * b, int * ldb, double * tola, double * tolb, double * alpha, double * beta, double * u, int * ldu, double * v, int * ldv, double * q, int * ldq, double * work, int * ncycle, int * info);
void ctgsja_(char * jobu, char * jobv, char * jobq, int * m, int * p, int * n, int * k, int * l, float _Complex * a, int * lda, float _Complex * b, int * ldb, float * tola, float * tolb, float * alpha, float * beta, float _Complex * u, int * ldu, float _Complex * v, int * ldv, float _Complex * q, int * ldq, float _Complex * work, int * ncycle, int * info);
void ztgsja_(char * jobu, char * jobv, char * jobq, int * m, int * p, int * n, int * k, int * l, double _Complex * a, int * lda, double _Complex * b, int * ldb, double * tola, double * tolb, double * alpha, double * beta, double _Complex * u, int * ldu, double _Complex * v, int * ldv, double _Complex * q, int * ldq, double _Complex * work, int * ncycle, int * info);
void sgels_(char * trans, int * m, int * n, int * nrhs, float * a, int * lda, float * b, int * ldb, float * work, int * lwork, int * info);
void dgels_(char * trans, int * m, int * n, int * nrhs, double * a, int * lda, double * b, int * ldb, double * work, int * lwork, int * info);
void cgels_(char * trans, int * m, int * n, int * nrhs, float _Complex * a, int * lda, float _Complex * b, int * ldb, float _Complex * work, int * lwork, int * info);
void zgels_(char * trans, int * m, int * n, int * nrhs, double _Complex * a, int * lda, double _Complex * b, int * ldb, double _Complex * work, int * lwork, int * info);
void sgelsy_(int * m, int * n, int * nrhs, float * a, int * lda, float * b, int * ldb, int * jpvt, float * rcond, int * rank, float * work, int * lwork, int * info);
void dgelsy_(int * m, int * n, int * nrhs, double * a, int * lda, double * b, int * ldb, int * jpvt, double * rcond, int * rank, double * work, int * lwork, int * info);
void cgelsy_(int * m, int * n, int * nrhs, float _Complex * a, int * lda, float _Complex * b, int * ldb, int * jpvt, float * rcond, int * rank, float _Complex * work, int * lwork, float * rwork, int * info);
void zgelsy_(int * m, int * n, int * nrhs, double _Complex * a, int * lda, double _Complex * b, int * ldb, int * jpvt, double * rcond, int * rank, double _Complex * work, int * lwork, double * rwork, int * info);
void sgelss_(int * m, int * n, int * nrhs, float * a, int * lda, float * b, int * ldb, float * s, float * rcond, int * rank, float * work, int * lwork, int * info);
void dgelss_(int * m, int * n, int * nrhs, double * a, int * lda, double * b, int * ldb, double * s, double * rcond, int * rank, double * work, int * lwork, int * info);
void cgelss_(int * m, int * n, int * nrhs, float _Complex * a, int * lda, float _Complex * b, int * ldb, float * s, float * rcond, int * rank, float _Complex * work, int * lwork, float * rwork, int * info);
void zgelss_(int * m, int * n, int * nrhs, double _Complex * a, int * lda, double _Complex * b, int * ldb, double * s, double * rcond, int * rank, double _Complex * work, int * lwork, double * rwork, int * info);
void sgelsd_(int * m, int * n, int * nrhs, float * a, int * lda, float * b, int * ldb, float * s, float * rcond, int * rank, float * work, int * lwork, int * iwork, int * info);
void dgelsd_(int * m, int * n, int * nrhs, double * a, int * lda, double * b, int * ldb, double * s, double * rcond, int * rank, double * work, int * lwork, int * iwork, int * info);
void cgelsd_(int * m, int * n, int * nrhs, float _Complex * a, int * lda, float _Complex * b, int * ldb, float * s, float * rcond, int * rank, float _Complex * work, int * lwork, float * rwork, int * iwork, int * info);
void zgelsd_(int * m, int * n, int * nrhs, double _Complex * a, int * lda, double _Complex * b, int * ldb, double * s, double * rcond, int * rank, double _Complex * work, int * lwork, double * rwork, int * iwork, int * info);
void sgglse_(int * m, int * n, int * p, float * a, int * lda, float * b, int * ldb, float * c, float * d, float * x, float * work, int * lwork, int * info);
void dgglse_(int * m, int * n, int * p, double * a, int * lda, double * b, int * ldb, double * c, double * d, double * x, double * work, int * lwork, int * info);
void cgglse_(int * m, int * n, int * p, float _Complex * a, int * lda, float _Complex * b, int * ldb, float _Complex * c, float _Complex * d, float _Complex * x, float _Complex * work, int * lwork, int * info);
void zgglse_(int * m, int * n, int * p, double _Complex * a, int * lda, double _Complex * b, int * ldb, double _Complex * c, double _Complex * d, double _Complex * x, double _Complex * work, int * lwork, int * info);
void sggglm_(int * n, int * m, int * p, float * a, int * lda, float * b, int * ldb, float * d, float * x, float * y, float * work, int * lwork, int * info);
void dggglm_(int * n, int * m, int * p, double * a, int * lda, double * b, int * ldb, double * d, double * x, double * y, double * work, int * lwork, int * info);
void cggglm_(int * n, int * m, int * p, float _Complex * a, int * lda, float _Complex * b, int * ldb, float _Complex * d, float _Complex * x, float _Complex * y, float _Complex * work, int * lwork, int * info);
void zggglm_(int * n, int * m, int * p, double _Complex * a, int * lda, double _Complex * b, int * ldb, double _Complex * d, double _Complex * x, double _Complex * y, double _Complex * work, int * lwork, int * info);
void ssyev_(char * jobz, char * uplo, int * n, float * a, int * lda, float * w, float * work, int * lwork, int * info);
void dsyev_(char * jobz, char * uplo, int * n, double * a, int * lda, double * w, double * work, int * lwork, int * info);
void cheev_(char * jobz, char * uplo, int * n, float _Complex * a, int * lda, float * w, float _Complex * work, int * lwork, float * rwork, int * info);
void zheev_(char * jobz, char * uplo, int * n, double _Complex * a, int * lda, double * w, double _Complex * work, int * lwork, double * rwork, int * info);
void ssyevd_(char * jobz, char * uplo, int * n, float * a, int * lda, float * w, float * work, int * lwork, int * iwork, int * liwork, int * info);
void dsyevd_(char * jobz, char * uplo, int * n, double * a, int * lda, double * w, double * work, int * lwork, int * iwork, int * liwork, int * info);
void cheevd_(char * jobz, char * uplo, int * n, float _Complex * a, int * lda, float * w, float _Complex * work, int * lwork, float * rwork, int * lrwork, int * iwork, int * liwork, int * info);
void zheevd_(char * jobz, char * uplo, int * n, double _Complex * a, int * lda, double * w, double _Complex * work, int * lwork, double * rwork, int * lrwork, int * iwork, int * liwork, int * info);
void ssyevx_(char * jobz, char * range, char * uplo, int * n, float * a, int * lda, float * vl, float * vu, int * il, int * iu, float * abstol, int * m, float * w, float * z, int * ldz, float * work, int * lwork, int * iwork, int * ifail, int * info);
void dsyevx_(char * jobz, char * range, char * uplo, int * n, double * a, int * lda, double * vl, double * vu, int * il, int * iu, double * abstol, int * m, double * w, double * z, int * ldz, double * work, int * lwork, int * iwork, int * ifail, int * info);
void cheevx_(char * jobz, char * range, char * uplo, int * n, float _Complex * a, int * lda, float * vl, float * vu, int * il, int * iu, float * abstol, int * m, float * w, float _Complex * z, int * ldz, float _Complex * work, int * lwork, float * rwork, int * iwork, int * ifail, int * info);
void zheevx_(char * jobz, char * range, char * uplo, int * n, double _Complex * a, int * lda, double * vl, double * vu, int * il, int * iu, double * abstol, int * m, double * w, double _Complex * z, int * ldz, double _Complex * work, int * lwork, double * rwork, int * iwork, int * ifail, int * info);
void ssyevr_(char * jobz, char * range, char * uplo, int * n, float * a, int * lda, float * vl, float * vu, int * il, int * iu, float * abstol, int * m, float * w, float * z, int * ldz, int * isuppz, float * work, int * lwork, int * iwork, int * liwork, int * info);
void dsyevr_(char * jobz, char * range, char * uplo, int * n, double * a, int * lda, double * vl, double * vu, int * il, int * iu, double * abstol, int * m, double * w, double * z, int * ldz, int * isuppz, double * work, int * lwork, int * iwork, int * liwork, int * info);
void cheevr_(char * jobz, char * range, char * uplo, int * n, float _Complex * a, int * lda, float * vl, float * vu, int * il, int * iu, float * abstol, int * m, float * w, float _Complex * z, int * ldz, int * isuppz, float _Complex * work, int * lwork, float * rwork, int * lrwork, int * iwork, int * liwork, int * info);
void zheevr_(char * jobz, char * range, char * uplo, int * n, double _Complex * a, int * lda, double * vl, double * vu, int * il, int * iu, double * abstol, int * m, double * w, double _Complex * z, int * ldz, int * isuppz, double _Complex * work, int * lwork, double * rwork, int * lrwork, int * iwork, int * liwork, int * info);
void sspev_(char * jobz, char * uplo, int * n, float * ap, float * w, float * z, int * ldz, float * work, int * info);
void dspev_(char * jobz, char * uplo, int * n, double * ap, double * w, double * z, int * ldz, double * work, int * info);
void chpev_(char * jobz, char * uplo, int * n, float _Complex * ap, float * w, float _Complex * z, int * ldz, float _Complex * work, float * rwork, int * info);
void zhpev_(char * jobz, char * uplo, int * n, double _Complex * ap, double * w, double _Complex * z, int * ldz, double _Complex * work, double * rwork, int * info);
void sspevd_(char * jobz, char * uplo, int * n, float * ap, float * w, float * z, int * ldz, float * work, int * lwork, int * iwork, int * liwork, int * info);
void dspevd_(char * jobz, char * uplo, int * n, double * ap, double * w, double * z, int * ldz, double * work, int * lwork, int * iwork, int * liwork, int * info);
void chpevd_(char * jobz, char * uplo, int * n, float _Complex * ap, float * w, float _Complex * z, int * ldz, float _Complex * work, int * lwork, float * rwork, int * lrwork, int * iwork, int * liwork, int * info);
void zhpevd_(char * jobz, char * uplo, int * n, double _Complex * ap, double * w, double _Complex * z, int * ldz, double _Complex * work, int * lwork, double * rwork, int * lrwork, int * iwork, int * liwork, int * info);
void sspevx_(char * jobz, char * range, char * uplo, int * n, float * ap, float * vl, float * vu, int * il, int * iu, float * abstol, int * m, float * w, float * z, int * ldz, float * work, int * iwork, int * ifail, int * info);
void dspevx_(char * jobz, char * range, char * uplo, int * n, double * ap, double * vl, double * vu, int * il, int * iu, double * abstol, int * m, double * w, double * z, int * ldz, double * work, int * iwork, int * ifail, int * info);
void chpevx_(char * jobz, char * range, char * uplo, int * n, float _Complex * ap, float * vl, float * vu, int * il, int * iu, float * abstol, int * m, float * w, float _Complex * z, int * ldz, float _Complex * work, float * rwork, int * iwork, int * ifail, int * info);
void zhpevx_(char * jobz, char * range, char * uplo, int * n, double _Complex * ap, double * vl, double * vu, int * il, int * iu, double * abstol, int * m, double * w, double _Complex * z, int * ldz, double _Complex * work, double * rwork, int * iwork, int * ifail, int * info);
void ssbev_(char * jobz, char * uplo, int * n, int * kd, float * ab, int * ldab, float * w, float * z, int * ldz, float * work, int * info);
void dsbev_(char * jobz, char * uplo, int * n, int * kd, double * ab, int * ldab, double * w, double * z, int * ldz, double * work, int * info);
void chbev_(char * jobz, char * uplo, int * n, int * kd, float _Complex * ab, int * ldab, float * w, float _Complex * z, int * ldz, float _Complex * work, float * rwork, int * info);
void zhbev_(char * jobz, char * uplo, int * n, int * kd, double _Complex * ab, int * ldab, double * w, double _Complex * z, int * ldz, double _Complex * work, double * rwork, int * info);
void ssbevd_(char * jobz, char * uplo, int * n, int * kd, float * ab, int * ldab, float * w, float * z, int * ldz, float * work, int * lwork, int * iwork, int * liwork, int * info);
void dsbevd_(char * jobz, char * uplo, int * n, int * kd, double * ab, int * ldab, double * w, double * z, int * ldz, double * work, int * lwork, int * iwork, int * liwork, int * info);
void chbevd_(char * jobz, char * uplo, int * n, int * kd, float _Complex * ab, int * ldab, float * w, float _Complex * z, int * ldz, float _Complex * work, int * lwork, float * rwork, int * lrwork, int * iwork, int * liwork, int * info);
void zhbevd_(char * jobz, char * uplo, int * n, int * kd, double _Complex * ab, int * ldab, double * w, double _Complex * z, int * ldz, double _Complex * work, int * lwork, double * rwork, int * lrwork, int * iwork, int * liwork, int * info);
void ssbevx_(char * jobz, char * range, char * uplo, int * n, int * kd, float * ab, int * ldab, float * q, int * ldq, float * vl, float * vu, int * il, int * iu, float * abstol, int * m, float * w, float * z, int * ldz, float * work, int * iwork, int * ifail, int * info);
void dsbevx_(char * jobz, char * range, char * uplo, int * n, int * kd, double * ab, int * ldab, double * q, int * ldq, double * vl, double * vu, int * il, int * iu, double * abstol, int * m, double * w, double * z, int * ldz, double * work, int * iwork, int * ifail, int * info);
void chbevx_(char * jobz, char * range, char * uplo, int * n, int * kd, float _Complex * ab, int * ldab, float _Complex * q, int * ldq, float * vl, float * vu, int * il, int * iu, float * abstol, int * m, float * w, float _Complex * z, int * ldz, float _Complex * work, float * rwork, int * iwork, int * ifail, int * info);
void zhbevx_(char * jobz, char * range, char * uplo, int * n, int * kd, double _Complex * ab, int * ldab, double _Complex * q, int * ldq, double * vl, double * vu, int * il, int * iu, double * abstol, int * m, double * w, double _Complex * z, int * ldz, double _Complex * work, double * rwork, int * iwork, int * ifail, int * info);
void sstev_(char * jobz, int * n, float * d, float * e, float * z, int * ldz, float * work, int * info);
void dstev_(char * jobz, int * n, double * d, double * e, double * z, int * ldz, double * work, int * info);
void sstevd_(char * jobz, int * n, float * d, float * e, float * z, int * ldz, float * work, int * lwork, int * iwork, int * liwork, int * info);
void dstevd_(char * jobz, int * n, double * d, double * e, double * z, int * ldz, double * work, int * lwork, int * iwork, int * liwork, int * info);
void sstevx_(char * jobz, char * range, int * n, float * d, float * e, float * vl, float * vu, int * il, int * iu, float * abstol, int * m, float * w, float * z, int * ldz, float * work, int * iwork, int * ifail, int * info);
void dstevx_(char * jobz, char * range, int * n, double * d, double * e, double * vl, double * vu, int * il, int * iu, double * abstol, int * m, double * w, double * z, int * ldz, double * work, int * iwork, int * ifail, int * info);
void sstevr_(char * jobz, char * range, int * n, float * d, float * e, float * vl, float * vu, int * il, int * iu, float * abstol, int * m, float * w, float * z, int * ldz, int * isuppz, float * work, int * lwork, int * iwork, int * liwork, int * info);
void dstevr_(char * jobz, char * range, int * n, double * d, double * e, double * vl, double * vu, int * il, int * iu, double * abstol, int * m, double * w, double * z, int * ldz, int * isuppz, double * work, int * lwork, int * iwork, int * liwork, int * info);
void sgees_(char * jobvs, char * sort, int (* select)(float const * , float const * ), int * n, float * a, int * lda, int * sdim, float * wr, float * wi, float * vs, int * ldvs, float * work, int * lwork, int * bwork, int * info);
void dgees_(char * jobvs, char * sort, int (* select)(double const * , double const * ), int * n, double * a, int * lda, int * sdim, double * wr, double * wi, double * vs, int * ldvs, double * work, int * lwork, int * bwork, int * info);
void cgees_(char * jobvs, char * sort, int (* select)(float _Complex const * ), int * n, float _Complex * a, int * lda, int * sdim, float _Complex * w, float _Complex * vs, int * ldvs, float _Complex * work, int * lwork, float * rwork, int * bwork, int * info);
void zgees_(char * jobvs, char * sort, int (* select)(double _Complex const * ), int * n, double _Complex * a, int * lda, int * sdim, double _Complex * w, double _Complex * vs, int * ldvs, double _Complex * work, int * lwork, double * rwork, int * bwork, int * info);
void sgeesx_(char * jobvs, char * sort, int (* select)(float const * , float const * ), char * sense, int * n, float * a, int * lda, int * sdim, float * wr, float * wi, float * vs, int * ldvs, float * rconde, float * rcondv, float * work, int * lwork, int * iwork, int * liwork, int * bwork, int * info);
void dgeesx_(char * jobvs, char * sort, int (* select)(double const * , double const * ), char * sense, int * n, double * a, int * lda, int * sdim, double * wr, double * wi, double * vs, int * ldvs, double * rconde, double * rcondv, double * work, int * lwork, int * iwork, int * liwork, int * bwork, int * info);
void cgeesx_(char * jobvs, char * sort, int (* select)(float _Complex const * ), char * sense, int * n, float _Complex * a, int * lda, int * sdim, float _Complex * w, float _Complex * vs, int * ldvs, float * rconde, float * rcondv, float _Complex * work, int * lwork, float * rwork, int * bwork, int * info);
void zgeesx_(char * jobvs, char * sort, int (* select)(double _Complex const * ), char * sense, int * n, double _Complex * a, int * lda, int * sdim, double _Complex * w, double _Complex * vs, int * ldvs, double * rconde, double * rcondv, double _Complex * work, int * lwork, double * rwork, int * bwork, int * info);
void sgeev_(char * jobvl, char * jobvr, int * n, float * a, int * lda, float * wr, float * wi, float * vl, int * ldvl, float * vr, int * ldvr, float * work, int * lwork, int * info);
void dgeev_(char * jobvl, char * jobvr, int * n, double * a, int * lda, double * wr, double * wi, double * vl, int * ldvl, double * vr, int * ldvr, double * work, int * lwork, int * info);
void cgeev_(char * jobvl, char * jobvr, int * n, float _Complex * a, int * lda, float _Complex * w, float _Complex * vl, int * ldvl, float _Complex * vr, int * ldvr, float _Complex * work, int * lwork, float * rwork, int * info);
void zgeev_(char * jobvl, char * jobvr, int * n, double _Complex * a, int * lda, double _Complex * w, double _Complex * vl, int * ldvl, double _Complex * vr, int * ldvr, double _Complex * work, int * lwork, double * rwork, int * info);
void sgeevx_(char * balanc, char * jobvl, char * jobvr, char * sense, int * n, float * a, int * lda, float * wr, float * wi, float * vl, int * ldvl, float * vr, int * ldvr, int * ilo, int * ihi, float * scale, float * abnrm, float * rconde, float * rcondv, float * work, int * lwork, int * iwork, int * info);
void dgeevx_(char * balanc, char * jobvl, char * jobvr, char * sense, int * n, double * a, int * lda, double * wr, double * wi, double * vl, int * ldvl, double * vr, int * ldvr, int * ilo, int * ihi, double * scale, double * abnrm, double * rconde, double * rcondv, double * work, int * lwork, int * iwork, int * info);
void cgeevx_(char * balanc, char * jobvl, char * jobvr, char * sense, int * n, float _Complex * a, int * lda, float _Complex * w, float _Complex * vl, int * ldvl, float _Complex * vr, int * ldvr, int * ilo, int * ihi, float * scale, float * abnrm, float * rconde, float * rcondv, float _Complex * work, int * lwork, float * rwork, int * info);
void zgeevx_(char * balanc, char * jobvl, char * jobvr, char * sense, int * n, double _Complex * a, int * lda, double _Complex * w, double _Complex * vl, int * ldvl, double _Complex * vr, int * ldvr, int * ilo, int * ihi, double * scale, double * abnrm, double * rconde, double * rcondv, double _Complex * work, int * lwork, double * rwork, int * info);
void sgesvd_(char * jobu, char * jobvt, int * m, int * n, float * a, int * lda, float * s, float * u, int * ldu, float * vt, int * ldvt, float * work, int * lwork, int * info);
void dgesvd_(char * jobu, char * jobvt, int * m, int * n, double * a, int * lda, double * s, double * u, int * ldu, double * vt, int * ldvt, double * work, int * lwork, int * info);
void cgesvd_(char * jobu, char * jobvt, int * m, int * n, float _Complex * a, int * lda, float * s, float _Complex * u, int * ldu, float _Complex * vt, int * ldvt, float _Complex * work, int * lwork, float * rwork, int * info);
void zgesvd_(char * jobu, char * jobvt, int * m, int * n, double _Complex * a, int * lda, double * s, double _Complex * u, int * ldu, double _Complex * vt, int * ldvt, double _Complex * work, int * lwork, double * rwork, int * info);
void sgesdd_(char * jobz, int * m, int * n, float * a, int * lda, float * s, float * u, int * ldu, float * vt, int * ldvt, float * work, int * lwork, int * iwork, int * info);
void dgesdd_(char * jobz, int * m, int * n, double * a, int * lda, double * s, double * u, int * ldu, double * vt, int * ldvt, double * work, int * lwork, int * iwork, int * info);
void cgesdd_(char * jobz, int * m, int * n, float _Complex * a, int * lda, float * s, float _Complex * u, int * ldu, float _Complex * vt, int * ldvt, float _Complex * work, int * lwork, float * rwork, int * iwork, int * info);
void zgesdd_(char * jobz, int * m, int * n, double _Complex * a, int * lda, double * s, double _Complex * u, int * ldu, double _Complex * vt, int * ldvt, double _Complex * work, int * lwork, double * rwork, int * iwork, int * info);
void dgejsv_(char * joba, char * jobu, char * jobv, char * jobr, char * jobt, char * jobp, int * m, int * n, double * a, int * lda, double * sva, double * u, int * ldu, double * v, int * ldv, double * work, int * lwork, int * iwork, int * info);
void sgejsv_(char * joba, char * jobu, char * jobv, char * jobr, char * jobt, char * jobp, int * m, int * n, float * a, int * lda, float * sva, float * u, int * ldu, float * v, int * ldv, float * work, int * lwork, int * iwork, int * info);
void dgesvj_(char * joba, char * jobu, char * jobv, int * m, int * n, double * a, int * lda, double * sva, int * mv, double * v, int * ldv, double * work, int * lwork, int * info);
void sgesvj_(char * joba, char * jobu, char * jobv, int * m, int * n, float * a, int * lda, float * sva, int * mv, float * v, int * ldv, float * work, int * lwork, int * info);
void sggsvd_(char * jobu, char * jobv, char * jobq, int * m, int * n, int * p, int * k, int * l, float * a, int * lda, float * b, int * ldb, float * alpha, float * beta, float * u, int * ldu, float * v, int * ldv, float * q, int * ldq, float * work, int * iwork, int * info);
void dggsvd_(char * jobu, char * jobv, char * jobq, int * m, int * n, int * p, int * k, int * l, double * a, int * lda, double * b, int * ldb, double * alpha, double * beta, double * u, int * ldu, double * v, int * ldv, double * q, int * ldq, double * work, int * iwork, int * info);
void cggsvd_(char * jobu, char * jobv, char * jobq, int * m, int * n, int * p, int * k, int * l, float _Complex * a, int * lda, float _Complex * b, int * ldb, float * alpha, float * beta, float _Complex * u, int * ldu, float _Complex * v, int * ldv, float _Complex * q, int * ldq, float _Complex * work, float * rwork, int * iwork, int * info);
void zggsvd_(char * jobu, char * jobv, char * jobq, int * m, int * n, int * p, int * k, int * l, double _Complex * a, int * lda, double _Complex * b, int * ldb, double * alpha, double * beta, double _Complex * u, int * ldu, double _Complex * v, int * ldv, double _Complex * q, int * ldq, double _Complex * work, double * rwork, int * iwork, int * info);
void ssygv_(int * itype, char * jobz, char * uplo, int * n, float * a, int * lda, float * b, int * ldb, float * w, float * work, int * lwork, int * info);
void dsygv_(int * itype, char * jobz, char * uplo, int * n, double * a, int * lda, double * b, int * ldb, double * w, double * work, int * lwork, int * info);
void chegv_(int * itype, char * jobz, char * uplo, int * n, float _Complex * a, int * lda, float _Complex * b, int * ldb, float * w, float _Complex * work, int * lwork, float * rwork, int * info);
void zhegv_(int * itype, char * jobz, char * uplo, int * n, double _Complex * a, int * lda, double _Complex * b, int * ldb, double * w, double _Complex * work, int * lwork, double * rwork, int * info);
void ssygvd_(int * itype, char * jobz, char * uplo, int * n, float * a, int * lda, float * b, int * ldb, float * w, float * work, int * lwork, int * iwork, int * liwork, int * info);
void dsygvd_(int * itype, char * jobz, char * uplo, int * n, double * a, int * lda, double * b, int * ldb, double * w, double * work, int * lwork, int * iwork, int * liwork, int * info);
void chegvd_(int * itype, char * jobz, char * uplo, int * n, float _Complex * a, int * lda, float _Complex * b, int * ldb, float * w, float _Complex * work, int * lwork, float * rwork, int * lrwork, int * iwork, int * liwork, int * info);
void zhegvd_(int * itype, char * jobz, char * uplo, int * n, double _Complex * a, int * lda, double _Complex * b, int * ldb, double * w, double _Complex * work, int * lwork, double * rwork, int * lrwork, int * iwork, int * liwork, int * info);
void ssygvx_(int * itype, char * jobz, char * range, char * uplo, int * n, float * a, int * lda, float * b, int * ldb, float * vl, float * vu, int * il, int * iu, float * abstol, int * m, float * w, float * z, int * ldz, float * work, int * lwork, int * iwork, int * ifail, int * info);
void dsygvx_(int * itype, char * jobz, char * range, char * uplo, int * n, double * a, int * lda, double * b, int * ldb, double * vl, double * vu, int * il, int * iu, double * abstol, int * m, double * w, double * z, int * ldz, double * work, int * lwork, int * iwork, int * ifail, int * info);
void chegvx_(int * itype, char * jobz, char * range, char * uplo, int * n, float _Complex * a, int * lda, float _Complex * b, int * ldb, float * vl, float * vu, int * il, int * iu, float * abstol, int * m, float * w, float _Complex * z, int * ldz, float _Complex * work, int * lwork, float * rwork, int * iwork, int * ifail, int * info);
void zhegvx_(int * itype, char * jobz, char * range, char * uplo, int * n, double _Complex * a, int * lda, double _Complex * b, int * ldb, double * vl, double * vu, int * il, int * iu, double * abstol, int * m, double * w, double _Complex * z, int * ldz, double _Complex * work, int * lwork, double * rwork, int * iwork, int * ifail, int * info);
void sspgv_(int * itype, char * jobz, char * uplo, int * n, float * ap, float * bp, float * w, float * z, int * ldz, float * work, int * info);
void dspgv_(int * itype, char * jobz, char * uplo, int * n, double * ap, double * bp, double * w, double * z, int * ldz, double * work, int * info);
void chpgv_(int * itype, char * jobz, char * uplo, int * n, float _Complex * ap, float _Complex * bp, float * w, float _Complex * z, int * ldz, float _Complex * work, float * rwork, int * info);
void zhpgv_(int * itype, char * jobz, char * uplo, int * n, double _Complex * ap, double _Complex * bp, double * w, double _Complex * z, int * ldz, double _Complex * work, double * rwork, int * info);
void sspgvd_(int * itype, char * jobz, char * uplo, int * n, float * ap, float * bp, float * w, float * z, int * ldz, float * work, int * lwork, int * iwork, int * liwork, int * info);
void dspgvd_(int * itype, char * jobz, char * uplo, int * n, double * ap, double * bp, double * w, double * z, int * ldz, double * work, int * lwork, int * iwork, int * liwork, int * info);
void chpgvd_(int * itype, char * jobz, char * uplo, int * n, float _Complex * ap, float _Complex * bp, float * w, float _Complex * z, int * ldz, float _Complex * work, int * lwork, float * rwork, int * lrwork, int * iwork, int * liwork, int * info);
void zhpgvd_(int * itype, char * jobz, char * uplo, int * n, double _Complex * ap, double _Complex * bp, double * w, double _Complex * z, int * ldz, double _Complex * work, int * lwork, double * rwork, int * lrwork, int * iwork, int * liwork, int * info);
void sspgvx_(int * itype, char * jobz, char * range, char * uplo, int * n, float * ap, float * bp, float * vl, float * vu, int * il, int * iu, float * abstol, int * m, float * w, float * z, int * ldz, float * work, int * iwork, int * ifail, int * info);
void dspgvx_(int * itype, char * jobz, char * range, char * uplo, int * n, double * ap, double * bp, double * vl, double * vu, int * il, int * iu, double * abstol, int * m, double * w, double * z, int * ldz, double * work, int * iwork, int * ifail, int * info);
void chpgvx_(int * itype, char * jobz, char * range, char * uplo, int * n, float _Complex * ap, float _Complex * bp, float * vl, float * vu, int * il, int * iu, float * abstol, int * m, float * w, float _Complex * z, int * ldz, float _Complex * work, float * rwork, int * iwork, int * ifail, int * info);
void zhpgvx_(int * itype, char * jobz, char * range, char * uplo, int * n, double _Complex * ap, double _Complex * bp, double * vl, double * vu, int * il, int * iu, double * abstol, int * m, double * w, double _Complex * z, int * ldz, double _Complex * work, double * rwork, int * iwork, int * ifail, int * info);
void ssbgv_(char * jobz, char * uplo, int * n, int * ka, int * kb, float * ab, int * ldab, float * bb, int * ldbb, float * w, float * z, int * ldz, float * work, int * info);
void dsbgv_(char * jobz, char * uplo, int * n, int * ka, int * kb, double * ab, int * ldab, double * bb, int * ldbb, double * w, double * z, int * ldz, double * work, int * info);
void chbgv_(char * jobz, char * uplo, int * n, int * ka, int * kb, float _Complex * ab, int * ldab, float _Complex * bb, int * ldbb, float * w, float _Complex * z, int * ldz, float _Complex * work, float * rwork, int * info);
void zhbgv_(char * jobz, char * uplo, int * n, int * ka, int * kb, double _Complex * ab, int * ldab, double _Complex * bb, int * ldbb, double * w, double _Complex * z, int * ldz, double _Complex * work, double * rwork, int * info);
void ssbgvd_(char * jobz, char * uplo, int * n, int * ka, int * kb, float * ab, int * ldab, float * bb, int * ldbb, float * w, float * z, int * ldz, float * work, int * lwork, int * iwork, int * liwork, int * info);
void dsbgvd_(char * jobz, char * uplo, int * n, int * ka, int * kb, double * ab, int * ldab, double * bb, int * ldbb, double * w, double * z, int * ldz, double * work, int * lwork, int * iwork, int * liwork, int * info);
void chbgvd_(char * jobz, char * uplo, int * n, int * ka, int * kb, float _Complex * ab, int * ldab, float _Complex * bb, int * ldbb, float * w, float _Complex * z, int * ldz, float _Complex * work, int * lwork, float * rwork, int * lrwork, int * iwork, int * liwork, int * info);
void zhbgvd_(char * jobz, char * uplo, int * n, int * ka, int * kb, double _Complex * ab, int * ldab, double _Complex * bb, int * ldbb, double * w, double _Complex * z, int * ldz, double _Complex * work, int * lwork, double * rwork, int * lrwork, int * iwork, int * liwork, int * info);
void ssbgvx_(char * jobz, char * range, char * uplo, int * n, int * ka, int * kb, float * ab, int * ldab, float * bb, int * ldbb, float * q, int * ldq, float * vl, float * vu, int * il, int * iu, float * abstol, int * m, float * w, float * z, int * ldz, float * work, int * iwork, int * ifail, int * info);
void dsbgvx_(char * jobz, char * range, char * uplo, int * n, int * ka, int * kb, double * ab, int * ldab, double * bb, int * ldbb, double * q, int * ldq, double * vl, double * vu, int * il, int * iu, double * abstol, int * m, double * w, double * z, int * ldz, double * work, int * iwork, int * ifail, int * info);
void chbgvx_(char * jobz, char * range, char * uplo, int * n, int * ka, int * kb, float _Complex * ab, int * ldab, float _Complex * bb, int * ldbb, float _Complex * q, int * ldq, float * vl, float * vu, int * il, int * iu, float * abstol, int * m, float * w, float _Complex * z, int * ldz, float _Complex * work, float * rwork, int * iwork, int * ifail, int * info);
void zhbgvx_(char * jobz, char * range, char * uplo, int * n, int * ka, int * kb, double _Complex * ab, int * ldab, double _Complex * bb, int * ldbb, double _Complex * q, int * ldq, double * vl, double * vu, int * il, int * iu, double * abstol, int * m, double * w, double _Complex * z, int * ldz, double _Complex * work, double * rwork, int * iwork, int * ifail, int * info);
void sgges_(char * jobvsl, char * jobvsr, char * sort, int (* selctg)(float const * , float const * , float const * ), int * n, float * a, int * lda, float * b, int * ldb, int * sdim, float * alphar, float * alphai, float * beta, float * vsl, int * ldvsl, float * vsr, int * ldvsr, float * work, int * lwork, int * bwork, int * info);
void dgges_(char * jobvsl, char * jobvsr, char * sort, int (* selctg)(double const * , double const * , double const * ), int * n, double * a, int * lda, double * b, int * ldb, int * sdim, double * alphar, double * alphai, double * beta, double * vsl, int * ldvsl, double * vsr, int * ldvsr, double * work, int * lwork, int * bwork, int * info);
void cgges_(char * jobvsl, char * jobvsr, char * sort, int (* selctg)(float _Complex const * , float _Complex const * ), int * n, float _Complex * a, int * lda, float _Complex * b, int * ldb, int * sdim, float _Complex * alpha, float _Complex * beta, float _Complex * vsl, int * ldvsl, float _Complex * vsr, int * ldvsr, float _Complex * work, int * lwork, float * rwork, int * bwork, int * info);
void zgges_(char * jobvsl, char * jobvsr, char * sort, int (* selctg)(double _Complex const * , double _Complex const * ), int * n, double _Complex * a, int * lda, double _Complex * b, int * ldb, int * sdim, double _Complex * alpha, double _Complex * beta, double _Complex * vsl, int * ldvsl, double _Complex * vsr, int * ldvsr, double _Complex * work, int * lwork, double * rwork, int * bwork, int * info);
void sggesx_(char * jobvsl, char * jobvsr, char * sort, int (* selctg)(float const * , float const * , float const * ), char * sense, int * n, float * a, int * lda, float * b, int * ldb, int * sdim, float * alphar, float * alphai, float * beta, float * vsl, int * ldvsl, float * vsr, int * ldvsr, float * rconde, float * rcondv, float * work, int * lwork, int * iwork, int * liwork, int * bwork, int * info);
void dggesx_(char * jobvsl, char * jobvsr, char * sort, int (* selctg)(double const * , double const * , double const * ), char * sense, int * n, double * a, int * lda, double * b, int * ldb, int * sdim, double * alphar, double * alphai, double * beta, double * vsl, int * ldvsl, double * vsr, int * ldvsr, double * rconde, double * rcondv, double * work, int * lwork, int * iwork, int * liwork, int * bwork, int * info);
void cggesx_(char * jobvsl, char * jobvsr, char * sort, int (* selctg)(float _Complex const * , float _Complex const * ), char * sense, int * n, float _Complex * a, int * lda, float _Complex * b, int * ldb, int * sdim, float _Complex * alpha, float _Complex * beta, float _Complex * vsl, int * ldvsl, float _Complex * vsr, int * ldvsr, float * rconde, float * rcondv, float _Complex * work, int * lwork, float * rwork, int * iwork, int * liwork, int * bwork, int * info);
void zggesx_(char * jobvsl, char * jobvsr, char * sort, int (* selctg)(double _Complex const * , double _Complex const * ), char * sense, int * n, double _Complex * a, int * lda, double _Complex * b, int * ldb, int * sdim, double _Complex * alpha, double _Complex * beta, double _Complex * vsl, int * ldvsl, double _Complex * vsr, int * ldvsr, double * rconde, double * rcondv, double _Complex * work, int * lwork, double * rwork, int * iwork, int * liwork, int * bwork, int * info);
void sggev_(char * jobvl, char * jobvr, int * n, float * a, int * lda, float * b, int * ldb, float * alphar, float * alphai, float * beta, float * vl, int * ldvl, float * vr, int * ldvr, float * work, int * lwork, int * info);
void dggev_(char * jobvl, char * jobvr, int * n, double * a, int * lda, double * b, int * ldb, double * alphar, double * alphai, double * beta, double * vl, int * ldvl, double * vr, int * ldvr, double * work, int * lwork, int * info);
void cggev_(char * jobvl, char * jobvr, int * n, float _Complex * a, int * lda, float _Complex * b, int * ldb, float _Complex * alpha, float _Complex * beta, float _Complex * vl, int * ldvl, float _Complex * vr, int * ldvr, float _Complex * work, int * lwork, float * rwork, int * info);
void zggev_(char * jobvl, char * jobvr, int * n, double _Complex * a, int * lda, double _Complex * b, int * ldb, double _Complex * alpha, double _Complex * beta, double _Complex * vl, int * ldvl, double _Complex * vr, int * ldvr, double _Complex * work, int * lwork, double * rwork, int * info);
void sggevx_(char * balanc, char * jobvl, char * jobvr, char * sense, int * n, float * a, int * lda, float * b, int * ldb, float * alphar, float * alphai, float * beta, float * vl, int * ldvl, float * vr, int * ldvr, int * ilo, int * ihi, float * lscale, float * rscale, float * abnrm, float * bbnrm, float * rconde, float * rcondv, float * work, int * lwork, int * iwork, int * bwork, int * info);
void dggevx_(char * balanc, char * jobvl, char * jobvr, char * sense, int * n, double * a, int * lda, double * b, int * ldb, double * alphar, double * alphai, double * beta, double * vl, int * ldvl, double * vr, int * ldvr, int * ilo, int * ihi, double * lscale, double * rscale, double * abnrm, double * bbnrm, double * rconde, double * rcondv, double * work, int * lwork, int * iwork, int * bwork, int * info);
void cggevx_(char * balanc, char * jobvl, char * jobvr, char * sense, int * n, float _Complex * a, int * lda, float _Complex * b, int * ldb, float _Complex * alpha, float _Complex * beta, float _Complex * vl, int * ldvl, float _Complex * vr, int * ldvr, int * ilo, int * ihi, float * lscale, float * rscale, float * abnrm, float * bbnrm, float * rconde, float * rcondv, float _Complex * work, int * lwork, float * rwork, int * iwork, int * bwork, int * info);
void zggevx_(char * balanc, char * jobvl, char * jobvr, char * sense, int * n, double _Complex * a, int * lda, double _Complex * b, int * ldb, double _Complex * alpha, double _Complex * beta, double _Complex * vl, int * ldvl, double _Complex * vr, int * ldvr, int * ilo, int * ihi, double * lscale, double * rscale, double * abnrm, double * bbnrm, double * rconde, double * rcondv, double _Complex * work, int * lwork, double * rwork, int * iwork, int * bwork, int * info);
void dsfrk_(char * transr, char * uplo, char * trans, int * n, int * k, double * alpha, double const * a, int * lda, double * beta, double * c);
void ssfrk_(char * transr, char * uplo, char * trans, int * n, int * k, float * alpha, float const * a, int * lda, float * beta, float * c);
void zhfrk_(char * transr, char * uplo, char * trans, int * n, int * k, double * alpha, double _Complex const * a, int * lda, double * beta, double _Complex * c);
void chfrk_(char * transr, char * uplo, char * trans, int * n, int * k, float * alpha, float _Complex const * a, int * lda, float * beta, float _Complex * c);
void dtfsm_(char * transr, char * side, char * uplo, char * trans, char * diag, int * m, int * n, double * alpha, double const * a, double * b, int * ldb);
void stfsm_(char * transr, char * side, char * uplo, char * trans, char * diag, int * m, int * n, float * alpha, float const * a, float * b, int * ldb);
void ztfsm_(char * transr, char * side, char * uplo, char * trans, char * diag, int * m, int * n, double _Complex * alpha, double _Complex const * a, double _Complex * b, int * ldb);
void ctfsm_(char * transr, char * side, char * uplo, char * trans, char * diag, int * m, int * n, float _Complex * alpha, float _Complex const * a, float _Complex * b, int * ldb);
void dtfttp_(char * transr, char * uplo, int * n, double const * arf, double * ap, int * info);
void stfttp_(char * transr, char * uplo, int * n, float const * arf, float * ap, int * info);
void ztfttp_(char * transr, char * uplo, int * n, double _Complex const * arf, double _Complex * ap, int * info);
void ctfttp_(char * transr, char * uplo, int * n, float _Complex const * arf, float _Complex * ap, int * info);
void dtfttr_(char * transr, char * uplo, int * n, double const * arf, double * a, int * lda, int * info);
void stfttr_(char * transr, char * uplo, int * n, float const * arf, float * a, int * lda, int * info);
void ztfttr_(char * transr, char * uplo, int * n, double _Complex const * arf, double _Complex * a, int * lda, int * info);
void ctfttr_(char * transr, char * uplo, int * n, float _Complex const * arf, float _Complex * a, int * lda, int * info);
void dtpttf_(char * transr, char * uplo, int * n, double const * ap, double * arf, int * info);
void stpttf_(char * transr, char * uplo, int * n, float const * ap, float * arf, int * info);
void ztpttf_(char * transr, char * uplo, int * n, double _Complex const * ap, double _Complex * arf, int * info);
void ctpttf_(char * transr, char * uplo, int * n, float _Complex const * ap, float _Complex * arf, int * info);
void dtpttr_(char * uplo, int * n, double const * ap, double * a, int * lda, int * info);
void stpttr_(char * uplo, int * n, float const * ap, float * a, int * lda, int * info);
void ztpttr_(char * uplo, int * n, double _Complex const * ap, double _Complex * a, int * lda, int * info);
void ctpttr_(char * uplo, int * n, float _Complex const * ap, float _Complex * a, int * lda, int * info);
void dtrttf_(char * transr, char * uplo, int * n, double const * a, int * lda, double * arf, int * info);
void strttf_(char * transr, char * uplo, int * n, float const * a, int * lda, float * arf, int * info);
void ztrttf_(char * transr, char * uplo, int * n, double _Complex const * a, int * lda, double _Complex * arf, int * info);
void ctrttf_(char * transr, char * uplo, int * n, float _Complex const * a, int * lda, float _Complex * arf, int * info);
void dtrttp_(char * uplo, int * n, double const * a, int * lda, double * ap, int * info);
void strttp_(char * uplo, int * n, float const * a, int * lda, float * ap, int * info);
void ztrttp_(char * uplo, int * n, double _Complex const * a, int * lda, double _Complex * ap, int * info);
void ctrttp_(char * uplo, int * n, float _Complex const * a, int * lda, float _Complex * ap, int * info);
void sgeqrfp_(int * m, int * n, float * a, int * lda, float * tau, float * work, int * lwork, int * info);
void dgeqrfp_(int * m, int * n, double * a, int * lda, double * tau, double * work, int * lwork, int * info);
void cgeqrfp_(int * m, int * n, float _Complex * a, int * lda, float _Complex * tau, float _Complex * work, int * lwork, int * info);
void zgeqrfp_(int * m, int * n, double _Complex * a, int * lda, double _Complex * tau, double _Complex * work, int * lwork, int * info);
void clacgv_(int * n, float _Complex * x, int * incx);
void zlacgv_(int * n, double _Complex * x, int * incx);
void slarnv_(int * idist, int * iseed, int * n, float * x);
void dlarnv_(int * idist, int * iseed, int * n, double * x);
void clarnv_(int * idist, int * iseed, int * n, float _Complex * x);
void zlarnv_(int * idist, int * iseed, int * n, double _Complex * x);
void sgeqr2_(int * m, int * n, float * a, int * lda, float * tau, float * work, int * info);
void dgeqr2_(int * m, int * n, double * a, int * lda, double * tau, double * work, int * info);
void cgeqr2_(int * m, int * n, float _Complex * a, int * lda, float _Complex * tau, float _Complex * work, int * info);
void zgeqr2_(int * m, int * n, double _Complex * a, int * lda, double _Complex * tau, double _Complex * work, int * info);
void slacn2_(int * n, float * v, float * x, int * isgn, float * est, int * kase, int * isave);
void dlacn2_(int * n, double * v, double * x, int * isgn, double * est, int * kase, int * isave);
void clacn2_(int * n, float _Complex * v, float _Complex * x, float * est, int * kase, int * isave);
void zlacn2_(int * n, double _Complex * v, double _Complex * x, double * est, int * kase, int * isave);
void slacpy_(char * uplo, int * m, int * n, float const * a, int * lda, float * b, int * ldb);
void dlacpy_(char * uplo, int * m, int * n, double const * a, int * lda, double * b, int * ldb);
void clacpy_(char * uplo, int * m, int * n, float _Complex const * a, int * lda, float _Complex * b, int * ldb);
void zlacpy_(char * uplo, int * m, int * n, double _Complex const * a, int * lda, double _Complex * b, int * ldb);
void clacp2_(char * uplo, int * m, int * n, float const * a, int * lda, float _Complex * b, int * ldb);
void zlacp2_(char * uplo, int * m, int * n, double const * a, int * lda, double _Complex * b, int * ldb);
void sgetf2_(int * m, int * n, float * a, int * lda, int * ipiv, int * info);
void dgetf2_(int * m, int * n, double * a, int * lda, int * ipiv, int * info);
void cgetf2_(int * m, int * n, float _Complex * a, int * lda, int * ipiv, int * info);
void zgetf2_(int * m, int * n, double _Complex * a, int * lda, int * ipiv, int * info);
void slaswp_(int * n, float * a, int * lda, int * k1, int * k2, int const * ipiv, int * incx);
void dlaswp_(int * n, double * a, int * lda, int * k1, int * k2, int const * ipiv, int * incx);
void claswp_(int * n, float _Complex * a, int * lda, int * k1, int * k2, int const * ipiv, int * incx);
void zlaswp_(int * n, double _Complex * a, int * lda, int * k1, int * k2, int const * ipiv, int * incx);
float slange_(char * norm, int * m, int * n, float const * a, int * lda, float * work);
double dlange_(char * norm, int * m, int * n, double const * a, int * lda, double * work);
float clange_(char * norm, int * m, int * n, float _Complex const * a, int * lda, float * work);
double zlange_(char * norm, int * m, int * n, double _Complex const * a, int * lda, double * work);
float clanhe_(char * norm, char * uplo, int * n, float _Complex const * a, int * lda, float * work);
double zlanhe_(char * norm, char * uplo, int * n, double _Complex const * a, int * lda, double * work);
float slansy_(char * norm, char * uplo, int * n, float const * a, int * lda, float * work);
double dlansy_(char * norm, char * uplo, int * n, double const * a, int * lda, double * work);
float clansy_(char * norm, char * uplo, int * n, float _Complex const * a, int * lda, float * work);
double zlansy_(char * norm, char * uplo, int * n, double _Complex const * a, int * lda, double * work);
float slantr_(char * norm, char * uplo, char * diag, int * m, int * n, float const * a, int * lda, float * work);
double dlantr_(char * norm, char * uplo, char * diag, int * m, int * n, double const * a, int * lda, double * work);
float clantr_(char * norm, char * uplo, char * diag, int * m, int * n, float _Complex const * a, int * lda, float * work);
double zlantr_(char * norm, char * uplo, char * diag, int * m, int * n, double _Complex const * a, int * lda, double * work);
float slamch_(char * cmach);
double dlamch_(char * cmach);
void sgelq2_(int * m, int * n, float * a, int * lda, float * tau, float * work, int * info);
void dgelq2_(int * m, int * n, double * a, int * lda, double * tau, double * work, int * info);
void cgelq2_(int * m, int * n, float _Complex * a, int * lda, float _Complex * tau, float _Complex * work, int * info);
void zgelq2_(int * m, int * n, double _Complex * a, int * lda, double _Complex * tau, double _Complex * work, int * info);
void slarfb_(char * side, char * trans, char * direct, char * storev, int * m, int * n, int * k, float const * v, int * ldv, float const * t, int * ldt, float * c, int * ldc, float * work, int * ldwork);
void dlarfb_(char * side, char * trans, char * direct, char * storev, int * m, int * n, int * k, double const * v, int * ldv, double const * t, int * ldt, double * c, int * ldc, double * work, int * ldwork);
void clarfb_(char * side, char * trans, char * direct, char * storev, int * m, int * n, int * k, float _Complex const * v, int * ldv, float _Complex const * t, int * ldt, float _Complex * c, int * ldc, float _Complex * work, int * ldwork);
void zlarfb_(char * side, char * trans, char * direct, char * storev, int * m, int * n, int * k, double _Complex const * v, int * ldv, double _Complex const * t, int * ldt, double _Complex * c, int * ldc, double _Complex * work, int * ldwork);
void slarfg_(int * n, float * alpha, float * x, int * incx, float * tau);
void dlarfg_(int * n, double * alpha, double * x, int * incx, double * tau);
void clarfg_(int * n, float _Complex * alpha, float _Complex * x, int * incx, float _Complex * tau);
void zlarfg_(int * n, double _Complex * alpha, double _Complex * x, int * incx, double _Complex * tau);
void slarft_(char * direct, char * storev, int * n, int * k, float const * v, int * ldv, float const * tau, float * t, int * ldt);
void dlarft_(char * direct, char * storev, int * n, int * k, double const * v, int * ldv, double const * tau, double * t, int * ldt);
void clarft_(char * direct, char * storev, int * n, int * k, float _Complex const * v, int * ldv, float _Complex const * tau, float _Complex * t, int * ldt);
void zlarft_(char * direct, char * storev, int * n, int * k, double _Complex const * v, int * ldv, double _Complex const * tau, double _Complex * t, int * ldt);
void slarfx_(char * side, int * m, int * n, float const * v, float * tau, float * c, int * ldc, float * work);
void dlarfx_(char * side, int * m, int * n, double const * v, double * tau, double * c, int * ldc, double * work);
void clarfx_(char * side, int * m, int * n, float _Complex const * v, float _Complex * tau, float _Complex * c, int * ldc, float _Complex * work);
void zlarfx_(char * side, int * m, int * n, double _Complex const * v, double _Complex * tau, double _Complex * c, int * ldc, double _Complex * work);
void slatms_(int * m, int * n, char * dist, int * iseed, char * sym, float * d, int * mode, float * cond, float * dmax, int * kl, int * ku, char * pack, float * a, int * lda, float * work, int * info);
void dlatms_(int * m, int * n, char * dist, int * iseed, char * sym, double * d, int * mode, double * cond, double * dmax, int * kl, int * ku, char * pack, double * a, int * lda, double * work, int * info);
void clatms_(int * m, int * n, char * dist, int * iseed, char * sym, float * d, int * mode, float * cond, float * dmax, int * kl, int * ku, char * pack, float _Complex * a, int * lda, float _Complex * work, int * info);
void zlatms_(int * m, int * n, char * dist, int * iseed, char * sym, double * d, int * mode, double * cond, double * dmax, int * kl, int * ku, char * pack, double _Complex * a, int * lda, double _Complex * work, int * info);
void slag2d_(int * m, int * n, float const * sa, int * ldsa, double * a, int * lda, int * info);
void dlag2s_(int * m, int * n, double const * a, int * lda, float * sa, int * ldsa, int * info);
void clag2z_(int * m, int * n, float _Complex const * sa, int * ldsa, double _Complex * a, int * lda, int * info);
void zlag2c_(int * m, int * n, double _Complex const * a, int * lda, float _Complex * sa, int * ldsa, int * info);
void slauum_(char * uplo, int * n, float * a, int * lda, int * info);
void dlauum_(char * uplo, int * n, double * a, int * lda, int * info);
void clauum_(char * uplo, int * n, float _Complex * a, int * lda, int * info);
void zlauum_(char * uplo, int * n, double _Complex * a, int * lda, int * info);
void slagge_(int * m, int * n, int * kl, int * ku, float const * d, float * a, int * lda, int * iseed, float * work, int * info);
void dlagge_(int * m, int * n, int * kl, int * ku, double const * d, double * a, int * lda, int * iseed, double * work, int * info);
void clagge_(int * m, int * n, int * kl, int * ku, float const * d, float _Complex * a, int * lda, int * iseed, float _Complex * work, int * info);
void zlagge_(int * m, int * n, int * kl, int * ku, double const * d, double _Complex * a, int * lda, int * iseed, double _Complex * work, int * info);
void slaset_(char * uplo, int * m, int * n, float * alpha, float * beta, float * a, int * lda);
void dlaset_(char * uplo, int * m, int * n, double * alpha, double * beta, double * a, int * lda);
void claset_(char * uplo, int * m, int * n, float _Complex * alpha, float _Complex * beta, float _Complex * a, int * lda);
void zlaset_(char * uplo, int * m, int * n, double _Complex * alpha, double _Complex * beta, double _Complex * a, int * lda);
void slasrt_(char * id, int * n, float * d, int * info);
void dlasrt_(char * id, int * n, double * d, int * info);
void claghe_(int * n, int * k, float const * d, float _Complex * a, int * lda, int * iseed, float _Complex * work, int * info);
void zlaghe_(int * n, int * k, double const * d, double _Complex * a, int * lda, int * iseed, double _Complex * work, int * info);
void slagsy_(int * n, int * k, float const * d, float * a, int * lda, int * iseed, float * work, int * info);
void dlagsy_(int * n, int * k, double const * d, double * a, int * lda, int * iseed, double * work, int * info);
void clagsy_(int * n, int * k, float const * d, float _Complex * a, int * lda, int * iseed, float _Complex * work, int * info);
void zlagsy_(int * n, int * k, double const * d, double _Complex * a, int * lda, int * iseed, double _Complex * work, int * info);
void slapmr_(int * forwrd, int * m, int * n, float * x, int * ldx, int * k);
void dlapmr_(int * forwrd, int * m, int * n, double * x, int * ldx, int * k);
void clapmr_(int * forwrd, int * m, int * n, float _Complex * x, int * ldx, int * k);
void zlapmr_(int * forwrd, int * m, int * n, double _Complex * x, int * ldx, int * k);
float slapy2_(float * x, float * y);
double dlapy2_(double * x, double * y);
float slapy3_(float * x, float * y, float * z);
double dlapy3_(double * x, double * y, double * z);
void slartgp_(float * f, float * g, float * cs, float * sn, float * r);
void dlartgp_(double * f, double * g, double * cs, double * sn, double * r);
void slartgs_(float * x, float * y, float * sigma, float * cs, float * sn);
void dlartgs_(double * x, double * y, double * sigma, double * cs, double * sn);
void cbbcsd_(char * jobu1, char * jobu2, char * jobv1t, char * jobv2t, char * trans, int * m, int * p, int * q, float * theta, float * phi, float _Complex * u1, int * ldu1, float _Complex * u2, int * ldu2, float _Complex * v1t, int * ldv1t, float _Complex * v2t, int * ldv2t, float * b11d, float * b11e, float * b12d, float * b12e, float * b21d, float * b21e, float * b22d, float * b22e, float * rwork, int * lrwork, int * info);
void cheswapr_(char * uplo, int * n, float _Complex * a, int * i1, int * i2);
void chetri2_(char * uplo, int * n, float _Complex * a, int * lda, int const * ipiv, float _Complex * work, int * lwork, int * info);
void chetri2x_(char * uplo, int * n, float _Complex * a, int * lda, int const * ipiv, float _Complex * work, int * nb, int * info);
void chetrs2_(char * uplo, int * n, int * nrhs, float _Complex const * a, int * lda, int const * ipiv, float _Complex * b, int * ldb, float _Complex * work, int * info);
void csyconv_(char * uplo, char * way, int * n, float _Complex * a, int * lda, int const * ipiv, float _Complex * work, int * info);
void csyswapr_(char * uplo, int * n, float _Complex * a, int * i1, int * i2);
void csytri2_(char * uplo, int * n, float _Complex * a, int * lda, int const * ipiv, float _Complex * work, int * lwork, int * info);
void csytri2x_(char * uplo, int * n, float _Complex * a, int * lda, int const * ipiv, float _Complex * work, int * nb, int * info);
void csytrs2_(char * uplo, int * n, int * nrhs, float _Complex const * a, int * lda, int const * ipiv, float _Complex * b, int * ldb, float _Complex * work, int * info);
void cunbdb_(char * trans, char * signs, int * m, int * p, int * q, float _Complex * x11, int * ldx11, float _Complex * x12, int * ldx12, float _Complex * x21, int * ldx21, float _Complex * x22, int * ldx22, float * theta, float * phi, float _Complex * taup1, float _Complex * taup2, float _Complex * tauq1, float _Complex * tauq2, float _Complex * work, int * lwork, int * info);
void cuncsd_(char * jobu1, char * jobu2, char * jobv1t, char * jobv2t, char * trans, char * signs, int * m, int * p, int * q, float _Complex * x11, int * ldx11, float _Complex * x12, int * ldx12, float _Complex * x21, int * ldx21, float _Complex * x22, int * ldx22, float * theta, float _Complex * u1, int * ldu1, float _Complex * u2, int * ldu2, float _Complex * v1t, int * ldv1t, float _Complex * v2t, int * ldv2t, float _Complex * work, int * lwork, float * rwork, int * lrwork, int * iwork, int * info);
void dbbcsd_(char * jobu1, char * jobu2, char * jobv1t, char * jobv2t, char * trans, int * m, int * p, int * q, double * theta, double * phi, double * u1, int * ldu1, double * u2, int * ldu2, double * v1t, int * ldv1t, double * v2t, int * ldv2t, double * b11d, double * b11e, double * b12d, double * b12e, double * b21d, double * b21e, double * b22d, double * b22e, double * work, int * lwork, int * info);
void dorbdb_(char * trans, char * signs, int * m, int * p, int * q, double * x11, int * ldx11, double * x12, int * ldx12, double * x21, int * ldx21, double * x22, int * ldx22, double * theta, double * phi, double * taup1, double * taup2, double * tauq1, double * tauq2, double * work, int * lwork, int * info);
void dorcsd_(char * jobu1, char * jobu2, char * jobv1t, char * jobv2t, char * trans, char * signs, int * m, int * p, int * q, double * x11, int * ldx11, double * x12, int * ldx12, double * x21, int * ldx21, double * x22, int * ldx22, double * theta, double * u1, int * ldu1, double * u2, int * ldu2, double * v1t, int * ldv1t, double * v2t, int * ldv2t, double * work, int * lwork, int * iwork, int * info);
void dsyconv_(char * uplo, char * way, int * n, double * a, int * lda, int const * ipiv, double * work, int * info);
void dsyswapr_(char * uplo, int * n, double * a, int * i1, int * i2);
void dsytri2_(char * uplo, int * n, double * a, int * lda, int const * ipiv, double _Complex * work, int * lwork, int * info);
void dsytri2x_(char * uplo, int * n, double * a, int * lda, int const * ipiv, double * work, int * nb, int * info);
void dsytrs2_(char * uplo, int * n, int * nrhs, double const * a, int * lda, int const * ipiv, double * b, int * ldb, double * work, int * info);
void sbbcsd_(char * jobu1, char * jobu2, char * jobv1t, char * jobv2t, char * trans, int * m, int * p, int * q, float * theta, float * phi, float * u1, int * ldu1, float * u2, int * ldu2, float * v1t, int * ldv1t, float * v2t, int * ldv2t, float * b11d, float * b11e, float * b12d, float * b12e, float * b21d, float * b21e, float * b22d, float * b22e, float * work, int * lwork, int * info);
void sorbdb_(char * trans, char * signs, int * m, int * p, int * q, float * x11, int * ldx11, float * x12, int * ldx12, float * x21, int * ldx21, float * x22, int * ldx22, float * theta, float * phi, float * taup1, float * taup2, float * tauq1, float * tauq2, float * work, int * lwork, int * info);
void sorcsd_(char * jobu1, char * jobu2, char * jobv1t, char * jobv2t, char * trans, char * signs, int * m, int * p, int * q, float * x11, int * ldx11, float * x12, int * ldx12, float * x21, int * ldx21, float * x22, int * ldx22, float * theta, float * u1, int * ldu1, float * u2, int * ldu2, float * v1t, int * ldv1t, float * v2t, int * ldv2t, float * work, int * lwork, int * iwork, int * info);
void ssyconv_(char * uplo, char * way, int * n, float * a, int * lda, int const * ipiv, float * work, int * info);
void ssyswapr_(char * uplo, int * n, float * a, int * i1, int * i2);
void ssytri2_(char * uplo, int * n, float * a, int * lda, int const * ipiv, float _Complex * work, int * lwork, int * info);
void ssytri2x_(char * uplo, int * n, float * a, int * lda, int const * ipiv, float * work, int * nb, int * info);
void ssytrs2_(char * uplo, int * n, int * nrhs, float const * a, int * lda, int const * ipiv, float * b, int * ldb, float * work, int * info);
void zbbcsd_(char * jobu1, char * jobu2, char * jobv1t, char * jobv2t, char * trans, int * m, int * p, int * q, double * theta, double * phi, double _Complex * u1, int * ldu1, double _Complex * u2, int * ldu2, double _Complex * v1t, int * ldv1t, double _Complex * v2t, int * ldv2t, double * b11d, double * b11e, double * b12d, double * b12e, double * b21d, double * b21e, double * b22d, double * b22e, double * rwork, int * lrwork, int * info);
void zheswapr_(char * uplo, int * n, double _Complex * a, int * i1, int * i2);
void zhetri2_(char * uplo, int * n, double _Complex * a, int * lda, int const * ipiv, double _Complex * work, int * lwork, int * info);
void zhetri2x_(char * uplo, int * n, double _Complex * a, int * lda, int const * ipiv, double _Complex * work, int * nb, int * info);
void zhetrs2_(char * uplo, int * n, int * nrhs, double _Complex const * a, int * lda, int const * ipiv, double _Complex * b, int * ldb, double _Complex * work, int * info);
void zsyconv_(char * uplo, char * way, int * n, double _Complex * a, int * lda, int const * ipiv, double _Complex * work, int * info);
void zsyswapr_(char * uplo, int * n, double _Complex * a, int * i1, int * i2);
void zsytri2_(char * uplo, int * n, double _Complex * a, int * lda, int const * ipiv, double _Complex * work, int * lwork, int * info);
void zsytri2x_(char * uplo, int * n, double _Complex * a, int * lda, int const * ipiv, double _Complex * work, int * nb, int * info);
void zsytrs2_(char * uplo, int * n, int * nrhs, double _Complex const * a, int * lda, int const * ipiv, double _Complex * b, int * ldb, double _Complex * work, int * info);
void zunbdb_(char * trans, char * signs, int * m, int * p, int * q, double _Complex * x11, int * ldx11, double _Complex * x12, int * ldx12, double _Complex * x21, int * ldx21, double _Complex * x22, int * ldx22, double * theta, double * phi, double _Complex * taup1, double _Complex * taup2, double _Complex * tauq1, double _Complex * tauq2, double _Complex * work, int * lwork, int * info);
void zuncsd_(char * jobu1, char * jobu2, char * jobv1t, char * jobv2t, char * trans, char * signs, int * m, int * p, int * q, double _Complex * x11, int * ldx11, double _Complex * x12, int * ldx12, double _Complex * x21, int * ldx21, double _Complex * x22, int * ldx22, double * theta, double _Complex * u1, int * ldu1, double _Complex * u2, int * ldu2, double _Complex * v1t, int * ldv1t, double _Complex * v2t, int * ldv2t, double _Complex * work, int * lwork, double * rwork, int * lrwork, int * iwork, int * info);
void sgemqrt_(char * side, char * trans, int * m, int * n, int * k, int * nb, float const * v, int * ldv, float const * t, int * ldt, float * c, int * ldc, float * work, int * info);
void dgemqrt_(char * side, char * trans, int * m, int * n, int * k, int * nb, double const * v, int * ldv, double const * t, int * ldt, double * c, int * ldc, double * work, int * info);
void cgemqrt_(char * side, char * trans, int * m, int * n, int * k, int * nb, float _Complex const * v, int * ldv, float _Complex const * t, int * ldt, float _Complex * c, int * ldc, float _Complex * work, int * info);
void zgemqrt_(char * side, char * trans, int * m, int * n, int * k, int * nb, double _Complex const * v, int * ldv, double _Complex const * t, int * ldt, double _Complex * c, int * ldc, double _Complex * work, int * info);
void sgeqrt_(int * m, int * n, int * nb, float * a, int * lda, float * t, int * ldt, float * work, int * info);
void dgeqrt_(int * m, int * n, int * nb, double * a, int * lda, double * t, int * ldt, double * work, int * info);
void cgeqrt_(int * m, int * n, int * nb, float _Complex * a, int * lda, float _Complex * t, int * ldt, float _Complex * work, int * info);
void zgeqrt_(int * m, int * n, int * nb, double _Complex * a, int * lda, double _Complex * t, int * ldt, double _Complex * work, int * info);
void sgeqrt2_(int * m, int * n, float * a, int * lda, float * t, int * ldt, int * info);
void dgeqrt2_(int * m, int * n, double * a, int * lda, double * t, int * ldt, int * info);
void cgeqrt2_(int * m, int * n, float _Complex * a, int * lda, float _Complex * t, int * ldt, int * info);
void zgeqrt2_(int * m, int * n, double _Complex * a, int * lda, double _Complex * t, int * ldt, int * info);
void sgeqrt3_(int * m, int * n, float * a, int * lda, float * t, int * ldt, int * info);
void dgeqrt3_(int * m, int * n, double * a, int * lda, double * t, int * ldt, int * info);
void cgeqrt3_(int * m, int * n, float _Complex * a, int * lda, float _Complex * t, int * ldt, int * info);
void zgeqrt3_(int * m, int * n, double _Complex * a, int * lda, double _Complex * t, int * ldt, int * info);
void stpmqrt_(char * side, char * trans, int * m, int * n, int * k, int * l, int * nb, float const * v, int * ldv, float const * t, int * ldt, float * a, int * lda, float * b, int * ldb, float * work, int * info);
void dtpmqrt_(char * side, char * trans, int * m, int * n, int * k, int * l, int * nb, double const * v, int * ldv, double const * t, int * ldt, double * a, int * lda, double * b, int * ldb, double * work, int * info);
void ctpmqrt_(char * side, char * trans, int * m, int * n, int * k, int * l, int * nb, float _Complex const * v, int * ldv, float _Complex const * t, int * ldt, float _Complex * a, int * lda, float _Complex * b, int * ldb, float _Complex * work, int * info);
void ztpmqrt_(char * side, char * trans, int * m, int * n, int * k, int * l, int * nb, double _Complex const * v, int * ldv, double _Complex const * t, int * ldt, double _Complex * a, int * lda, double _Complex * b, int * ldb, double _Complex * work, int * info);
void dtpqrt_(int * m, int * n, int * l, int * nb, double * a, int * lda, double * b, int * ldb, double * t, int * ldt, double * work, int * info);
void ctpqrt_(int * m, int * n, int * l, int * nb, float _Complex * a, int * lda, float _Complex * b, int * ldb, float _Complex * t, int * ldt, float _Complex * work, int * info);
void ztpqrt_(int * m, int * n, int * l, int * nb, double _Complex * a, int * lda, double _Complex * b, int * ldb, double _Complex * t, int * ldt, double _Complex * work, int * info);
void stpqrt2_(int * m, int * n, int * l, float * a, int * lda, float * b, int * ldb, float * t, int * ldt, int * info);
void dtpqrt2_(int * m, int * n, int * l, double * a, int * lda, double * b, int * ldb, double * t, int * ldt, int * info);
void ctpqrt2_(int * m, int * n, int * l, float _Complex * a, int * lda, float _Complex * b, int * ldb, float _Complex * t, int * ldt, int * info);
void ztpqrt2_(int * m, int * n, int * l, double _Complex * a, int * lda, double _Complex * b, int * ldb, double _Complex * t, int * ldt, int * info);
void stprfb_(char * side, char * trans, char * direct, char * storev, int * m, int * n, int * k, int * l, float const * v, int * ldv, float const * t, int * ldt, float * a, int * lda, float * b, int * ldb, float const * work, int * ldwork);
void dtprfb_(char * side, char * trans, char * direct, char * storev, int * m, int * n, int * k, int * l, double const * v, int * ldv, double const * t, int * ldt, double * a, int * lda, double * b, int * ldb, double const * work, int * ldwork);
void ctprfb_(char * side, char * trans, char * direct, char * storev, int * m, int * n, int * k, int * l, float _Complex const * v, int * ldv, float _Complex const * t, int * ldt, float _Complex * a, int * lda, float _Complex * b, int * ldb, float const * work, int * ldwork);
void ztprfb_(char * side, char * trans, char * direct, char * storev, int * m, int * n, int * k, int * l, double _Complex const * v, int * ldv, double _Complex const * t, int * ldt, double _Complex * a, int * lda, double _Complex * b, int * ldb, double const * work, int * ldwork);
void ssysv_rook_(char * uplo, int * n, int * nrhs, float * a, int * lda, int * ipiv, float * b, int * ldb, float * work, int * lwork, int * info);
void dsysv_rook_(char * uplo, int * n, int * nrhs, double * a, int * lda, int * ipiv, double * b, int * ldb, double * work, int * lwork, int * info);
void csysv_rook_(char * uplo, int * n, int * nrhs, float _Complex * a, int * lda, int * ipiv, float _Complex * b, int * ldb, float _Complex * work, int * lwork, int * info);
void zsysv_rook_(char * uplo, int * n, int * nrhs, double _Complex * a, int * lda, int * ipiv, double _Complex * b, int * ldb, double _Complex * work, int * lwork, int * info);
void csyr_(char * uplo, int * n, float _Complex * alpha, float _Complex const * x, int * incx, float _Complex * a, int * lda);
void zsyr_(char * uplo, int * n, double _Complex * alpha, double _Complex const * x, int * incx, double _Complex * a, int * lda);
void ilaver_(int const * vers_major, int const * vers_minor, int const * vers_patch);
# 34 "/home/ymlusr/local/var/yml/dr/binaries/sousEspace.c"
int main_sousEspace(int argc, char * * argv)
{
{
# 38 "/home/ymlusr/local/var/yml/dr/binaries/sousEspace.c"
extern double * _XMP_ADDR_c;
# 39 "/home/ymlusr/local/var/yml/dr/binaries/sousEspace.c"
type_import((void * )(_XMP_ADDR_c), *(argv + (1)), vector_MPI_Type, vector_import, "6;1,1;1,1;[i]:(*,i)");
}
{
extern double gettimeofday_sec();
# 43 "/home/ymlusr/local/var/yml/dr/binaries/sousEspace.c"
extern double _xmp_etime_body;
# 44 "/home/ymlusr/local/var/yml/dr/binaries/sousEspace.c"
double _xmp_t0;
# 45 "/home/ymlusr/local/var/yml/dr/binaries/sousEspace.c"
MPI_Barrier((struct ompi_communicator_t * )((void * )(&(ompi_mpi_comm_world))));
# 46 "/home/ymlusr/local/var/yml/dr/binaries/sousEspace.c"
_xmp_t0 = (gettimeofday_sec());
{
# 50 "/home/ymlusr/local/var/yml/dr/binaries/sousEspace.c"
int n = 6;
# 50 "/home/ymlusr/local/var/yml/dr/binaries/sousEspace.c"
int m = 3;
# 51 "/home/ymlusr/local/var/yml/dr/binaries/sousEspace.c"
double M[m][m];
# 53 "/home/ymlusr/local/var/yml/dr/binaries/sousEspace.c"
double H[m][m];
# 54 "/home/ymlusr/local/var/yml/dr/binaries/sousEspace.c"
double delta1[m][m];
# 55 "/home/ymlusr/local/var/yml/dr/binaries/sousEspace.c"
double BmCm[m][m];
# 57 "/home/ymlusr/local/var/yml/dr/binaries/sousEspace.c"
double * b = malloc(m * (sizeof(double)));
# 58 "/home/ymlusr/local/var/yml/dr/binaries/sousEspace.c"
double * M_l = malloc((m * m) * (sizeof(double)));
# 59 "/home/ymlusr/local/var/yml/dr/binaries/sousEspace.c"
int * ind1 = malloc(m * (sizeof(int)));
# 62 "/home/ymlusr/local/var/yml/dr/binaries/sousEspace.c"
double * wr = malloc(m * (sizeof(double)));
# 63 "/home/ymlusr/local/var/yml/dr/binaries/sousEspace.c"
double * wi = malloc(m * (sizeof(double)));
# 64 "/home/ymlusr/local/var/yml/dr/binaries/sousEspace.c"
double * vr = malloc((m * m) * (sizeof(double)));
# 65 "/home/ymlusr/local/var/yml/dr/binaries/sousEspace.c"
double * wr1 = malloc(m * (sizeof(double)));
# 66 "/home/ymlusr/local/var/yml/dr/binaries/sousEspace.c"
double * wi1 = malloc(m * (sizeof(double)));
# 67 "/home/ymlusr/local/var/yml/dr/binaries/sousEspace.c"
double * vr1 = malloc((m * m) * (sizeof(double)));
# 68 "/home/ymlusr/local/var/yml/dr/binaries/sousEspace.c"
double sum = 0.0;
# 69 "/home/ymlusr/local/var/yml/dr/binaries/sousEspace.c"
double aide;
# 69 "/home/ymlusr/local/var/yml/dr/binaries/sousEspace.c"
double max = 0.0;
# 70 "/home/ymlusr/local/var/yml/dr/binaries/sousEspace.c"
int PMAX;
# 70 "/home/ymlusr/local/var/yml/dr/binaries/sousEspace.c"
int p;
{
# 75 "/home/ymlusr/local/var/yml/dr/binaries/sousEspace.c"
int i;
# 75 "/home/ymlusr/local/var/yml/dr/binaries/sousEspace.c"
for(i = (0); i < m; i++) {
{
{
# 76 "/home/ymlusr/local/var/yml/dr/binaries/sousEspace.c"
int j;
# 76 "/home/ymlusr/local/var/yml/dr/binaries/sousEspace.c"
for(j = (0); j < m; j++) {
{
# 77 "/home/ymlusr/local/var/yml/dr/binaries/sousEspace.c"
(M[i][j]) = (*(_XMP_M_GET_ADDR_E_1(_XMP_ADDR_c, _XMP_M_CALC_INDEX_BLOCK(j + i, _XMP_GTOL_temp0_c_0))));
}
}
}
}
}
}
{
void * _XMP_TASK_desc0 = (void * )(0);
if(_XMP_exec_task_NODES_PART(&(_XMP_TASK_desc0), _XMP_DESC__XMP_default_nodes, (int)(0), (int)(1), (int)(1), (int)(1), (int)(0), (int)(1), (int)(1), (int)(1))) {
# 80 "/home/ymlusr/local/var/yml/dr/binaries/sousEspace.c"
printf("mat M:\n");
{
# 81 "/home/ymlusr/local/var/yml/dr/binaries/sousEspace.c"
int i;
# 81 "/home/ymlusr/local/var/yml/dr/binaries/sousEspace.c"
for(i = (0); i < m; i++) {
{
# 82 "/home/ymlusr/local/var/yml/dr/binaries/sousEspace.c"
printf("\n");
{
# 83 "/home/ymlusr/local/var/yml/dr/binaries/sousEspace.c"
int j;
# 83 "/home/ymlusr/local/var/yml/dr/binaries/sousEspace.c"
for(j = (0); j < m; j++) {
{
# 84 "/home/ymlusr/local/var/yml/dr/binaries/sousEspace.c"
printf(" %f \t", M[i][j]);
}
}
}
}
}
}
# 86 "/home/ymlusr/local/var/yml/dr/binaries/sousEspace.c"
printf("\n");
_XMP_pop_nodes();
}
_XMP_exec_task_NODES_FINALIZE(_XMP_TASK_desc0);
}
{
# 89 "/home/ymlusr/local/var/yml/dr/binaries/sousEspace.c"
int i;
# 89 "/home/ymlusr/local/var/yml/dr/binaries/sousEspace.c"
for(i = (0); i < m; i++) {
{
# 90 "/home/ymlusr/local/var/yml/dr/binaries/sousEspace.c"
(*(b + i)) = (-(*(_XMP_M_GET_ADDR_E_1(_XMP_ADDR_c, _XMP_M_CALC_INDEX_BLOCK(i + m, _XMP_GTOL_temp0_c_0)))));
}
}
}
{
# 97 "/home/ymlusr/local/var/yml/dr/binaries/sousEspace.c"
int i;
# 97 "/home/ymlusr/local/var/yml/dr/binaries/sousEspace.c"
for(i = (0); i < m; i++) {
{
{
# 98 "/home/ymlusr/local/var/yml/dr/binaries/sousEspace.c"
int j;
# 98 "/home/ymlusr/local/var/yml/dr/binaries/sousEspace.c"
for(j = (0); j < m; j++) {
{
# 99 "/home/ymlusr/local/var/yml/dr/binaries/sousEspace.c"
(*(M_l + ((j * m) + i))) = (M[i][j]);
}
}
}
}
}
}
{
# 110 "/home/ymlusr/local/var/yml/dr/binaries/sousEspace.c"
int lda = m;
# 110 "/home/ymlusr/local/var/yml/dr/binaries/sousEspace.c"
int info = 0;
# 110 "/home/ymlusr/local/var/yml/dr/binaries/sousEspace.c"
int NRHS = 1;
# 112 "/home/ymlusr/local/var/yml/dr/binaries/sousEspace.c"
int * tab = calloc(m * m, sizeof(int));
# 115 "/home/ymlusr/local/var/yml/dr/binaries/sousEspace.c"
dgetrf_(&(m), &(m), M_l, &(lda), tab, &(info));
{
# 119 "/home/ymlusr/local/var/yml/dr/binaries/sousEspace.c"
char trans = (char)78;
# 119 "/home/ymlusr/local/var/yml/dr/binaries/sousEspace.c"
int ldb = m;
# 121 "/home/ymlusr/local/var/yml/dr/binaries/sousEspace.c"
dgetrs_(&(trans), &(m), &(NRHS), M_l, &(lda), tab, b, &(ldb), &(info));
# 122 "/home/ymlusr/local/var/yml/dr/binaries/sousEspace.c"
free(tab);
{
void * _XMP_TASK_desc1 = (void * )(0);
if(_XMP_exec_task_NODES_PART(&(_XMP_TASK_desc1), _XMP_DESC__XMP_default_nodes, (int)(0), (int)(1), (int)(1), (int)(1), (int)(0), (int)(1), (int)(1), (int)(1))) {
# 124 "/home/ymlusr/local/var/yml/dr/binaries/sousEspace.c"
printf("\nsolution:\n");
{
# 125 "/home/ymlusr/local/var/yml/dr/binaries/sousEspace.c"
int i;
# 125 "/home/ymlusr/local/var/yml/dr/binaries/sousEspace.c"
for(i = (0); i < m; i++) {
{
# 125 "/home/ymlusr/local/var/yml/dr/binaries/sousEspace.c"
printf(" %f \t", *(b + i));
}
}
}
# 126 "/home/ymlusr/local/var/yml/dr/binaries/sousEspace.c"
printf("\n");
_XMP_pop_nodes();
}
_XMP_exec_task_NODES_FINALIZE(_XMP_TASK_desc1);
}
{
void * _XMP_TASK_desc2 = (void * )(0);
if(_XMP_exec_task_NODES_PART(&(_XMP_TASK_desc2), _XMP_DESC__XMP_default_nodes, (int)(0), (int)(1), (int)(1), (int)(1), (int)(0), (int)(1), (int)(1), (int)(1))) {
{
# 132 "/home/ymlusr/local/var/yml/dr/binaries/sousEspace.c"
int i;
# 132 "/home/ymlusr/local/var/yml/dr/binaries/sousEspace.c"
for(i = (0); i < m; i++) {
{
{
# 133 "/home/ymlusr/local/var/yml/dr/binaries/sousEspace.c"
int j;
# 133 "/home/ymlusr/local/var/yml/dr/binaries/sousEspace.c"
for(j = (0); j < m; j++) {
{
# 134 "/home/ymlusr/local/var/yml/dr/binaries/sousEspace.c"
(H[i][j]) = (0.0);
# 135 "/home/ymlusr/local/var/yml/dr/binaries/sousEspace.c"
if(i == (j + (1))) {
# 135 "/home/ymlusr/local/var/yml/dr/binaries/sousEspace.c"
(H[i][j]) = (1);
}
}
}
}
}
}
}
{
# 137 "/home/ymlusr/local/var/yml/dr/binaries/sousEspace.c"
int j;
# 137 "/home/ymlusr/local/var/yml/dr/binaries/sousEspace.c"
for(j = (0); j < m; j++) {
{
# 137 "/home/ymlusr/local/var/yml/dr/binaries/sousEspace.c"
(H[0][j]) = (-(*(b + ((m - j) - (1)))));
}
}
}
# 140 "/home/ymlusr/local/var/yml/dr/binaries/sousEspace.c"
printf("mat H:\n");
{
# 142 "/home/ymlusr/local/var/yml/dr/binaries/sousEspace.c"
int i;
# 142 "/home/ymlusr/local/var/yml/dr/binaries/sousEspace.c"
for(i = (0); i < m; i++) {
{
# 142 "/home/ymlusr/local/var/yml/dr/binaries/sousEspace.c"
printf("\n");
{
# 143 "/home/ymlusr/local/var/yml/dr/binaries/sousEspace.c"
int j;
# 143 "/home/ymlusr/local/var/yml/dr/binaries/sousEspace.c"
for(j = (0); j < m; j++) {
{
# 144 "/home/ymlusr/local/var/yml/dr/binaries/sousEspace.c"
printf(" %f \t", H[i][j]);
}
}
}
}
}
}
# 145 "/home/ymlusr/local/var/yml/dr/binaries/sousEspace.c"
printf("\n");
{
# 147 "/home/ymlusr/local/var/yml/dr/binaries/sousEspace.c"
int i;
# 147 "/home/ymlusr/local/var/yml/dr/binaries/sousEspace.c"
for(i = (0); i < m; i++) {
{
{
# 148 "/home/ymlusr/local/var/yml/dr/binaries/sousEspace.c"
int j;
# 148 "/home/ymlusr/local/var/yml/dr/binaries/sousEspace.c"
for(j = (0); j < m; j++) {
{
# 149 "/home/ymlusr/local/var/yml/dr/binaries/sousEspace.c"
(*(M_l + ((j * m) + i))) = (H[i][j]);
}
}
}
}
}
}
# 151 "/home/ymlusr/local/var/yml/dr/binaries/sousEspace.c"
printf("\nmat H_l:\n");
{
# 153 "/home/ymlusr/local/var/yml/dr/binaries/sousEspace.c"
int i;
# 153 "/home/ymlusr/local/var/yml/dr/binaries/sousEspace.c"
for(i = (0); i < (m * m); i++) {
{
# 154 "/home/ymlusr/local/var/yml/dr/binaries/sousEspace.c"
printf(" %f \t", *(M_l + i));
}
}
}
_XMP_pop_nodes();
}
_XMP_exec_task_NODES_FINALIZE(_XMP_TASK_desc2);
}
{
void * _XMP_TASK_desc3 = (void * )(0);
if(_XMP_exec_task_NODES_PART(&(_XMP_TASK_desc3), _XMP_DESC__XMP_default_nodes, (int)(0), (int)(1), (int)(1), (int)(1), (int)(0), (int)(1), (int)(1), (int)(1))) {
# 159 "/home/ymlusr/local/var/yml/dr/binaries/sousEspace.c"
char balanc = (char)66;
# 160 "/home/ymlusr/local/var/yml/dr/binaries/sousEspace.c"
char jobvl = (char)78;
# 161 "/home/ymlusr/local/var/yml/dr/binaries/sousEspace.c"
char jobvr = (char)86;
# 162 "/home/ymlusr/local/var/yml/dr/binaries/sousEspace.c"
char sense = (char)86;
# 163 "/home/ymlusr/local/var/yml/dr/binaries/sousEspace.c"
int ldvl = m;
# 164 "/home/ymlusr/local/var/yml/dr/binaries/sousEspace.c"
int ldb;
# 165 "/home/ymlusr/local/var/yml/dr/binaries/sousEspace.c"
ldb = m;
{
# 166 "/home/ymlusr/local/var/yml/dr/binaries/sousEspace.c"
double * vl = calloc(ldvl * m, sizeof(double));
# 167 "/home/ymlusr/local/var/yml/dr/binaries/sousEspace.c"
int ldvr = m;
# 168 "/home/ymlusr/local/var/yml/dr/binaries/sousEspace.c"
int ilo = 0;
# 168 "/home/ymlusr/local/var/yml/dr/binaries/sousEspace.c"
int ihi = 0;
# 169 "/home/ymlusr/local/var/yml/dr/binaries/sousEspace.c"
double * scale = calloc(m, sizeof(double));
# 170 "/home/ymlusr/local/var/yml/dr/binaries/sousEspace.c"
double abnrm = 0.;
# 171 "/home/ymlusr/local/var/yml/dr/binaries/sousEspace.c"
double * rconde = calloc(m, sizeof(double));
# 172 "/home/ymlusr/local/var/yml/dr/binaries/sousEspace.c"
double * rcondv = calloc(m, sizeof(double));
# 173 "/home/ymlusr/local/var/yml/dr/binaries/sousEspace.c"
int * iwork = calloc(((2) * m) - (2), sizeof(int));
# 174 "/home/ymlusr/local/var/yml/dr/binaries/sousEspace.c"
double wkopt = 0.;
# 175 "/home/ymlusr/local/var/yml/dr/binaries/sousEspace.c"
int lwork = -(1);
# 176 "/home/ymlusr/local/var/yml/dr/binaries/sousEspace.c"
int info;
# 176 "/home/ymlusr/local/var/yml/dr/binaries/sousEspace.c"
dgeevx_(&(balanc), &(jobvl), &(jobvr), &(sense), &(m), M_l, &(ldb), wr, wi, vl, &(ldvl), vr, &(ldvr), &(ilo), &(ihi), scale, &(abnrm), rconde, rcondv, &(wkopt), &(lwork), iwork, &(info));
# 177 "/home/ymlusr/local/var/yml/dr/binaries/sousEspace.c"
lwork = ((int)(wkopt));
{
# 178 "/home/ymlusr/local/var/yml/dr/binaries/sousEspace.c"
double * work = calloc(lwork, sizeof(double));
# 178 "/home/ymlusr/local/var/yml/dr/binaries/sousEspace.c"
dgeevx_(&(balanc), &(jobvl), &(jobvr), &(sense), &(m), M_l, &(ldb), wr, wi, vl, &(ldvl), vr, &(ldvr), &(ilo), &(ihi), scale, &(abnrm), rconde, rcondv, work, &(lwork), iwork, &(info));
# 179 "/home/ymlusr/local/var/yml/dr/binaries/sousEspace.c"
if(info > (0)) {
# 180 "/home/ymlusr/local/var/yml/dr/binaries/sousEspace.c"
printf("Erreur: Valeurs et vecteurs propres non calcul\xc3\xa9s.\n");
# 181 "/home/ymlusr/local/var/yml/dr/binaries/sousEspace.c"
exit(1);
}
# 183 "/home/ymlusr/local/var/yml/dr/binaries/sousEspace.c"
free(vl);
# 183 "/home/ymlusr/local/var/yml/dr/binaries/sousEspace.c"
free(scale);
# 183 "/home/ymlusr/local/var/yml/dr/binaries/sousEspace.c"
free(rconde);
# 183 "/home/ymlusr/local/var/yml/dr/binaries/sousEspace.c"
free(rcondv);
# 183 "/home/ymlusr/local/var/yml/dr/binaries/sousEspace.c"
free(iwork);
# 183 "/home/ymlusr/local/var/yml/dr/binaries/sousEspace.c"
free(work);
}
}
_XMP_pop_nodes();
}
_XMP_exec_task_NODES_FINALIZE(_XMP_TASK_desc3);
}
{
void * _XMP_TASK_desc4 = (void * )(0);
if(_XMP_exec_task_NODES_PART(&(_XMP_TASK_desc4), _XMP_DESC__XMP_default_nodes, (int)(0), (int)(1), (int)(1), (int)(1), (int)(0), (int)(1), (int)(1), (int)(1))) {
{
# 189 "/home/ymlusr/local/var/yml/dr/binaries/sousEspace.c"
int i;
# 189 "/home/ymlusr/local/var/yml/dr/binaries/sousEspace.c"
for(i = (0); i < m; i++) {
{
{
# 190 "/home/ymlusr/local/var/yml/dr/binaries/sousEspace.c"
int j;
# 190 "/home/ymlusr/local/var/yml/dr/binaries/sousEspace.c"
for(j = (0); j < m; j++) {
{
# 191 "/home/ymlusr/local/var/yml/dr/binaries/sousEspace.c"
(delta1[i][j]) = (*(_XMP_M_GET_ADDR_E_1(_XMP_ADDR_c, _XMP_M_CALC_INDEX_BLOCK((j + i) + (1), _XMP_GTOL_temp0_c_0))));
}
}
}
}
}
}
# 193 "/home/ymlusr/local/var/yml/dr/binaries/sousEspace.c"
printf("mat delta:\n");
{
# 194 "/home/ymlusr/local/var/yml/dr/binaries/sousEspace.c"
int i;
# 194 "/home/ymlusr/local/var/yml/dr/binaries/sousEspace.c"
for(i = (0); i < m; i++) {
{
# 195 "/home/ymlusr/local/var/yml/dr/binaries/sousEspace.c"
printf("\n");
{
# 196 "/home/ymlusr/local/var/yml/dr/binaries/sousEspace.c"
int j;
# 196 "/home/ymlusr/local/var/yml/dr/binaries/sousEspace.c"
for(j = (0); j < m; j++) {
{
# 197 "/home/ymlusr/local/var/yml/dr/binaries/sousEspace.c"
printf(" %f \t", delta1[i][j]);
}
}
}
}
}
}
# 199 "/home/ymlusr/local/var/yml/dr/binaries/sousEspace.c"
printf("\n");
{
# 202 "/home/ymlusr/local/var/yml/dr/binaries/sousEspace.c"
int i;
# 202 "/home/ymlusr/local/var/yml/dr/binaries/sousEspace.c"
for(i = (0); i < m; i++) {
{
{
# 203 "/home/ymlusr/local/var/yml/dr/binaries/sousEspace.c"
int j;
# 203 "/home/ymlusr/local/var/yml/dr/binaries/sousEspace.c"
for(j = (0); j < m; j++) {
{
# 204 "/home/ymlusr/local/var/yml/dr/binaries/sousEspace.c"
(*(M_l + ((j * m) + i))) = (M[i][j]);
}
}
}
}
}
}
# 206 "/home/ymlusr/local/var/yml/dr/binaries/sousEspace.c"
printf("\nmat Bm:\n");
{
# 208 "/home/ymlusr/local/var/yml/dr/binaries/sousEspace.c"
int i;
# 208 "/home/ymlusr/local/var/yml/dr/binaries/sousEspace.c"
for(i = (0); i < (m * m); i++) {
{
# 209 "/home/ymlusr/local/var/yml/dr/binaries/sousEspace.c"
printf(" %f \t", *(M_l + i));
}
}
}
{
# 211 "/home/ymlusr/local/var/yml/dr/binaries/sousEspace.c"
int lda1;
# 212 "/home/ymlusr/local/var/yml/dr/binaries/sousEspace.c"
lda1 = m;
{
# 213 "/home/ymlusr/local/var/yml/dr/binaries/sousEspace.c"
int lwork1 = m;
# 213 "/home/ymlusr/local/var/yml/dr/binaries/sousEspace.c"
int info1;
# 214 "/home/ymlusr/local/var/yml/dr/binaries/sousEspace.c"
double * work1 = malloc(m * (sizeof(double)));
# 215 "/home/ymlusr/local/var/yml/dr/binaries/sousEspace.c"
int * ipiv1 = malloc(m * (sizeof(int)));
# 216 "/home/ymlusr/local/var/yml/dr/binaries/sousEspace.c"
dgetrf_(&(m), &(m), M_l, &(lda1), ipiv1, &(info1));
# 218 "/home/ymlusr/local/var/yml/dr/binaries/sousEspace.c"
dgetri_(&(m), M_l, &(lda1), ipiv1, work1, &(lwork1), &(info1));
# 220 "/home/ymlusr/local/var/yml/dr/binaries/sousEspace.c"
free(work1);
# 220 "/home/ymlusr/local/var/yml/dr/binaries/sousEspace.c"
free(ipiv1);
# 221 "/home/ymlusr/local/var/yml/dr/binaries/sousEspace.c"
printf("\nmat M_l inv:\n");
{
# 223 "/home/ymlusr/local/var/yml/dr/binaries/sousEspace.c"
int i;
# 223 "/home/ymlusr/local/var/yml/dr/binaries/sousEspace.c"
for(i = (0); i < (m * m); i++) {
{
# 224 "/home/ymlusr/local/var/yml/dr/binaries/sousEspace.c"
printf(" %f \t", *(M_l + i));
}
}
}
{
# 226 "/home/ymlusr/local/var/yml/dr/binaries/sousEspace.c"
int j;
# 226 "/home/ymlusr/local/var/yml/dr/binaries/sousEspace.c"
for(j = (0); j < m; j++) {
{
{
# 227 "/home/ymlusr/local/var/yml/dr/binaries/sousEspace.c"
int k;
# 227 "/home/ymlusr/local/var/yml/dr/binaries/sousEspace.c"
for(k = (0); k < m; k++) {
{
# 228 "/home/ymlusr/local/var/yml/dr/binaries/sousEspace.c"
(M[k][j]) = (*(M_l + ((j * m) + k)));
}
}
}
}
}
}
# 231 "/home/ymlusr/local/var/yml/dr/binaries/sousEspace.c"
printf("mat delta:\n");
{
# 232 "/home/ymlusr/local/var/yml/dr/binaries/sousEspace.c"
int i;
# 232 "/home/ymlusr/local/var/yml/dr/binaries/sousEspace.c"
for(i = (0); i < m; i++) {
{
# 233 "/home/ymlusr/local/var/yml/dr/binaries/sousEspace.c"
printf("\n");
{
# 234 "/home/ymlusr/local/var/yml/dr/binaries/sousEspace.c"
int j;
# 234 "/home/ymlusr/local/var/yml/dr/binaries/sousEspace.c"
for(j = (0); j < m; j++) {
{
# 235 "/home/ymlusr/local/var/yml/dr/binaries/sousEspace.c"
printf(" %f \t", delta1[i][j]);
}
}
}
}
}
}
# 237 "/home/ymlusr/local/var/yml/dr/binaries/sousEspace.c"
printf("\n");
{
# 239 "/home/ymlusr/local/var/yml/dr/binaries/sousEspace.c"
int i;
# 239 "/home/ymlusr/local/var/yml/dr/binaries/sousEspace.c"
for(i = (0); i < m; i++) {
{
{
# 240 "/home/ymlusr/local/var/yml/dr/binaries/sousEspace.c"
int j;
# 240 "/home/ymlusr/local/var/yml/dr/binaries/sousEspace.c"
for(j = (0); j < m; j++) {
{
# 241 "/home/ymlusr/local/var/yml/dr/binaries/sousEspace.c"
(BmCm[i][j]) = (0);
{
# 242 "/home/ymlusr/local/var/yml/dr/binaries/sousEspace.c"
int k;
# 242 "/home/ymlusr/local/var/yml/dr/binaries/sousEspace.c"
for(k = (0); k < m; k++) {
{
# 243 "/home/ymlusr/local/var/yml/dr/binaries/sousEspace.c"
(BmCm[i][j]) = ((BmCm[i][j]) + ((M[i][k]) * (delta1[k][j])));
}
}
}
}
}
}
}
}
}
# 246 "/home/ymlusr/local/var/yml/dr/binaries/sousEspace.c"
printf("mat BMCM:\n");
{
# 247 "/home/ymlusr/local/var/yml/dr/binaries/sousEspace.c"
int i;
# 247 "/home/ymlusr/local/var/yml/dr/binaries/sousEspace.c"
for(i = (0); i < m; i++) {
{
# 248 "/home/ymlusr/local/var/yml/dr/binaries/sousEspace.c"
printf("\n");
{
# 249 "/home/ymlusr/local/var/yml/dr/binaries/sousEspace.c"
int j;
# 249 "/home/ymlusr/local/var/yml/dr/binaries/sousEspace.c"
for(j = (0); j < m; j++) {
{
# 250 "/home/ymlusr/local/var/yml/dr/binaries/sousEspace.c"
printf(" %f \t", BmCm[i][j]);
}
}
}
}
}
}
# 252 "/home/ymlusr/local/var/yml/dr/binaries/sousEspace.c"
printf("\n");
{
# 254 "/home/ymlusr/local/var/yml/dr/binaries/sousEspace.c"
int i;
# 254 "/home/ymlusr/local/var/yml/dr/binaries/sousEspace.c"
for(i = (0); i < m; i++) {
{
{
# 255 "/home/ymlusr/local/var/yml/dr/binaries/sousEspace.c"
int j;
# 255 "/home/ymlusr/local/var/yml/dr/binaries/sousEspace.c"
for(j = (0); j < m; j++) {
{
# 256 "/home/ymlusr/local/var/yml/dr/binaries/sousEspace.c"
(*(M_l + ((j * m) + i))) = (BmCm[i][j]);
}
}
}
}
}
}
{
# 259 "/home/ymlusr/local/var/yml/dr/binaries/sousEspace.c"
char balanc = (char)66;
# 260 "/home/ymlusr/local/var/yml/dr/binaries/sousEspace.c"
char jobvl = (char)78;
# 261 "/home/ymlusr/local/var/yml/dr/binaries/sousEspace.c"
char jobvr = (char)86;
# 262 "/home/ymlusr/local/var/yml/dr/binaries/sousEspace.c"
char sense = (char)86;
# 263 "/home/ymlusr/local/var/yml/dr/binaries/sousEspace.c"
int ldvl = m;
# 264 "/home/ymlusr/local/var/yml/dr/binaries/sousEspace.c"
int ldb;
# 265 "/home/ymlusr/local/var/yml/dr/binaries/sousEspace.c"
ldb = m;
{
# 266 "/home/ymlusr/local/var/yml/dr/binaries/sousEspace.c"
double * vl = calloc(ldvl * m, sizeof(double));
# 267 "/home/ymlusr/local/var/yml/dr/binaries/sousEspace.c"
int ldvr = m;
# 268 "/home/ymlusr/local/var/yml/dr/binaries/sousEspace.c"
int ilo = 0;
# 268 "/home/ymlusr/local/var/yml/dr/binaries/sousEspace.c"
int ihi = 0;
# 269 "/home/ymlusr/local/var/yml/dr/binaries/sousEspace.c"
double * scale = calloc(m, sizeof(double));
# 270 "/home/ymlusr/local/var/yml/dr/binaries/sousEspace.c"
double abnrm = 0.;
# 271 "/home/ymlusr/local/var/yml/dr/binaries/sousEspace.c"
double * rconde = calloc(m, sizeof(double));
# 272 "/home/ymlusr/local/var/yml/dr/binaries/sousEspace.c"
double * rcondv = calloc(m, sizeof(double));
# 273 "/home/ymlusr/local/var/yml/dr/binaries/sousEspace.c"
int * iwork = calloc(((2) * m) - (2), sizeof(int));
# 274 "/home/ymlusr/local/var/yml/dr/binaries/sousEspace.c"
double wkopt = 0.;
# 275 "/home/ymlusr/local/var/yml/dr/binaries/sousEspace.c"
int lwork = -(1);
# 276 "/home/ymlusr/local/var/yml/dr/binaries/sousEspace.c"
int info;
# 276 "/home/ymlusr/local/var/yml/dr/binaries/sousEspace.c"
dgeevx_(&(balanc), &(jobvl), &(jobvr), &(sense), &(m), M_l, &(ldb), wr1, wi1, vl, &(ldvl), vr1, &(ldvr), &(ilo), &(ihi), scale, &(abnrm), rconde, rcondv, &(wkopt), &(lwork), iwork, &(info));
# 277 "/home/ymlusr/local/var/yml/dr/binaries/sousEspace.c"
lwork = ((int)(wkopt));
{
# 278 "/home/ymlusr/local/var/yml/dr/binaries/sousEspace.c"
double * work = calloc(lwork, sizeof(double));
# 278 "/home/ymlusr/local/var/yml/dr/binaries/sousEspace.c"
dgeevx_(&(balanc), &(jobvl), &(jobvr), &(sense), &(m), M_l, &(ldb), wr1, wi1, vl, &(ldvl), vr1, &(ldvr), &(ilo), &(ihi), scale, &(abnrm), rconde, rcondv, work, &(lwork), iwork, &(info));
# 279 "/home/ymlusr/local/var/yml/dr/binaries/sousEspace.c"
if(info > (0)) {
# 280 "/home/ymlusr/local/var/yml/dr/binaries/sousEspace.c"
printf("Erreur: Valeurs et vecteurs propres non calcul\xc3\xa9s.\n");
# 281 "/home/ymlusr/local/var/yml/dr/binaries/sousEspace.c"
exit(1);
}
# 283 "/home/ymlusr/local/var/yml/dr/binaries/sousEspace.c"
free(vl);
# 283 "/home/ymlusr/local/var/yml/dr/binaries/sousEspace.c"
free(scale);
# 283 "/home/ymlusr/local/var/yml/dr/binaries/sousEspace.c"
free(rconde);
# 283 "/home/ymlusr/local/var/yml/dr/binaries/sousEspace.c"
free(rcondv);
# 283 "/home/ymlusr/local/var/yml/dr/binaries/sousEspace.c"
free(iwork);
# 283 "/home/ymlusr/local/var/yml/dr/binaries/sousEspace.c"
free(work);
{
# 287 "/home/ymlusr/local/var/yml/dr/binaries/sousEspace.c"
int i;
# 287 "/home/ymlusr/local/var/yml/dr/binaries/sousEspace.c"
for(i = (0); i < (m - (1)); i++) {
{
# 289 "/home/ymlusr/local/var/yml/dr/binaries/sousEspace.c"
PMAX = i;
{
# 290 "/home/ymlusr/local/var/yml/dr/binaries/sousEspace.c"
int j;
# 290 "/home/ymlusr/local/var/yml/dr/binaries/sousEspace.c"
for(j = (i + (1)); j < m; j++) {
{
# 291 "/home/ymlusr/local/var/yml/dr/binaries/sousEspace.c"
if((fabs(*(wr + j))) > (fabs(*(wr + PMAX)))) {
# 291 "/home/ymlusr/local/var/yml/dr/binaries/sousEspace.c"
PMAX = j;
}
}
}
}
# 293 "/home/ymlusr/local/var/yml/dr/binaries/sousEspace.c"
aide = (*(wr + i));
# 294 "/home/ymlusr/local/var/yml/dr/binaries/sousEspace.c"
(*(wr + i)) = (*(wr + PMAX));
# 295 "/home/ymlusr/local/var/yml/dr/binaries/sousEspace.c"
(*(wr + PMAX)) = aide;
}
}
}
{
# 298 "/home/ymlusr/local/var/yml/dr/binaries/sousEspace.c"
int j;
# 298 "/home/ymlusr/local/var/yml/dr/binaries/sousEspace.c"
for(j = (0); j < m; j++) {
{
# 298 "/home/ymlusr/local/var/yml/dr/binaries/sousEspace.c"
(*(_XMP_M_GET_ADDR_E_2(_XMP_ADDR_res, 0, _XMP_M_CALC_INDEX_BLOCK(j, _XMP_GTOL_temp0_res_1), _XMP_GTOL_acc_res_0))) = (*(wr + j));
}
}
}
# 300 "/home/ymlusr/local/var/yml/dr/binaries/sousEspace.c"
max = (0.0);
{
# 301 "/home/ymlusr/local/var/yml/dr/binaries/sousEspace.c"
int i;
# 301 "/home/ymlusr/local/var/yml/dr/binaries/sousEspace.c"
for(i = (0); i < m; i++) {
{
# 301 "/home/ymlusr/local/var/yml/dr/binaries/sousEspace.c"
(*(ind1 + i)) = i;
}
}
}
{
# 302 "/home/ymlusr/local/var/yml/dr/binaries/sousEspace.c"
int i;
# 302 "/home/ymlusr/local/var/yml/dr/binaries/sousEspace.c"
for(i = (0); i < (m - (1)); i++) {
{
# 304 "/home/ymlusr/local/var/yml/dr/binaries/sousEspace.c"
PMAX = i;
{
# 305 "/home/ymlusr/local/var/yml/dr/binaries/sousEspace.c"
int j;
# 305 "/home/ymlusr/local/var/yml/dr/binaries/sousEspace.c"
for(j = (i + (1)); j < m; j++) {
{
# 306 "/home/ymlusr/local/var/yml/dr/binaries/sousEspace.c"
if((fabs(*(wr1 + j))) > (fabs(*(wr1 + PMAX)))) {
# 306 "/home/ymlusr/local/var/yml/dr/binaries/sousEspace.c"
PMAX = j;
}
}
}
}
# 308 "/home/ymlusr/local/var/yml/dr/binaries/sousEspace.c"
aide = (*(wr1 + i));
# 309 "/home/ymlusr/local/var/yml/dr/binaries/sousEspace.c"
(*(wr1 + i)) = (*(wr1 + PMAX));
# 310 "/home/ymlusr/local/var/yml/dr/binaries/sousEspace.c"
(*(wr1 + PMAX)) = aide;
# 311 "/home/ymlusr/local/var/yml/dr/binaries/sousEspace.c"
p = (*(ind1 + i));
# 312 "/home/ymlusr/local/var/yml/dr/binaries/sousEspace.c"
(*(ind1 + i)) = (*(ind1 + PMAX));
# 313 "/home/ymlusr/local/var/yml/dr/binaries/sousEspace.c"
(*(ind1 + PMAX)) = p;
}
}
}
{
# 316 "/home/ymlusr/local/var/yml/dr/binaries/sousEspace.c"
int j;
# 316 "/home/ymlusr/local/var/yml/dr/binaries/sousEspace.c"
for(j = (0); j < m; j++) {
{
{
# 317 "/home/ymlusr/local/var/yml/dr/binaries/sousEspace.c"
int i;
# 317 "/home/ymlusr/local/var/yml/dr/binaries/sousEspace.c"
for(i = (1); i < (m + (1)); i++) {
{
# 318 "/home/ymlusr/local/var/yml/dr/binaries/sousEspace.c"
(*(_XMP_M_GET_ADDR_E_2(_XMP_ADDR_res, i, _XMP_M_CALC_INDEX_BLOCK(j, _XMP_GTOL_temp0_res_1), _XMP_GTOL_acc_res_0))) = (*(vr1 + ((((*(ind1 + j)) * m) + i) - (1))));
}
}
}
}
}
}
}
}
}
}
}
_XMP_pop_nodes();
}
_XMP_exec_task_NODES_FINALIZE(_XMP_TASK_desc4);
}
# 322 "/home/ymlusr/local/var/yml/dr/binaries/sousEspace.c"
printf("\nind \n");
{
# 323 "/home/ymlusr/local/var/yml/dr/binaries/sousEspace.c"
int i;
# 323 "/home/ymlusr/local/var/yml/dr/binaries/sousEspace.c"
for(i = (0); i < m; i++) {
{
# 324 "/home/ymlusr/local/var/yml/dr/binaries/sousEspace.c"
printf(" %d \t", *(ind1 + i));
}
}
}
# 326 "/home/ymlusr/local/var/yml/dr/binaries/sousEspace.c"
printf("\n wr1 \n");
{
# 327 "/home/ymlusr/local/var/yml/dr/binaries/sousEspace.c"
int i;
# 327 "/home/ymlusr/local/var/yml/dr/binaries/sousEspace.c"
for(i = (0); i < m; i++) {
{
# 328 "/home/ymlusr/local/var/yml/dr/binaries/sousEspace.c"
printf(" %f \t", *(wr1 + i));
}
}
}
# 330 "/home/ymlusr/local/var/yml/dr/binaries/sousEspace.c"
printf("\n res \n");
{
# 331 "/home/ymlusr/local/var/yml/dr/binaries/sousEspace.c"
int i;
# 331 "/home/ymlusr/local/var/yml/dr/binaries/sousEspace.c"
for(i = (0); i < (m + (1)); i++) {
{
# 332 "/home/ymlusr/local/var/yml/dr/binaries/sousEspace.c"
printf("\n");
{
# 333 "/home/ymlusr/local/var/yml/dr/binaries/sousEspace.c"
int j;
# 333 "/home/ymlusr/local/var/yml/dr/binaries/sousEspace.c"
for(j = (0); j < m; j++) {
{
# 334 "/home/ymlusr/local/var/yml/dr/binaries/sousEspace.c"
printf(" %f \t", *(_XMP_M_GET_ADDR_E_2(_XMP_ADDR_res, i, _XMP_M_CALC_INDEX_BLOCK(j, _XMP_GTOL_temp0_res_1), _XMP_GTOL_acc_res_0)));
}
}
}
}
}
}
# 337 "/home/ymlusr/local/var/yml/dr/binaries/sousEspace.c"
free(wr);
# 337 "/home/ymlusr/local/var/yml/dr/binaries/sousEspace.c"
free(wi);
# 337 "/home/ymlusr/local/var/yml/dr/binaries/sousEspace.c"
free(vr);
# 338 "/home/ymlusr/local/var/yml/dr/binaries/sousEspace.c"
free(wr1);
# 338 "/home/ymlusr/local/var/yml/dr/binaries/sousEspace.c"
free(wi1);
# 338 "/home/ymlusr/local/var/yml/dr/binaries/sousEspace.c"
free(vr1);
# 341 "/home/ymlusr/local/var/yml/dr/binaries/sousEspace.c"
free(b);
# 341 "/home/ymlusr/local/var/yml/dr/binaries/sousEspace.c"
free(M_l);
# 341 "/home/ymlusr/local/var/yml/dr/binaries/sousEspace.c"
free(ind1);
# 345 "/home/ymlusr/local/var/yml/dr/binaries/sousEspace.c"
MPI_Barrier((struct ompi_communicator_t * )((void * )(&(ompi_mpi_comm_world))));
# 346 "/home/ymlusr/local/var/yml/dr/binaries/sousEspace.c"
_xmp_etime_body = ((gettimeofday_sec()) - _xmp_t0);
}
}
}
}
{
{
# 351 "/home/ymlusr/local/var/yml/dr/binaries/sousEspace.c"
extern double * _XMP_ADDR_res;
# 352 "/home/ymlusr/local/var/yml/dr/binaries/sousEspace.c"
type_export((void * )(_XMP_ADDR_res), *(argv + (2)), Matrix_MPI_Type, Matrix_export, "4,6;1,1;1,1;[*][j]:(j,*)");
}
}
# 356 "/home/ymlusr/local/var/yml/dr/binaries/sousEspace.c"
return 0;
}
extern void xmpc_traverse_init_file__2f_home_2f_ymlusr_2f_local_2f_var_2f_yml_2f_dr_2f_binaries_2f_sousEspace_pp()
{
_XMP_init_nodes_STATIC_GLOBAL(&(_XMP_DESC__XMP_default_nodes), 2, (int)(1), (int)(1), (int * )(&(_XMP_NODES_RANK__XMP_default_nodes_0)), (int * )(&(_XMP_NODES_RANK__XMP_default_nodes_1)));
_XMP_init_template_FIXED(&(_XMP_DESC_t), 2, (long long)(0), (long long)(5), (long long)(0), (long long)(5));
_XMP_init_template_chunk(_XMP_DESC_t, _XMP_DESC__XMP_default_nodes);
_XMP_dist_template_BLOCK(_XMP_DESC_t, 0, 0);
_XMP_dist_template_BLOCK(_XMP_DESC_t, 1, 1);
_XMP_init_array_desc(&(_XMP_DESC_c), _XMP_DESC_t, 1, 514, sizeof(double), (int)(0x000000006ll));
_XMP_align_array_BLOCK(_XMP_DESC_c, 0, 1, 0, &(_XMP_GTOL_temp0_c_0));
_XMP_init_array_comm(_XMP_DESC_c, 1, 0);
_XMP_init_array_nodes(_XMP_DESC_c);
_XMP_init_array_desc(&(_XMP_DESC_res), _XMP_DESC_t, 2, 514, sizeof(double), (int)(0x000000004ll), (int)(0x000000006ll));
_XMP_align_array_NOT_ALIGNED(_XMP_DESC_res, 0);
_XMP_align_array_BLOCK(_XMP_DESC_res, 1, 0, 0, &(_XMP_GTOL_temp0_res_1));
_XMP_init_array_comm(_XMP_DESC_res, 0, 1);
_XMP_init_array_nodes(_XMP_DESC_res);
_XMP_alloc_array((void * * )(&(_XMP_ADDR_c)), _XMP_DESC_c, 1, (unsigned long long * )(&(_XMP_GTOL_acc_c_0)));
_XMP_alloc_array((void * * )(&(_XMP_ADDR_res)), _XMP_DESC_res, 1, (unsigned long long * )(&(_XMP_GTOL_acc_res_1)), (unsigned long long * )(&(_XMP_GTOL_acc_res_0)));
}
extern void xmpc_traverse_finalize_file__2f_home_2f_ymlusr_2f_local_2f_var_2f_yml_2f_dr_2f_binaries_2f_sousEspace_pp()
{
}
