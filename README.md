# A1 Mediator for FlexRIC

## Run A1 Mediator
```
cd A1_Mediator
pip3 install -r requirements.txt
cd app
python3 main.py
(host_ip):9000/docs #to see available APIs
```

## Run C test app
```
cd C_Test_app
sudo apt-get install libcurl4-openssl-dev
sudo apt-get install libjsoncpp-dev
g++ -o api_xapp main.cpp -lcurl -ljsoncpp

./api_xapp
```

## Contributers
- Jerzy Jegier, Orange Innovation Poland, jerzy.jegier@orange.com
- [Kamil Kociszewski](https://www.linkedin.com/in/kociszz/), Orange Innovation Poland, kamil.kociszewski@orange.com