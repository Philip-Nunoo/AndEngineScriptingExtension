#ifndef IMatcher_H
#define IMatcher_H

#include <memory>
#include <jni.h>

class IMatcher {

	public:
		virtual jobject unwrap() = 0;

};
#endif

