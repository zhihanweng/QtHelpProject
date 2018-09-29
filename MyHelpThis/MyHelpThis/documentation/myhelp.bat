echo off
echo Setting up environment for Qt usage...
qhelpgenerator myhelp.qhp -o myhelp.qch
qcollectiongenerator myhelp.qhcp -o mhelp.qhc
assistant -collectionFile myhelp.qhc
echo Remember to call vcvarsall.bat to complete environment setup!