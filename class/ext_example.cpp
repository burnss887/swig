/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 3.0.11
 *
 * This file is not intended to be easily readable and contains a number of
 * coding conventions designed to improve portability and efficiency. Do not make
 * changes to this file unless you know what you are doing--modify the SWIG
 * interface file instead.
 * ----------------------------------------------------------------------------- */

#include "hphp/runtime/ext/extension.h"
#include "hphp/runtime/base/execution-context.h"
#include "hphp/runtime/vm/native-data.h"


#ifdef __cplusplus
/* SwigValueWrapper is described in swig.swg */
template<typename T> class SwigValueWrapper {
  struct SwigMovePointer {
    T *ptr;
    SwigMovePointer(T *p) : ptr(p) { }
    ~SwigMovePointer() { delete ptr; }
    SwigMovePointer& operator=(SwigMovePointer& rhs) { T* oldptr = ptr; ptr = 0; delete oldptr; ptr = rhs.ptr; rhs.ptr = 0; return *this; }
  } pointer;
  SwigValueWrapper& operator=(const SwigValueWrapper<T>& rhs);
  SwigValueWrapper(const SwigValueWrapper<T>& rhs);
public:
  SwigValueWrapper() : pointer(0) { }
  SwigValueWrapper& operator=(const T& t) { SwigMovePointer tmp(new T(t)); pointer = tmp; return *this; }
  operator T&() const { return *pointer.ptr; }
  T *operator&() { return pointer.ptr; }
};

template <typename T> T SwigValueInit() {
  return T();
}
#endif

/* -----------------------------------------------------------------------------
 *  This section contains generic SWIG labels for method/variable
 *  declarations/attributes, and other compiler dependent labels.
 * ----------------------------------------------------------------------------- */

/* template workaround for compilers that cannot correctly implement the C++ standard */
#ifndef SWIGTEMPLATEDISAMBIGUATOR
# if defined(__SUNPRO_CC) && (__SUNPRO_CC <= 0x560)
#  define SWIGTEMPLATEDISAMBIGUATOR template
# elif defined(__HP_aCC)
/* Needed even with `aCC -AA' when `aCC -V' reports HP ANSI C++ B3910B A.03.55 */
/* If we find a maximum version that requires this, the test would be __HP_aCC <= 35500 for A.03.55 */
#  define SWIGTEMPLATEDISAMBIGUATOR template
# else
#  define SWIGTEMPLATEDISAMBIGUATOR
# endif
#endif

/* inline attribute */
#ifndef SWIGINLINE
# if defined(__cplusplus) || (defined(__GNUC__) && !defined(__STRICT_ANSI__))
#   define SWIGINLINE inline
# else
#   define SWIGINLINE
# endif
#endif

/* attribute recognised by some compilers to avoid 'unused' warnings */
#ifndef SWIGUNUSED
# if defined(__GNUC__)
#   if !(defined(__cplusplus)) || (__GNUC__ > 3 || (__GNUC__ == 3 && __GNUC_MINOR__ >= 4))
#     define SWIGUNUSED __attribute__ ((__unused__))
#   else
#     define SWIGUNUSED
#   endif
# elif defined(__ICC)
#   define SWIGUNUSED __attribute__ ((__unused__))
# else
#   define SWIGUNUSED
# endif
#endif

#ifndef SWIG_MSC_UNSUPPRESS_4505
# if defined(_MSC_VER)
#   pragma warning(disable : 4505) /* unreferenced local function has been removed */
# endif
#endif

#ifndef SWIGUNUSEDPARM
# ifdef __cplusplus
#   define SWIGUNUSEDPARM(p)
# else
#   define SWIGUNUSEDPARM(p) p SWIGUNUSED
# endif
#endif

/* internal SWIG method */
#ifndef SWIGINTERN
# define SWIGINTERN static SWIGUNUSED
#endif

