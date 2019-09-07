# 手配線で自作キーボードを作る講座

[手配線で自作キーボードを作る講座](https://okayu-moka.hatenablog.com/entry/2019/08/18/203923)
で作成した自作キーボードのリポジトリです。

以下のものが含まれています。

- BSch3Vで作成した回路図
- 筐体の3Dモデルデータ
- ブログ記事のバックアップ

このほか、ファームウェアについては別リポジトリにて公開しています。
[qmk_firmware_for_ergock](https://github.com/okayumoka/qmk_firmware_for_ergock)

## BSch3Vで作成した回路図

回路図のpngファイル、およびBSch3V用ファイルがあります。

ProMicro.LB3は回路図上のProMicroの部品ファイルです。

## 筐体の3Dモデルデータ

3Dプリンターで印刷するためのstlファイルと、
その元ファイルであるFution360用ファイルが入っています。

## ファームウェアについて

[qmk_firmware_for_ergock](https://github.com/okayumoka/qmk_firmware_for_ergock)をcloneしてビルドしてください。

```sh
$ git clone https://github.com/okayumoka/qmk_firmware_for_ergock.git
$ cd qmk_firmware_for_ergock
$ make ergock:default
$ make ergock:default:avrdude
```
