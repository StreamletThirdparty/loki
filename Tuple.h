////////////////////////////
//Generated header: Tuple.h
//Forwards to the appropriate code
// that works on the detected compiler
//Generated on Tue Sep 03 22:39:16 2002


#ifdef LOKI_USE_REFERENCE
#	include "./Reference/Tuple.h"
#else
#	if (_MSC_VER >= 1300)
#		include "./MSVC/1300/Tuple.h"
#	elif (_MSC_VER >= 1200)
#		include ".MSVC/1200/Tuple.h"
#	elif (__BORLANDC__)
#		include ".Borland/Tuple.h"
#	elif (__MWERKS__)
#		include ".Reference/Tuple.h"
#	elif ( (__GNUC__ > 2) || ((__GNUC__ == 2) && (__GNUC_MINOR__ >= 95)) )
#		include ".Reference/Tuple.h"
#	else
		//Define LOKI_USE_REFERENCE and get back to us on the results
#		error Compiler not tested with Loki, #define LOKI_USE_REFERENCE
#	endif
#endif
