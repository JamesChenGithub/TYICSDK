# TYICSDK 使用说明

## 功能介绍

`TYICSDK` 为 腾云互动课堂apass方案SDK简称

## iOS 集成

### pod 集成方式

1. 在工程`Poddile` 文件中添加依赖 `pod 'TYICSDK'`
2.  在终端中跳到`Podfile`所在目录，`pod install` 即可自动安装所需要的依赖;
3. 添加 [tyicimage.bundle ](http://dldir1.qq.com/hudongzhibo/TYICSDK/bundle/tyicimage.bundle.zip) 至工程对应的Target中，并在Target的`Build Phases`-->`Copy Bundle Resources`配置加入`tyicimage.bundle`，若不添加，在教室内展现时，会有如音量提示无法正常展现等问题：
![](https://main.qcloudimg.com/raw/79a3c356ddfd67e173dcd26db963917c.png)

### 使用说明

1. 在使用处引用 `#import  <TYICSDK/TYICClassRoomViewController.h>` 即可

2. `TYICClassRoomConfig`说明

| 字段 | 类型 | 描述 | 必传 | 
| ---- | ---- | ---- | ---- |
| sdkAppId | string | 在平台上份的sdkappid | 必传 |
| userId |  string |  进教室用户的userId | 必传 |
| token | string | 对接云API(???) 时，返回的token信息 | 必传 |
| userSig | string | 对接云API(???) 时，返回的userSig信息 | 必传 |
| newEnterId | string | 学校ID | 必传 |
| classId | uint32 | 课程ID | 必传 | 

2. `TYICClassRoomViewController `说明

| API | 说明 | 
| --- | ---- | 
| TYICWebViewStartLoadNotify | 开始加载课堂通知 |
| TYICWebViewLoadCompleteNotify | 加载课堂H5完成通知 |
| | TYICWebViewLoadCompleteNotify | 进入课堂（TRTC enterRoom）完成通知 |
|  `+ (instancetype)classRoomWithConfig:(TYICClassRoomConfig * _Nonnull)roomConfig uiOption:(NSDictionary *_Nullable)uiOption webOption:(NSDictionary *_Nullable)webOption` | 推荐的创建上课页面viewcontroller方法，roomConfig必传，uiOption/webOption 非必传，如果需要 |

示例代码如下:****

```
TYICClassRoomConfig *roomConfig = [[TYICClassRoomConfig alloc] init];
roomConfig.userId = "test";
roomConfig.userSig = "test_usersig";
roomConfig.token = "test_token";
roomConfig.classId = 123454;
roomConfig.newEnterId = xxxxx;
roomConfig.sdkAppId = xxxx;
            
TYICClassRoomViewController *vc = [TYICClassRoomViewController classRoomWithConfig:roomConfig uiOption:nil webOption:nil];
if (vc) {
	[(UINavigationController *)self.window.rootViewController pushViewController:vc animated:YES];
} else {
	NSLog(@"参数有误");
}
```


## Android使用方式

