#ifndef IDrawHandler_H
#define IDrawHandler_H

#include <memory>
#include <jni.h>

class IDrawHandler {

	public:
		virtual jobject unwrap() = 0;

};
#endif

