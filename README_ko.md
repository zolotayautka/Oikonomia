# Oikonomia

C++와 Qt로 개발된 가계부 애플리케이션입니다.

<img width="600" alt="img1" src="https://github.com/user-attachments/assets/7b2f75e2-14b5-4a2f-8bab-cc0c8467b4df" />

<img width="600" alt="img2" src="https://github.com/user-attachments/assets/e7157d28-48db-4fb6-a553-92e1e6920bda" />

## 개요

Oikonomia는 일상의 수입과 지출을 간편하게 기록하고 관리할 수 있는 데스크톱 애플리케이션입니다. SQLite 데이터베이스를 사용하여 데이터를 저장하며, Qt Widgets를 통한 직관적인 사용자 인터페이스를 제공합니다.

## 기능

- 📝 수입/지출 기록 및 관리
- 📅 날짜별 수입/지출 표시
- 💾 SQLite 데이터베이스 기반 데이터 저장
- 📊 수입/지출 데이터 검색 및 필터링
- 📤 데이터 내보내기 기능
- 📥 데이터 가져오기 기능
- 🌏 다국어 지원 (일본어, 한국어)

## 시스템 요구사항

- Qt 5.x 이상
- C++17 지원 컴파일러
- SQLite3

## 빌드 방법

### Qt Creator 사용 시

1. Qt Creator 실행
2. `Oikonomia.pro` 파일 열기
3. 빌드 구성 선택
4. 빌드 버튼 클릭

### 명령줄에서 빌드하기

```bash
qmake Oikonomia.pro
make
```

## 사용 방법

1. 애플리케이션 실행
2. 날짜, 수입/지출 구분, 내용, 금액 입력
3. "추가" 버튼을 클릭하여 기록 저장
4. 기록된 수입/지출 내역이 목록에 표시됩니다
5. 기간을 지정하여 검색할 수 있습니다

## 프로젝트 구조

- `main.cpp` - 진입점
- `mainqt.cpp/h` - 메인 윈도우 구현
- `mainqt.ui` - UI 디자인 파일
- `oikonomia.cpp/h` - 데이터베이스 작업 및 비즈니스 로직
- `sqlite3.c/h` - SQLite 라이브러리
- `resource.qrc` - 리소스 파일
- `oikonomia_ja_JP.ts` - 일본어 번역 파일
- `oikonomia_ko_KR.ts` - 한국어 번역 파일

## 라이선스

이 프로젝트는 자유롭게 사용할 수 있습니다. 자세한 내용은 `imgs/lisence.txt`를 참조하세요.

## 기여하기

버그 리포트나 기능 요청은 GitHub Issues 페이지를 이용해 주세요.

## 개발자

Pull Request를 환영합니다. 큰 변경사항의 경우, 먼저 Issue를 열어 변경 내용에 대해 논의해 주세요.
