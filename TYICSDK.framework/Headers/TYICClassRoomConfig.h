//
//  TYICClassRoomConfig.h
//  TYICSDK
//
//  Created by AlexiChen on 2020/5/22.
//  Copyright © 2020 AlexiChen. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface TYICClassRoomConfig : NSObject

@property (nonatomic, copy, nonnull) NSString *sdkAppId;            // sdkAppId,必传
@property (nonatomic, copy, nonnull) NSString *userId;              // 用户ID,必传
@property (nonatomic, copy, nonnull) NSString *token;               // token,必传
@property (nonatomic, copy, nonnull) NSString *userSig;             // userSig,必传
@property (nonatomic, copy, nonnull) NSString *schoolId;            // 学校Id,必传
@property (nonatomic, assign) UInt32 classRoomId;                   // 课程ID,必传
@property (nonatomic, strong, nullable) NSDictionary *extEnvInfo;   // 为方便测试用的环境参数,必传

// 当前config是否有效，主要检查参数sdkAppId,userId,token,userSig,schoolId是否为空串，以及classRoomId>0
- (BOOL)isValied;

@end

NS_ASSUME_NONNULL_END
