# Bluetooth

### Arduino Bluetooth communication

1) 아두이노 보드 2개를 연결한다.
2) 각각의 소스를 업로드하고 터미널을 켠다.
3) 마스터는 AT+ROLE=M, AT+NAME(이름), AT+PIN(4자리)을 입력한다.
4) AT+BAUD6을 입력한다.
5) 슬레이브는 AT+ROLE=S, AT+NAME(이름), AT+PIN(4자리)를 입력한다.
6) 이름과 PIN은 같아야 한다.
7) 전원을 껐다 키면 연결 성공!

AT+BAUD6
{1: 1200
2: 2400
3: 4800
4: 9600
5: 19200
6: 38400
7: 57600
8: 115200}