/* internal inline SWIG method */
#ifndef SWIGINTERNINLINE
# define SWIGINTERNINLINE SWIGINTERN SWIGINLINE
#endif

/* exporting methods */
#if defined(__GNUC__)
#  if (__GNUC__ >= 4) || (__GNUC__ == 3 && __GNUC_MINOR__ >= 4)
#    ifndef GCC_HASCLASSVISIBILITY
#      define GCC_HASCLASSVISIBILITY
#    endif
#  endif
#endif

#ifndef SWIGEXPORT
# if defined(_WIN32) || defined(__WIN32__) || defined(__CYGWIN__)
#   if defined(STATIC_LINKED)
#     define SWIGEXPORT
#   else
#     define SWIGEXPORT __declspec(dllexport)
#   endif
# else
#   if defined(__GNUC__) && defined(GCC_HASCLASSVISIBILITY)
#     define SWIGEXPORT __attribute__ ((visibility("default")))
#   else
#     define SWIGEXPORT
#   endif
# endif
#endif

/* calling conventions for Windows */
#ifndef SWIGSTDCALL
# if defined(_WIN32) || defined(__WIN32__) || defined(__CYGWIN__)
#   define SWIGSTDCALL __stdcall
# else
#   define SWIGSTDCALL
# endif
#endif

/* Deal with Microsoft's attempt at deprecating C standard runtime functions */
#if !defined(SWIG_NO_CRT_SECURE_NO_DEPRECATE) && defined(_MSC_VER) && !defined(_CRT_SECURE_NO_DEPRECATE)
# define _CRT_SECURE_NO_DEPRECATE
#endif

/* Deal with Microsoft's attempt at deprecating methods in the standard C++ library */
#if !defined(SWIG_NO_SCL_SECURE_NO_DEPRECATE) && defined(_MSC_VER) && !defined(_SCL_SECURE_NO_DEPRECATE)
# define _SCL_SECURE_NO_DEPRECATE
#endif

/* Deal with Apple's deprecated 'AssertMacros.h' from Carbon-framework */
#if defined(__APPLE__) && !defined(__ASSERT_MACROS_DEFINE_VERSIONS_WITHOUT_UNDERSCORES)
# define __ASSERT_MACROS_DEFINE_VERSIONS_WITHOUT_UNDERSCORES 0
#endif

/* Intel's compiler complains if a variable which was never initialised is
 * cast to void, which is a common idiom which we use to indicate that we
 * are aware a variable isn't used.  So we just silence that warning.
 * See: https://github.com/swig/swig/issues/192 for more discussion.
 */
#ifdef __INTEL_COMPILER
# pragma warning disable 592
#endif

/* -----------------------------------------------------------------------------
 * swigrun.swg
 *
 * This file contains generic C API SWIG runtime support for pointer
 * type checking.
 * ----------------------------------------------------------------------------- */

/* This should only be incremented when either the layout of swig_type_info changes,
   or for whatever reason, the runtime changes incompatibly */
#define SWIG_RUNTIME_VERSION "4"

/* define SWIG_TYPE_TABLE_NAME as "SWIG_TYPE_TABLE" */
#ifdef SWIG_TYPE_TABLE
# define SWIG_QUOTE_STRING(x) #x
# define SWIG_EXPAND_AND_QUOTE_STRING(x) SWIG_QUOTE_STRING(x)
# define SWIG_TYPE_TABLE_NAME SWIG_EXPAND_AND_QUOTE_STRING(SWIG_TYPE_TABLE)
#else
# define SWIG_TYPE_TABLE_NAME
#endif

/*
  You can use the SWIGRUNTIME and SWIGRUNTIMEINLINE macros for
  creating a static or dynamic library from the SWIG runtime code.
  In 99.9% of the cases, SWIG just needs to declare them as 'static'.

  But only do this if strictly necessary, ie, if you have problems
  with your compiler or suchlike.
*/

#ifndef SWIGRUNTIME
# define SWIGRUNTIME SWIGINTERN
#endif

