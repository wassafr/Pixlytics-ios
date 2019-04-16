#
# Be sure to run `pod lib lint Pixlytics.podspec' to ensure this is a
# valid spec before submitting.
#
# Any lines starting with a # are optional, but their use is encouraged
# To learn more about a Podspec see https://guides.cocoapods.org/syntax/podspec.html
#

Pod::Spec.new do |s|
  s.name             = 'Pixlytics'
  s.version          = '0.1.0'
  s.summary          = 'Pixlytics is a SDK allowing mobile apps to do recognition of items in picture, offline and online.'

  s.description      = <<-DESC

  Pixlytics is able to detect items thanks on artificial inteligence recognition.
  The systmen works with a list of items stored on server which can be managed from the SDK itself.
  Then we can generate a trained model from this list and use it to operate recognition of items.artificial
  All this operations are made with requests to Pixlytics server but the recognition can also be made with Offline mode.
  
  DESC

  s.homepage         = 'https://github.com/wassafr/Pixlytics-ios'
  s.license          = { :type => 'COMMERCIAL', :file => 'LICENSE' }
  s.author           = { 'Wassa' => 'bertrand.villain@wassa.io' }
  s.source       = { :http => 'http://github.com/wassafr/Pixlytics-ios/blob/0.1.0/Pixlytics_SDK.zip'}
  #s.source           = { :http => 'file:' + __dir__ + '/Pixlytics_SDK.zip' }
  s.social_media_url = 'https://twitter.com/wassabemobile'

  s.platform         = :ios

  s.ios.deployment_target   = '10.0'
  s.ios.vendored_frameworks = 'Pixlytics_SDK.framework'
  
  s.frameworks = 'Pixlytics_SDK'
  s.dependency 'Alamofire', '~> 4.8.2'
  s.dependency 'ZIPFoundation', '~> 0.9'

end
