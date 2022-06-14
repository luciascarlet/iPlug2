# iPlug 2 LE
### C++ audio plug-in foundation for desktop environments

iPlug 2 LE is a heavily stripped-down fork of iPlug 2 that omits all graphics functionality, as well as support for niche or non-desktop formats (AAX, web, iOS). It also removes the Xcode/Visual Studio build configurations in favour of promoting CMake as its primary build system. This is done in order to make working with the internals of iPlug 2 LE as simple as possible for those who do not need this functionality, for example, if you are embedding a custom GUI solution. In turn, the build process for iPlug 2 LE can be greatly simplified compared to the full-featured version. It is also designed to be used primarily in out-of-source builds ~~and offers some scripts to ease the creation of new out-of-source projects~~.

Planned features/changes:
- Reduce or remove reliance on SWELL library and specialised scripts
- Allow free project structure
- Turn iPlug 2 LE into a library instead of a framework for easy inclusion and high flexibility

If you need any of the features of iPlug 2 that have been removed from iPlug 2 LE, please consider using the full-featured version of iPlug 2.