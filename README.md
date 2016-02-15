<p align="center">
  <img src="https://cloud.githubusercontent.com/assets/4659608/13037638/90bc848c-d396-11e5-98d0-572a3e902576.png">
</p>
# Image Filter
![](https://img.shields.io/badge/Platform-Android-brightgreen.svg)
![](https://img.shields.io/crates/l/rustc-serialize.svg)
![](https://img.shields.io/badge/version-0.1.0_beta-blue.svg)

------ 
Image Filter is an Android Libary that lets you to Filtering any image.
You can report any issue on issues page. **Note: If you speak Arabic, you can submit issues with Arabic language and I will check them. :)**


## Installation
------ 
**Maven**
```xml
<dependency>
<groupId>net.alhazmy13.ImageFilter</groupId>
<artifactId>library</artifactId>
<version>0.1.0-beta</version>
</dependency>
```


**Gradle**
```gradle
dependencies {
	compile 'net.alhazmy13.ImageFilter:libary:0.1.0-beta'
}
```

# Usage
------ 
All you need is to pass a `Bitmap` obejct and the filter type
```java
       ImageFilter.applyFilter(bitmap, ImageFilter.Filter.GOTHAM);
```

## Filter types
### Gray
<p align="left">
  <img src="https://cloud.githubusercontent.com/assets/4659608/12700433/4276edc0-c7f3-11e5-9f2c-de6bcbb9416d.png" width="200">
</p>
```java
ImageFilter.applyFilter(bitmap, ImageFilter.Filter.GRAY);
```

### Relief
<p align="left">
  <img src="https://cloud.githubusercontent.com/assets/4659608/12700433/4276edc0-c7f3-11e5-9f2c-de6bcbb9416d.png" width="200">
</p>
```java
ImageFilter.applyFilter(bitmap, ImageFilter.Filter.RELIEF);
```

### Average blur
<p align="left">
  <img src="https://cloud.githubusercontent.com/assets/4659608/12700433/4276edc0-c7f3-11e5-9f2c-de6bcbb9416d.png" width="200">
</p>
```java
ImageFilter.applyFilter(bitmap, ImageFilter.Filter.AVERAGE_BLUR);
```
### OIL
<p align="left">
  <img src="https://cloud.githubusercontent.com/assets/4659608/12700433/4276edc0-c7f3-11e5-9f2c-de6bcbb9416d.png" width="200">
</p>
```java
ImageFilter.applyFilter(bitmap, ImageFilter.Filter.OIL);
```
### NEON
<p align="left">
  <img src="https://cloud.githubusercontent.com/assets/4659608/12700433/4276edc0-c7f3-11e5-9f2c-de6bcbb9416d.png" width="200">
</p>
```java
ImageFilter.applyFilter(bitmap, ImageFilter.Filter.NEON);
```
### PIXELATE
<p align="left">
  <img src="https://cloud.githubusercontent.com/assets/4659608/12700433/4276edc0-c7f3-11e5-9f2c-de6bcbb9416d.png" width="200">
</p>
```java
ImageFilter.applyFilter(bitmap, ImageFilter.Filter.PIXELATE);
```
### TV
<p align="left">
  <img src="https://cloud.githubusercontent.com/assets/4659608/12700433/4276edc0-c7f3-11e5-9f2c-de6bcbb9416d.png" width="200">
</p>
```java
ImageFilter.applyFilter(bitmap, ImageFilter.Filter.TV);
```
### INVERT
<p align="left">
  <img src="https://cloud.githubusercontent.com/assets/4659608/12700433/4276edc0-c7f3-11e5-9f2c-de6bcbb9416d.png" width="200">
</p>
```java
ImageFilter.applyFilter(bitmap, ImageFilter.Filter.INVERT);
```
### BLOCK
<p align="left">
  <img src="https://cloud.githubusercontent.com/assets/4659608/12700433/4276edc0-c7f3-11e5-9f2c-de6bcbb9416d.png" width="200">
</p>
```java
ImageFilter.applyFilter(bitmap, ImageFilter.Filter.BLOCK);
```
### OLD
<p align="left">
  <img src="https://cloud.githubusercontent.com/assets/4659608/12700433/4276edc0-c7f3-11e5-9f2c-de6bcbb9416d.png" width="200">
</p>
```java
ImageFilter.applyFilter(bitmap, ImageFilter.Filter.OLD);
```
### SHARPEN
<p align="left">
  <img src="https://cloud.githubusercontent.com/assets/4659608/12700433/4276edc0-c7f3-11e5-9f2c-de6bcbb9416d.png" width="200">
</p>
```java
ImageFilter.applyFilter(bitmap, ImageFilter.Filter.SHARPEN);
```
### LIGHT
<p align="left">
  <img src="https://cloud.githubusercontent.com/assets/4659608/12700433/4276edc0-c7f3-11e5-9f2c-de6bcbb9416d.png" width="200">
</p>
```java
ImageFilter.applyFilter(bitmap, ImageFilter.Filter.LIGHT);
```
### LOMO
<p align="left">
  <img src="https://cloud.githubusercontent.com/assets/4659608/12700433/4276edc0-c7f3-11e5-9f2c-de6bcbb9416d.png" width="200">
</p>
```java
ImageFilter.applyFilter(bitmap, ImageFilter.Filter.LOMO);
```
### HDR
<p align="left">
  <img src="https://cloud.githubusercontent.com/assets/4659608/12700433/4276edc0-c7f3-11e5-9f2c-de6bcbb9416d.png" width="200">
</p>
```java
ImageFilter.applyFilter(bitmap, ImageFilter.Filter.HDR);
```
### GAUSSIAN_BLUR
<p align="left">
  <img src="https://cloud.githubusercontent.com/assets/4659608/12700433/4276edc0-c7f3-11e5-9f2c-de6bcbb9416d.png" width="200">
</p>
```java
ImageFilter.applyFilter(bitmap, ImageFilter.Filter.GAUSSIAN_BLUR);
```
### SOFT_GLOW
<p align="left">
  <img src="https://cloud.githubusercontent.com/assets/4659608/12700433/4276edc0-c7f3-11e5-9f2c-de6bcbb9416d.png" width="200">
</p>
```java
ImageFilter.applyFilter(bitmap, ImageFilter.Filter.SOFT_GLOW);
```
### SKETCH
<p align="left">
  <img src="https://cloud.githubusercontent.com/assets/4659608/12700433/4276edc0-c7f3-11e5-9f2c-de6bcbb9416d.png" width="200">
</p>
```java
ImageFilter.applyFilter(bitmap, ImageFilter.Filter.SKETCH);
```
### MOTION_BLUR
<p align="left">
  <img src="https://cloud.githubusercontent.com/assets/4659608/12700433/4276edc0-c7f3-11e5-9f2c-de6bcbb9416d.png" width="200">
</p>
```java
ImageFilter.applyFilter(bitmap, ImageFilter.Filter.MOTION_BLUR);
```

### GOTHAM
<p align="left">
  <img src="https://cloud.githubusercontent.com/assets/4659608/12700433/4276edc0-c7f3-11e5-9f2c-de6bcbb9416d.png" width="200">
</p>
```java
ImageFilter.applyFilter(bitmap, ImageFilter.Filter.GOTHAM);
```

## License
------ 
    Copyright 2015 alhazmy

    Licensed under the Apache License, Version 2.0 (the "License");
    you may not use this file except in compliance with the License.
    You may obtain a copy of the License at

       http://www.apache.org/licenses/LICENSE-2.0

    Unless required by applicable law or agreed to in writing, software
    distributed under the License is distributed on an "AS IS" BASIS,
    WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
    See the License for the specific language governing permissions and
    limitations under the License.
    

