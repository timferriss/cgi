#include <stdio.h>
#include <string.h>

#ifndef __http_response_h
#define __http_response_h
#endif

#ifndef _cgi_debug_
#include <fcgi_stdio.h>
#endif

#ifndef __util_dlist_h
#include "../util/dlist.h"
#endif

dlist *head;

dlist *body;

/**
 * @TODO 输出HTML
 * @return void
 * @author zhouwei 2013-7-22
 */
extern void sendHtml();

/**
 * @TODO 销毁响应
 * @return void
 * @author zhouwei 2013-7-22
 */
extern void destroyResponse();

/**
 * @TODO 添加头html
 * @return void
 * @author zhouwei 2013-7-22
 */
extern void appendHead(char *head);

/**
 * @TODO 添加body的html
 * @return void
 * @author zhouwei 2013-7-22
 */
extern void appendBody(char *body);

/**
 * @TODO 初始化response
 * @return void
 * @author zhouwei 2013-7-22
 */
extern void initResponse();
