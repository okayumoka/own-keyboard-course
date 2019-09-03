#!/bin/sh

cd `dirname $0`
rm -rf ../firmware/keyboards
cp -rp ../../qmk_firmware/keyboards/ergock ../firmware/keyboards/