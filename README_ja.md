# Oikonomia

C++とQtで開発された家計簿アプリケーションです。

<img width="600" alt="img1" src="https://github.com/user-attachments/assets/7b2f75e2-14b5-4a2f-8bab-cc0c8467b4df" />

<img width="600" alt="img2" src="https://github.com/user-attachments/assets/e7157d28-48db-4fb6-a553-92e1e6920bda" />

## 概要

Oikonomiaは、日々の収支を簡単に記録・管理できるデスクトップアプリケーションです。SQLiteデータベースを使用してデータを保存し、Qt Widgetsによる直感的なユーザーインターフェースを提供します。

## 機能

- 📝 収支の記録と管理
- 📅 日付別の収支表示
- 💾 SQLiteデータベースによるデータ永続化
- 📊 収支データの検索・絞り込み
- 📤 データのエクスポート機能
- 📥 データのインポート機能
- 🌏 多言語サポート（日本語・韓国語）

## 必要要件

- Qt 5.x 以上
- C++17対応コンパイラ
- SQLite3

## ビルド方法

### Qt Creatorを使用する場合

1. Qt Creatorを起動
2. `Oikonomia.pro`ファイルを開く
3. ビルド設定を選択
4. ビルドボタンをクリック

### コマンドラインからビルドする場合

```bash
qmake Oikonomia.pro
make
```

## 使い方

1. アプリケーションを起動
2. 日付、収支区分（収入/支出）、内容、金額を入力
3. 「追加」ボタンをクリックして記録を保存
4. 記録された収支は一覧表示されます
5. 期間を指定して検索することができます

## プロジェクト構成

- `main.cpp` - エントリーポイント
- `mainqt.cpp/h` - メインウィンドウの実装
- `mainqt.ui` - UIデザインファイル
- `oikonomia.cpp/h` - データベース操作とビジネスロジック
- `sqlite3.c/h` - SQLiteライブラリ
- `resource.qrc` - リソースファイル
- `oikonomia_ja_JP.ts` - 日本語翻訳ファイル
- `oikonomia_ko_KR.ts` - 韓国語翻訳ファイル

## ライセンス

このプロジェクトは自由に使用できます。詳細は`imgs/lisence.txt`をご確認ください。

## 貢献

バグ報告や機能要望は、GitHubのIssuesページにてお願いします。

## 開発者

プルリクエストを歓迎します。大きな変更の場合は、まずIssueを開いて変更内容について議論してください。
