/*
 * Copyright 2002-2014 the original author or authors.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      CC/LICENSE
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef APCALLBACKTHREAD
#define APCALLBACKTHREAD

#include <bgcc.h>

class ApCallbackThread : public bgcc::Runnable {
public:
    ApCallbackThread(int32_t id): _threadNo(id) {}

private:
    virtual int32_t operator()(const bool* isstopped, void* param = NULL);
    int32_t _threadNo;

}; // end of class ApCallbackThread




#endif // APCALLBACKTHREAD

