//
//  SynthesizeSingleton.h
//  SINGLETON_FOR_CLASS
//
//  Created by fj n on 12-6-13.
//  Copyright (c) 2012年 nfj. All rights reserved.
//

/*
 *  使用方式：
 *  在Class头文件声明方法：+ (id) sharedClassName;
 *  然后在Class实现文件使用：SYNTHESIZE_SINGLETON_FOR_CLASS(ClassName);
 */

#define SYNTHESIZE_SINGLETON_FOR_CLASS(classname) \
\
static classname *shared##classname = nil; \
\
+ (classname *)shared##classname \
{ \
@synchronized(self) \
{ \
if (shared##classname == nil) \
{ \
shared##classname = [[self alloc] init]; \
} \
} \
\
return shared##classname; \
} \
\
+ (id)allocWithZone:(NSZone *)zone \
{ \
@synchronized(self) \
{ \
if (shared##classname == nil) \
{ \
shared##classname = [super allocWithZone:zone]; \
return shared##classname; \
} \
} \
\
return nil; \
} \
\
- (id)copyWithZone:(NSZone *)zone \
{ \
return self; \
}