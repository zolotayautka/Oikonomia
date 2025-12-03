# Oikonomia

**[日本語](#日本語) | [한국어](#한국어)**

---

## 日本語

C++とQtで開発された家計簿アプリケーションです。

<img width="600" alt="img1" src="https://github.com/user-attachments/assets/7b2f75e2-14b5-4a2f-8bab-cc0c8467b4df" />

<img width="600" alt="img2" src="https://github.com/user-attachments/assets/e7157d28-48db-4fb6-a553-92e1e6920bda" />

## 概要

Oikonomiaは、日々の収支を簡単に記録・管理できるデスクトップアプリケーションです。SQLiteデータベースを使用してデータを保存し、Qt Widgetsによる直観的なユーザーインターフェースを提供します。

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

---

## 한국어

C++와 Qt로 개발된 가계부 애플리케이션입니다.

<img width="600" alt="img1" src="https://github.com/user-attachments/assets/7b2f75e2-14b5-4a2f-8bab-cc0c8467b4df" />

<img width="600" alt="img2" src="https://github.com/user-attachments/assets/e7157d28-48db-4fb6-a553-92e1e6920bda" />

### 개요

Oikonomia는 일상의 수입과 지출을 간편하게 기록하고 관리할 수 있는 데스크톱 애플리케이션입니다. SQLite 데이터베이스를 사용하여 데이터를 저장하며, Qt Widgets를 통한 직관적인 사용자 인터페이스를 제공합니다.

### 기능

- 📝 수입/지출 기록 및 관리
- 📅 날짜별 수입/지출 표시
- 💾 SQLite 데이터베이스 기반 데이터 저장
- 📊 수입/지출 데이터 검색 및 필터링
- 📤 데이터 내보내기 기능
- 📥 데이터 가져오기 기능
- 🌏 다국어 지원 (일본어, 한국어)

### 시스템 요구사항

- Qt 5.x 이상
- C++17 지원 컴파일러
- SQLite3

### 빌드 방법

#### Qt Creator 사용 시

1. Qt Creator 실행
2. `Oikonomia.pro` 파일 열기
3. 빌드 구성 선택
4. 빌드 버튼 클릭

#### 명령줄에서 빌드하기

```bash
qmake Oikonomia.pro
make
```

### 사용 방법

1. 애플리케이션 실행
2. 날짜, 수입/지출 구분, 내용, 금액 입력
3. "추가" 버튼을 클릭하여 기록 저장
4. 기록된 수입/지출 내역이 목록에 표시됩니다
5. 기간을 지정하여 검색할 수 있습니다

### 프로젝트 구조

- `main.cpp` - 진입점
- `mainqt.cpp/h` - 메인 윈도우 구현
- `mainqt.ui` - UI 디자인 파일
- `oikonomia.cpp/h` - 데이터베이스 작업 및 비즈니스 로직
- `sqlite3.c/h` - SQLite 라이브러리
- `resource.qrc` - 리소스 파일
- `oikonomia_ja_JP.ts` - 일본어 번역 파일
- `oikonomia_ko_KR.ts` - 한국어 번역 파일

### 라이선스

이 프로젝트는 자유롭게 사용할 수 있습니다. 자세한 내용은 `imgs/lisence.txt`를 참조하세요.

### 기여하기

버그 리포트나 기능 요청은 GitHub Issues 페이지를 이용해 주세요.

### 개발자

Pull Request를 환영합니다. 큰 변경사항의 경우, 먼저 Issue를 열어 변경 내용에 대해 논의해 주세요.
