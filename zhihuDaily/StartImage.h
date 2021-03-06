//
//  StartImage.h
//  zhihuDaily
//
//  Created by Siegrain on 16/3/16.
//  Copyright © 2016年 siegrain.zhihuDaily. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface StartImage : NSObject
@property (copy, nonatomic) NSString* img;
@property (copy, nonatomic) NSString* text;

- (instancetype)initWithDic:(NSDictionary*)dic;
+ (instancetype)startImageWithDic:(NSDictionary*)dic;
@end
