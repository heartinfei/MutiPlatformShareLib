#ifndef KONAN_LIBMAIN_H
#define KONAN_LIBMAIN_H
#ifdef __cplusplus
extern "C" {
#endif
#ifdef __cplusplus
typedef bool            libmain_KBoolean;
#else
typedef _Bool           libmain_KBoolean;
#endif
typedef unsigned short     libmain_KChar;
typedef signed char        libmain_KByte;
typedef short              libmain_KShort;
typedef int                libmain_KInt;
typedef long long          libmain_KLong;
typedef unsigned char      libmain_KUByte;
typedef unsigned short     libmain_KUShort;
typedef unsigned int       libmain_KUInt;
typedef unsigned long long libmain_KULong;
typedef float              libmain_KFloat;
typedef double             libmain_KDouble;
typedef void*              libmain_KNativePtr;
struct libmain_KType;
typedef struct libmain_KType libmain_KType;

typedef struct {
  libmain_KNativePtr pinned;
} libmain_kref_sample_Sample;
typedef struct {
  libmain_KNativePtr pinned;
} libmain_kref_sample_Platform;


typedef struct {
  /* Service functions. */
  void (*DisposeStablePointer)(libmain_KNativePtr ptr);
  void (*DisposeString)(const char* string);
  libmain_KBoolean (*IsInstance)(libmain_KNativePtr ref, const libmain_KType* type);

  /* User functions. */
  struct {
    struct {
      struct {
        const char* (*hello)();
        struct {
          libmain_KType* (*_type)(void);
          libmain_kref_sample_Sample (*Sample)();
          libmain_KInt (*checkMe)(libmain_kref_sample_Sample thiz);
        } Sample;
        struct {
          libmain_KType* (*_type)(void);
          libmain_kref_sample_Platform (*_instance)();
          const char* (*name)(libmain_kref_sample_Platform thiz);
        } Platform;
      } #ifndef KONAN_LIBMAIN_H
#define KONAN_LIBMAIN_H
#ifdef __cplusplus
extern "C" {
#endif
#ifdef __cplusplus
typedef bool            libmain_KBoolean;
#else
typedef _Bool           libmain_KBoolean;
#endif
typedef unsigned short     libmain_KChar;
typedef signed char        libmain_KByte;
typedef short              libmain_KShort;
typedef int                libmain_KInt;
typedef long long          libmain_KLong;
typedef unsigned char      libmain_KUByte;
typedef unsigned short     libmain_KUShort;
typedef unsigned int       libmain_KUInt;
typedef unsigned long long libmain_KULong;
typedef float              libmain_KFloat;
typedef double             libmain_KDouble;
typedef void*              libmain_KNativePtr;
struct libmain_KType;
typedef struct libmain_KType libmain_KType;

typedef struct {
  libmain_KNativePtr pinned;
} libmain_kref_sample_Sample;
typedef struct {
  libmain_KNativePtr pinned;
} libmain_kref_sample_Platform;


typedef struct {
  /* Service functions. */
  void (*DisposeStablePointer)(libmain_KNativePtr ptr);
  void (*DisposeString)(const char* string);
  libmain_KBoolean (*IsInstance)(libmain_KNativePtr ref, const libmain_KType* type);

  /* User functions. */
  struct {
    struct {
      struct {
        const char* (*hello)();
        struct {
          libmain_KType* (*_type)(void);
          libmain_kref_sample_Sample (*Sample)();
          libmain_KInt (*checkMe)(libmain_kref_sample_Sample thiz);
        } Sample;
        struct {
          libmain_KType* (*_type)(void);
          libmain_kref_sample_Platform (*_instance)();
          const char* (*name)(libmain_kref_sample_Platform thiz);
        } Platform;
      } sample;
    } root;
  } kotlin;
} libmain_ExportedSymbols;
extern libmain_ExportedSymbols* libmain_symbols(void);
#ifdef __cplusplus
}  /* extern "C" */
#endif
#endif  /* KONAN_LIBMAIN_H */
;
    } root;
  } kotlin;
} libmain_ExportedSymbols;
extern libmain_ExportedSymbols* libmain_symbols(void);
#ifdef __cplusplus
}  /* extern "C" */
#endif
#endif  /* KONAN_LIBMAIN_H */
