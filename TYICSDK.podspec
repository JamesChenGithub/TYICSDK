
Pod::Spec.new do |s|


  s.name         = "TYICSDK"
  s.version      = "1.0.8"
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

  # the framework upload to Cocoa Pods
  s.vendored_frameworks = 'TYICSDK.framework'
  s.frameworks = 'Foundation'
  s.dependency 'Masonry'
  s.dependency 'YYModel'
  s.dependency 'TXLiteAVSDK_TRTC'

end
