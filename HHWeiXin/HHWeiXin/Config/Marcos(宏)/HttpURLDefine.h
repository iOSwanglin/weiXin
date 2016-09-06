//
//  HttpURLDefine.h
//  HHWeiXin
//
//  Created by 聚智 on 16/9/6.
//  Copyright © 2016年 聚智. All rights reserved.
//

#ifndef HttpURLDefine_h
#define HttpURLDefine_h

#pragma mark - * * * * * * * * * * * * * * 域名切换 * * * * * * * * * * * * * *

#define ENVIRONMENT 0

#if ENVIRONMENT == 0
/**
 *  域名
 *
 *  @return 开发环境
 */
#define HHBaseURL = @"HTTP://"



#elif ENVIRONMENT == 1
/**
 *  域名
 *
 *  @return 测试环境
 */
#define HHBaseURL = @"HTTP://"


#elif ENVIRONMENT == 2
/**
 *  域名
 *
 *  @return 正式环境
 */
#define HHBaseURL @"http://"


#endif /* HttpURLDefine_h */



#pragma mark -  * * * * * * * * * * * * * * 首页 URL * * * * * * * * * * * * * *


#pragma mark -  * * * * * * * * * * * * * * 发现 URL * * * * * * * * * * * * * *


#pragma mark -  * * * * * * * * * * * * * * 学员 URL * * * * * * * * * * * * * *

#pragma mark -  * * * * * * * * * * * * * * 课程 URL * * * * * * * * * * * * * *





