#ifndef SWIGRUNTIMEINLINE
# define SWIGRUNTIMEINLINE SWIGRUNTIME SWIGINLINE
#endif

/*  Generic buffer size */
#ifndef SWIG_BUFFER_SIZE
# define SWIG_BUFFER_SIZE 1024
#endif

/* Flags for pointer conversions */
#define SWIG_POINTER_DISOWN        0x1
#define SWIG_CAST_NEW_MEMORY       0x2

/* Flags for new pointer objects */
#define SWIG_POINTER_OWN           0x1


/*
   Flags/methods for returning states.

   The SWIG conversion methods, as ConvertPtr, return an integer
   that tells if the conversion was successful or not. And if not,
   an error code can be returned (see swigerrors.swg for the codes).

   Use the following macros/flags to set or process the returning
   states.

   In old versions of SWIG, code such as the following was usually written:

     if (SWIG_ConvertPtr(obj,vptr,ty.flags) != -1) {
       // success code
     } else {
       //fail code
     }

   Now you can be more explicit:

    int res = SWIG_ConvertPtr(obj,vptr,ty.flags);
    if (SWIG_IsOK(res)) {
      // success code
    } else {
      // fail code
    }

   which is the same really, but now you can also do

    Type *ptr;
    int res = SWIG_ConvertPtr(obj,(void **)(&ptr),ty.flags);
    if (SWIG_IsOK(res)) {
      // success code
      if (SWIG_IsNewObj(res) {
        ...
	delete *ptr;
      } else {
        ...
      }
    } else {
      // fail code
    }

   I.e., now SWIG_ConvertPtr can return new objects and you can
   identify the case and take care of the deallocation. Of course that
   also requires SWIG_ConvertPtr to return new result values, such as

      int SWIG_ConvertPtr(obj, ptr,...) {
        if (<obj is ok>) {
          if (<need new object>) {
            *ptr = <ptr to new allocated object>;
            return SWIG_NEWOBJ;
          } else {
            *ptr = <ptr to old object>;
            return SWIG_OLDOBJ;
          }
        } else {
          return SWIG_BADOBJ;
        }
      }

   Of course, returning the plain '0(success)/-1(fail)' still works, but you can be
   more explicit by returning SWIG_BADOBJ, SWIG_ERROR or any of the
   SWIG errors code.

   Finally, if the SWIG_CASTRANK_MODE is enabled, the result code
   allows to return the 'cast rank', for example, if you have this

       int food(double)
       int fooi(int);

   and you call

      food(1)   // cast rank '1'  (1 -> 1.0)
      fooi(1)   // cast rank '0'

   just use the SWIG_AddCast()/SWIG_CheckState()
*/

#define SWIG_OK                    (0)
#define SWIG_ERROR                 (-1)
#define SWIG_IsOK(r)               (r >= 0)
#define SWIG_ArgError(r)           ((r != SWIG_ERROR) ? r : SWIG_TypeError)

/* The CastRankLimit says how many bits are used for the cast rank */
#define SWIG_CASTRANKLIMIT         (1 << 8)
/* The NewMask denotes the object was created (using new/malloc) */
#define SWIG_NEWOBJMASK            (SWIG_CASTRANKLIMIT  << 1)
/* The TmpMask is for in/out typemaps that use temporal objects */
#define SWIG_TMPOBJMASK            (SWIG_NEWOBJMASK << 1)
/* Simple returning values */
#define SWIG_BADOBJ                (SWIG_ERROR)
#define SWIG_OLDOBJ                (SWIG_OK)
#define SWIG_NEWOBJ                (SWIG_OK | SWIG_NEWOBJMASK)
#define SWIG_TMPOBJ                (SWIG_OK | SWIG_TMPOBJMASK)
/* Check, add and del mask methods */
#define SWIG_AddNewMask(r)         (SWIG_IsOK(r) ? (r | SWIG_NEWOBJMASK) : r)
#define SWIG_DelNewMask(r)         (SWIG_IsOK(r) ? (r & ~SWIG_NEWOBJMASK) : r)
#define SWIG_IsNewObj(r)           (SWIG_IsOK(r) && (r & SWIG_NEWOBJMASK))
#define SWIG_AddTmpMask(r)         (SWIG_IsOK(r) ? (r | SWIG_TMPOBJMASK) : r)
#define SWIG_DelTmpMask(r)         (SWIG_IsOK(r) ? (r & ~SWIG_TMPOBJMASK) : r)
#define SWIG_IsTmpObj(r)           (SWIG_IsOK(r) && (r & SWIG_TMPOBJMASK))

