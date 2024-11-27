# A1 Mediator for FlexRIC

## Run A1 Mediator
```
cd A1_Mediator
pip3 install -r requirements.txt
cd app
python3 main.py
type in browser: (host_ip):9000/docs #to see available APIs
```

## Run test xApp with FlexRIC
```
build FlexRIC following main repo instructions
run RIC with: 
./flexric-a1-xapp/build/examples/ric/nearRT-RIC
run ns3 with nearRT-RIC connection
run xApp:
./flexric-a1-xapp/build/examples/xApp/c/kpm_rc_A1/xapp_kpm_rc_a1
```

## Contributers
- Jerzy Jegier, Orange Innovation Poland, jerzy.jegier@orange.com
- [Kamil Kociszewski](https://www.linkedin.com/in/kociszz/), Orange Innovation Poland, kamil.kociszewski@orange.com