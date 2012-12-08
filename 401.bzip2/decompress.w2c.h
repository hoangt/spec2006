/* Include builtin types and operators */
#include <whirl2c.h>

/* Types */
struct __va_list_tag {
    _UINT32 gp_offset;
    _UINT32 fp_offset;
    void * overflow_arg_area;
    void * reg_save_area;
  };
  struct _IO_marker {
      struct _IO_marker * _next;
      struct _IO_FILE * _sbuf;
      _INT32 _pos;
    };
    struct _IO_FILE {
    _INT32 _flags;
    _INT8 * _IO_read_ptr;
    _INT8 * _IO_read_end;
    _INT8 * _IO_read_base;
    _INT8 * _IO_write_base;
    _INT8 * _IO_write_ptr;
    _INT8 * _IO_write_end;
    _INT8 * _IO_buf_base;
    _INT8 * _IO_buf_end;
    _INT8 * _IO_save_base;
    _INT8 * _IO_backup_base;
    _INT8 * _IO_save_end;
    struct _IO_marker * _markers;
    struct _IO_FILE * _chain;
    _INT32 _fileno;
    _INT32 _flags2;
    _INT64 _old_offset;
    _UINT16 _cur_column;
    _INT8 _vtable_offset;
    _INT8 _shortbuf[1LL];
    void * _lock;
    _INT64 _offset;
    void * __pad1;
    void * __pad2;
    void * __pad3;
    void * __pad4;
    _UINT64 __pad5;
    _INT32 _mode;
    _INT8 _unused2[20LL];
  };
  struct anonymous_w2c_17 {
      _INT8 * next_in;
      _UINT32 avail_in;
      _UINT32 total_in_lo32;
      _UINT32 total_in_hi32;
      _INT8 * next_out;
      _UINT32 avail_out;
      _UINT32 total_out_lo32;
      _UINT32 total_out_hi32;
      void * state;
      void * (*bzalloc)(void *, _INT32, _INT32);
      void(*bzfree)(void *, void *);
      void * opaque;
    };
    struct anonymous_w2c_3 {
    struct anonymous_w2c_17 * strm;
    _INT32 state;
    _UINT8 state_out_ch;
    _INT32 state_out_len;
    _UINT8 blockRandomised;
    _INT32 rNToGo;
    _INT32 rTPos;
    _UINT32 bsBuff;
    _INT32 bsLive;
    _INT32 blockSize100k;
    _UINT8 smallDecompress;
    _INT32 currBlockNo;
    _INT32 verbosity;
    _INT32 origPtr;
    _UINT32 tPos;
    _INT32 k0;
    _INT32 unzftab[256LL];
    _INT32 nblock_used;
    _INT32 cftab[257LL];
    _INT32 cftabCopy[257LL];
    _UINT32 * tt;
    _UINT16 * ll16;
    _UINT8 * ll4;
    _UINT32 storedBlockCRC;
    _UINT32 storedCombinedCRC;
    _UINT32 calculatedBlockCRC;
    _UINT32 calculatedCombinedCRC;
    _INT32 nInUse;
    _UINT8 inUse[256LL];
    _UINT8 inUse16[16LL];
    _UINT8 seqToUnseq[256LL];
    _UINT8 mtfa[4096LL];
    _INT32 mtfbase[16LL];
    _UINT8 selector[18002LL];
    _UINT8 selectorMtf[18002LL];
    _UINT8 len[6LL][258LL];
    _INT32 limit[6LL][258LL];
    _INT32 base[6LL][258LL];
    _INT32 perm[6LL][258LL];
    _INT32 minLens[6LL];
    _INT32 save_i;
    _INT32 save_j;
    _INT32 save_t;
    _INT32 save_alphaSize;
    _INT32 save_nGroups;
    _INT32 save_nSelectors;
    _INT32 save_EOB;
    _INT32 save_groupNo;
    _INT32 save_groupPos;
    _INT32 save_nextSym;
    _INT32 save_nblockMAX;
    _INT32 save_nblock;
    _INT32 save_es;
    _INT32 save_N;
    _INT32 save_curr;
    _INT32 save_zt;
    _INT32 save_zn;
    _INT32 save_zvec;
    _INT32 save_zj;
    _INT32 save_gSel;
    _INT32 save_gMinlen;
    _INT32 * save_gLimit;
    _INT32 * save_gBase;
    _INT32 * save_gPerm;
  };
  /* File-level vars and routines */
