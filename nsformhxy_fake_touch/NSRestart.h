//
//  NSRestart.h
//  test
//
//  Created by 刘卓林 on 2018/1/14.
//  Copyright © 2018年 刘卓林. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSRestart : NSObject

+ (BOOL )runningProcesses:(NSString *)str;
+ (NSString*)getuuid;
+ (void)openGame:(NSString *)bundleid;

@end