/* Cast-Rank Mode */
#if defined(SWIG_CASTRANK_MODE)
#  ifndef SWIG_TypeRank
#    define SWIG_TypeRank             unsigned long
#  endif
#  ifndef SWIG_MAXCASTRANK            /* Default cast allowed */
#    define SWIG_MAXCASTRANK          (2)
#  endif
#  define SWIG_CASTRANKMASK          ((SWIG_CASTRANKLIMIT) -1)
#  define SWIG_CastRank(r)           (r & SWIG_CASTRANKMASK)
SWIGINTERNINLINE int SWIG_AddCast(int r) {
  return SWIG_IsOK(r) ? ((SWIG_CastRank(r) < SWIG_MAXCASTRANK) ? (r + 1) : SWIG_ERROR) : r;
}
SWIGINTERNINLINE int SWIG_CheckState(int r) {
  return SWIG_IsOK(r) ? SWIG_CastRank(r) + 1 : 0;
}
#else /* no cast-rank mode */
#  define SWIG_AddCast(r) (r)
#  define SWIG_CheckState(r) (SWIG_IsOK(r) ? 1 : 0)
#endif


#include <string.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef void *(*swig_converter_func)(void *, int *);
typedef struct swig_type_info *(*swig_dycast_func)(void **);

/* Structure to store information on one type */
typedef struct swig_type_info {
  const char             *name;			/* mangled name of this type */
  const char             *str;			/* human readable name of this type */
  swig_dycast_func        dcast;		/* dynamic cast function down a hierarchy */
  struct swig_cast_info  *cast;			/* linked list of types that can cast into this type */
  void                   *clientdata;		/* language specific type data */
  int                    owndata;		/* flag if the structure owns the clientdata */
} swig_type_info;

/* Structure to store a type and conversion function used for casting */
typedef struct swig_cast_info {
  swig_type_info         *type;			/* pointer to type that is equivalent to this type */
  swig_converter_func     converter;		/* function to cast the void pointers */
  struct swig_cast_info  *next;			/* pointer to next cast in linked list */
  struct swig_cast_info  *prev;			/* pointer to the previous cast */
} swig_cast_info;

/* Structure used to store module information
 * Each module generates one structure like this, and the runtime collects
 * all of these structures and stores them in a circularly linked list.*/
typedef struct swig_module_info {
  swig_type_info         **types;		/* Array of pointers to swig_type_info structures that are in this module */
  size_t                 size;		        /* Number of types in this module */
  struct swig_module_info *next;		/* Pointer to next element in circularly linked list */
  swig_type_info         **type_initial;	/* Array of initially generated type structures */
  swig_cast_info         **cast_initial;	/* Array of initially generated casting structures */
  void                    *clientdata;		/* Language specific module data */
} swig_module_info;

/*
  Compare two type names skipping the space characters, therefore
  "char*" == "char *" and "Class<int>" == "Class<int >", etc.

  Return 0 when the two name types are equivalent, as in
  strncmp, but skipping ' '.
*/
SWIGRUNTIME int
SWIG_TypeNameComp(const char *f1, const char *l1,
		  const char *f2, const char *l2) {
  for (;(f1 != l1) && (f2 != l2); ++f1, ++f2) {
    while ((*f1 == ' ') && (f1 != l1)) ++f1;
    while ((*f2 == ' ') && (f2 != l2)) ++f2;
    if (*f1 != *f2) return (*f1 > *f2) ? 1 : -1;
  }
  return (int)((l1 - f1) - (l2 - f2));
}