extern __inline _IEEE64 strtod(const _INT8 * restrict, _INT8 ** restrict);

  extern _IEEE64 __strtod_internal(const _INT8 * restrict, _INT8 ** restrict, _INT32);

  extern __inline _INT64 strtol(const _INT8 * restrict, _INT8 ** restrict, _INT32);

  extern _INT64 __strtol_internal(const _INT8 * restrict, _INT8 ** restrict, _INT32, _INT32);

  extern __inline _UINT64 strtoul(const _INT8 * restrict, _INT8 ** restrict, _INT32);

  extern _UINT64 __strtoul_internal(const _INT8 * restrict, _INT8 ** restrict, _INT32, _INT32);

  extern __inline _INT64 strtoq(const _INT8 * restrict, _INT8 ** restrict, _INT32);

  extern _INT64 __strtoll_internal(const _INT8 * restrict, _INT8 ** restrict, _INT32, _INT32);

  extern __inline _UINT64 strtouq(const _INT8 * restrict, _INT8 ** restrict, _INT32);

  extern _UINT64 __strtoull_internal(const _INT8 * restrict, _INT8 ** restrict, _INT32, _INT32);

  extern __inline _INT64 strtoll(const _INT8 * restrict, _INT8 ** restrict, _INT32);

  extern __inline _UINT64 strtoull(const _INT8 * restrict, _INT8 ** restrict, _INT32);

  extern __inline _IEEE64 atof(const _INT8 *);

  extern __inline _INT32 atoi(const _INT8 *);

  extern __inline _INT64 atol(const _INT8 *);

  extern __inline _INT64 atoll(const _INT8 *);

  extern __inline _UINT32 gnu_dev_major(_UINT64);

  extern __inline _UINT32 gnu_dev_minor(_UINT64);

  extern __inline _UINT64 gnu_dev_makedev(_UINT32, _UINT32);

  extern __inline _INT32 vprintf(const _INT8 * restrict, struct __va_list_tag *);

  extern _INT32 vfprintf(struct _IO_FILE * restrict, const _INT8 * restrict, struct __va_list_tag *);

  extern struct _IO_FILE * stdout;

  extern __inline _INT32 getchar(void);

  extern _INT32 _IO_getc(struct _IO_FILE *);

  extern struct _IO_FILE * stdin;

  extern __inline _INT32 fgetc_unlocked(struct _IO_FILE *);

  extern _INT32 __uflow(struct _IO_FILE *);

  extern __inline _INT32 getc_unlocked(struct _IO_FILE *);

  extern __inline _INT32 getchar_unlocked(void);

  extern __inline _INT32 putchar(_INT32);

  extern _INT32 _IO_putc(_INT32, struct _IO_FILE *);

  extern __inline _INT32 fputc_unlocked(_INT32, struct _IO_FILE *);

  extern _INT32 __overflow(struct _IO_FILE *, _INT32);

  extern __inline _INT32 putc_unlocked(_INT32, struct _IO_FILE *);

  extern __inline _INT32 putchar_unlocked(_INT32);

  extern __inline _INT32 feof_unlocked(struct _IO_FILE *);

  extern __inline _INT32 ferror_unlocked(struct _IO_FILE *);

  extern __inline _INT32 tolower(_INT32);

  extern const _INT32 ** __ctype_tolower_loc(void);

  extern __inline _INT32 toupper(_INT32);

  extern const _INT32 ** __ctype_toupper_loc(void);

  extern __inline _UINT64 __strcspn_c1(const _INT8 *, _INT32);

  extern __inline _UINT64 __strcspn_c2(const _INT8 *, _INT32, _INT32);

  extern __inline _UINT64 __strcspn_c3(const _INT8 *, _INT32, _INT32, _INT32);

  extern __inline _UINT64 __strspn_c1(const _INT8 *, _INT32);

  extern __inline _UINT64 __strspn_c2(const _INT8 *, _INT32, _INT32);

  extern __inline _UINT64 __strspn_c3(const _INT8 *, _INT32, _INT32, _INT32);

  extern __inline _INT8 * __strpbrk_c2(const _INT8 *, _INT32, _INT32);

  extern __inline _INT8 * __strpbrk_c3(const _INT8 *, _INT32, _INT32, _INT32);

  extern __inline _INT8 * __strtok_r_1c(_INT8 *, _INT8, _INT8 **);

  extern __inline _INT8 * __strsep_1c(_INT8 **, _INT8);

  extern void * __rawmemchr(const void *, _INT32);

  extern __inline _INT8 * __strsep_2c(_INT8 **, _INT8, _INT8);

  extern __inline _INT8 * __strsep_3c(_INT8 **, _INT8, _INT8, _INT8);

  static void makeMaps_d(struct anonymous_w2c_3 *);

  extern _INT32 BZ2_decompress(struct anonymous_w2c_3 *);

  extern _INT32 fprintf(struct _IO_FILE * restrict, const _INT8 * restrict, ...);

  extern struct _IO_FILE * stderr;

  extern void BZ2_hbCreateDecodeTables(_INT32 *, _INT32 *, _INT32 *, _UINT8 *, _INT32, _INT32, _INT32);

  extern _INT32 BZ2_indexIntoF(_INT32, _INT32 *);

  extern _INT32 BZ2_rNums[512LL];

  extern void BZ2_bz__AssertH__fail(_INT32);

  static void __ompdo_BZ2_decompress1();

  