//
//  HHServeManager.h
//  HHWeiXin
//
//  Created by 聚智 on 16/9/6.
//  Copyright © 2016年 聚智. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef NS_ENUM(NSInteger,HHServeState) {
    HHServeStateRelease = 1,
    HHServeStateDebug = 2,
    HHServeStatePrepare = 3
 };


@interface HHServeManager : NSObject

singleton_h(HHServeManager)

/**
 *  公共的url
 */
@property (nonatomic, copy) NSString *KBaseURL;


-(void)serveConfig:(HHServeState)state;

@end