/*
  Check type equivalence in a name list like <name1>|<name2>|...
  Return 0 if equal, -1 if nb < tb, 1 if nb > tb
*/
SWIGRUNTIME int
SWIG_TypeCmp(const char *nb, const char *tb) {
  int equiv = 1;
  const char* te = tb + strlen(tb);
  const char* ne = nb;
  while (equiv != 0 && *ne) {
    for (nb = ne; *ne; ++ne) {
      if (*ne == '|') break;
    }
    equiv = SWIG_TypeNameComp(nb, ne, tb, te);
    if (*ne) ++ne;
  }
  return equiv;
}

/*
  Check type equivalence in a name list like <name1>|<name2>|...
  Return 0 if not equal, 1 if equal
*/
SWIGRUNTIME int
SWIG_TypeEquiv(const char *nb, const char *tb) {
  return SWIG_TypeCmp(nb, tb) == 0 ? 1 : 0;
}

/*
  Check the typename
*/
SWIGRUNTIME swig_cast_info *
SWIG_TypeCheck(const char *c, swig_type_info *ty) {
  if (ty) {
    swig_cast_info *iter = ty->cast;
    while (iter) {
      if (strcmp(iter->type->name, c) == 0) {
        if (iter == ty->cast)
          return iter;
        /* Move iter to the top of the linked list */
        iter->prev->next = iter->next;
        if (iter->next)
          iter->next->prev = iter->prev;
        iter->next = ty->cast;
        iter->prev = 0;
        if (ty->cast) ty->cast->prev = iter;
        ty->cast = iter;
        return iter;
      }
      iter = iter->next;
    }
  }
  return 0;
}

/*
  Identical to SWIG_TypeCheck, except strcmp is replaced with a pointer comparison
*/
SWIGRUNTIME swig_cast_info *
SWIG_TypeCheckStruct(swig_type_info *from, swig_type_info *ty) {
  if (ty) {
    swig_cast_info *iter = ty->cast;
    while (iter) {
      if (iter->type == from) {
        if (iter == ty->cast)
          return iter;
        /* Move iter to the top of the linked list */
        iter->prev->next = iter->next;
        if (iter->next)
          iter->next->prev = iter->prev;
        iter->next = ty->cast;
        iter->prev = 0;
        if (ty->cast) ty->cast->prev = iter;
        ty->cast = iter;
        return iter;
      }
      iter = iter->next;
    }
  }
  return 0;
}

/*
  Cast a pointer up an inheritance hierarchy
*/
SWIGRUNTIMEINLINE void *
SWIG_TypeCast(swig_cast_info *ty, void *ptr, int *newmemory) {
  return ((!ty) || (!ty->converter)) ? ptr : (*ty->converter)(ptr, newmemory);
}

/*
   Dynamic pointer casting. Down an inheritance hierarchy
*/
SWIGRUNTIME swig_type_info *
SWIG_TypeDynamicCast(swig_type_info *ty, void **ptr) {
  swig_type_info *lastty = ty;
  if (!ty || !ty->dcast) return ty;
  while (ty && (ty->dcast)) {
    ty = (*ty->dcast)(ptr);
    if (ty) lastty = ty;
  }
  return lastty;
}

/*
  Return the name associated with this type
*/
SWIGRUNTIMEINLINE const char *
SWIG_TypeName(const swig_type_info *ty) {
  return ty->name;
}

