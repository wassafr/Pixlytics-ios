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
3. Include Pixlytics wherever you need it with `#import <Pixlytics_SDK/Pixlytics_SDK.h>` from Objective-C or `import Pixlytics_SDK` from Swift.

### Manual installation

1. Download the [latest code version](https://github.com/wassafr/Pixlytics-ios/archive/master.zip) or add the repository as a git submodule to your git-tracked project.
2. Drag and drop the **Pod** directory from the archive in your project navigator. Make sure to select *Copy items* when asked if you extracted the code archive outside of your project.

3. Include Pixlytics wherever you need it with `#import "Pixlytics_SDK.h"` from Objective-C  or  `import Pixlytics_SDK` from Swift.


## Usage

You can find a sample app code that shows the different ways of using the SDK [Here](https://github.com/wassafr)

Make sure you also see [Pixlytics documentation on Cocoadocs](http://cocoadocs.org/docsets/Pixlytics).

**Attention :** To use the SDK, you need a license key that you can get on the [Pixlytics website](https://www.pixlytics.io)

The sample code is commented and show usage exemples of the SDK.

###Basics
Add the following import to the top of the file or the bringing header for swift:

```
import Pixlytics_SDK
```
The main sdk entry points are RecognitionSession and SessionOnline. You have to keep reference of the instance to use the service.

⚠️ ⚠️ You have to set the following parameter enable_bitcode to "NO" in your project build settings  ⚠️ ⚠️

⚠️ In the case you want to set a model directly from your project resources. Take care to respect the tree view in the trained model's files (and not keeping all the files in root directory)

## Requirements

* Xcode 10.0+
* iOS 9.0+

## License

Pixlytics is available under a commercial license. See the LICENSE file for more info.

## Author

Wassa, contact@wassa.fr
