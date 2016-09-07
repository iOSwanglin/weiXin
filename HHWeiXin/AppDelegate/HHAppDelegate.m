//
//  HHAppDelegate.m
//  HHWeiXin
//
//  Created by 聚智 on 16/9/6.
//  Copyright © 2016年 聚智. All rights reserved.
//

#import "HHAppDelegate.h"

@implementation HHAppDelegate

-(BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions{
  
    
#ifdef DEBUG
    [[HHServeManager sharedHHServeManager]serveConfig:HHServeStateDebug];
#else
    [[HHServeManager sharedHHServeManager]serveConfig:HHServeStateRelease];
#endif
    
    self.window = [[UIWindow alloc]initWithFrame:[UIScreen mainScreen].bounds];
    
    
//    self.window.rootViewController = [[HHHomeViewController alloc]init];
    self.window.backgroundColor = [UIColor whiteColor];
    
    [self.window makeKeyWindow];
    
    
   return YES;
}



@end
