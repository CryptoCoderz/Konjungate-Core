#ifndef CLIENTVERSION_H
#define CLIENTVERSION_H

//
// client versioning
//

// These need to be macros, as version.cpp's and bitcoin-qt.rc's voodoo requires it
#define CLIENT_VERSION_MAJOR       1 // Major Revision
#define CLIENT_VERSION_MINOR       1 // Minor Revision (Updated cause of GUI update)
#define CLIENT_VERSION_REVISION    7 // Revision of the build, should be increased by one every release
#define CLIENT_VERSION_BUILD       14 // Build version, for everytime I hit the build button.

// Set to true for release, false for prerelease or test build
#define CLIENT_VERSION_IS_RELEASE  true

// Converts the parameter X to a string after macro replacement on X has been performed.
// Don't merge these into one macro!
#define STRINGIZE(X) DO_STRINGIZE(X)
#define DO_STRINGIZE(X) #X

#endif // CLIENTVERSION_H
