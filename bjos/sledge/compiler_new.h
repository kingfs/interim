
typedef jit_word_t (*funcptr)();

typedef enum builtin_t {
  BUILTIN_ADD = 1,
  BUILTIN_SUB,
  BUILTIN_MUL,
  BUILTIN_DIV,
  BUILTIN_MOD,

  BUILTIN_LT,
  BUILTIN_GT,
  BUILTIN_EQ,

  BUILTIN_WHILE,

  BUILTIN_DEF,
  BUILTIN_IF ,
  BUILTIN_FN ,

  BUILTIN_CAR,
  BUILTIN_CDR,
  BUILTIN_CONS,
  BUILTIN_LIST,

  BUILTIN_ALLOC,
  BUILTIN_ALLOC_STR,
  BUILTIN_CONCAT,
  BUILTIN_SUBSTR,

  BUILTIN_GET,
  BUILTIN_PUT,
  BUILTIN_PUT32,
  BUILTIN_SIZE,

  BUILTIN_UGET,
  BUILTIN_UPUT,
  BUILTIN_USIZE,

  BUILTIN_TYPE,
  BUILTIN_LET,
  BUILTIN_QUOTE,
  BUILTIN_MAP,
  BUILTIN_DO,

  BUILTIN_EVAL,
  BUILTIN_READ,
  BUILTIN_WRITE,

  BUILTIN_PRINT,
  BUILTIN_MOUNT,
  BUILTIN_OPEN,
  BUILTIN_CLOSE,
  BUILTIN_RECV,
  BUILTIN_SEND,

  BUILTIN_PIXEL,
  BUILTIN_FLIP,
  BUILTIN_RECTFILL,
  BUILTIN_BLIT,
  BUILTIN_BLIT_MONO,
  BUILTIN_BLIT_MONO_INV,
  BUILTIN_BLIT_STRING,
  BUILTIN_INKEY,

  BUILTIN_ALIEN,
  BUILTIN_GC,
  BUILTIN_SYMBOLS,
  BUILTIN_LOAD,
  BUILTIN_SAVE,
  BUILTIN_UDP_POLL,
  BUILTIN_UDP_SEND,
  BUILTIN_TCP_CONNECT,
  BUILTIN_TCP_BIND,
  BUILTIN_TCP_SEND,

  BUILTIN_SIN,
  BUILTIN_COS,
  BUILTIN_SQRT
} builtin_t;

Cell* insert_global_symbol(Cell* symbol, Cell* cell);