/*
  Return the pretty name associated with this type,
  that is an unmangled type name in a form presentable to the user.
*/
SWIGRUNTIME const char *
SWIG_TypePrettyName(const swig_type_info *type) {
  /* The "str" field contains the equivalent pretty names of the
     type, separated by vertical-bar characters.  We choose
     to print the last name, as it is often (?) the most
     specific. */
  if (!type) return NULL;
  if (type->str != NULL) {
    const char *last_name = type->str;
    const char *s;
    for (s = type->str; *s; s++)
      if (*s == '|') last_name = s+1;
    return last_name;
  }
  else
    return type->name;
}

/*
   Set the clientdata field for a type
*/
SWIGRUNTIME void
SWIG_TypeClientData(swig_type_info *ti, void *clientdata) {
  swig_cast_info *cast = ti->cast;
  /* if (ti->clientdata == clientdata) return; */
  ti->clientdata = clientdata;

  while (cast) {
    if (!cast->converter) {
      swig_type_info *tc = cast->type;
      if (!tc->clientdata) {
	SWIG_TypeClientData(tc, clientdata);
      }
    }
    cast = cast->next;
  }
}
SWIGRUNTIME void
SWIG_TypeNewClientData(swig_type_info *ti, void *clientdata) {
  SWIG_TypeClientData(ti, clientdata);
  ti->owndata = 1;
}

/*
  Search for a swig_type_info structure only by mangled name
  Search is a O(log #types)

  We start searching at module start, and finish searching when start == end.
  Note: if start == end at the beginning of the function, we go all the way around
  the circular list.
*/
SWIGRUNTIME swig_type_info *
SWIG_MangledTypeQueryModule(swig_module_info *start,
                            swig_module_info *end,
		            const char *name) {
  swig_module_info *iter = start;
  do {
    if (iter->size) {
      size_t l = 0;
      size_t r = iter->size - 1;
      do {
	/* since l+r >= 0, we can (>> 1) instead (/ 2) */
	size_t i = (l + r) >> 1;
	const char *iname = iter->types[i]->name;
	if (iname) {
	  int compare = strcmp(name, iname);
	  if (compare == 0) {
	    return iter->types[i];
	  } else if (compare < 0) {
	    if (i) {
	      r = i - 1;
	    } else {
	      break;
	    }
	  } else if (compare > 0) {
	    l = i + 1;
	  }
	} else {
	  break; /* should never happen */
	}
      } while (l <= r);
    }
    iter = iter->next;
  } while (iter != end);
  return 0;
}

/*
  Search for a swig_type_info structure for either a mangled name or a human readable name.
  It first searches the mangled names of the types, which is a O(log #types)
  If a type is not found it then searches the human readable names, which is O(#types).

  We start searching at module start, and finish searching when start == end.
  Note: if start == end at the beginning of the function, we go all the way around
  the circular list.
*/
SWIGRUNTIME swig_type_info *
SWIG_TypeQueryModule(swig_module_info *start,
                     swig_module_info *end,
		     const char *name) {
  /* STEP 1: Search the name field using binary search */
  swig_type_info *ret = SWIG_MangledTypeQueryModule(start, end, name);
  if (ret) {
    return ret;
  } else {
    /* STEP 2: If the type hasn't been found, do a complete search
       of the str field (the human readable name) */
    swig_module_info *iter = start;
    do {
      size_t i = 0;
      for (; i < iter->size; ++i) {
	if (iter->types[i]->str && (SWIG_TypeEquiv(iter->types[i]->str, name)))
	  return iter->types[i];
      }
      iter = iter->next;
    } while (iter != end);
  }

  /* neither found a match */
  return 0;
}

/*
   Pack binary data into a string
*/
SWIGRUNTIME char *
SWIG_PackData(char *c, void *ptr, size_t sz) {
  static const char hex[17] = "0123456789abcdef";
  const unsigned char *u = (unsigned char *) ptr;
  const unsigned char *eu =  u + sz;
  for (; u != eu; ++u) {
    unsigned char uu = *u;
    *(c++) = hex[(uu & 0xf0) >> 4];
    *(c++) = hex[uu & 0xf];
  }
  return c;
}

