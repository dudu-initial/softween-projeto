# softween-projeto

## Código-Fonte

O código-fonte está disponível na pasta [`/scr`](src).

## Arquitetura do Sistema

![Arquitetura](./assets/arquiteturadosistema.drawio.png)

# Introdução:

# Problema:
A necessidade de rastrear a localização precisa de objetos dentro de um ambiente industrial. No caso deste projeto, utilizamos uma solução para localizar um carrinho plataforma da John Deere, oferecendo dados em tempo real que podem otimizar a logística interna.

# Objetivos:
Criar uma solução baseada em IoT que, utilizando o ESP32, permitindo localizar o carrinho em tempo real.

# Desenvolvimento:

**Arquitetura da Solução:**

Abrir com draw.io para melhor visualização:
https://drive.google.com/file/d/1niPyul0DXf_Rf4q41qjiJOG7rxCTIb87/view?usp=drive_link

**Componentes:**
<br/>
ESP32 - Responsável por capturar o RSSI e outros dados de localização.
<br/>
Website - Onde os dados são processados e armazenados.
<br/>
Mapa Web - Exibe a posição em tempo real no mapa, usando tecnologias como Leaflet.js.
<br/>

**Tecnologias Utilizadas:**
<br/>
ESP32: Para captura e envio de dados de RSSI.
<br/>
WiFi: Redes locais para comunicação.
<br/>
Leaflet.js: Biblioteca de mapas para exibir a localização.
<br/>
GitHub: Repositório de código e documentação.

# Resultados:

**Exemplo de Dados:**
<br/>
**FIAP - PRÉDIO 1**
<br/>
Latitude: -23.574500474355066.
<br/>
Longitude: -46.62328305935707.
<br/>
**SALGADELICIA**
<br/>
Latitude: -23.57452198495069.
<br/>
Longitude: -46.62302623787215.
<br/>
<br/>
**Distância calculada: 25 metros.**
<br/>
**Direção: Norte e Oeste (Noroeste).**



![image](https://github.com/user-attachments/assets/96538513-de6e-4c1b-9b53-287a2f54085f)

## Testes de Desempenho

### Teste de Precisão de Localização

#### Definição da Ferramenta de Teste:
Este teste consegue avaliar a precisão do cálculo de localização baseado no valor de RSSI (-55 dBm a 1 metro) em distâncias reais de 1 a 25 metros. Utilizamos um ESP32 para coletar os valores de RSSI e calcular a distância estimada com base nesses dados.

#### Tabela de Testes:
A tabela apresenta as distâncias reais em metros, os valores de RSSI medidos e as distâncias estimadas. O erro de estimativa é calculado como a diferença entre a distância real e a estimada.

![tabela](assets/tabela1.png)

####  Discussão dos Resultados:
Os resultados mostram que a precisão do cálculo de distância utilizando o RSSI é bastante aceitável para a maioria das distâncias. O erro de estimativa permanece pequeno, variando de 0,04m a 0,46m, o que é adequado para o cenário proposto.

---

###  Teste de Estabilidade de Sinal

####  Definição da Ferramenta de Teste:
Este teste verifica a variação da intensidade do sinal (RSSI) ao longo do tempo para verificar a estabilidade do sinal de Wifi em diferentes momentos.

####  Evidências de Testes:
A tabela mostra os valores do RSSI coletados em intervalos de tempo de 5 minutos durante 30 minutos.

![2tabela](assets/tabela2.png)

####  Soluções Futuras:
Para melhorar a precisão, uma técnica que poderia ser implementada é o uso de múltiplos pontos de acesso ou ser aplicado uma rede de Wifi Mesh para triangulação, para melhorarmos nos dados de distância com base no RSSI.
