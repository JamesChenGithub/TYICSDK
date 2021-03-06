
Pod::Spec.new do |s|


  s.name         = "TYICSDK"
  s.version      = "2.0.353"
  s.summary      = "TYICSDK"
  s.description  = <<-DESC
                      腾讯云互动教育极简单接入apaas方案
                   DESC
  s.homepage     = "https://github.com/JamesChenGithub/TYICSDK"
  s.license      = "MIT"
  s.license      = { :type => "MIT", :file => "LICENSE" }
  s.author             = "alexichen"
  s.platform     = :ios
  s.platform     = :ios, "9.0"

  valid_archs = ['armv7','arm64', 'x86_64']
  s.xcconfig = {
    'VALID_ARCHS' =>  valid_archs.join(' '),
  }


  s.source       = { :git => "https://github.com/JamesChenGithub/TYICSDK.git", :tag => "#{s.version}" }
  s.resource = 'tyicimage.bundle'
  # the framework upload to Cocoa Pods
  s.vendored_frameworks = 'TYICSDK.framework'
  s.frameworks = 'Foundation', 'Accelerate'
  s.dependency 'Masonry'
  s.dependency 'YYModel'
  s.dependency 'Bugly'
  s.dependency 'TIWLogger_iOS', '1.0.1.21'
  s.dependency 'TIWCache_iOS', '1.0.0.19'
  s.dependency 'TXLiteAVSDK_TRTC', '7.2.8961'

end