/*
   Unpack binary data from a string
*/
SWIGRUNTIME const char *
SWIG_UnpackData(const char *c, void *ptr, size_t sz) {
  unsigned char *u = (unsigned char *) ptr;
  const unsigned char *eu = u + sz;
  for (; u != eu; ++u) {
    char d = *(c++);
    unsigned char uu;
    if ((d >= '0') && (d <= '9'))
      uu = (unsigned char)((d - '0') << 4);
    else if ((d >= 'a') && (d <= 'f'))
      uu = (unsigned char)((d - ('a'-10)) << 4);
    else
      return (char *) 0;
    d = *(c++);
    if ((d >= '0') && (d <= '9'))
      uu |= (unsigned char)(d - '0');
    else if ((d >= 'a') && (d <= 'f'))
      uu |= (unsigned char)(d - ('a'-10));
    else
      return (char *) 0;
    *u = uu;
  }
  return c;
}

/*
   Pack 'void *' into a string buffer.
*/
SWIGRUNTIME char *
SWIG_PackVoidPtr(char *buff, void *ptr, const char *name, size_t bsz) {
  char *r = buff;
  if ((2*sizeof(void *) + 2) > bsz) return 0;
  *(r++) = '_';
  r = SWIG_PackData(r,&ptr,sizeof(void *));
  if (strlen(name) + 1 > (bsz - (r - buff))) return 0;
  strcpy(r,name);
  return buff;
}

SWIGRUNTIME const char *
SWIG_UnpackVoidPtr(const char *c, void **ptr, const char *name) {
  if (*c != '_') {
    if (strcmp(c,"NULL") == 0) {
      *ptr = (void *) 0;
      return name;
    } else {
      return 0;
    }
  }
  return SWIG_UnpackData(++c,ptr,sizeof(void *));
}

SWIGRUNTIME char *
SWIG_PackDataName(char *buff, void *ptr, size_t sz, const char *name, size_t bsz) {
  char *r = buff;
  size_t lname = (name ? strlen(name) : 0);
  if ((2*sz + 2 + lname) > bsz) return 0;
  *(r++) = '_';
  r = SWIG_PackData(r,ptr,sz);
  if (lname) {
    strncpy(r,name,lname+1);
  } else {
    *r = 0;
  }
  return buff;
}

SWIGRUNTIME const char *
SWIG_UnpackDataName(const char *c, void *ptr, size_t sz, const char *name) {
  if (*c != '_') {
    if (strcmp(c,"NULL") == 0) {
      memset(ptr,0,sz);
      return name;
    } else {
      return 0;
    }
  }
  return SWIG_UnpackData(++c,ptr,sz);
}

#ifdef __cplusplus
}
#endif

namespace HPHP {
namespace {

template<typename T>
struct SWIG_Ptr : public SweepableResourceData {
private:
  T* m_ptr;
public:
  DECLARE_RESOURCE_ALLOCATION(SWIG_Ptr)
  CLASSNAME_IS("SWIG_Ptr")
  const String& o_getClassNameHook() const override { return classnameof(); }

  explicit SWIG_Ptr(T* ptr) : m_ptr(ptr) {}
  virtual ~SWIG_Ptr() { close(); }
  void close() {
    delete m_ptr;
    m_ptr = nullptr;
  }
  T* get() const { return m_ptr; }
};

template<typename T> inline void SWIG_Ptr<T>::sweep() { close(); }

}
}


#include "example.h"

