# big7Segment

## 아두이노 IDE 세팅  
1. 아래 문구를 아두이노 IDE-파일-환경설정-추가적인 보드매니저 URLs에 붙여 넣어야 툴-보드-보드매니저에서 esp8266을 설치할 수 있음    
http://arduino.esp8266.com/stable/package_esp8266com_index.json  

2. 툴-보드-보드매니저에서 esp8266를 검색하고 최신버전으로 설치함  

3. 스케치-라이브러리 포함하기-라이브러리 관리-arduinojson을 검색하여 최신버전으로 설치(베타버전 아님)  

4. firebase-arduino 라이브러리는 아래 링크로 들어가서 다운로드한 다음 아두이노 라이브러리 폴더에 넣고 아두이노 IDE를 재시작 함(하위 폴더가 생기지 않도록 해야 함, C드라이브-program files(x86)-arduino-libraries 또는 문서-arduino-libraries)  
[firebase-arduino 라이브러리 다운로드](https://github.com/FirebaseExtended/firebase-arduino)  

5. 기본 세팅이 끝나면 이 레파지토리-code-esp8266.ino 파일을 열고 아두이노 IDE에 복사-붙여넣기를 함  
[아두이노 ino 파일 링크](https://github.com/mtinet/big7SegmentAtArduinoAndFirebase/blob/master/code/esp8266.ino)  

6. firebase에 데이터를 올리고 내리기 위해서는 firebase의 host, auth와 와이파이 ssid, pw를 입력해줘야 함  
* 예시  
// Set these to run example.  
// 이 부분은 구글 firebase 페이지에 있는 본인의 계정에 만들어진 firebase 프로젝트의 내용을 참고하셔야 합니다.  
// FIREBASE_HOST는 firebase project - database - data 탭아래의 URL의 앞부분의 'https://'와 마지막의 '/'를 제외한 다음 복사하세요.  
// FIREBASE_AUTH는 firebase project - ⚙ 그림 선택 - 프로젝트 설정 - 서비스 계정 - 데이터베이스 비밀번호 - 데이터베이스프로젝트이름  
// 쪽으로 마우스를 이동하면 '표시' 버튼이 보입니다. 그 버튼을 누르면 비밀번호가 표시되게 되고 이것을 복사해서 여기에 넣어주어야 합니다.  
#define FIREBASE_HOST "makered-44747.firebaseio.com"  
#define FIREBASE_AUTH "ZPu3qYNDvRhWkCzehkPnDEfxOoDc5ze99qec7hUd"  
#define WIFI_SSID "G6 plus_2362"  
#define WIFI_PASSWORD "33333333"  


---
### 기본 세팅과 라이브러리 다운로드, 심화 세팅은 아래 링크로 들어가서 아래쪽 번역된 부분을 확인 바람  
[firebase-esp8266 연동 기본 세팅](https://github.com/mtinet/Firebase-Arduino/tree/master/Arduino%20Project)  

### 아래의 ESP8266모델의 경우 아두이노 IDE에서는 다음과 같이 세팅함  
![](https://www.xcluma.com/image/cache/catalog/products/BE-01-0228-800x800.JPG)  
![](https://github.com/mtinet/big7SegmentAtArduinoAndFirebase/blob/master/image/firebaseSetting.png?raw=true)  

