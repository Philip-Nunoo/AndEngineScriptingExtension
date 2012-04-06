#ifndef IInputStreamOpener_H
#define IInputStreamOpener_H

#include <memory>
#include <jni.h>

class IInputStreamOpener {

	public:
		virtual jobject unwrap() = 0;

};
#endif