namespace HPHP {

class _wrap_Circle {
public:
Resource _wrap_new_Circle(int64_t targ1) {
  int arg1 ;
  Resource tresult ;
  Circle *result = 0 ;
  
  arg1 = (int)targ1; 
  result = (Circle *)new Circle(arg1);
  tresult = Resource(req::make<SWIG_Ptr<Circle>>(result)); 
  return tresult;
}


int64_t _wrap_Circle_area(const Resource& targ1) {
  Circle *arg1 = (Circle *) 0 ;
  int64_t tresult ;
  int result;
  
  arg1 = dyn_cast_or_null<SWIG_Ptr<Circle>>(targ1)->get(); 
  result = (int)(arg1)->area();
  tresult = result;
  return tresult;
}


static void _wrap_Circle_info() {
  Circle::info();
  
}


void _wrap_Circle_z_set(const Resource& targ1, int64_t targ2) {
  Circle *arg1 = (Circle *) 0 ;
  int arg2 ;
  
  arg1 = dyn_cast_or_null<SWIG_Ptr<Circle>>(targ1)->get(); 
  arg2 = (int)targ2; 
  if (arg1) (arg1)->z = arg2;
  
}


int64_t _wrap_Circle_z_get(const Resource& targ1) {
  Circle *arg1 = (Circle *) 0 ;
  int64_t tresult ;
  int result;
  
  arg1 = dyn_cast_or_null<SWIG_Ptr<Circle>>(targ1)->get(); 
  result = (int) ((arg1)->z);
  tresult = result;
  return tresult;
}


static void _wrap_delete_Circle(const Resource& targ1) {
  Circle *arg1 = (Circle *) 0 ;
  
  arg1 = dyn_cast_or_null<SWIG_Ptr<Circle>>(targ1)->get(); 
  delete arg1;
  
}


Resource _obj_ptr;
}; // class _wrap_Circle
static void _wrap_pnt(const Resource& targ1) {
  Circle *arg1 = (Circle *) 0 ;
  
  arg1 = dyn_cast_or_null<SWIG_Ptr<Circle>>(targ1)->get(); 
  pnt(arg1);
  
}


void HHVM_METHOD(_wrap_Circle, __construct, int64_t arg1) {
  auto data = Native::data<_wrap_Circle>(this_);
  data->_obj_ptr = data->_wrap_new_Circle(arg1);
}

int64_t HHVM_METHOD(_wrap_Circle, area) {
  auto data = Native::data<_wrap_Circle>(this_);
  return data->_wrap_Circle_area(data->_obj_ptr);
}

void HHVM_STATIC_METHOD(_wrap_Circle, Circle_info) {
  _wrap_Circle::_wrap_Circle_info();
}

void HHVM_METHOD(_wrap_Circle, Circle_z_set, int64_t arg2) {
  auto data = Native::data<_wrap_Circle>(this_);
  data->_wrap_Circle_z_set(data->_obj_ptr, arg2);
}

int64_t HHVM_METHOD(_wrap_Circle, Circle_z_get) {
  auto data = Native::data<_wrap_Circle>(this_);
  return data->_wrap_Circle_z_get(data->_obj_ptr);
}

void HHVM_METHOD(_wrap_Circle, __destruct) {
  auto data = Native::data<_wrap_Circle>(this_);
  data->_wrap_delete_Circle(data->_obj_ptr);
}

void HHVM_FUNCTION(pnt, const Resource& arg1) {
  _wrap_pnt(arg1);
}



class EXAMPLEExtension : public Extension {
public:
  EXAMPLEExtension(): Extension("example", "1.0") {}

  void moduleInit() override {
    HHVM_MALIAS(Circle, __construct, _wrap_Circle, __construct);
    HHVM_MALIAS(Circle, area, _wrap_Circle, area);
    HHVM_STATIC_MALIAS(Circle, Circle_info, _wrap_Circle, Circle_info);
    HHVM_MALIAS(Circle, Circle_z_set, _wrap_Circle, Circle_z_set);
    HHVM_MALIAS(Circle, Circle_z_get, _wrap_Circle, Circle_z_get);
    HHVM_MALIAS(Circle, __destruct, _wrap_Circle, __destruct);
    Native::registerNativeDataInfo<_wrap_Circle>(makeStaticString("_wrap_Circle"));
    HHVM_FE(pnt);
    loadSystemlib();
  }
} s_example_extension;

HHVM_GET_MODULE(example);

}
