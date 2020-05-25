//
//  TYICClassRoomViewController.h
//  TIC_Web_SaaS_SDK
//
//  Created by AlexiChen on 2020/5/6.
//  Copyright © 2020 AlexiChen. All rights reserved.
//
// WebSaaSSDKVersion : 1.0.166
// WebGitCommitID : 6f106d2ce2a84371571d90d02c396eea890802d6

#import <UIKit/UIKit.h>
#import "TYICClassRoomConfig.h"

NS_ASSUME_NONNULL_BEGIN

extern NSString *_Nonnull const TYIC_SDK_Version;


@class TYICClassRoomViewController;

typedef void (^TICWebOpenUrlFailedBlock)(NSString *module, int code, NSString *_Nullable desc);
typedef NSDictionary *_Nullable (^TICWebOpenUrlContinueBlock)(void);
typedef void (^TICWebOpenUrlBlock)(TYICClassRoomViewController *webController);
typedef void (^TICWebOpenUrlFinishBlock)(TYICClassRoomViewController *webController, BOOL openSucc);

@interface TYICClassRoomViewController : UIViewController

// 使用-initWithURL:roomOption:mainWebOption 进行构建
+ (instancetype)new  __attribute__((unavailable("Use +webClassRoomWithConfig:uiOption:webOption instead")));
- (instancetype)init __attribute__((unavailable("Use +webClassRoomWithConfig:uiOption:webOption instead")));

/**
* 使用H5+Native方式使用
* @param roomConfig : 打开教室所需要的配置
* @param uiOption : 如果要进教室，配置UI相关的参数;
* @param webOption : webview相关的配置;
*/
+ (instancetype)webClassRoomWithConfig:(TYICClassRoomConfig * _Nonnull)roomConfig uiOption:(NSDictionary *_Nullable)uiOption webOption:(NSDictionary *_Nullable)webOption;

/**
 * 当前是否在教室内;
 */
+ (BOOL)hasJoinedClassRoom;



@end

NS_ASSUME_NONNULL_END
