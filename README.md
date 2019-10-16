![Pixlytics](https://github.com/wassafr/Pixlytics-ios/raw/master/icon_pix.jpg)

# Pixlytics

[![Version](https://img.shields.io/cocoapods/v/Pixlytics.svg?style=flat)](http://cocoapods.org/pods/Pixlytics)
[![License](https://img.shields.io/cocoapods/l/Pixlytics.svg?style=flat)](http://cocoapods.org/pods/Pixlytics)
[![Platform](https://img.shields.io/cocoapods/p/Pixlytics.svg?style=flat)](http://cocoapods.org/pods/Pixlytics)

Pixlytics is an SDK to give you the possibility to detect items thanks on artificial inteligence recognition.
The system works with a list of items stored on server which can be managed from the SDK itself.artificial.
Then we can generate a trained model from this list and use it to operate recognition of items.
All this operations are made with requests to Pixlytics server but the recognition can also be made with Offline mode.

## Installation

### Cocoapods

[CocoaPods](http://www.cocoapods.org) is the recommended way to add Pixlytics to your project.

1. Add a pod entry for Pixlytics to your *Podfile* :

``` pod 'Pixlytics' ```

2. Install the pod(s) by running `pod install`.
3. Unzip the file opencv2.framework.zip and drag and drop the framework contained in it into your frameworks folder on xcode. You can check your framework is correctly added by checking the section 'Linked Frameworks and Libraries' in your .xcodeproj file (Targets).
4. Include Pixlytics wherever you need it with `#import <Pixlytics_SDK/Pixlytics_SDK.h>` from Objective-C or `import Pixlytics_SDK` from Swift.

## Usage

You can find a sample app code that shows the different ways of using the SDK [Here](https://github.com/wassafr/Pixlytics-DemoApp-iOS)

**Attention :** To use the SDK, you need a license key that you can get on the [Pixlytics website](https://www.pixlytics.io)

The sample code is commented and show usage examples of the SDK.

```
import Pixlytics_SDK


var online: SessionOnline? = SessionOnline(licenceKey: "your_license_key", success: { () in
failure(nil)
}, failure: { (error) in
failure(error)
})


var local: RecognitionSession? = RecognitionSession.init("your_license_key")

local?.loadModel("path_to_trained_model", completion: { (errorLoadmodel) in
//Handle error
})


```
The main sdk entry points are RecognitionSession and SessionOnline. You have to keep reference of the instance to use the service.
Keep the service optionnal as it can fail at init.

⚠️ ⚠️ You have to set the following parameter enable_bitcode to "NO" in your project build settings  ⚠️ ⚠️

⚠️ In the case you want to set a model directly from your project resources. Take care to respect the tree view in the trained model's files (and not keeping all the files in root directory)

## AppStore submission
When you will be at the upload step for submitting your app to the official app store, uncheck the option ```Include app symbols for your application to receive symbolicated crash logs from Apple``` this is a consequence of disabling bitcode generation.


## Documentation

You can find a more detailled documentation of the SDK at the following [address](www.pixlytics.io/docs).
If you need to contact us, send an email at support@pixlytics.io

## Requirements

* Xcode 11.0+
* iOS 10.0+

## License

Pixlytics is available under a commercial license. See the LICENSE file for more info.

## Author

Wassa, contact@pixlytics.io
